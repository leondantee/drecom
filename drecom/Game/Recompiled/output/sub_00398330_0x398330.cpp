#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00398330
// Address: 0x398330 - 0x398880
void sub_00398330_0x398330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398330_0x398330");
#endif

    switch (ctx->pc) {
        case 0x398330u: goto label_398330;
        case 0x398334u: goto label_398334;
        case 0x398338u: goto label_398338;
        case 0x39833cu: goto label_39833c;
        case 0x398340u: goto label_398340;
        case 0x398344u: goto label_398344;
        case 0x398348u: goto label_398348;
        case 0x39834cu: goto label_39834c;
        case 0x398350u: goto label_398350;
        case 0x398354u: goto label_398354;
        case 0x398358u: goto label_398358;
        case 0x39835cu: goto label_39835c;
        case 0x398360u: goto label_398360;
        case 0x398364u: goto label_398364;
        case 0x398368u: goto label_398368;
        case 0x39836cu: goto label_39836c;
        case 0x398370u: goto label_398370;
        case 0x398374u: goto label_398374;
        case 0x398378u: goto label_398378;
        case 0x39837cu: goto label_39837c;
        case 0x398380u: goto label_398380;
        case 0x398384u: goto label_398384;
        case 0x398388u: goto label_398388;
        case 0x39838cu: goto label_39838c;
        case 0x398390u: goto label_398390;
        case 0x398394u: goto label_398394;
        case 0x398398u: goto label_398398;
        case 0x39839cu: goto label_39839c;
        case 0x3983a0u: goto label_3983a0;
        case 0x3983a4u: goto label_3983a4;
        case 0x3983a8u: goto label_3983a8;
        case 0x3983acu: goto label_3983ac;
        case 0x3983b0u: goto label_3983b0;
        case 0x3983b4u: goto label_3983b4;
        case 0x3983b8u: goto label_3983b8;
        case 0x3983bcu: goto label_3983bc;
        case 0x3983c0u: goto label_3983c0;
        case 0x3983c4u: goto label_3983c4;
        case 0x3983c8u: goto label_3983c8;
        case 0x3983ccu: goto label_3983cc;
        case 0x3983d0u: goto label_3983d0;
        case 0x3983d4u: goto label_3983d4;
        case 0x3983d8u: goto label_3983d8;
        case 0x3983dcu: goto label_3983dc;
        case 0x3983e0u: goto label_3983e0;
        case 0x3983e4u: goto label_3983e4;
        case 0x3983e8u: goto label_3983e8;
        case 0x3983ecu: goto label_3983ec;
        case 0x3983f0u: goto label_3983f0;
        case 0x3983f4u: goto label_3983f4;
        case 0x3983f8u: goto label_3983f8;
        case 0x3983fcu: goto label_3983fc;
        case 0x398400u: goto label_398400;
        case 0x398404u: goto label_398404;
        case 0x398408u: goto label_398408;
        case 0x39840cu: goto label_39840c;
        case 0x398410u: goto label_398410;
        case 0x398414u: goto label_398414;
        case 0x398418u: goto label_398418;
        case 0x39841cu: goto label_39841c;
        case 0x398420u: goto label_398420;
        case 0x398424u: goto label_398424;
        case 0x398428u: goto label_398428;
        case 0x39842cu: goto label_39842c;
        case 0x398430u: goto label_398430;
        case 0x398434u: goto label_398434;
        case 0x398438u: goto label_398438;
        case 0x39843cu: goto label_39843c;
        case 0x398440u: goto label_398440;
        case 0x398444u: goto label_398444;
        case 0x398448u: goto label_398448;
        case 0x39844cu: goto label_39844c;
        case 0x398450u: goto label_398450;
        case 0x398454u: goto label_398454;
        case 0x398458u: goto label_398458;
        case 0x39845cu: goto label_39845c;
        case 0x398460u: goto label_398460;
        case 0x398464u: goto label_398464;
        case 0x398468u: goto label_398468;
        case 0x39846cu: goto label_39846c;
        case 0x398470u: goto label_398470;
        case 0x398474u: goto label_398474;
        case 0x398478u: goto label_398478;
        case 0x39847cu: goto label_39847c;
        case 0x398480u: goto label_398480;
        case 0x398484u: goto label_398484;
        case 0x398488u: goto label_398488;
        case 0x39848cu: goto label_39848c;
        case 0x398490u: goto label_398490;
        case 0x398494u: goto label_398494;
        case 0x398498u: goto label_398498;
        case 0x39849cu: goto label_39849c;
        case 0x3984a0u: goto label_3984a0;
        case 0x3984a4u: goto label_3984a4;
        case 0x3984a8u: goto label_3984a8;
        case 0x3984acu: goto label_3984ac;
        case 0x3984b0u: goto label_3984b0;
        case 0x3984b4u: goto label_3984b4;
        case 0x3984b8u: goto label_3984b8;
        case 0x3984bcu: goto label_3984bc;
        case 0x3984c0u: goto label_3984c0;
        case 0x3984c4u: goto label_3984c4;
        case 0x3984c8u: goto label_3984c8;
        case 0x3984ccu: goto label_3984cc;
        case 0x3984d0u: goto label_3984d0;
        case 0x3984d4u: goto label_3984d4;
        case 0x3984d8u: goto label_3984d8;
        case 0x3984dcu: goto label_3984dc;
        case 0x3984e0u: goto label_3984e0;
        case 0x3984e4u: goto label_3984e4;
        case 0x3984e8u: goto label_3984e8;
        case 0x3984ecu: goto label_3984ec;
        case 0x3984f0u: goto label_3984f0;
        case 0x3984f4u: goto label_3984f4;
        case 0x3984f8u: goto label_3984f8;
        case 0x3984fcu: goto label_3984fc;
        case 0x398500u: goto label_398500;
        case 0x398504u: goto label_398504;
        case 0x398508u: goto label_398508;
        case 0x39850cu: goto label_39850c;
        case 0x398510u: goto label_398510;
        case 0x398514u: goto label_398514;
        case 0x398518u: goto label_398518;
        case 0x39851cu: goto label_39851c;
        case 0x398520u: goto label_398520;
        case 0x398524u: goto label_398524;
        case 0x398528u: goto label_398528;
        case 0x39852cu: goto label_39852c;
        case 0x398530u: goto label_398530;
        case 0x398534u: goto label_398534;
        case 0x398538u: goto label_398538;
        case 0x39853cu: goto label_39853c;
        case 0x398540u: goto label_398540;
        case 0x398544u: goto label_398544;
        case 0x398548u: goto label_398548;
        case 0x39854cu: goto label_39854c;
        case 0x398550u: goto label_398550;
        case 0x398554u: goto label_398554;
        case 0x398558u: goto label_398558;
        case 0x39855cu: goto label_39855c;
        case 0x398560u: goto label_398560;
        case 0x398564u: goto label_398564;
        case 0x398568u: goto label_398568;
        case 0x39856cu: goto label_39856c;
        case 0x398570u: goto label_398570;
        case 0x398574u: goto label_398574;
        case 0x398578u: goto label_398578;
        case 0x39857cu: goto label_39857c;
        case 0x398580u: goto label_398580;
        case 0x398584u: goto label_398584;
        case 0x398588u: goto label_398588;
        case 0x39858cu: goto label_39858c;
        case 0x398590u: goto label_398590;
        case 0x398594u: goto label_398594;
        case 0x398598u: goto label_398598;
        case 0x39859cu: goto label_39859c;
        case 0x3985a0u: goto label_3985a0;
        case 0x3985a4u: goto label_3985a4;
        case 0x3985a8u: goto label_3985a8;
        case 0x3985acu: goto label_3985ac;
        case 0x3985b0u: goto label_3985b0;
        case 0x3985b4u: goto label_3985b4;
        case 0x3985b8u: goto label_3985b8;
        case 0x3985bcu: goto label_3985bc;
        case 0x3985c0u: goto label_3985c0;
        case 0x3985c4u: goto label_3985c4;
        case 0x3985c8u: goto label_3985c8;
        case 0x3985ccu: goto label_3985cc;
        case 0x3985d0u: goto label_3985d0;
        case 0x3985d4u: goto label_3985d4;
        case 0x3985d8u: goto label_3985d8;
        case 0x3985dcu: goto label_3985dc;
        case 0x3985e0u: goto label_3985e0;
        case 0x3985e4u: goto label_3985e4;
        case 0x3985e8u: goto label_3985e8;
        case 0x3985ecu: goto label_3985ec;
        case 0x3985f0u: goto label_3985f0;
        case 0x3985f4u: goto label_3985f4;
        case 0x3985f8u: goto label_3985f8;
        case 0x3985fcu: goto label_3985fc;
        case 0x398600u: goto label_398600;
        case 0x398604u: goto label_398604;
        case 0x398608u: goto label_398608;
        case 0x39860cu: goto label_39860c;
        case 0x398610u: goto label_398610;
        case 0x398614u: goto label_398614;
        case 0x398618u: goto label_398618;
        case 0x39861cu: goto label_39861c;
        case 0x398620u: goto label_398620;
        case 0x398624u: goto label_398624;
        case 0x398628u: goto label_398628;
        case 0x39862cu: goto label_39862c;
        case 0x398630u: goto label_398630;
        case 0x398634u: goto label_398634;
        case 0x398638u: goto label_398638;
        case 0x39863cu: goto label_39863c;
        case 0x398640u: goto label_398640;
        case 0x398644u: goto label_398644;
        case 0x398648u: goto label_398648;
        case 0x39864cu: goto label_39864c;
        case 0x398650u: goto label_398650;
        case 0x398654u: goto label_398654;
        case 0x398658u: goto label_398658;
        case 0x39865cu: goto label_39865c;
        case 0x398660u: goto label_398660;
        case 0x398664u: goto label_398664;
        case 0x398668u: goto label_398668;
        case 0x39866cu: goto label_39866c;
        case 0x398670u: goto label_398670;
        case 0x398674u: goto label_398674;
        case 0x398678u: goto label_398678;
        case 0x39867cu: goto label_39867c;
        case 0x398680u: goto label_398680;
        case 0x398684u: goto label_398684;
        case 0x398688u: goto label_398688;
        case 0x39868cu: goto label_39868c;
        case 0x398690u: goto label_398690;
        case 0x398694u: goto label_398694;
        case 0x398698u: goto label_398698;
        case 0x39869cu: goto label_39869c;
        case 0x3986a0u: goto label_3986a0;
        case 0x3986a4u: goto label_3986a4;
        case 0x3986a8u: goto label_3986a8;
        case 0x3986acu: goto label_3986ac;
        case 0x3986b0u: goto label_3986b0;
        case 0x3986b4u: goto label_3986b4;
        case 0x3986b8u: goto label_3986b8;
        case 0x3986bcu: goto label_3986bc;
        case 0x3986c0u: goto label_3986c0;
        case 0x3986c4u: goto label_3986c4;
        case 0x3986c8u: goto label_3986c8;
        case 0x3986ccu: goto label_3986cc;
        case 0x3986d0u: goto label_3986d0;
        case 0x3986d4u: goto label_3986d4;
        case 0x3986d8u: goto label_3986d8;
        case 0x3986dcu: goto label_3986dc;
        case 0x3986e0u: goto label_3986e0;
        case 0x3986e4u: goto label_3986e4;
        case 0x3986e8u: goto label_3986e8;
        case 0x3986ecu: goto label_3986ec;
        case 0x3986f0u: goto label_3986f0;
        case 0x3986f4u: goto label_3986f4;
        case 0x3986f8u: goto label_3986f8;
        case 0x3986fcu: goto label_3986fc;
        case 0x398700u: goto label_398700;
        case 0x398704u: goto label_398704;
        case 0x398708u: goto label_398708;
        case 0x39870cu: goto label_39870c;
        case 0x398710u: goto label_398710;
        case 0x398714u: goto label_398714;
        case 0x398718u: goto label_398718;
        case 0x39871cu: goto label_39871c;
        case 0x398720u: goto label_398720;
        case 0x398724u: goto label_398724;
        case 0x398728u: goto label_398728;
        case 0x39872cu: goto label_39872c;
        case 0x398730u: goto label_398730;
        case 0x398734u: goto label_398734;
        case 0x398738u: goto label_398738;
        case 0x39873cu: goto label_39873c;
        case 0x398740u: goto label_398740;
        case 0x398744u: goto label_398744;
        case 0x398748u: goto label_398748;
        case 0x39874cu: goto label_39874c;
        case 0x398750u: goto label_398750;
        case 0x398754u: goto label_398754;
        case 0x398758u: goto label_398758;
        case 0x39875cu: goto label_39875c;
        case 0x398760u: goto label_398760;
        case 0x398764u: goto label_398764;
        case 0x398768u: goto label_398768;
        case 0x39876cu: goto label_39876c;
        case 0x398770u: goto label_398770;
        case 0x398774u: goto label_398774;
        case 0x398778u: goto label_398778;
        case 0x39877cu: goto label_39877c;
        case 0x398780u: goto label_398780;
        case 0x398784u: goto label_398784;
        case 0x398788u: goto label_398788;
        case 0x39878cu: goto label_39878c;
        case 0x398790u: goto label_398790;
        case 0x398794u: goto label_398794;
        case 0x398798u: goto label_398798;
        case 0x39879cu: goto label_39879c;
        case 0x3987a0u: goto label_3987a0;
        case 0x3987a4u: goto label_3987a4;
        case 0x3987a8u: goto label_3987a8;
        case 0x3987acu: goto label_3987ac;
        case 0x3987b0u: goto label_3987b0;
        case 0x3987b4u: goto label_3987b4;
        case 0x3987b8u: goto label_3987b8;
        case 0x3987bcu: goto label_3987bc;
        case 0x3987c0u: goto label_3987c0;
        case 0x3987c4u: goto label_3987c4;
        case 0x3987c8u: goto label_3987c8;
        case 0x3987ccu: goto label_3987cc;
        case 0x3987d0u: goto label_3987d0;
        case 0x3987d4u: goto label_3987d4;
        case 0x3987d8u: goto label_3987d8;
        case 0x3987dcu: goto label_3987dc;
        case 0x3987e0u: goto label_3987e0;
        case 0x3987e4u: goto label_3987e4;
        case 0x3987e8u: goto label_3987e8;
        case 0x3987ecu: goto label_3987ec;
        case 0x3987f0u: goto label_3987f0;
        case 0x3987f4u: goto label_3987f4;
        case 0x3987f8u: goto label_3987f8;
        case 0x3987fcu: goto label_3987fc;
        case 0x398800u: goto label_398800;
        case 0x398804u: goto label_398804;
        case 0x398808u: goto label_398808;
        case 0x39880cu: goto label_39880c;
        case 0x398810u: goto label_398810;
        case 0x398814u: goto label_398814;
        case 0x398818u: goto label_398818;
        case 0x39881cu: goto label_39881c;
        case 0x398820u: goto label_398820;
        case 0x398824u: goto label_398824;
        case 0x398828u: goto label_398828;
        case 0x39882cu: goto label_39882c;
        case 0x398830u: goto label_398830;
        case 0x398834u: goto label_398834;
        case 0x398838u: goto label_398838;
        case 0x39883cu: goto label_39883c;
        case 0x398840u: goto label_398840;
        case 0x398844u: goto label_398844;
        case 0x398848u: goto label_398848;
        case 0x39884cu: goto label_39884c;
        case 0x398850u: goto label_398850;
        case 0x398854u: goto label_398854;
        case 0x398858u: goto label_398858;
        case 0x39885cu: goto label_39885c;
        case 0x398860u: goto label_398860;
        case 0x398864u: goto label_398864;
        case 0x398868u: goto label_398868;
        case 0x39886cu: goto label_39886c;
        case 0x398870u: goto label_398870;
        case 0x398874u: goto label_398874;
        case 0x398878u: goto label_398878;
        case 0x39887cu: goto label_39887c;
        default: break;
    }

    ctx->pc = 0x398330u;

