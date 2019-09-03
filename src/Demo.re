open Js;

Date.make() |> Js.log;

Date.make() |> DateFns.isBefore(Date.make()) |> Js.log;

DateFns.max([|Js.Date.make(), Js.Date.make()|]) |> Js.log;

Js.Date.make()
|> DateFns.addDays(2)
|> DateFns.addDays(-2)
|> DateFns.closestTo([|
     DateFns.parseISO("2019-08-21T13:00:03.058Z"),
     Js.Date.make(),
   |])
|> DateFns.lightFormat("YYYY-MM-DD");