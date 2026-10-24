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

// Function: Pl_r1_handrail
// Address: 0x148540 - 0x148ae8
void Pl_r1_handrail_0x148540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_handrail_0x148540");
#endif

    switch (ctx->pc) {
        case 0x148540u: goto label_148540;
        case 0x148544u: goto label_148544;
        case 0x148548u: goto label_148548;
        case 0x14854cu: goto label_14854c;
        case 0x148550u: goto label_148550;
        case 0x148554u: goto label_148554;
        case 0x148558u: goto label_148558;
        case 0x14855cu: goto label_14855c;
        case 0x148560u: goto label_148560;
        case 0x148564u: goto label_148564;
        case 0x148568u: goto label_148568;
        case 0x14856cu: goto label_14856c;
        case 0x148570u: goto label_148570;
        case 0x148574u: goto label_148574;
        case 0x148578u: goto label_148578;
        case 0x14857cu: goto label_14857c;
        case 0x148580u: goto label_148580;
        case 0x148584u: goto label_148584;
        case 0x148588u: goto label_148588;
        case 0x14858cu: goto label_14858c;
        case 0x148590u: goto label_148590;
        case 0x148594u: goto label_148594;
        case 0x148598u: goto label_148598;
        case 0x14859cu: goto label_14859c;
        case 0x1485a0u: goto label_1485a0;
        case 0x1485a4u: goto label_1485a4;
        case 0x1485a8u: goto label_1485a8;
        case 0x1485acu: goto label_1485ac;
        case 0x1485b0u: goto label_1485b0;
        case 0x1485b4u: goto label_1485b4;
        case 0x1485b8u: goto label_1485b8;
        case 0x1485bcu: goto label_1485bc;
        case 0x1485c0u: goto label_1485c0;
        case 0x1485c4u: goto label_1485c4;
        case 0x1485c8u: goto label_1485c8;
        case 0x1485ccu: goto label_1485cc;
        case 0x1485d0u: goto label_1485d0;
        case 0x1485d4u: goto label_1485d4;
        case 0x1485d8u: goto label_1485d8;
        case 0x1485dcu: goto label_1485dc;
        case 0x1485e0u: goto label_1485e0;
        case 0x1485e4u: goto label_1485e4;
        case 0x1485e8u: goto label_1485e8;
        case 0x1485ecu: goto label_1485ec;
        case 0x1485f0u: goto label_1485f0;
        case 0x1485f4u: goto label_1485f4;
        case 0x1485f8u: goto label_1485f8;
        case 0x1485fcu: goto label_1485fc;
        case 0x148600u: goto label_148600;
        case 0x148604u: goto label_148604;
        case 0x148608u: goto label_148608;
        case 0x14860cu: goto label_14860c;
        case 0x148610u: goto label_148610;
        case 0x148614u: goto label_148614;
        case 0x148618u: goto label_148618;
        case 0x14861cu: goto label_14861c;
        case 0x148620u: goto label_148620;
        case 0x148624u: goto label_148624;
        case 0x148628u: goto label_148628;
        case 0x14862cu: goto label_14862c;
        case 0x148630u: goto label_148630;
        case 0x148634u: goto label_148634;
        case 0x148638u: goto label_148638;
        case 0x14863cu: goto label_14863c;
        case 0x148640u: goto label_148640;
        case 0x148644u: goto label_148644;
        case 0x148648u: goto label_148648;
        case 0x14864cu: goto label_14864c;
        case 0x148650u: goto label_148650;
        case 0x148654u: goto label_148654;
        case 0x148658u: goto label_148658;
        case 0x14865cu: goto label_14865c;
        case 0x148660u: goto label_148660;
        case 0x148664u: goto label_148664;
        case 0x148668u: goto label_148668;
        case 0x14866cu: goto label_14866c;
        case 0x148670u: goto label_148670;
        case 0x148674u: goto label_148674;
        case 0x148678u: goto label_148678;
        case 0x14867cu: goto label_14867c;
        case 0x148680u: goto label_148680;
        case 0x148684u: goto label_148684;
        case 0x148688u: goto label_148688;
        case 0x14868cu: goto label_14868c;
        case 0x148690u: goto label_148690;
        case 0x148694u: goto label_148694;
        case 0x148698u: goto label_148698;
        case 0x14869cu: goto label_14869c;
        case 0x1486a0u: goto label_1486a0;
        case 0x1486a4u: goto label_1486a4;
        case 0x1486a8u: goto label_1486a8;
        case 0x1486acu: goto label_1486ac;
        case 0x1486b0u: goto label_1486b0;
        case 0x1486b4u: goto label_1486b4;
        case 0x1486b8u: goto label_1486b8;
        case 0x1486bcu: goto label_1486bc;
        case 0x1486c0u: goto label_1486c0;
        case 0x1486c4u: goto label_1486c4;
        case 0x1486c8u: goto label_1486c8;
        case 0x1486ccu: goto label_1486cc;
        case 0x1486d0u: goto label_1486d0;
        case 0x1486d4u: goto label_1486d4;
        case 0x1486d8u: goto label_1486d8;
        case 0x1486dcu: goto label_1486dc;
        case 0x1486e0u: goto label_1486e0;
        case 0x1486e4u: goto label_1486e4;
        case 0x1486e8u: goto label_1486e8;
        case 0x1486ecu: goto label_1486ec;
        case 0x1486f0u: goto label_1486f0;
        case 0x1486f4u: goto label_1486f4;
        case 0x1486f8u: goto label_1486f8;
        case 0x1486fcu: goto label_1486fc;
        case 0x148700u: goto label_148700;
        case 0x148704u: goto label_148704;
        case 0x148708u: goto label_148708;
        case 0x14870cu: goto label_14870c;
        case 0x148710u: goto label_148710;
        case 0x148714u: goto label_148714;
        case 0x148718u: goto label_148718;
        case 0x14871cu: goto label_14871c;
        case 0x148720u: goto label_148720;
        case 0x148724u: goto label_148724;
        case 0x148728u: goto label_148728;
        case 0x14872cu: goto label_14872c;
        case 0x148730u: goto label_148730;
        case 0x148734u: goto label_148734;
        case 0x148738u: goto label_148738;
        case 0x14873cu: goto label_14873c;
        case 0x148740u: goto label_148740;
        case 0x148744u: goto label_148744;
        case 0x148748u: goto label_148748;
        case 0x14874cu: goto label_14874c;
        case 0x148750u: goto label_148750;
        case 0x148754u: goto label_148754;
        case 0x148758u: goto label_148758;
        case 0x14875cu: goto label_14875c;
        case 0x148760u: goto label_148760;
        case 0x148764u: goto label_148764;
        case 0x148768u: goto label_148768;
        case 0x14876cu: goto label_14876c;
        case 0x148770u: goto label_148770;
        case 0x148774u: goto label_148774;
        case 0x148778u: goto label_148778;
        case 0x14877cu: goto label_14877c;
        case 0x148780u: goto label_148780;
        case 0x148784u: goto label_148784;
        case 0x148788u: goto label_148788;
        case 0x14878cu: goto label_14878c;
        case 0x148790u: goto label_148790;
        case 0x148794u: goto label_148794;
        case 0x148798u: goto label_148798;
        case 0x14879cu: goto label_14879c;
        case 0x1487a0u: goto label_1487a0;
        case 0x1487a4u: goto label_1487a4;
        case 0x1487a8u: goto label_1487a8;
        case 0x1487acu: goto label_1487ac;
        case 0x1487b0u: goto label_1487b0;
        case 0x1487b4u: goto label_1487b4;
        case 0x1487b8u: goto label_1487b8;
        case 0x1487bcu: goto label_1487bc;
        case 0x1487c0u: goto label_1487c0;
        case 0x1487c4u: goto label_1487c4;
        case 0x1487c8u: goto label_1487c8;
        case 0x1487ccu: goto label_1487cc;
        case 0x1487d0u: goto label_1487d0;
        case 0x1487d4u: goto label_1487d4;
        case 0x1487d8u: goto label_1487d8;
        case 0x1487dcu: goto label_1487dc;
        case 0x1487e0u: goto label_1487e0;
        case 0x1487e4u: goto label_1487e4;
        case 0x1487e8u: goto label_1487e8;
        case 0x1487ecu: goto label_1487ec;
        case 0x1487f0u: goto label_1487f0;
        case 0x1487f4u: goto label_1487f4;
        case 0x1487f8u: goto label_1487f8;
        case 0x1487fcu: goto label_1487fc;
        case 0x148800u: goto label_148800;
        case 0x148804u: goto label_148804;
        case 0x148808u: goto label_148808;
        case 0x14880cu: goto label_14880c;
        case 0x148810u: goto label_148810;
        case 0x148814u: goto label_148814;
        case 0x148818u: goto label_148818;
        case 0x14881cu: goto label_14881c;
        case 0x148820u: goto label_148820;
        case 0x148824u: goto label_148824;
        case 0x148828u: goto label_148828;
        case 0x14882cu: goto label_14882c;
        case 0x148830u: goto label_148830;
        case 0x148834u: goto label_148834;
        case 0x148838u: goto label_148838;
        case 0x14883cu: goto label_14883c;
        case 0x148840u: goto label_148840;
        case 0x148844u: goto label_148844;
        case 0x148848u: goto label_148848;
        case 0x14884cu: goto label_14884c;
        case 0x148850u: goto label_148850;
        case 0x148854u: goto label_148854;
        case 0x148858u: goto label_148858;
        case 0x14885cu: goto label_14885c;
        case 0x148860u: goto label_148860;
        case 0x148864u: goto label_148864;
        case 0x148868u: goto label_148868;
        case 0x14886cu: goto label_14886c;
        case 0x148870u: goto label_148870;
        case 0x148874u: goto label_148874;
        case 0x148878u: goto label_148878;
        case 0x14887cu: goto label_14887c;
        case 0x148880u: goto label_148880;
        case 0x148884u: goto label_148884;
        case 0x148888u: goto label_148888;
        case 0x14888cu: goto label_14888c;
        case 0x148890u: goto label_148890;
        case 0x148894u: goto label_148894;
        case 0x148898u: goto label_148898;
        case 0x14889cu: goto label_14889c;
        case 0x1488a0u: goto label_1488a0;
        case 0x1488a4u: goto label_1488a4;
        case 0x1488a8u: goto label_1488a8;
        case 0x1488acu: goto label_1488ac;
        case 0x1488b0u: goto label_1488b0;
        case 0x1488b4u: goto label_1488b4;
        case 0x1488b8u: goto label_1488b8;
        case 0x1488bcu: goto label_1488bc;
        case 0x1488c0u: goto label_1488c0;
        case 0x1488c4u: goto label_1488c4;
        case 0x1488c8u: goto label_1488c8;
        case 0x1488ccu: goto label_1488cc;
        case 0x1488d0u: goto label_1488d0;
        case 0x1488d4u: goto label_1488d4;
        case 0x1488d8u: goto label_1488d8;
        case 0x1488dcu: goto label_1488dc;
        case 0x1488e0u: goto label_1488e0;
        case 0x1488e4u: goto label_1488e4;
        case 0x1488e8u: goto label_1488e8;
        case 0x1488ecu: goto label_1488ec;
        case 0x1488f0u: goto label_1488f0;
        case 0x1488f4u: goto label_1488f4;
        case 0x1488f8u: goto label_1488f8;
        case 0x1488fcu: goto label_1488fc;
        case 0x148900u: goto label_148900;
        case 0x148904u: goto label_148904;
        case 0x148908u: goto label_148908;
        case 0x14890cu: goto label_14890c;
        case 0x148910u: goto label_148910;
        case 0x148914u: goto label_148914;
        case 0x148918u: goto label_148918;
        case 0x14891cu: goto label_14891c;
        case 0x148920u: goto label_148920;
        case 0x148924u: goto label_148924;
        case 0x148928u: goto label_148928;
        case 0x14892cu: goto label_14892c;
        case 0x148930u: goto label_148930;
        case 0x148934u: goto label_148934;
        case 0x148938u: goto label_148938;
        case 0x14893cu: goto label_14893c;
        case 0x148940u: goto label_148940;
        case 0x148944u: goto label_148944;
        case 0x148948u: goto label_148948;
        case 0x14894cu: goto label_14894c;
        case 0x148950u: goto label_148950;
        case 0x148954u: goto label_148954;
        case 0x148958u: goto label_148958;
        case 0x14895cu: goto label_14895c;
        case 0x148960u: goto label_148960;
        case 0x148964u: goto label_148964;
        case 0x148968u: goto label_148968;
        case 0x14896cu: goto label_14896c;
        case 0x148970u: goto label_148970;
        case 0x148974u: goto label_148974;
        case 0x148978u: goto label_148978;
        case 0x14897cu: goto label_14897c;
        case 0x148980u: goto label_148980;
        case 0x148984u: goto label_148984;
        case 0x148988u: goto label_148988;
        case 0x14898cu: goto label_14898c;
        case 0x148990u: goto label_148990;
        case 0x148994u: goto label_148994;
        case 0x148998u: goto label_148998;
        case 0x14899cu: goto label_14899c;
        case 0x1489a0u: goto label_1489a0;
        case 0x1489a4u: goto label_1489a4;
        case 0x1489a8u: goto label_1489a8;
        case 0x1489acu: goto label_1489ac;
        case 0x1489b0u: goto label_1489b0;
        case 0x1489b4u: goto label_1489b4;
        case 0x1489b8u: goto label_1489b8;
        case 0x1489bcu: goto label_1489bc;
        case 0x1489c0u: goto label_1489c0;
        case 0x1489c4u: goto label_1489c4;
        case 0x1489c8u: goto label_1489c8;
        case 0x1489ccu: goto label_1489cc;
        case 0x1489d0u: goto label_1489d0;
        case 0x1489d4u: goto label_1489d4;
        case 0x1489d8u: goto label_1489d8;
        case 0x1489dcu: goto label_1489dc;
        case 0x1489e0u: goto label_1489e0;
        case 0x1489e4u: goto label_1489e4;
        case 0x1489e8u: goto label_1489e8;
        case 0x1489ecu: goto label_1489ec;
        case 0x1489f0u: goto label_1489f0;
        case 0x1489f4u: goto label_1489f4;
        case 0x1489f8u: goto label_1489f8;
        case 0x1489fcu: goto label_1489fc;
        case 0x148a00u: goto label_148a00;
        case 0x148a04u: goto label_148a04;
        case 0x148a08u: goto label_148a08;
        case 0x148a0cu: goto label_148a0c;
        case 0x148a10u: goto label_148a10;
        case 0x148a14u: goto label_148a14;
        case 0x148a18u: goto label_148a18;
        case 0x148a1cu: goto label_148a1c;
        case 0x148a20u: goto label_148a20;
        case 0x148a24u: goto label_148a24;
        case 0x148a28u: goto label_148a28;
        case 0x148a2cu: goto label_148a2c;
        case 0x148a30u: goto label_148a30;
        case 0x148a34u: goto label_148a34;
        case 0x148a38u: goto label_148a38;
        case 0x148a3cu: goto label_148a3c;
        case 0x148a40u: goto label_148a40;
        case 0x148a44u: goto label_148a44;
        case 0x148a48u: goto label_148a48;
        case 0x148a4cu: goto label_148a4c;
        case 0x148a50u: goto label_148a50;
        case 0x148a54u: goto label_148a54;
        case 0x148a58u: goto label_148a58;
        case 0x148a5cu: goto label_148a5c;
        case 0x148a60u: goto label_148a60;
        case 0x148a64u: goto label_148a64;
        case 0x148a68u: goto label_148a68;
        case 0x148a6cu: goto label_148a6c;
        case 0x148a70u: goto label_148a70;
        case 0x148a74u: goto label_148a74;
        case 0x148a78u: goto label_148a78;
        case 0x148a7cu: goto label_148a7c;
        case 0x148a80u: goto label_148a80;
        case 0x148a84u: goto label_148a84;
        case 0x148a88u: goto label_148a88;
        case 0x148a8cu: goto label_148a8c;
        case 0x148a90u: goto label_148a90;
        case 0x148a94u: goto label_148a94;
        case 0x148a98u: goto label_148a98;
        case 0x148a9cu: goto label_148a9c;
        case 0x148aa0u: goto label_148aa0;
        case 0x148aa4u: goto label_148aa4;
        case 0x148aa8u: goto label_148aa8;
        case 0x148aacu: goto label_148aac;
        case 0x148ab0u: goto label_148ab0;
        case 0x148ab4u: goto label_148ab4;
        case 0x148ab8u: goto label_148ab8;
        case 0x148abcu: goto label_148abc;
        case 0x148ac0u: goto label_148ac0;
        case 0x148ac4u: goto label_148ac4;
        case 0x148ac8u: goto label_148ac8;
        case 0x148accu: goto label_148acc;
        case 0x148ad0u: goto label_148ad0;
        case 0x148ad4u: goto label_148ad4;
        case 0x148ad8u: goto label_148ad8;
        case 0x148adcu: goto label_148adc;
        case 0x148ae0u: goto label_148ae0;
        case 0x148ae4u: goto label_148ae4;
        default: break;
    }

    ctx->pc = 0x148540u;