label_398330:
    // 0x398330: 0x3020100  .word       0x03020100                   # sll         $zero, $v0, 4 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398330u;
    
label_398334:
    // 0x398334: 0xa090405  j           func_8241014
label_398338:
    if (ctx->pc == 0x398338u) {
        ctx->pc = 0x398338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398334u;
        // 0x398338: 0x807060b  j           func_1C182C (Delay Slot)
        // J 0x1C182C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x39833Cu;
        goto label_39833c;
    }
    ctx->pc = 0x398334u;
    ctx->pc = 0x398338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398334u;
    // 0x398338: 0x807060b  j           func_1C182C (Delay Slot)
    // J 0x1C182C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8241014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8241014u, 0x398334u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39833Cu;
label_39833c:
    // 0x39833c: 0x19181716  .word       0x19181716                   # blez        $t0, . + 4 + (0x1716 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_398340:
    if (ctx->pc == 0x398340u) {
        ctx->pc = 0x398340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39833Cu;
        // 0x398340: 0x1d1c1b1a  .word       0x1D1C1B1A                   # bgtz        $t0, . + 4 + (0x1B1A << 2) # 001C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x398340 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x398344u;
        goto label_398344;
    }
    ctx->pc = 0x39833Cu;
    {
        const bool branch_taken_0x39833c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x398340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39833Cu;
        // 0x398340: 0x1d1c1b1a  .word       0x1D1C1B1A                   # bgtz        $t0, . + 4 + (0x1B1A << 2) # 001C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x398340 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x39833c) {
            ctx->pc = 0x39DF98u;
            return;
        }
    }
    ctx->pc = 0x398344u;