label_148540:
    // 0x148540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_148544:
    // 0x148544: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x148544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_148548:
    // 0x148548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14854c:
    // 0x14854c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14854cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_148550:
    // 0x148550: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x148550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_148554:
    // 0x148554: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x148554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_148558:
    // 0x148558: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14855c:
    // 0x14855c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14855cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_148560:
    // 0x148560: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x148560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_148564:
    // 0x148564: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x148564u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_148568:
    // 0x148568: 0x1020015a  beqz        $at, . + 4 + (0x15A << 2)
label_14856c:
    if (ctx->pc == 0x14856Cu) {
        ctx->pc = 0x148570u;
        goto label_148570;
    }
    ctx->pc = 0x148568u;
    {
        const bool branch_taken_0x148568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148568) {
            ctx->pc = 0x148AD4u;
            goto label_148ad4;
        }
    }
    ctx->pc = 0x148570u;
label_148570:
    // 0x148570: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x148570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_148574:
    // 0x148574: 0x2464e790  addiu       $a0, $v1, -0x1870
    ctx->pc = 0x148574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961040));
label_148578:
    // 0x148578: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x148578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14857c:
    // 0x14857c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_148580:
    // 0x148580: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_148584:
    // 0x148584: 0x600008  jr          $v1
label_148588:
    if (ctx->pc == 0x148588u) {
        ctx->pc = 0x14858Cu;
        goto label_14858c;
    }
    ctx->pc = 0x148584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148584u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14858Cu;