label_398344:
    // 0x398344: 0xd0c1f1e  jal         func_4307C78
label_398348:
    if (ctx->pc == 0x398348u) {
        ctx->pc = 0x398348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398344u;
        // 0x398348: 0x11100f0e  beq         $t0, $s0, . + 4 + (0xF0E << 2) (Delay Slot)
        // Likely branch instruction at 0x398348 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x39834Cu;
        goto label_39834c;
    }
    ctx->pc = 0x398344u;
    SET_GPR_U32(ctx, 31, 0x39834Cu);
    ctx->pc = 0x398348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398344u;
    // 0x398348: 0x11100f0e  beq         $t0, $s0, . + 4 + (0xF0E << 2) (Delay Slot)
    // Likely branch instruction at 0x398348 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307C78u, 0x398344u, 0x39834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39834Cu;
label_39834c:
    // 0x39834c: 0x15141312  bne         $t0, $s4, . + 4 + (0x1312 << 2)
label_398350:
    if (ctx->pc == 0x398350u) {
        ctx->pc = 0x398350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39834Cu;
        // 0x398350: 0x212220  .word       0x00212220                   # add         $a0, $at, $at # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x398354u;
        goto label_398354;
    }
    ctx->pc = 0x39834Cu;
    {
        const bool branch_taken_0x39834c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 20));
        ctx->pc = 0x398350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39834Cu;
        // 0x398350: 0x212220  .word       0x00212220                   # add         $a0, $at, $at # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39834c) {
            ctx->pc = 0x39CF98u;
            return;
        }
    }
    ctx->pc = 0x398354u;
label_398354:
    // 0x398354: 0x0  nop
    ctx->pc = 0x398354u;
    // NOP
label_398358:
    // 0x398358: 0x0  nop
    ctx->pc = 0x398358u;
    // NOP
label_39835c:
    // 0x39835c: 0x0  nop
    ctx->pc = 0x39835cu;
    // NOP
label_398360:
    // 0x398360: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x398360u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_398364:
    // 0x398364: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398364u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x398364 raw=0x43FA0000");
label_398368:
    // 0x398368: 0xc3fa0000  ll          $k0, 0x0($ra)
    ctx->pc = 0x398368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_39836c:
    // 0x39836c: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x39836cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x39836C raw=0x437A0000");
label_398370:
    // 0x398370: 0x0  nop
    ctx->pc = 0x398370u;
    // NOP
label_398374:
    // 0x398374: 0x0  nop
    ctx->pc = 0x398374u;
    // NOP
label_398378:
    // 0x398378: 0x43af0000  .word       0x43AF0000                   # INVALID     $sp, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398378u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x398378 raw=0x43AF0000");