label_14858c:
    // 0x14858c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148590:
    // 0x148590: 0xac4013f0  sw          $zero, 0x13F0($v0)
    ctx->pc = 0x148590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5104), GPR_U32(ctx, 0));
label_148594:
    // 0x148594: 0xc057bac  jal         func_15EEB0
label_148598:
    if (ctx->pc == 0x148598u) {
        ctx->pc = 0x14859Cu;
        goto label_14859c;
    }
    ctx->pc = 0x148594u;
    SET_GPR_U32(ctx, 31, 0x14859Cu);
    ctx->pc = 0x15EEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EEB0u, 0x148594u, 0x14859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14859Cu;
label_14859c:
    // 0x14859c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1485a0:
    // 0x1485a0: 0xac621b60  sw          $v0, 0x1B60($v1)
    ctx->pc = 0x1485a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 2));
label_1485a4:
    // 0x1485a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1485a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1485a8:
    // 0x1485a8: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x1485a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_1485ac:
    // 0x1485ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1485b0:
    if (ctx->pc == 0x1485B0u) {
        ctx->pc = 0x1485B4u;
        goto label_1485b4;
    }
    ctx->pc = 0x1485ACu;
    {
        const bool branch_taken_0x1485ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1485ac) {
            ctx->pc = 0x1485DCu;
            goto label_1485dc;
        }
    }
    ctx->pc = 0x1485B4u;
label_1485b4:
    // 0x1485b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1485b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1485b8:
    // 0x1485b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1485b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1485bc:
    // 0x1485bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1485bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1485c0:
    // 0x1485c0: 0x24060a19  addiu       $a2, $zero, 0xA19
    ctx->pc = 0x1485c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2585));
label_1485c4:
    // 0x1485c4: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x1485c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_1485c8:
    // 0x1485c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1485c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1485cc:
    // 0x1485cc: 0xc0965d0  jal         func_259740
label_1485d0:
    if (ctx->pc == 0x1485D0u) {
        ctx->pc = 0x1485D4u;
        goto label_1485d4;
    }
    ctx->pc = 0x1485CCu;
    SET_GPR_U32(ctx, 31, 0x1485D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1485CCu, 0x1485D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485D4u;
label_1485d4:
    // 0x1485d4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1485d8:
    if (ctx->pc == 0x1485D8u) {
        ctx->pc = 0x1485DCu;
        goto label_1485dc;
    }
    ctx->pc = 0x1485D4u;
    {
        const bool branch_taken_0x1485d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1485d4) {
            ctx->pc = 0x1485FCu;
            goto label_1485fc;
        }
    }
    ctx->pc = 0x1485DCu;
label_1485dc:
    // 0x1485dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1485dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1485e0:
    // 0x1485e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1485e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1485e4:
    // 0x1485e4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1485e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1485e8:
    // 0x1485e8: 0x24060a19  addiu       $a2, $zero, 0xA19
    ctx->pc = 0x1485e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2585));
label_1485ec:
    // 0x1485ec: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x1485ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1485f0:
    // 0x1485f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1485f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1485f4:
    // 0x1485f4: 0xc0965d0  jal         func_259740
label_1485f8:
    if (ctx->pc == 0x1485F8u) {
        ctx->pc = 0x1485FCu;
        goto label_1485fc;
    }
    ctx->pc = 0x1485F4u;
    SET_GPR_U32(ctx, 31, 0x1485FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1485F4u, 0x1485FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485FCu;
label_1485fc:
    // 0x1485fc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1485fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_148600:
    // 0x148600: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148604:
    // 0x148604: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x148604u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_148608:
    // 0x148608: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14860c:
    // 0x14860c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148610:
    // 0x148610: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x148610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_148614:
    // 0x148614: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x148614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_148618:
    // 0x148618: 0xc058f20  jal         func_163C80
label_14861c:
    if (ctx->pc == 0x14861Cu) {
        ctx->pc = 0x148620u;
        goto label_148620;
    }
    ctx->pc = 0x148618u;
    SET_GPR_U32(ctx, 31, 0x148620u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x148618u, 0x148620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148620u;
label_148620:
    // 0x148620: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148624:
    // 0x148624: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x148624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_148628:
    // 0x148628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x148628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14862c:
    // 0x14862c: 0x0  nop
    ctx->pc = 0x14862cu;
    // NOP
label_148630:
    // 0x148630: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x148630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_148634:
    // 0x148634: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x148634u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_148638:
    // 0x148638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14863c:
    // 0x14863c: 0xe4401578  swc1        $f0, 0x1578($v0)
    ctx->pc = 0x14863cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5496), bits); }
label_148640:
    // 0x148640: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148644:
    // 0x148644: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_148648:
    // 0x148648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14864c:
    // 0x14864c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14864cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_148650:
    // 0x148650: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148654:
    // 0x148654: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148654u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_148658:
    // 0x148658: 0xc096b40  jal         func_25AD00
label_14865c:
    if (ctx->pc == 0x14865Cu) {
        ctx->pc = 0x148660u;
        goto label_148660;
    }
    ctx->pc = 0x148658u;
    SET_GPR_U32(ctx, 31, 0x148660u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x148658u, 0x148660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148660u;
label_148660:
    // 0x148660: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148664:
    // 0x148664: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x148664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_148668:
    // 0x148668: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x148668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14866c:
    // 0x14866c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x14866cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_148670:
    // 0x148670: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_148674:
    if (ctx->pc == 0x148674u) {
        ctx->pc = 0x148678u;
        goto label_148678;
    }
    ctx->pc = 0x148670u;
    {
        const bool branch_taken_0x148670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148670) {
            ctx->pc = 0x148684u;
            goto label_148684;
        }
    }
    ctx->pc = 0x148678u;
label_148678:
    // 0x148678: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x148678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14867c:
    // 0x14867c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148680:
    // 0x148680: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x148680u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_148684:
    // 0x148684: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148688:
    // 0x148688: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x148688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_14868c:
    // 0x14868c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_148690:
    if (ctx->pc == 0x148690u) {
        ctx->pc = 0x148694u;
        goto label_148694;
    }
    ctx->pc = 0x14868Cu;
    {
        const bool branch_taken_0x14868c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14868c) {
            ctx->pc = 0x1486D0u;
            goto label_1486d0;
        }
    }
    ctx->pc = 0x148694u;
label_148694:
    // 0x148694: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148698:
    // 0x148698: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x148698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_14869c:
    // 0x14869c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1486a0:
    // 0x1486a0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1486a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_1486a4:
    // 0x1486a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1486a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1486a8:
    // 0x1486a8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1486a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1486ac:
    // 0x1486ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1486acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1486b0:
    // 0x1486b0: 0xc4401578  lwc1        $f0, 0x1578($v0)
    ctx->pc = 0x1486b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1486b4:
    // 0x1486b4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1486b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1486b8:
    // 0x1486b8: 0xc058fec  jal         func_163FB0
label_1486bc:
    if (ctx->pc == 0x1486BCu) {
        ctx->pc = 0x1486C0u;
        goto label_1486c0;
    }
    ctx->pc = 0x1486B8u;
    SET_GPR_U32(ctx, 31, 0x1486C0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1486B8u, 0x1486C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486C0u;
label_1486c0:
    // 0x1486c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1486c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1486c4:
    // 0x1486c4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1486c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1486c8:
    // 0x1486c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1486cc:
    if (ctx->pc == 0x1486CCu) {
        ctx->pc = 0x1486D0u;
        goto label_1486d0;
    }
    ctx->pc = 0x1486C8u;
    {
        const bool branch_taken_0x1486c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1486c8) {
            ctx->pc = 0x1486E0u;
            goto label_1486e0;
        }
    }
    ctx->pc = 0x1486D0u;