label_39837c:
    // 0x39837c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39837cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398380:
    // 0x398380: 0x108  .word       0x00000108                   # jr          $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_398384:
    if (ctx->pc == 0x398384u) {
        ctx->pc = 0x398384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398380u;
        // 0x398384: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x398384 raw=0x43960000");
        ctx->in_delay_slot = false;
        ctx->pc = 0x398388u;
        goto label_398388;
    }
    ctx->pc = 0x398380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x398384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398380u;
        // 0x398384: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x398384 raw=0x43960000");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398380u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x398388u;
label_398388:
    // 0x398388: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x398388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_39838c:
    // 0x39838c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x39838cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x39838C raw=0x43480000");
label_398390:
    // 0x398390: 0x0  nop
    ctx->pc = 0x398390u;
    // NOP
label_398394:
    // 0x398394: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398394u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x398394 raw=0x43480000");
label_398398:
    // 0x398398: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398398u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x398398 raw=0x43FA0000");
label_39839c:
    // 0x39839c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39839cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3983a0:
    // 0x3983a0: 0x10b  .word       0x0000010B                   # movn        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3983a0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3983a4:
    // 0x3983a4: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3983a4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3983A4 raw=0x43960000");
label_3983a8:
    // 0x3983a8: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x3983a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3983ac:
    // 0x3983ac: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3983acu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3983AC raw=0x43480000");
label_3983b0:
    // 0x3983b0: 0x0  nop
    ctx->pc = 0x3983b0u;
    // NOP
label_3983b4:
    // 0x3983b4: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3983b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3983B4 raw=0x43480000");
label_3983b8:
    // 0x3983b8: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3983b8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3983B8 raw=0x43FA0000");
label_3983bc:
    // 0x3983bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3983bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3983c0:
    // 0x3983c0: 0x10e  .word       0x0000010E                   # INVALID     $zero, $zero, 0x10E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3983c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x3983C0 raw=0x0000010E");
label_3983c4:
    // 0x3983c4: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3983c4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3983C4 raw=0x43960000");
label_3983c8:
    // 0x3983c8: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x3983c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3983cc:
    // 0x3983cc: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3983ccu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3983CC raw=0x43480000");
label_3983d0:
    // 0x3983d0: 0xc3c80000  ll          $t0, 0x0($fp)
    ctx->pc = 0x3983d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3983d4:
    // 0x3983d4: 0x0  nop
    ctx->pc = 0x3983d4u;
    // NOP
label_3983d8:
    // 0x3983d8: 0x0  nop
    ctx->pc = 0x3983d8u;
    // NOP
label_3983dc:
    // 0x3983dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3983dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3983e0:
    // 0x3983e0: 0x111  .word       0x00000111                   # mthi        $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3983e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_3983e4:
    // 0x3983e4: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3983e4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3983E4 raw=0x43960000");
label_3983e8:
    // 0x3983e8: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x3983e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3983ec:
    // 0x3983ec: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3983ecu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3983EC raw=0x43480000");
label_3983f0:
    // 0x3983f0: 0xc3c80000  ll          $t0, 0x0($fp)
    ctx->pc = 0x3983f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3983f4:
    // 0x3983f4: 0x0  nop
    ctx->pc = 0x3983f4u;
    // NOP
label_3983f8:
    // 0x3983f8: 0x0  nop
    ctx->pc = 0x3983f8u;
    // NOP
label_3983fc:
    // 0x3983fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3983fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398400:
    // 0x398400: 0x114  .word       0x00000114                   # dsllv       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398400u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_398404:
    // 0x398404: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398404u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x398404 raw=0x43960000");
label_398408:
    // 0x398408: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x398408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_39840c:
    // 0x39840c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x39840cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x39840C raw=0x43480000");
label_398410:
    // 0x398410: 0xc3c80000  ll          $t0, 0x0($fp)
    ctx->pc = 0x398410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398414:
    // 0x398414: 0x0  nop
    ctx->pc = 0x398414u;
    // NOP
label_398418:
    // 0x398418: 0x0  nop
    ctx->pc = 0x398418u;
    // NOP
label_39841c:
    // 0x39841c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39841cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398420:
    // 0x398420: 0x118  .word       0x00000118                   # mult        $zero, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x398420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_398424:
    // 0x398424: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398424u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x398424 raw=0x43960000");
label_398428:
    // 0x398428: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x398428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_39842c:
    // 0x39842c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x39842cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x39842C raw=0x43480000");
label_398430:
    // 0x398430: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398430u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x398430 raw=0x43C80000");
label_398434:
    // 0x398434: 0x0  nop
    ctx->pc = 0x398434u;
    // NOP
label_398438:
    // 0x398438: 0x0  nop
    ctx->pc = 0x398438u;
    // NOP
label_39843c:
    // 0x39843c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39843cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398440:
    // 0x398440: 0x11b  .word       0x0000011B                   # divu        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398440u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_398444:
    // 0x398444: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398444u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x398444 raw=0x43960000");
label_398448:
    // 0x398448: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x398448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_39844c:
    // 0x39844c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x39844cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x39844C raw=0x43480000");
label_398450:
    // 0x398450: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398450u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x398450 raw=0x43C80000");
label_398454:
    // 0x398454: 0x0  nop
    ctx->pc = 0x398454u;
    // NOP
label_398458:
    // 0x398458: 0x0  nop
    ctx->pc = 0x398458u;
    // NOP
label_39845c:
    // 0x39845c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39845cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398460:
    // 0x398460: 0x11e  .word       0x0000011E                   # ddiv        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398460u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x398460 raw=0x0000011E");
label_398464:
    // 0x398464: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398464u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x398464 raw=0x43960000");
label_398468:
    // 0x398468: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x398468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_39846c:
    // 0x39846c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x39846cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x39846C raw=0x43480000");
label_398470:
    // 0x398470: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398470u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x398470 raw=0x43C80000");
label_398474:
    // 0x398474: 0x0  nop
    ctx->pc = 0x398474u;
    // NOP
label_398478:
    // 0x398478: 0x0  nop
    ctx->pc = 0x398478u;
    // NOP
label_39847c:
    // 0x39847c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39847cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398480:
    // 0x398480: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x398480u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_398484:
    // 0x398484: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398484u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x398484 raw=0x43160000");
label_398488:
    // 0x398488: 0x8  jr          $zero
label_39848c:
    if (ctx->pc == 0x39848Cu) {
        ctx->pc = 0x39848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398488u;
        // 0x39848c: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x39848C raw=0x42200000");
        ctx->in_delay_slot = false;
        ctx->pc = 0x398490u;
        goto label_398490;
    }
    ctx->pc = 0x398488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x39848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398488u;
        // 0x39848c: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x39848C raw=0x42200000");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398488u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x398490u;
label_398490:
    // 0x398490: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x398490u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_398494:
    // 0x398494: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398494u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x398494 raw=0x42200000");
label_398498:
    // 0x398498: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398498u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x398498 raw=0x0000000E");
label_39849c:
    // 0x39849c: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x39849cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x39849C raw=0x41A00000");
label_3984a0:
    // 0x3984a0: 0x11  mthi        $zero
    ctx->pc = 0x3984a0u;
    ctx->hi = GPR_U64(ctx, 0);
label_3984a4:
    // 0x3984a4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3984a4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3984A4 raw=0x41A00000");
label_3984a8:
    // 0x3984a8: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x3984a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_3984ac:
    // 0x3984ac: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3984acu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3984AC raw=0x41A00000");
label_3984b0:
    // 0x3984b0: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x3984b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3984b4:
    // 0x3984b4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3984b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3984B4 raw=0x41A00000");
label_3984b8:
    // 0x3984b8: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x3984b8u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_3984bc:
    // 0x3984bc: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3984bcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3984BC raw=0x41A00000");
label_3984c0:
    // 0x3984c0: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x3984c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3984C0 raw=0x0000001E");
label_3984c4:
    // 0x3984c4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3984c4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3984C4 raw=0x41A00000");
label_3984c8:
    // 0x3984c8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x3984c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3984cc:
    // 0x3984cc: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3984ccu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3984CC raw=0x43160000");
label_3984d0:
    // 0x3984d0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3984d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x3984D0 raw=0x0000000E");
label_3984d4:
    // 0x3984d4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3984d4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3984D4 raw=0x41A00000");
label_3984d8:
    // 0x3984d8: 0x11  mthi        $zero
    ctx->pc = 0x3984d8u;
    ctx->hi = GPR_U64(ctx, 0);
label_3984dc:
    // 0x3984dc: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3984dcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3984DC raw=0x41A00000");
label_3984e0:
    // 0x3984e0: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x3984e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_3984e4:
    // 0x3984e4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3984e4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3984E4 raw=0x41A00000");
label_3984e8:
    // 0x3984e8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x3984e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3984ec:
    // 0x3984ec: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3984ecu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3984EC raw=0x41A00000");
label_3984f0:
    // 0x3984f0: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x3984f0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_3984f4:
    // 0x3984f4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3984f4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3984F4 raw=0x41A00000");
label_3984f8:
    // 0x3984f8: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x3984f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3984F8 raw=0x0000001E");
label_3984fc:
    // 0x3984fc: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3984fcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3984FC raw=0x41A00000");
label_398500:
    // 0x398500: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x398500u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_398504:
    // 0x398504: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398504u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x398504 raw=0x42C80000");
label_398508:
    // 0x398508: 0x9  jalr        $zero, $zero
label_39850c:
    if (ctx->pc == 0x39850Cu) {
        ctx->pc = 0x39850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398508u;
        // 0x39850c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x39850C raw=0x42C80000");
        ctx->in_delay_slot = false;
        ctx->pc = 0x398510u;
        goto label_398510;
    }
    ctx->pc = 0x398508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x39850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398508u;
        // 0x39850c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x39850C raw=0x42C80000");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398508u, 0x398510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398510u;
label_398510:
    // 0x398510: 0x8  jr          $zero
label_398514:
    if (ctx->pc == 0x398514u) {
        ctx->pc = 0x398514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398510u;
        // 0x398514: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x398514 raw=0x43480000");
        ctx->in_delay_slot = false;
        ctx->pc = 0x398518u;
        goto label_398518;
    }
    ctx->pc = 0x398510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x398514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398510u;
        // 0x398514: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x398514 raw=0x43480000");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398510u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x398518u;
label_398518:
    // 0x398518: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x398518u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_39851c:
    // 0x39851c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x39851cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x39851C raw=0x43480000");
label_398520:
    // 0x398520: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398520u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x398520 raw=0x0000000E");
label_398524:
    // 0x398524: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398524u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x398524 raw=0x43480000");
label_398528:
    // 0x398528: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x398528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_39852c:
    // 0x39852c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x39852cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x39852C raw=0x43480000");
label_398530:
    // 0x398530: 0x11  mthi        $zero
    ctx->pc = 0x398530u;
    ctx->hi = GPR_U64(ctx, 0);
label_398534:
    // 0x398534: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398534u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x398534 raw=0x43480000");
label_398538:
    // 0x398538: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x398538u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_39853c:
    // 0x39853c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x39853cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x39853C raw=0x43480000");
label_398540:
    // 0x398540: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x398540u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_398544:
    // 0x398544: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398544u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x398544 raw=0x43480000");
label_398548:
    // 0x398548: 0x0  nop
    ctx->pc = 0x398548u;
    // NOP
label_39854c:
    // 0x39854c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x39854cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x39854C raw=0x43480000");
label_398550:
    // 0x398550: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x398550u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_398554:
    // 0x398554: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x398554u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_398558:
    // 0x398558: 0xc  syscall     0
    ctx->pc = 0x398558u;
    ctx->pc = 0x39855Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_39855c:
    // 0x39855c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x39855cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x39855C raw=0x0000000E");
label_398560:
    // 0x398560: 0x10  mfhi        $zero
    ctx->pc = 0x398560u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_398564:
    // 0x398564: 0x12  mflo        $zero
    ctx->pc = 0x398564u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_398568:
    // 0x398568: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x398568u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_39856c:
    // 0x39856c: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x39856cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_398570:
    // 0x398570: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x398570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_398574:
    // 0x398574: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x398574u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_398578:
    // 0x398578: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x398578u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x398578 raw=0x0000001D");
label_39857c:
    // 0x39857c: 0x23  negu        $zero, $zero
    ctx->pc = 0x39857cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_398580:
    // 0x398580: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x398580u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_398584:
    // 0x398584: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398584u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x398584 raw=0x00000005");
label_398588:
    // 0x398588: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x398588u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_39858c:
    // 0x39858c: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x39858cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_398590:
    // 0x398590: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x398590u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_398594:
    // 0x398594: 0x27  not         $zero, $zero
    ctx->pc = 0x398594u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_398598:
    // 0x398598: 0x0  nop
    ctx->pc = 0x398598u;
    // NOP
label_39859c:
    // 0x39859c: 0x0  nop
    ctx->pc = 0x39859cu;
    // NOP
label_3985a0:
    // 0x3985a0: 0x2d0860  .word       0x002D0860                   # add         $at, $at, $t5 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3985a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_3985a4:
    // 0x3985a4: 0x2d1150  .word       0x002D1150                   # mfhi        $v0 # 002D0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3985a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3985a8:
    // 0x3985a8: 0x2d4e70  tge         $at, $t5, 313
    ctx->pc = 0x3985a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3985ac:
    // 0x3985ac: 0x2d5050  .word       0x002D5050                   # mfhi        $t2 # 002D0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3985acu;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_3985b0:
    // 0x3985b0: 0x2d55b0  tge         $at, $t5, 342
    ctx->pc = 0x3985b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3985b4:
    // 0x3985b4: 0x175140  sll         $t2, $s7, 5
    ctx->pc = 0x3985b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_3985b8:
    // 0x3985b8: 0x175140  sll         $t2, $s7, 5
    ctx->pc = 0x3985b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_3985bc:
    // 0x3985bc: 0x175140  sll         $t2, $s7, 5
    ctx->pc = 0x3985bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_3985c0:
    // 0x3985c0: 0x175140  sll         $t2, $s7, 5
    ctx->pc = 0x3985c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_3985c4:
    // 0x3985c4: 0x175140  sll         $t2, $s7, 5
    ctx->pc = 0x3985c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_3985c8:
    // 0x3985c8: 0x0  nop
    ctx->pc = 0x3985c8u;
    // NOP