label_1486d0:
    // 0x1486d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1486d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1486d4:
    // 0x1486d4: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x1486d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1486d8:
    // 0x1486d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1486d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1486dc:
    // 0x1486dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1486dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1486e0:
    // 0x1486e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1486e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1486e4:
    // 0x1486e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1486e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1486e8:
    // 0x1486e8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1486e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1486ec:
    // 0x1486ec: 0xc05cd58  jal         func_173560
label_1486f0:
    if (ctx->pc == 0x1486F0u) {
        ctx->pc = 0x1486F4u;
        goto label_1486f4;
    }
    ctx->pc = 0x1486ECu;
    SET_GPR_U32(ctx, 31, 0x1486F4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1486ECu, 0x1486F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486F4u;
label_1486f4:
    // 0x1486f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1486f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1486f8:
    // 0x1486f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1486f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1486fc:
    // 0x1486fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1486fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_148700:
    // 0x148700: 0xc0573d8  jal         func_15CF60
label_148704:
    if (ctx->pc == 0x148704u) {
        ctx->pc = 0x148708u;
        goto label_148708;
    }
    ctx->pc = 0x148700u;
    SET_GPR_U32(ctx, 31, 0x148708u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x148700u, 0x148708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148708u;
label_148708:
    // 0x148708: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148708u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14870c:
    // 0x14870c: 0xc097530  jal         func_25D4C0
label_148710:
    if (ctx->pc == 0x148710u) {
        ctx->pc = 0x148714u;
        goto label_148714;
    }
    ctx->pc = 0x14870Cu;
    SET_GPR_U32(ctx, 31, 0x148714u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14870Cu, 0x148714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148714u;
label_148714:
    // 0x148714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148718:
    // 0x148718: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x148718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14871c:
    // 0x14871c: 0x106000ed  beqz        $v1, . + 4 + (0xED << 2)
label_148720:
    if (ctx->pc == 0x148720u) {
        ctx->pc = 0x148724u;
        goto label_148724;
    }
    ctx->pc = 0x14871Cu;
    {
        const bool branch_taken_0x14871c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14871c) {
            ctx->pc = 0x148AD4u;
            goto label_148ad4;
        }
    }
    ctx->pc = 0x148724u;
label_148724:
    // 0x148724: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148728:
    // 0x148728: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x148728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_14872c:
    // 0x14872c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14872cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_148730:
    // 0x148730: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x148730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_148734:
    // 0x148734: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_148738:
    if (ctx->pc == 0x148738u) {
        ctx->pc = 0x14873Cu;
        goto label_14873c;
    }
    ctx->pc = 0x148734u;
    {
        const bool branch_taken_0x148734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148734) {
            ctx->pc = 0x148AD4u;
            goto label_148ad4;
        }
    }
    ctx->pc = 0x14873Cu;
label_14873c:
    // 0x14873c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148740:
    // 0x148740: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x148740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_148744:
    // 0x148744: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_148748:
    if (ctx->pc == 0x148748u) {
        ctx->pc = 0x14874Cu;
        goto label_14874c;
    }
    ctx->pc = 0x148744u;
    {
        const bool branch_taken_0x148744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148744) {
            ctx->pc = 0x148774u;
            goto label_148774;
        }
    }
    ctx->pc = 0x14874Cu;
label_14874c:
    // 0x14874c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14874cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148750:
    // 0x148750: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148754:
    // 0x148754: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_148758:
    // 0x148758: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x148758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_14875c:
    // 0x14875c: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x14875cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_148760:
    // 0x148760: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_148764:
    // 0x148764: 0xc0965d0  jal         func_259740
label_148768:
    if (ctx->pc == 0x148768u) {
        ctx->pc = 0x14876Cu;
        goto label_14876c;
    }
    ctx->pc = 0x148764u;
    SET_GPR_U32(ctx, 31, 0x14876Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148764u, 0x14876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14876Cu;
label_14876c:
    // 0x14876c: 0x10000009  b           . + 4 + (0x9 << 2)
label_148770:
    if (ctx->pc == 0x148770u) {
        ctx->pc = 0x148774u;
        goto label_148774;
    }
    ctx->pc = 0x14876Cu;
    {
        const bool branch_taken_0x14876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14876c) {
            ctx->pc = 0x148794u;
            goto label_148794;
        }
    }
    ctx->pc = 0x148774u;
label_148774:
    // 0x148774: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148778:
    // 0x148778: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14877c:
    // 0x14877c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14877cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_148780:
    // 0x148780: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x148780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_148784:
    // 0x148784: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x148784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_148788:
    // 0x148788: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14878c:
    // 0x14878c: 0xc0965d0  jal         func_259740
label_148790:
    if (ctx->pc == 0x148790u) {
        ctx->pc = 0x148794u;
        goto label_148794;
    }
    ctx->pc = 0x14878Cu;
    SET_GPR_U32(ctx, 31, 0x148794u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14878Cu, 0x148794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148794u;
label_148794:
    // 0x148794: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x148794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_148798:
    // 0x148798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14879c:
    // 0x14879c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1487a0:
    // 0x1487a0: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1487a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1487a4:
    // 0x1487a4: 0x3c02c296  lui         $v0, 0xC296
    ctx->pc = 0x1487a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49814 << 16));
label_1487a8:
    // 0x1487a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1487a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1487ac:
    // 0x1487ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1487acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1487b0:
    // 0x1487b0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1487b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1487b4:
    // 0x1487b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1487b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1487b8:
    // 0x1487b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1487b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1487bc:
    // 0x1487bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1487bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1487c0:
    // 0x1487c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1487c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1487c4:
    // 0x1487c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1487c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1487c8:
    // 0x1487c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1487c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1487cc:
    // 0x1487cc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1487ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1487d0:
    // 0x1487d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1487d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1487d4:
    // 0x1487d4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1487d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1487d8:
    // 0x1487d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1487d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1487dc:
    // 0x1487dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1487dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1487e0:
    // 0x1487e0: 0xc096b40  jal         func_25AD00