label_3985cc:
    // 0x3985cc: 0x0  nop
    ctx->pc = 0x3985ccu;
    // NOP
label_3985d0:
    // 0x3985d0: 0x2d1210  .word       0x002D1210                   # mfhi        $v0 # 002D0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3985d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3985d4:
    // 0x3985d4: 0x2d18b0  tge         $at, $t5, 98
    ctx->pc = 0x3985d4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3985d8:
    // 0x3985d8: 0x2d2030  tge         $at, $t5, 128
    ctx->pc = 0x3985d8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3985dc:
    // 0x3985dc: 0x2d24a0  .word       0x002D24A0                   # add         $a0, $at, $t5 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3985dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3985e0:
    // 0x3985e0: 0x2d2640  .word       0x002D2640                   # sll         $a0, $t5, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3985e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 25));
label_3985e4:
    // 0x3985e4: 0x2d27e0  .word       0x002D27E0                   # add         $a0, $at, $t5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3985e4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3985e8:
    // 0x3985e8: 0x2d2dc0  .word       0x002D2DC0                   # sll         $a1, $t5, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3985e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 23));
label_3985ec:
    // 0x3985ec: 0x2d3610  .word       0x002D3610                   # mfhi        $a2 # 002D0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3985ecu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_3985f0:
    // 0x3985f0: 0x2d3770  tge         $at, $t5, 221
    ctx->pc = 0x3985f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3985f4:
    // 0x3985f4: 0x2d3890  .word       0x002D3890                   # mfhi        $a3 # 002D0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3985f4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_3985f8:
    // 0x3985f8: 0x2d3b60  .word       0x002D3B60                   # add         $a3, $at, $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3985f8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_3985fc:
    // 0x3985fc: 0x2d3c80  .word       0x002D3C80                   # sll         $a3, $t5, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3985fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 18));
label_398600:
    // 0x398600: 0x2d4240  .word       0x002D4240                   # sll         $t0, $t5, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398600u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 13), 9));
label_398604:
    // 0x398604: 0x2d44c0  .word       0x002D44C0                   # sll         $t0, $t5, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398604u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 13), 19));
label_398608:
    // 0x398608: 0x2d4870  tge         $at, $t5, 289
    ctx->pc = 0x398608u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_39860c:
    // 0x39860c: 0x2d4b80  .word       0x002D4B80                   # sll         $t1, $t5, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x39860cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 14));
label_398610:
    // 0x398610: 0x2d3f50  .word       0x002D3F50                   # mfhi        $a3 # 002D0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398610u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_398614:
    // 0x398614: 0x2d40b0  tge         $at, $t5, 258
    ctx->pc = 0x398614u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398618:
    // 0x398618: 0x2d2ed0  .word       0x002D2ED0                   # mfhi        $a1 # 002D06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398618u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_39861c:
    // 0x39861c: 0x2d3070  tge         $at, $t5, 193
    ctx->pc = 0x39861cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398620:
    // 0x398620: 0x2d3330  tge         $at, $t5, 204
    ctx->pc = 0x398620u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398624:
    // 0x398624: 0x2d3400  .word       0x002D3400                   # sll         $a2, $t5, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398624u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
label_398628:
    // 0x398628: 0x2d34d0  .word       0x002D34D0                   # mfhi        $a2 # 002D04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398628u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_39862c:
    // 0x39862c: 0x2d2fa0  .word       0x002D2FA0                   # add         $a1, $at, $t5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x39862cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_398630:
    // 0x398630: 0x2d31b0  tge         $at, $t5, 198
    ctx->pc = 0x398630u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398634:
    // 0x398634: 0x2d5460  .word       0x002D5460                   # add         $t2, $at, $t5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398634u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_398638:
    // 0x398638: 0x0  nop
    ctx->pc = 0x398638u;
    // NOP
label_39863c:
    // 0x39863c: 0x0  nop
    ctx->pc = 0x39863cu;
    // NOP
label_398640:
    // 0x398640: 0x2d16c0  .word       0x002D16C0                   # sll         $v0, $t5, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 27));
label_398644:
    // 0x398644: 0x2d1f20  .word       0x002D1F20                   # add         $v1, $at, $t5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398644u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_398648:
    // 0x398648: 0x2d2390  .word       0x002D2390                   # mfhi        $a0 # 002D0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398648u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_39864c:
    // 0x39864c: 0x2d24b0  tge         $at, $t5, 146
    ctx->pc = 0x39864cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398650:
    // 0x398650: 0x2d2650  .word       0x002D2650                   # mfhi        $a0 # 002D0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398650u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_398654:
    // 0x398654: 0x2d27f0  tge         $at, $t5, 159
    ctx->pc = 0x398654u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398658:
    // 0x398658: 0x2d2dd0  .word       0x002D2DD0                   # mfhi        $a1 # 002D05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398658u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_39865c:
    // 0x39865c: 0x2d3620  .word       0x002D3620                   # add         $a2, $at, $t5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x39865cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_398660:
    // 0x398660: 0x2d3780  .word       0x002D3780                   # sll         $a2, $t5, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398660u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 13), 30));
label_398664:
    // 0x398664: 0x2d3940  .word       0x002D3940                   # sll         $a3, $t5, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398664u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
label_398668:
    // 0x398668: 0x2d3b70  tge         $at, $t5, 237
    ctx->pc = 0x398668u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_39866c:
    // 0x39866c: 0x2d3d30  tge         $at, $t5, 244
    ctx->pc = 0x39866cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_398670:
    // 0x398670: 0x2d4250  .word       0x002D4250                   # mfhi        $t0 # 002D0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398670u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_398674:
    // 0x398674: 0x2d44d0  .word       0x002D44D0                   # mfhi        $t0 # 002D04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398674u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_398678:
    // 0x398678: 0x2d4880  .word       0x002D4880                   # sll         $t1, $t5, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398678u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_39867c:
    // 0x39867c: 0x2d4b90  .word       0x002D4B90                   # mfhi        $t1 # 002D0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x39867cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_398680:
    // 0x398680: 0x2d3f60  .word       0x002D3F60                   # add         $a3, $at, $t5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398680u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_398684:
    // 0x398684: 0x2d40c0  .word       0x002D40C0                   # sll         $t0, $t5, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398684u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_398688:
    // 0x398688: 0x2d2ee0  .word       0x002D2EE0                   # add         $a1, $at, $t5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398688u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_39868c:
    // 0x39868c: 0x2d3080  .word       0x002D3080                   # sll         $a2, $t5, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x39868cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_398690:
    // 0x398690: 0x2d3340  .word       0x002D3340                   # sll         $a2, $t5, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398690u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 13), 13));
label_398694:
    // 0x398694: 0x2d3410  .word       0x002D3410                   # mfhi        $a2 # 002D0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398694u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_398698:
    // 0x398698: 0x2d34e0  .word       0x002D34E0                   # add         $a2, $at, $t5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398698u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_39869c:
    // 0x39869c: 0x2d2fb0  tge         $at, $t5, 190
    ctx->pc = 0x39869cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3986a0:
    // 0x3986a0: 0x2d31c0  .word       0x002D31C0                   # sll         $a2, $t5, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3986a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 13), 7));
label_3986a4:
    // 0x3986a4: 0x2d5470  tge         $at, $t5, 337
    ctx->pc = 0x3986a4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3986a8:
    // 0x3986a8: 0x2d5600  .word       0x002D5600                   # sll         $t2, $t5, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3986a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
label_3986ac:
    // 0x3986ac: 0x2d5630  tge         $at, $t5, 344
    ctx->pc = 0x3986acu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3986b0:
    // 0x3986b0: 0x0  nop
    ctx->pc = 0x3986b0u;
    // NOP
label_3986b4:
    // 0x3986b4: 0x0  nop
    ctx->pc = 0x3986b4u;
    // NOP
label_3986b8:
    // 0x3986b8: 0x0  nop
    ctx->pc = 0x3986b8u;
    // NOP
label_3986bc:
    // 0x3986bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3986bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3986c0:
    // 0x3986c0: 0x0  nop
    ctx->pc = 0x3986c0u;
    // NOP
label_3986c4:
    // 0x3986c4: 0x0  nop
    ctx->pc = 0x3986c4u;
    // NOP
label_3986c8:
    // 0x3986c8: 0x0  nop
    ctx->pc = 0x3986c8u;
    // NOP
label_3986cc:
    // 0x3986cc: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x3986ccu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x3986CC raw=0x40A00000");
label_3986d0:
    // 0x3986d0: 0x0  nop
    ctx->pc = 0x3986d0u;
    // NOP
label_3986d4:
    // 0x3986d4: 0x0  nop
    ctx->pc = 0x3986d4u;
    // NOP
label_3986d8:
    // 0x3986d8: 0x0  nop
    ctx->pc = 0x3986d8u;
    // NOP
label_3986dc:
    // 0x3986dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3986dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3986e0:
    // 0x3986e0: 0x0  nop
    ctx->pc = 0x3986e0u;
    // NOP
label_3986e4:
    // 0x3986e4: 0x0  nop
    ctx->pc = 0x3986e4u;
    // NOP
label_3986e8:
    // 0x3986e8: 0x0  nop
    ctx->pc = 0x3986e8u;
    // NOP
label_3986ec:
    // 0x3986ec: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x3986ecu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x3986EC raw=0x40A00000");
label_3986f0:
    // 0x3986f0: 0x0  nop
    ctx->pc = 0x3986f0u;
    // NOP
label_3986f4:
    // 0x3986f4: 0x0  nop
    ctx->pc = 0x3986f4u;
    // NOP
label_3986f8:
    // 0x3986f8: 0x0  nop
    ctx->pc = 0x3986f8u;
    // NOP
label_3986fc:
    // 0x3986fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3986fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398700:
    // 0x398700: 0x0  nop
    ctx->pc = 0x398700u;
    // NOP
label_398704:
    // 0x398704: 0x0  nop
    ctx->pc = 0x398704u;
    // NOP
label_398708:
    // 0x398708: 0x0  nop
    ctx->pc = 0x398708u;
    // NOP
label_39870c:
    // 0x39870c: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x39870cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x39870C raw=0x40400000");
label_398710:
    // 0x398710: 0x0  nop
    ctx->pc = 0x398710u;
    // NOP
label_398714:
    // 0x398714: 0x0  nop
    ctx->pc = 0x398714u;
    // NOP
label_398718:
    // 0x398718: 0x0  nop
    ctx->pc = 0x398718u;
    // NOP
label_39871c:
    // 0x39871c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39871cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398720:
    // 0x398720: 0x0  nop
    ctx->pc = 0x398720u;
    // NOP
label_398724:
    // 0x398724: 0x0  nop
    ctx->pc = 0x398724u;
    // NOP
label_398728:
    // 0x398728: 0x0  nop
    ctx->pc = 0x398728u;
    // NOP
label_39872c:
    // 0x39872c: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x39872cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x39872C raw=0x40A00000");
label_398730:
    // 0x398730: 0x0  nop
    ctx->pc = 0x398730u;
    // NOP
label_398734:
    // 0x398734: 0x0  nop
    ctx->pc = 0x398734u;
    // NOP
label_398738:
    // 0x398738: 0x0  nop
    ctx->pc = 0x398738u;
    // NOP
label_39873c:
    // 0x39873c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39873cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398740:
    // 0x398740: 0x0  nop
    ctx->pc = 0x398740u;
    // NOP
label_398744:
    // 0x398744: 0x0  nop
    ctx->pc = 0x398744u;
    // NOP
label_398748:
    // 0x398748: 0x0  nop
    ctx->pc = 0x398748u;
    // NOP
label_39874c:
    // 0x39874c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39874cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398750:
    // 0x398750: 0x0  nop
    ctx->pc = 0x398750u;
    // NOP
label_398754:
    // 0x398754: 0x0  nop
    ctx->pc = 0x398754u;
    // NOP
label_398758:
    // 0x398758: 0x0  nop
    ctx->pc = 0x398758u;
    // NOP
label_39875c:
    // 0x39875c: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x39875cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x39875C raw=0x40A00000");
label_398760:
    // 0x398760: 0x0  nop
    ctx->pc = 0x398760u;
    // NOP
label_398764:
    // 0x398764: 0x0  nop
    ctx->pc = 0x398764u;
    // NOP
label_398768:
    // 0x398768: 0x0  nop
    ctx->pc = 0x398768u;
    // NOP
label_39876c:
    // 0x39876c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39876cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398770:
    // 0x398770: 0x0  nop
    ctx->pc = 0x398770u;
    // NOP
label_398774:
    // 0x398774: 0x0  nop
    ctx->pc = 0x398774u;
    // NOP
label_398778:
    // 0x398778: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x398778u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x398778 raw=0x447A0000");
label_39877c:
    // 0x39877c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39877cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398780:
    // 0x398780: 0x0  nop
    ctx->pc = 0x398780u;
    // NOP