label_1487e4:
    if (ctx->pc == 0x1487E4u) {
        ctx->pc = 0x1487E8u;
        goto label_1487e8;
    }
    ctx->pc = 0x1487E0u;
    SET_GPR_U32(ctx, 31, 0x1487E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1487E0u, 0x1487E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487E8u;
label_1487e8:
    // 0x1487e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1487e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1487ec:
    // 0x1487ec: 0xc05cd10  jal         func_173440
label_1487f0:
    if (ctx->pc == 0x1487F0u) {
        ctx->pc = 0x1487F4u;
        goto label_1487f4;
    }
    ctx->pc = 0x1487ECu;
    SET_GPR_U32(ctx, 31, 0x1487F4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1487ECu, 0x1487F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487F4u;
label_1487f4:
    // 0x1487f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1487f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1487f8:
    // 0x1487f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1487f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1487fc:
    // 0x1487fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1487fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_148800:
    // 0x148800: 0xc0573d8  jal         func_15CF60
label_148804:
    if (ctx->pc == 0x148804u) {
        ctx->pc = 0x148808u;
        goto label_148808;
    }
    ctx->pc = 0x148800u;
    SET_GPR_U32(ctx, 31, 0x148808u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x148800u, 0x148808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148808u;
label_148808:
    // 0x148808: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14880c:
    // 0x14880c: 0xc05cf54  jal         func_173D50
label_148810:
    if (ctx->pc == 0x148810u) {
        ctx->pc = 0x148814u;
        goto label_148814;
    }
    ctx->pc = 0x14880Cu;
    SET_GPR_U32(ctx, 31, 0x148814u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x14880Cu, 0x148814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148814u;
label_148814:
    // 0x148814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_148818:
    if (ctx->pc == 0x148818u) {
        ctx->pc = 0x14881Cu;
        goto label_14881c;
    }
    ctx->pc = 0x148814u;
    {
        const bool branch_taken_0x148814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148814) {
            ctx->pc = 0x148828u;
            goto label_148828;
        }
    }
    ctx->pc = 0x14881Cu;
label_14881c:
    // 0x14881c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x14881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_148820:
    // 0x148820: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148824:
    // 0x148824: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x148824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_148828:
    // 0x148828: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14882c:
    // 0x14882c: 0xc097530  jal         func_25D4C0
label_148830:
    if (ctx->pc == 0x148830u) {
        ctx->pc = 0x148834u;
        goto label_148834;
    }
    ctx->pc = 0x14882Cu;
    SET_GPR_U32(ctx, 31, 0x148834u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14882Cu, 0x148834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148834u;
label_148834:
    // 0x148834: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148838:
    // 0x148838: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x148838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14883c:
    // 0x14883c: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
label_148840:
    if (ctx->pc == 0x148840u) {
        ctx->pc = 0x148844u;
        goto label_148844;
    }
    ctx->pc = 0x14883Cu;
    {
        const bool branch_taken_0x14883c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14883c) {
            ctx->pc = 0x148AD4u;
            goto label_148ad4;
        }
    }
    ctx->pc = 0x148844u;
label_148844:
    // 0x148844: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x148844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_148848:
    // 0x148848: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14884c:
    // 0x14884c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x14884cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_148850:
    // 0x148850: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_148854:
    if (ctx->pc == 0x148854u) {
        ctx->pc = 0x148858u;
        goto label_148858;
    }
    ctx->pc = 0x148850u;
    {
        const bool branch_taken_0x148850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148850) {
            ctx->pc = 0x148AD4u;
            goto label_148ad4;
        }
    }
    ctx->pc = 0x148858u;
label_148858:
    // 0x148858: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14885c:
    // 0x14885c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148860:
    // 0x148860: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_148864:
    // 0x148864: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x148864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_148868:
    // 0x148868: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x148868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14886c:
    // 0x14886c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14886cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_148870:
    // 0x148870: 0xc0965d0  jal         func_259740
label_148874:
    if (ctx->pc == 0x148874u) {
        ctx->pc = 0x148878u;
        goto label_148878;
    }
    ctx->pc = 0x148870u;
    SET_GPR_U32(ctx, 31, 0x148878u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148870u, 0x148878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148878u;
label_148878:
    // 0x148878: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14887c:
    // 0x14887c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x14887cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_148880:
    // 0x148880: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148884:
    // 0x148884: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_148888:
    // 0x148888: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14888c:
    // 0x14888c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14888cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_148890:
    // 0x148890: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148894:
    // 0x148894: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x148894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_148898:
    // 0x148898: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x148898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_14889c:
    // 0x14889c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14889cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1488a0:
    // 0x1488a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1488a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1488a4:
    // 0x1488a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1488a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1488a8:
    // 0x1488a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1488a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1488ac:
    // 0x1488ac: 0xc096b40  jal         func_25AD00
label_1488b0:
    if (ctx->pc == 0x1488B0u) {
        ctx->pc = 0x1488B4u;
        goto label_1488b4;
    }
    ctx->pc = 0x1488ACu;
    SET_GPR_U32(ctx, 31, 0x1488B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1488ACu, 0x1488B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488B4u;
label_1488b4:
    // 0x1488b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1488b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1488b8:
    // 0x1488b8: 0xc05cd10  jal         func_173440
label_1488bc:
    if (ctx->pc == 0x1488BCu) {
        ctx->pc = 0x1488C0u;
        goto label_1488c0;
    }
    ctx->pc = 0x1488B8u;
    SET_GPR_U32(ctx, 31, 0x1488C0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1488B8u, 0x1488C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488C0u;
label_1488c0:
    // 0x1488c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1488c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1488c4:
    // 0x1488c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1488c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1488c8:
    // 0x1488c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1488c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1488cc:
    // 0x1488cc: 0xc0573d8  jal         func_15CF60
label_1488d0:
    if (ctx->pc == 0x1488D0u) {
        ctx->pc = 0x1488D4u;
        goto label_1488d4;
    }
    ctx->pc = 0x1488CCu;
    SET_GPR_U32(ctx, 31, 0x1488D4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1488CCu, 0x1488D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488D4u;
label_1488d4:
    // 0x1488d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1488d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1488d8:
    // 0x1488d8: 0xc05cf54  jal         func_173D50
label_1488dc:
    if (ctx->pc == 0x1488DCu) {
        ctx->pc = 0x1488E0u;
        goto label_1488e0;
    }
    ctx->pc = 0x1488D8u;
    SET_GPR_U32(ctx, 31, 0x1488E0u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x1488D8u, 0x1488E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488E0u;
label_1488e0:
    // 0x1488e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1488e4:
    if (ctx->pc == 0x1488E4u) {
        ctx->pc = 0x1488E8u;
        goto label_1488e8;
    }
    ctx->pc = 0x1488E0u;
    {
        const bool branch_taken_0x1488e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1488e0) {
            ctx->pc = 0x1488F8u;
            goto label_1488f8;
        }
    }
    ctx->pc = 0x1488E8u;
label_1488e8:
    // 0x1488e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1488e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1488ec:
    // 0x1488ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1488ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1488f0:
    // 0x1488f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1488f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1488f4:
    // 0x1488f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1488f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1488f8:
    // 0x1488f8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1488f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1488fc:
    // 0x1488fc: 0xc097530  jal         func_25D4C0
label_148900:
    if (ctx->pc == 0x148900u) {
        ctx->pc = 0x148904u;
        goto label_148904;
    }
    ctx->pc = 0x1488FCu;
    SET_GPR_U32(ctx, 31, 0x148904u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1488FCu, 0x148904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148904u;
label_148904:
    // 0x148904: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148908:
    // 0x148908: 0xc4401388  lwc1        $f0, 0x1388($v0)
    ctx->pc = 0x148908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14890c:
    // 0x14890c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148910:
    // 0x148910: 0xe4401b5c  swc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x148910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7004), bits); }
label_148914:
    // 0x148914: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x148914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148918:
    // 0x148918: 0xc0587a8  jal         func_161EA0
label_14891c:
    if (ctx->pc == 0x14891Cu) {
        ctx->pc = 0x148920u;
        goto label_148920;
    }
    ctx->pc = 0x148918u;
    SET_GPR_U32(ctx, 31, 0x148920u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x148918u, 0x148920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148920u;
label_148920:
    // 0x148920: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
label_148924:
    if (ctx->pc == 0x148924u) {
        ctx->pc = 0x148928u;
        goto label_148928;
    }
    ctx->pc = 0x148920u;
    {
        const bool branch_taken_0x148920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148920) {
            ctx->pc = 0x148AD4u;
            goto label_148ad4;
        }
    }
    ctx->pc = 0x148928u;
label_148928:
    // 0x148928: 0x1000006a  b           . + 4 + (0x6A << 2)
label_14892c:
    if (ctx->pc == 0x14892Cu) {
        ctx->pc = 0x148930u;
        goto label_148930;
    }
    ctx->pc = 0x148928u;
    {
        const bool branch_taken_0x148928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148928) {
            ctx->pc = 0x148AD4u;
            goto label_148ad4;
        }
    }
    ctx->pc = 0x148930u;
label_148930:
    // 0x148930: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148934:
    // 0x148934: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x148934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_148938:
    // 0x148938: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x148938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
label_14893c:
    // 0x14893c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_148940:
    // 0x148940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_148944:
    // 0x148944: 0x0  nop
    ctx->pc = 0x148944u;
    // NOP
label_148948:
    // 0x148948: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14894c:
    // 0x14894c: 0x0  nop
    ctx->pc = 0x14894cu;
    // NOP
label_148950:
    // 0x148950: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_148954:
    if (ctx->pc == 0x148954u) {
        ctx->pc = 0x148958u;
        goto label_148958;
    }
    ctx->pc = 0x148950u;
    {
        const bool branch_taken_0x148950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148950) {
            ctx->pc = 0x148988u;
            goto label_148988;
        }
    }
    ctx->pc = 0x148958u;
label_148958:
    // 0x148958: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14895c:
    // 0x14895c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148960:
    // 0x148960: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_148964:
    // 0x148964: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x148964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_148968:
    // 0x148968: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x148968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14896c:
    // 0x14896c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14896cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_148970:
    // 0x148970: 0xc0965d0  jal         func_259740
label_148974:
    if (ctx->pc == 0x148974u) {
        ctx->pc = 0x148978u;
        goto label_148978;
    }
    ctx->pc = 0x148970u;
    SET_GPR_U32(ctx, 31, 0x148978u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148970u, 0x148978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148978u;
label_148978:
    // 0x148978: 0xc05772c  jal         func_15DCB0
label_14897c:
    if (ctx->pc == 0x14897Cu) {
        ctx->pc = 0x148980u;
        goto label_148980;
    }
    ctx->pc = 0x148978u;
    SET_GPR_U32(ctx, 31, 0x148980u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x148978u, 0x148980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148980u;
label_148980:
    // 0x148980: 0x10000012  b           . + 4 + (0x12 << 2)
label_148984:
    if (ctx->pc == 0x148984u) {
        ctx->pc = 0x148988u;
        goto label_148988;
    }
    ctx->pc = 0x148980u;
    {
        const bool branch_taken_0x148980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148980) {
            ctx->pc = 0x1489CCu;
            goto label_1489cc;
        }
    }
    ctx->pc = 0x148988u;
label_148988:
    // 0x148988: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14898c:
    // 0x14898c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148990:
    // 0x148990: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_148994:
    // 0x148994: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x148994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_148998:
    // 0x148998: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x148998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14899c:
    // 0x14899c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14899cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1489a0:
    // 0x1489a0: 0xc0965d0  jal         func_259740
label_1489a4:
    if (ctx->pc == 0x1489A4u) {
        ctx->pc = 0x1489A8u;
        goto label_1489a8;
    }
    ctx->pc = 0x1489A0u;
    SET_GPR_U32(ctx, 31, 0x1489A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1489A0u, 0x1489A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489A8u;
label_1489a8:
    // 0x1489a8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1489a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1489ac:
    // 0x1489ac: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1489acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1489b0:
    // 0x1489b0: 0xc0684d8  jal         func_1A1360
label_1489b4:
    if (ctx->pc == 0x1489B4u) {
        ctx->pc = 0x1489B8u;
        goto label_1489b8;
    }
    ctx->pc = 0x1489B0u;
    SET_GPR_U32(ctx, 31, 0x1489B8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1489B0u, 0x1489B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489B8u;
label_1489b8:
    // 0x1489b8: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1489b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_1489bc:
    // 0x1489bc: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x1489bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_1489c0:
    // 0x1489c0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1489c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_1489c4:
    // 0x1489c4: 0xc0684d8  jal         func_1A1360
label_1489c8:
    if (ctx->pc == 0x1489C8u) {
        ctx->pc = 0x1489CCu;
        goto label_1489cc;
    }
    ctx->pc = 0x1489C4u;
    SET_GPR_U32(ctx, 31, 0x1489CCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1489C4u, 0x1489CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489CCu;
label_1489cc:
    // 0x1489cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1489ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1489d0:
    // 0x1489d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1489d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1489d4:
    // 0x1489d4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1489d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1489d8:
    // 0x1489d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1489d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1489dc:
    // 0x1489dc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1489dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1489e0:
    // 0x1489e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1489e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1489e4:
    // 0x1489e4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1489e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1489e8:
    // 0x1489e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1489e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1489ec:
    // 0x1489ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1489ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1489f0:
    // 0x1489f0: 0xc096b40  jal         func_25AD00
label_1489f4:
    if (ctx->pc == 0x1489F4u) {
        ctx->pc = 0x1489F8u;
        goto label_1489f8;
    }
    ctx->pc = 0x1489F0u;
    SET_GPR_U32(ctx, 31, 0x1489F8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1489F0u, 0x1489F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489F8u;
label_1489f8:
    // 0x1489f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1489f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1489fc:
    // 0x1489fc: 0xc05cd10  jal         func_173440
label_148a00:
    if (ctx->pc == 0x148A00u) {
        ctx->pc = 0x148A04u;
        goto label_148a04;
    }
    ctx->pc = 0x1489FCu;
    SET_GPR_U32(ctx, 31, 0x148A04u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1489FCu, 0x148A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A04u;
label_148a04:
    // 0x148a04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x148a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_148a08:
    // 0x148a08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148a0c:
    // 0x148a0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148a0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_148a10:
    // 0x148a10: 0xc0573d8  jal         func_15CF60
label_148a14:
    if (ctx->pc == 0x148A14u) {
        ctx->pc = 0x148A18u;
        goto label_148a18;
    }
    ctx->pc = 0x148A10u;
    SET_GPR_U32(ctx, 31, 0x148A18u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x148A10u, 0x148A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A18u;
label_148a18:
    // 0x148a18: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148a18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_148a1c:
    // 0x148a1c: 0xc097530  jal         func_25D4C0
label_148a20:
    if (ctx->pc == 0x148A20u) {
        ctx->pc = 0x148A24u;
        goto label_148a24;
    }
    ctx->pc = 0x148A1Cu;
    SET_GPR_U32(ctx, 31, 0x148A24u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x148A1Cu, 0x148A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A24u;
label_148a24:
    // 0x148a24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148a28:
    // 0x148a28: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x148a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_148a2c:
    // 0x148a2c: 0xc057b54  jal         func_15ED50
label_148a30:
    if (ctx->pc == 0x148A30u) {
        ctx->pc = 0x148A34u;
        goto label_148a34;
    }
    ctx->pc = 0x148A2Cu;
    SET_GPR_U32(ctx, 31, 0x148A34u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x148A2Cu, 0x148A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A34u;
label_148a34:
    // 0x148a34: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_148a38:
    if (ctx->pc == 0x148A38u) {
        ctx->pc = 0x148A3Cu;
        goto label_148a3c;
    }
    ctx->pc = 0x148A34u;
    {
        const bool branch_taken_0x148a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148a34) {
            ctx->pc = 0x148AD4u;
            goto label_148ad4;
        }
    }
    ctx->pc = 0x148A3Cu;
label_148a3c:
    // 0x148a3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148a40:
    // 0x148a40: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x148a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_148a44:
    // 0x148a44: 0xc057b04  jal         func_15EC10
label_148a48:
    if (ctx->pc == 0x148A48u) {
        ctx->pc = 0x148A4Cu;
        goto label_148a4c;
    }
    ctx->pc = 0x148A44u;
    SET_GPR_U32(ctx, 31, 0x148A4Cu);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x148A44u, 0x148A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A4Cu;
label_148a4c:
    // 0x148a4c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_148a50:
    if (ctx->pc == 0x148A50u) {
        ctx->pc = 0x148A54u;
        goto label_148a54;
    }
    ctx->pc = 0x148A4Cu;
    {
        const bool branch_taken_0x148a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148a4c) {
            ctx->pc = 0x148AD4u;
            goto label_148ad4;
        }
    }
    ctx->pc = 0x148A54u;
label_148a54:
    // 0x148a54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148a58:
    // 0x148a58: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x148a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_148a5c:
    // 0x148a5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x148a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_148a60:
    // 0x148a60: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x148a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_148a64:
    // 0x148a64: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_148a68:
    if (ctx->pc == 0x148A68u) {
        ctx->pc = 0x148A6Cu;
        goto label_148a6c;
    }
    ctx->pc = 0x148A64u;
    {
        const bool branch_taken_0x148a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a64) {
            ctx->pc = 0x148A8Cu;
            goto label_148a8c;
        }
    }
    ctx->pc = 0x148A6Cu;
label_148a6c:
    // 0x148a6c: 0xc0585dc  jal         func_161770
label_148a70:
    if (ctx->pc == 0x148A70u) {
        ctx->pc = 0x148A74u;
        goto label_148a74;
    }
    ctx->pc = 0x148A6Cu;
    SET_GPR_U32(ctx, 31, 0x148A74u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x148A6Cu, 0x148A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A74u;
label_148a74:
    // 0x148a74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_148a78:
    if (ctx->pc == 0x148A78u) {
        ctx->pc = 0x148A7Cu;
        goto label_148a7c;
    }
    ctx->pc = 0x148A74u;
    {
        const bool branch_taken_0x148a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a74) {
            ctx->pc = 0x148A8Cu;
            goto label_148a8c;
        }
    }
    ctx->pc = 0x148A7Cu;
label_148a7c:
    // 0x148a7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148a80:
    // 0x148a80: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x148a80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_148a84:
    // 0x148a84: 0x10000013  b           . + 4 + (0x13 << 2)
label_148a88:
    if (ctx->pc == 0x148A88u) {
        ctx->pc = 0x148A8Cu;
        goto label_148a8c;
    }
    ctx->pc = 0x148A84u;
    {
        const bool branch_taken_0x148a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a84) {
            ctx->pc = 0x148AD4u;
            goto label_148ad4;
        }
    }
    ctx->pc = 0x148A8Cu;
label_148a8c:
    // 0x148a8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148a90:
    // 0x148a90: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x148a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_148a94:
    // 0x148a94: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_148a98:
    if (ctx->pc == 0x148A98u) {
        ctx->pc = 0x148A9Cu;
        goto label_148a9c;
    }
    ctx->pc = 0x148A94u;
    {
        const bool branch_taken_0x148a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a94) {
            ctx->pc = 0x148AD4u;
            goto label_148ad4;
        }
    }
    ctx->pc = 0x148A9Cu;
label_148a9c:
    // 0x148a9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x148a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148aa0:
    // 0x148aa0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148aa4:
    // 0x148aa4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x148aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_148aa8:
    // 0x148aa8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148aac:
    // 0x148aac: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x148aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_148ab0:
    // 0x148ab0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148ab4:
    // 0x148ab4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x148ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_148ab8:
    // 0x148ab8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148abc:
    // 0x148abc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x148abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_148ac0:
    // 0x148ac0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x148ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_148ac4:
    // 0x148ac4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148ac8:
    // 0x148ac8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x148ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_148acc:
    // 0x148acc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148ad0:
    // 0x148ad0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x148ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_148ad4:
    // 0x148ad4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x148ad4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_148ad8:
    // 0x148ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_148adc:
    // 0x148adc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x148adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_148ae0:
    // 0x148ae0: 0x3e00008  jr          $ra
label_148ae4:
    if (ctx->pc == 0x148AE4u) {
        ctx->pc = 0x148AE8u;
        goto label_fallthrough_0x148ae0;
    }
    ctx->pc = 0x148AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x148ae0:
    ctx->pc = 0x148AE8u;
}