label_398784:
    // 0x398784: 0x0  nop
    ctx->pc = 0x398784u;
    // NOP
label_398788:
    // 0x398788: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x398788u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x398788 raw=0x447A0000");
label_39878c:
    // 0x39878c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39878cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398790:
    // 0x398790: 0x0  nop
    ctx->pc = 0x398790u;
    // NOP
label_398794:
    // 0x398794: 0x0  nop
    ctx->pc = 0x398794u;
    // NOP
label_398798:
    // 0x398798: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x398798u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x398798 raw=0x447A0000");
label_39879c:
    // 0x39879c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39879cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3987a0:
    // 0x3987a0: 0x0  nop
    ctx->pc = 0x3987a0u;
    // NOP
label_3987a4:
    // 0x3987a4: 0x0  nop
    ctx->pc = 0x3987a4u;
    // NOP
label_3987a8:
    // 0x3987a8: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3987a8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x3987A8 raw=0x447A0000");
label_3987ac:
    // 0x3987ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3987acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3987b0:
    // 0x3987b0: 0x0  nop
    ctx->pc = 0x3987b0u;
    // NOP
label_3987b4:
    // 0x3987b4: 0x0  nop
    ctx->pc = 0x3987b4u;
    // NOP
label_3987b8:
    // 0x3987b8: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3987b8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x3987B8 raw=0x447A0000");
label_3987bc:
    // 0x3987bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3987bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3987c0:
    // 0x3987c0: 0x0  nop
    ctx->pc = 0x3987c0u;
    // NOP
label_3987c4:
    // 0x3987c4: 0x0  nop
    ctx->pc = 0x3987c4u;
    // NOP
label_3987c8:
    // 0x3987c8: 0x0  nop
    ctx->pc = 0x3987c8u;
    // NOP
label_3987cc:
    // 0x3987cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3987ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3987d0:
    // 0x3987d0: 0x0  nop
    ctx->pc = 0x3987d0u;
    // NOP
label_3987d4:
    // 0x3987d4: 0x43aa0000  .word       0x43AA0000                   # INVALID     $sp, $t2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3987d4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x3987D4 raw=0x43AA0000");
label_3987d8:
    // 0x3987d8: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3987d8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3987D8 raw=0x43FA0000");
label_3987dc:
    // 0x3987dc: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x3987dcu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_3987e0:
    // 0x3987e0: 0x0  nop
    ctx->pc = 0x3987e0u;
    // NOP
label_3987e4:
    // 0x3987e4: 0x43820000  .word       0x43820000                   # INVALID     $gp, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3987e4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3987E4 raw=0x43820000");
label_3987e8:
    // 0x3987e8: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3987e8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3987E8 raw=0x43FA0000");
label_3987ec:
    // 0x3987ec: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x3987ecu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_3987f0:
    // 0x3987f0: 0xc3e10000  ll          $at, 0x0($ra)
    ctx->pc = 0x3987f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3987f4:
    // 0x3987f4: 0x430c0000  .word       0x430C0000                   # INVALID     $t8, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3987f4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3987F4 raw=0x430C0000");
label_3987f8:
    // 0x3987f8: 0x0  nop
    ctx->pc = 0x3987f8u;
    // NOP
label_3987fc:
    // 0x3987fc: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x3987fcu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_398800:
    // 0x398800: 0xc4070000  lwc1        $f7, 0x0($zero)
    ctx->pc = 0x398800u;
    { uint32_t bits = FAST_READ32(0x0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_398804:
    // 0x398804: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398804u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x398804 raw=0x42F00000");
label_398808:
    // 0x398808: 0x0  nop
    ctx->pc = 0x398808u;
    // NOP
label_39880c:
    // 0x39880c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x39880cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_398810:
    // 0x398810: 0xc3dc0000  ll          $gp, 0x0($fp)
    ctx->pc = 0x398810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398814:
    // 0x398814: 0x43020000  .word       0x43020000                   # INVALID     $t8, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398814u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x398814 raw=0x43020000");
label_398818:
    // 0x398818: 0x0  nop
    ctx->pc = 0x398818u;
    // NOP
label_39881c:
    // 0x39881c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x39881cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_398820:
    // 0x398820: 0x43cd0000  .word       0x43CD0000                   # INVALID     $fp, $t5, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398820u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x398820 raw=0x43CD0000");
label_398824:
    // 0x398824: 0x430c0000  .word       0x430C0000                   # INVALID     $t8, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398824u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x398824 raw=0x430C0000");
label_398828:
    // 0x398828: 0x0  nop
    ctx->pc = 0x398828u;
    // NOP
label_39882c:
    // 0x39882c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x39882cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_398830:
    // 0x398830: 0x43dc0000  .word       0x43DC0000                   # INVALID     $fp, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398830u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x398830 raw=0x43DC0000");
label_398834:
    // 0x398834: 0x430c0000  .word       0x430C0000                   # INVALID     $t8, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398834u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x398834 raw=0x430C0000");
label_398838:
    // 0x398838: 0x0  nop
    ctx->pc = 0x398838u;
    // NOP
label_39883c:
    // 0x39883c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x39883cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_398840:
    // 0x398840: 0x43b90000  .word       0x43B90000                   # INVALID     $sp, $t9, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398840u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x398840 raw=0x43B90000");
label_398844:
    // 0x398844: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398844u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x398844 raw=0x43160000");
label_398848:
    // 0x398848: 0x0  nop
    ctx->pc = 0x398848u;
    // NOP
label_39884c:
    // 0x39884c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x39884cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_398850:
    // 0x398850: 0x8  jr          $zero
label_398854:
    if (ctx->pc == 0x398854u) {
        ctx->pc = 0x398854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398850u;
        // 0x398854: 0xb  movn        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398858u;
        goto label_398858;
    }
    ctx->pc = 0x398850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x398854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398850u;
        // 0x398854: 0xb  movn        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398850u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x398858u;
label_398858:
    // 0x398858: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398858u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x398858 raw=0x0000000E");
label_39885c:
    // 0x39885c: 0x11  mthi        $zero
    ctx->pc = 0x39885cu;
    ctx->hi = GPR_U64(ctx, 0);
label_398860:
    // 0x398860: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x398860u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_398864:
    // 0x398864: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x398864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_398868:
    // 0x398868: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x398868u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_39886c:
    // 0x39886c: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x39886cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x39886C raw=0x0000001E");
label_398870:
    // 0x398870: 0x2d7f50  .word       0x002D7F50                   # mfhi        $t7 # 002D0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398870u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_398874:
    // 0x398874: 0x0  nop
    ctx->pc = 0x398874u;
    // NOP
label_398878:
    // 0x398878: 0x0  nop
    ctx->pc = 0x398878u;
    // NOP
label_39887c:
    // 0x39887c: 0x0  nop
    ctx->pc = 0x39887cu;
    // NOP
    ctx->pc = 0x398880u;
}
