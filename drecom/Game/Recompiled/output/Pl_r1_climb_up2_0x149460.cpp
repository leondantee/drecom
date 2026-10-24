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

// Function: Pl_r1_climb_up2
// Address: 0x149460 - 0x149940
void Pl_r1_climb_up2_0x149460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_climb_up2_0x149460");
#endif

    switch (ctx->pc) {
        case 0x149460u: goto label_149460;
        case 0x149464u: goto label_149464;
        case 0x149468u: goto label_149468;
        case 0x14946cu: goto label_14946c;
        case 0x149470u: goto label_149470;
        case 0x149474u: goto label_149474;
        case 0x149478u: goto label_149478;
        case 0x14947cu: goto label_14947c;
        case 0x149480u: goto label_149480;
        case 0x149484u: goto label_149484;
        case 0x149488u: goto label_149488;
        case 0x14948cu: goto label_14948c;
        case 0x149490u: goto label_149490;
        case 0x149494u: goto label_149494;
        case 0x149498u: goto label_149498;
        case 0x14949cu: goto label_14949c;
        case 0x1494a0u: goto label_1494a0;
        case 0x1494a4u: goto label_1494a4;
        case 0x1494a8u: goto label_1494a8;
        case 0x1494acu: goto label_1494ac;
        case 0x1494b0u: goto label_1494b0;
        case 0x1494b4u: goto label_1494b4;
        case 0x1494b8u: goto label_1494b8;
        case 0x1494bcu: goto label_1494bc;
        case 0x1494c0u: goto label_1494c0;
        case 0x1494c4u: goto label_1494c4;
        case 0x1494c8u: goto label_1494c8;
        case 0x1494ccu: goto label_1494cc;
        case 0x1494d0u: goto label_1494d0;
        case 0x1494d4u: goto label_1494d4;
        case 0x1494d8u: goto label_1494d8;
        case 0x1494dcu: goto label_1494dc;
        case 0x1494e0u: goto label_1494e0;
        case 0x1494e4u: goto label_1494e4;
        case 0x1494e8u: goto label_1494e8;
        case 0x1494ecu: goto label_1494ec;
        case 0x1494f0u: goto label_1494f0;
        case 0x1494f4u: goto label_1494f4;
        case 0x1494f8u: goto label_1494f8;
        case 0x1494fcu: goto label_1494fc;
        case 0x149500u: goto label_149500;
        case 0x149504u: goto label_149504;
        case 0x149508u: goto label_149508;
        case 0x14950cu: goto label_14950c;
        case 0x149510u: goto label_149510;
        case 0x149514u: goto label_149514;
        case 0x149518u: goto label_149518;
        case 0x14951cu: goto label_14951c;
        case 0x149520u: goto label_149520;
        case 0x149524u: goto label_149524;
        case 0x149528u: goto label_149528;
        case 0x14952cu: goto label_14952c;
        case 0x149530u: goto label_149530;
        case 0x149534u: goto label_149534;
        case 0x149538u: goto label_149538;
        case 0x14953cu: goto label_14953c;
        case 0x149540u: goto label_149540;
        case 0x149544u: goto label_149544;
        case 0x149548u: goto label_149548;
        case 0x14954cu: goto label_14954c;
        case 0x149550u: goto label_149550;
        case 0x149554u: goto label_149554;
        case 0x149558u: goto label_149558;
        case 0x14955cu: goto label_14955c;
        case 0x149560u: goto label_149560;
        case 0x149564u: goto label_149564;
        case 0x149568u: goto label_149568;
        case 0x14956cu: goto label_14956c;
        case 0x149570u: goto label_149570;
        case 0x149574u: goto label_149574;
        case 0x149578u: goto label_149578;
        case 0x14957cu: goto label_14957c;
        case 0x149580u: goto label_149580;
        case 0x149584u: goto label_149584;
        case 0x149588u: goto label_149588;
        case 0x14958cu: goto label_14958c;
        case 0x149590u: goto label_149590;
        case 0x149594u: goto label_149594;
        case 0x149598u: goto label_149598;
        case 0x14959cu: goto label_14959c;
        case 0x1495a0u: goto label_1495a0;
        case 0x1495a4u: goto label_1495a4;
        case 0x1495a8u: goto label_1495a8;
        case 0x1495acu: goto label_1495ac;
        case 0x1495b0u: goto label_1495b0;
        case 0x1495b4u: goto label_1495b4;
        case 0x1495b8u: goto label_1495b8;
        case 0x1495bcu: goto label_1495bc;
        case 0x1495c0u: goto label_1495c0;
        case 0x1495c4u: goto label_1495c4;
        case 0x1495c8u: goto label_1495c8;
        case 0x1495ccu: goto label_1495cc;
        case 0x1495d0u: goto label_1495d0;
        case 0x1495d4u: goto label_1495d4;
        case 0x1495d8u: goto label_1495d8;
        case 0x1495dcu: goto label_1495dc;
        case 0x1495e0u: goto label_1495e0;
        case 0x1495e4u: goto label_1495e4;
        case 0x1495e8u: goto label_1495e8;
        case 0x1495ecu: goto label_1495ec;
        case 0x1495f0u: goto label_1495f0;
        case 0x1495f4u: goto label_1495f4;
        case 0x1495f8u: goto label_1495f8;
        case 0x1495fcu: goto label_1495fc;
        case 0x149600u: goto label_149600;
        case 0x149604u: goto label_149604;
        case 0x149608u: goto label_149608;
        case 0x14960cu: goto label_14960c;
        case 0x149610u: goto label_149610;
        case 0x149614u: goto label_149614;
        case 0x149618u: goto label_149618;
        case 0x14961cu: goto label_14961c;
        case 0x149620u: goto label_149620;
        case 0x149624u: goto label_149624;
        case 0x149628u: goto label_149628;
        case 0x14962cu: goto label_14962c;
        case 0x149630u: goto label_149630;
        case 0x149634u: goto label_149634;
        case 0x149638u: goto label_149638;
        case 0x14963cu: goto label_14963c;
        case 0x149640u: goto label_149640;
        case 0x149644u: goto label_149644;
        case 0x149648u: goto label_149648;
        case 0x14964cu: goto label_14964c;
        case 0x149650u: goto label_149650;
        case 0x149654u: goto label_149654;
        case 0x149658u: goto label_149658;
        case 0x14965cu: goto label_14965c;
        case 0x149660u: goto label_149660;
        case 0x149664u: goto label_149664;
        case 0x149668u: goto label_149668;
        case 0x14966cu: goto label_14966c;
        case 0x149670u: goto label_149670;
        case 0x149674u: goto label_149674;
        case 0x149678u: goto label_149678;
        case 0x14967cu: goto label_14967c;
        case 0x149680u: goto label_149680;
        case 0x149684u: goto label_149684;
        case 0x149688u: goto label_149688;
        case 0x14968cu: goto label_14968c;
        case 0x149690u: goto label_149690;
        case 0x149694u: goto label_149694;
        case 0x149698u: goto label_149698;
        case 0x14969cu: goto label_14969c;
        case 0x1496a0u: goto label_1496a0;
        case 0x1496a4u: goto label_1496a4;
        case 0x1496a8u: goto label_1496a8;
        case 0x1496acu: goto label_1496ac;
        case 0x1496b0u: goto label_1496b0;
        case 0x1496b4u: goto label_1496b4;
        case 0x1496b8u: goto label_1496b8;
        case 0x1496bcu: goto label_1496bc;
        case 0x1496c0u: goto label_1496c0;
        case 0x1496c4u: goto label_1496c4;
        case 0x1496c8u: goto label_1496c8;
        case 0x1496ccu: goto label_1496cc;
        case 0x1496d0u: goto label_1496d0;
        case 0x1496d4u: goto label_1496d4;
        case 0x1496d8u: goto label_1496d8;
        case 0x1496dcu: goto label_1496dc;
        case 0x1496e0u: goto label_1496e0;
        case 0x1496e4u: goto label_1496e4;
        case 0x1496e8u: goto label_1496e8;
        case 0x1496ecu: goto label_1496ec;
        case 0x1496f0u: goto label_1496f0;
        case 0x1496f4u: goto label_1496f4;
        case 0x1496f8u: goto label_1496f8;
        case 0x1496fcu: goto label_1496fc;
        case 0x149700u: goto label_149700;
        case 0x149704u: goto label_149704;
        case 0x149708u: goto label_149708;
        case 0x14970cu: goto label_14970c;
        case 0x149710u: goto label_149710;
        case 0x149714u: goto label_149714;
        case 0x149718u: goto label_149718;
        case 0x14971cu: goto label_14971c;
        case 0x149720u: goto label_149720;
        case 0x149724u: goto label_149724;
        case 0x149728u: goto label_149728;
        case 0x14972cu: goto label_14972c;
        case 0x149730u: goto label_149730;
        case 0x149734u: goto label_149734;
        case 0x149738u: goto label_149738;
        case 0x14973cu: goto label_14973c;
        case 0x149740u: goto label_149740;
        case 0x149744u: goto label_149744;
        case 0x149748u: goto label_149748;
        case 0x14974cu: goto label_14974c;
        case 0x149750u: goto label_149750;
        case 0x149754u: goto label_149754;
        case 0x149758u: goto label_149758;
        case 0x14975cu: goto label_14975c;
        case 0x149760u: goto label_149760;
        case 0x149764u: goto label_149764;
        case 0x149768u: goto label_149768;
        case 0x14976cu: goto label_14976c;
        case 0x149770u: goto label_149770;
        case 0x149774u: goto label_149774;
        case 0x149778u: goto label_149778;
        case 0x14977cu: goto label_14977c;
        case 0x149780u: goto label_149780;
        case 0x149784u: goto label_149784;
        case 0x149788u: goto label_149788;
        case 0x14978cu: goto label_14978c;
        case 0x149790u: goto label_149790;
        case 0x149794u: goto label_149794;
        case 0x149798u: goto label_149798;
        case 0x14979cu: goto label_14979c;
        case 0x1497a0u: goto label_1497a0;
        case 0x1497a4u: goto label_1497a4;
        case 0x1497a8u: goto label_1497a8;
        case 0x1497acu: goto label_1497ac;
        case 0x1497b0u: goto label_1497b0;
        case 0x1497b4u: goto label_1497b4;
        case 0x1497b8u: goto label_1497b8;
        case 0x1497bcu: goto label_1497bc;
        case 0x1497c0u: goto label_1497c0;
        case 0x1497c4u: goto label_1497c4;
        case 0x1497c8u: goto label_1497c8;
        case 0x1497ccu: goto label_1497cc;
        case 0x1497d0u: goto label_1497d0;
        case 0x1497d4u: goto label_1497d4;
        case 0x1497d8u: goto label_1497d8;
        case 0x1497dcu: goto label_1497dc;
        case 0x1497e0u: goto label_1497e0;
        case 0x1497e4u: goto label_1497e4;
        case 0x1497e8u: goto label_1497e8;
        case 0x1497ecu: goto label_1497ec;
        case 0x1497f0u: goto label_1497f0;
        case 0x1497f4u: goto label_1497f4;
        case 0x1497f8u: goto label_1497f8;
        case 0x1497fcu: goto label_1497fc;
        case 0x149800u: goto label_149800;
        case 0x149804u: goto label_149804;
        case 0x149808u: goto label_149808;
        case 0x14980cu: goto label_14980c;
        case 0x149810u: goto label_149810;
        case 0x149814u: goto label_149814;
        case 0x149818u: goto label_149818;
        case 0x14981cu: goto label_14981c;
        case 0x149820u: goto label_149820;
        case 0x149824u: goto label_149824;
        case 0x149828u: goto label_149828;
        case 0x14982cu: goto label_14982c;
        case 0x149830u: goto label_149830;
        case 0x149834u: goto label_149834;
        case 0x149838u: goto label_149838;
        case 0x14983cu: goto label_14983c;
        case 0x149840u: goto label_149840;
        case 0x149844u: goto label_149844;
        case 0x149848u: goto label_149848;
        case 0x14984cu: goto label_14984c;
        case 0x149850u: goto label_149850;
        case 0x149854u: goto label_149854;
        case 0x149858u: goto label_149858;
        case 0x14985cu: goto label_14985c;
        case 0x149860u: goto label_149860;
        case 0x149864u: goto label_149864;
        case 0x149868u: goto label_149868;
        case 0x14986cu: goto label_14986c;
        case 0x149870u: goto label_149870;
        case 0x149874u: goto label_149874;
        case 0x149878u: goto label_149878;
        case 0x14987cu: goto label_14987c;
        case 0x149880u: goto label_149880;
        case 0x149884u: goto label_149884;
        case 0x149888u: goto label_149888;
        case 0x14988cu: goto label_14988c;
        case 0x149890u: goto label_149890;
        case 0x149894u: goto label_149894;
        case 0x149898u: goto label_149898;
        case 0x14989cu: goto label_14989c;
        case 0x1498a0u: goto label_1498a0;
        case 0x1498a4u: goto label_1498a4;
        case 0x1498a8u: goto label_1498a8;
        case 0x1498acu: goto label_1498ac;
        case 0x1498b0u: goto label_1498b0;
        case 0x1498b4u: goto label_1498b4;
        case 0x1498b8u: goto label_1498b8;
        case 0x1498bcu: goto label_1498bc;
        case 0x1498c0u: goto label_1498c0;
        case 0x1498c4u: goto label_1498c4;
        case 0x1498c8u: goto label_1498c8;
        case 0x1498ccu: goto label_1498cc;
        case 0x1498d0u: goto label_1498d0;
        case 0x1498d4u: goto label_1498d4;
        case 0x1498d8u: goto label_1498d8;
        case 0x1498dcu: goto label_1498dc;
        case 0x1498e0u: goto label_1498e0;
        case 0x1498e4u: goto label_1498e4;
        case 0x1498e8u: goto label_1498e8;
        case 0x1498ecu: goto label_1498ec;
        case 0x1498f0u: goto label_1498f0;
        case 0x1498f4u: goto label_1498f4;
        case 0x1498f8u: goto label_1498f8;
        case 0x1498fcu: goto label_1498fc;
        case 0x149900u: goto label_149900;
        case 0x149904u: goto label_149904;
        case 0x149908u: goto label_149908;
        case 0x14990cu: goto label_14990c;
        case 0x149910u: goto label_149910;
        case 0x149914u: goto label_149914;
        case 0x149918u: goto label_149918;
        case 0x14991cu: goto label_14991c;
        case 0x149920u: goto label_149920;
        case 0x149924u: goto label_149924;
        case 0x149928u: goto label_149928;
        case 0x14992cu: goto label_14992c;
        case 0x149930u: goto label_149930;
        case 0x149934u: goto label_149934;
        case 0x149938u: goto label_149938;
        case 0x14993cu: goto label_14993c;
        default: break;
    }

    ctx->pc = 0x149460u;

label_149460:
    // 0x149460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_149464:
    // 0x149464: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x149464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_149468:
    // 0x149468: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x149468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_14946c:
    // 0x14946c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149470:
    // 0x149470: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x149470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_149474:
    // 0x149474: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x149474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_149478:
    // 0x149478: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x149478u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_14947c:
    // 0x14947c: 0x1020012c  beqz        $at, . + 4 + (0x12C << 2)
label_149480:
    if (ctx->pc == 0x149480u) {
        ctx->pc = 0x149484u;
        goto label_149484;
    }
    ctx->pc = 0x14947Cu;
    {
        const bool branch_taken_0x14947c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14947c) {
            ctx->pc = 0x149930u;
            goto label_149930;
        }
    }
    ctx->pc = 0x149484u;
label_149484:
    // 0x149484: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x149484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_149488:
    // 0x149488: 0x2464e7e0  addiu       $a0, $v1, -0x1820
    ctx->pc = 0x149488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961120));
label_14948c:
    // 0x14948c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14948cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_149490:
    // 0x149490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x149490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_149494:
    // 0x149494: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x149494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_149498:
    // 0x149498: 0x600008  jr          $v1
label_14949c:
    if (ctx->pc == 0x14949Cu) {
        ctx->pc = 0x1494A0u;
        goto label_1494a0;
    }
    ctx->pc = 0x149498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149498u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1494A0u;
label_1494a0:
    // 0x1494a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1494a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1494a4:
    // 0x1494a4: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x1494a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1494a8:
    // 0x1494a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1494a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1494ac:
    // 0x1494ac: 0xc4411b30  lwc1        $f1, 0x1B30($v0)
    ctx->pc = 0x1494acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1494b0:
    // 0x1494b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1494b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1494b4:
    // 0x1494b4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1494b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1494b8:
    // 0x1494b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1494b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1494bc:
    // 0x1494bc: 0x3c02447c  lui         $v0, 0x447C
    ctx->pc = 0x1494bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17532 << 16));
label_1494c0:
    // 0x1494c0: 0x3442208b  ori         $v0, $v0, 0x208B
    ctx->pc = 0x1494c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8331);
label_1494c4:
    // 0x1494c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1494c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1494c8:
    // 0x1494c8: 0x0  nop
    ctx->pc = 0x1494c8u;
    // NOP
label_1494cc:
    // 0x1494cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1494ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1494d0:
    // 0x1494d0: 0x3c02433e  lui         $v0, 0x433E
    ctx->pc = 0x1494d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17214 << 16));
label_1494d4:
    // 0x1494d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1494d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1494d8:
    // 0x1494d8: 0x0  nop
    ctx->pc = 0x1494d8u;
    // NOP
label_1494dc:
    // 0x1494dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1494dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1494e0:
    // 0x1494e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1494e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1494e4:
    // 0x1494e4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1494e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1494e8:
    // 0x1494e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1494e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1494ec:
    // 0x1494ec: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x1494ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
label_1494f0:
    // 0x1494f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1494f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1494f4:
    // 0x1494f4: 0xc4601280  lwc1        $f0, 0x1280($v1)
    ctx->pc = 0x1494f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1494f8:
    // 0x1494f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1494f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1494fc:
    // 0x1494fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1494fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149500:
    // 0x149500: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x149500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_149504:
    // 0x149504: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149508:
    // 0x149508: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14950c:
    // 0x14950c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14950cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_149510:
    // 0x149510: 0x24060a21  addiu       $a2, $zero, 0xA21
    ctx->pc = 0x149510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2593));
label_149514:
    // 0x149514: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x149514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_149518:
    // 0x149518: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14951c:
    // 0x14951c: 0xc0965d0  jal         func_259740
label_149520:
    if (ctx->pc == 0x149520u) {
        ctx->pc = 0x149524u;
        goto label_149524;
    }
    ctx->pc = 0x14951Cu;
    SET_GPR_U32(ctx, 31, 0x149524u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14951Cu, 0x149524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149524u;
label_149524:
    // 0x149524: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x149524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_149528:
    // 0x149528: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14952c:
    // 0x14952c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14952cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_149530:
    // 0x149530: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149534:
    // 0x149534: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149538:
    // 0x149538: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x149538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14953c:
    // 0x14953c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_149540:
    // 0x149540: 0xc058f20  jal         func_163C80
label_149544:
    if (ctx->pc == 0x149544u) {
        ctx->pc = 0x149548u;
        goto label_149548;
    }
    ctx->pc = 0x149540u;
    SET_GPR_U32(ctx, 31, 0x149548u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x149540u, 0x149548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149548u;
label_149548:
    // 0x149548: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14954c:
    // 0x14954c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14954cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_149550:
    // 0x149550: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x149550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_149554:
    // 0x149554: 0x0  nop
    ctx->pc = 0x149554u;
    // NOP
label_149558:
    // 0x149558: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x149558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14955c:
    // 0x14955c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14955cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_149560:
    // 0x149560: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149564:
    // 0x149564: 0xe4401578  swc1        $f0, 0x1578($v0)
    ctx->pc = 0x149564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5496), bits); }
label_149568:
    // 0x149568: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14956c:
    // 0x14956c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14956cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_149570:
    // 0x149570: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_149574:
    // 0x149574: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x149574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_149578:
    // 0x149578: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14957c:
    // 0x14957c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14957cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149580:
    // 0x149580: 0xc096b40  jal         func_25AD00
label_149584:
    if (ctx->pc == 0x149584u) {
        ctx->pc = 0x149588u;
        goto label_149588;
    }
    ctx->pc = 0x149580u;
    SET_GPR_U32(ctx, 31, 0x149588u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149580u, 0x149588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149588u;
label_149588:
    // 0x149588: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14958c:
    // 0x14958c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14958cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_149590:
    // 0x149590: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_149594:
    if (ctx->pc == 0x149594u) {
        ctx->pc = 0x149598u;
        goto label_149598;
    }
    ctx->pc = 0x149590u;
    {
        const bool branch_taken_0x149590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149590) {
            ctx->pc = 0x1495D4u;
            goto label_1495d4;
        }
    }
    ctx->pc = 0x149598u;
label_149598:
    // 0x149598: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14959c:
    // 0x14959c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x14959cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_1495a0:
    // 0x1495a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1495a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1495a4:
    // 0x1495a4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1495a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_1495a8:
    // 0x1495a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1495a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1495ac:
    // 0x1495ac: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1495acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1495b0:
    // 0x1495b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1495b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1495b4:
    // 0x1495b4: 0xc4401578  lwc1        $f0, 0x1578($v0)
    ctx->pc = 0x1495b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1495b8:
    // 0x1495b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1495b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1495bc:
    // 0x1495bc: 0xc058fec  jal         func_163FB0
label_1495c0:
    if (ctx->pc == 0x1495C0u) {
        ctx->pc = 0x1495C4u;
        goto label_1495c4;
    }
    ctx->pc = 0x1495BCu;
    SET_GPR_U32(ctx, 31, 0x1495C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1495BCu, 0x1495C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495C4u;
label_1495c4:
    // 0x1495c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1495c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1495c8:
    // 0x1495c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1495c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1495cc:
    // 0x1495cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1495d0:
    if (ctx->pc == 0x1495D0u) {
        ctx->pc = 0x1495D4u;
        goto label_1495d4;
    }
    ctx->pc = 0x1495CCu;
    {
        const bool branch_taken_0x1495cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1495cc) {
            ctx->pc = 0x1495E4u;
            goto label_1495e4;
        }
    }
    ctx->pc = 0x1495D4u;
label_1495d4:
    // 0x1495d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1495d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1495d8:
    // 0x1495d8: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x1495d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1495dc:
    // 0x1495dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1495dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1495e0:
    // 0x1495e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1495e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1495e4:
    // 0x1495e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1495e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1495e8:
    // 0x1495e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1495e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1495ec:
    // 0x1495ec: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1495ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1495f0:
    // 0x1495f0: 0xc05cd58  jal         func_173560
label_1495f4:
    if (ctx->pc == 0x1495F4u) {
        ctx->pc = 0x1495F8u;
        goto label_1495f8;
    }
    ctx->pc = 0x1495F0u;
    SET_GPR_U32(ctx, 31, 0x1495F8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1495F0u, 0x1495F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495F8u;
label_1495f8:
    // 0x1495f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1495f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1495fc:
    // 0x1495fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1495fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149600:
    // 0x149600: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x149600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_149604:
    // 0x149604: 0xc0573d8  jal         func_15CF60
label_149608:
    if (ctx->pc == 0x149608u) {
        ctx->pc = 0x14960Cu;
        goto label_14960c;
    }
    ctx->pc = 0x149604u;
    SET_GPR_U32(ctx, 31, 0x14960Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x149604u, 0x14960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14960Cu;
label_14960c:
    // 0x14960c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14960cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149610:
    // 0x149610: 0xc097530  jal         func_25D4C0
label_149614:
    if (ctx->pc == 0x149614u) {
        ctx->pc = 0x149618u;
        goto label_149618;
    }
    ctx->pc = 0x149610u;
    SET_GPR_U32(ctx, 31, 0x149618u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x149610u, 0x149618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149618u;
label_149618:
    // 0x149618: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14961c:
    // 0x14961c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14961cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_149620:
    // 0x149620: 0x106000c3  beqz        $v1, . + 4 + (0xC3 << 2)
label_149624:
    if (ctx->pc == 0x149624u) {
        ctx->pc = 0x149628u;
        goto label_149628;
    }
    ctx->pc = 0x149620u;
    {
        const bool branch_taken_0x149620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149620) {
            ctx->pc = 0x149930u;
            goto label_149930;
        }
    }
    ctx->pc = 0x149628u;
label_149628:
    // 0x149628: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14962c:
    // 0x14962c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14962cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_149630:
    // 0x149630: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_149634:
    // 0x149634: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x149634u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_149638:
    // 0x149638: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x149638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14963c:
    // 0x14963c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149640:
    // 0x149640: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x149640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_149644:
    // 0x149644: 0x100000ba  b           . + 4 + (0xBA << 2)
label_149648:
    if (ctx->pc == 0x149648u) {
        ctx->pc = 0x14964Cu;
        goto label_14964c;
    }
    ctx->pc = 0x149644u;
    {
        const bool branch_taken_0x149644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149644) {
            ctx->pc = 0x149930u;
            goto label_149930;
        }
    }
    ctx->pc = 0x14964Cu;
label_14964c:
    // 0x14964c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x14964cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149650:
    // 0x149650: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149654:
    // 0x149654: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_149658:
    // 0x149658: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x149658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_14965c:
    // 0x14965c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14965cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149660:
    // 0x149660: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_149664:
    // 0x149664: 0xc0965d0  jal         func_259740
label_149668:
    if (ctx->pc == 0x149668u) {
        ctx->pc = 0x14966Cu;
        goto label_14966c;
    }
    ctx->pc = 0x149664u;
    SET_GPR_U32(ctx, 31, 0x14966Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149664u, 0x14966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14966Cu;
label_14966c:
    // 0x14966c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14966cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149670:
    // 0x149670: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x149670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_149674:
    // 0x149674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_149678:
    // 0x149678: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x149678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14967c:
    // 0x14967c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x14967cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149680:
    // 0x149680: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149680u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149684:
    // 0x149684: 0xc096b40  jal         func_25AD00
label_149688:
    if (ctx->pc == 0x149688u) {
        ctx->pc = 0x14968Cu;
        goto label_14968c;
    }
    ctx->pc = 0x149684u;
    SET_GPR_U32(ctx, 31, 0x14968Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149684u, 0x14968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14968Cu;
label_14968c:
    // 0x14968c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x14968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149690:
    // 0x149690: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x149690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149694:
    // 0x149694: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149698:
    // 0x149698: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x149698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14969c:
    // 0x14969c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14969cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1496a0:
    // 0x1496a0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1496a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1496a4:
    // 0x1496a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1496a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1496a8:
    // 0x1496a8: 0xc05cd10  jal         func_173440
label_1496ac:
    if (ctx->pc == 0x1496ACu) {
        ctx->pc = 0x1496B0u;
        goto label_1496b0;
    }
    ctx->pc = 0x1496A8u;
    SET_GPR_U32(ctx, 31, 0x1496B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1496A8u, 0x1496B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496B0u;
label_1496b0:
    // 0x1496b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1496b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1496b4:
    // 0x1496b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1496b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1496b8:
    // 0x1496b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1496b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1496bc:
    // 0x1496bc: 0xc0573d8  jal         func_15CF60
label_1496c0:
    if (ctx->pc == 0x1496C0u) {
        ctx->pc = 0x1496C4u;
        goto label_1496c4;
    }
    ctx->pc = 0x1496BCu;
    SET_GPR_U32(ctx, 31, 0x1496C4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1496BCu, 0x1496C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496C4u;
label_1496c4:
    // 0x1496c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1496c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1496c8:
    // 0x1496c8: 0xc097530  jal         func_25D4C0
label_1496cc:
    if (ctx->pc == 0x1496CCu) {
        ctx->pc = 0x1496D0u;
        goto label_1496d0;
    }
    ctx->pc = 0x1496C8u;
    SET_GPR_U32(ctx, 31, 0x1496D0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1496C8u, 0x1496D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496D0u;
label_1496d0:
    // 0x1496d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1496d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1496d4:
    // 0x1496d4: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1496d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1496d8:
    // 0x1496d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1496d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1496dc:
    // 0x1496dc: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1496dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1496e0:
    // 0x1496e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1496e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1496e4:
    // 0x1496e4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1496e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1496e8:
    // 0x1496e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1496e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1496ec:
    // 0x1496ec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1496ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1496f0:
    // 0x1496f0: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
label_1496f4:
    if (ctx->pc == 0x1496F4u) {
        ctx->pc = 0x1496F8u;
        goto label_1496f8;
    }
    ctx->pc = 0x1496F0u;
    {
        const bool branch_taken_0x1496f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1496f0) {
            ctx->pc = 0x149930u;
            goto label_149930;
        }
    }
    ctx->pc = 0x1496F8u;
label_1496f8:
    // 0x1496f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1496f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1496fc:
    // 0x1496fc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1496fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_149700:
    // 0x149700: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_149704:
    // 0x149704: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x149704u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_149708:
    // 0x149708: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14970c:
    // 0x14970c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x14970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149710:
    // 0x149710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149714:
    // 0x149714: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x149714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_149718:
    // 0x149718: 0x10000085  b           . + 4 + (0x85 << 2)
label_14971c:
    if (ctx->pc == 0x14971Cu) {
        ctx->pc = 0x149720u;
        goto label_149720;
    }
    ctx->pc = 0x149718u;
    {
        const bool branch_taken_0x149718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149718) {
            ctx->pc = 0x149930u;
            goto label_149930;
        }
    }
    ctx->pc = 0x149720u;
label_149720:
    // 0x149720: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149724:
    // 0x149724: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149728:
    // 0x149728: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14972c:
    // 0x14972c: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x14972cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_149730:
    // 0x149730: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x149730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149734:
    // 0x149734: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_149738:
    // 0x149738: 0xc0965d0  jal         func_259740
label_14973c:
    if (ctx->pc == 0x14973Cu) {
        ctx->pc = 0x149740u;
        goto label_149740;
    }
    ctx->pc = 0x149738u;
    SET_GPR_U32(ctx, 31, 0x149740u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149738u, 0x149740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149740u;
label_149740:
    // 0x149740: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149744:
    // 0x149744: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x149744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_149748:
    // 0x149748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14974c:
    // 0x14974c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14974cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_149750:
    // 0x149750: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149754:
    // 0x149754: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149754u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149758:
    // 0x149758: 0xc096b40  jal         func_25AD00
label_14975c:
    if (ctx->pc == 0x14975Cu) {
        ctx->pc = 0x149760u;
        goto label_149760;
    }
    ctx->pc = 0x149758u;
    SET_GPR_U32(ctx, 31, 0x149760u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149758u, 0x149760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149760u;
label_149760:
    // 0x149760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149764:
    // 0x149764: 0x944209ee  lhu         $v0, 0x9EE($v0)
    ctx->pc = 0x149764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2542)));
label_149768:
    // 0x149768: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x149768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14976c:
    // 0x14976c: 0x2841006e  slti        $at, $v0, 0x6E
    ctx->pc = 0x14976cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)110) ? 1 : 0);
label_149770:
    // 0x149770: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_149774:
    if (ctx->pc == 0x149774u) {
        ctx->pc = 0x149778u;
        goto label_149778;
    }
    ctx->pc = 0x149770u;
    {
        const bool branch_taken_0x149770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x149770) {
            ctx->pc = 0x149794u;
            goto label_149794;
        }
    }
    ctx->pc = 0x149778u;
label_149778:
    // 0x149778: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14977c:
    // 0x14977c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x14977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149780:
    // 0x149780: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x149780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_149784:
    // 0x149784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_149788:
    // 0x149788: 0x0  nop
    ctx->pc = 0x149788u;
    // NOP
label_14978c:
    // 0x14978c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14978cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_149790:
    // 0x149790: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x149790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_149794:
    // 0x149794: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149798:
    // 0x149798: 0xc05cd10  jal         func_173440
label_14979c:
    if (ctx->pc == 0x14979Cu) {
        ctx->pc = 0x1497A0u;
        goto label_1497a0;
    }
    ctx->pc = 0x149798u;
    SET_GPR_U32(ctx, 31, 0x1497A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x149798u, 0x1497A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1497A0u;
label_1497a0:
    // 0x1497a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1497a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1497a4:
    // 0x1497a4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x1497a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1497a8:
    // 0x1497a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1497a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1497ac:
    // 0x1497ac: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1497acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1497b0:
    // 0x1497b0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1497b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1497b4:
    // 0x1497b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1497b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1497b8:
    // 0x1497b8: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x1497b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1497bc:
    // 0x1497bc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1497bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1497c0:
    // 0x1497c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1497c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1497c4:
    // 0x1497c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1497c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1497c8:
    // 0x1497c8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1497c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1497cc:
    // 0x1497cc: 0xc05cf7c  jal         func_173DF0
label_1497d0:
    if (ctx->pc == 0x1497D0u) {
        ctx->pc = 0x1497D4u;
        goto label_1497d4;
    }
    ctx->pc = 0x1497CCu;
    SET_GPR_U32(ctx, 31, 0x1497D4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1497CCu, 0x1497D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1497D4u;
label_1497d4:
    // 0x1497d4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1497d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1497d8:
    // 0x1497d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1497d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1497dc:
    // 0x1497dc: 0xc4411b30  lwc1        $f1, 0x1B30($v0)
    ctx->pc = 0x1497dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1497e0:
    // 0x1497e0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1497e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1497e4:
    // 0x1497e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1497e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1497e8:
    // 0x1497e8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1497e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1497ec:
    // 0x1497ec: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1497ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1497f0:
    // 0x1497f0: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x1497f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
label_1497f4:
    // 0x1497f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1497f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1497f8:
    // 0x1497f8: 0x0  nop
    ctx->pc = 0x1497f8u;
    // NOP
label_1497fc:
    // 0x1497fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1497fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_149800:
    // 0x149800: 0x0  nop
    ctx->pc = 0x149800u;
    // NOP
label_149804:
    // 0x149804: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_149808:
    if (ctx->pc == 0x149808u) {
        ctx->pc = 0x14980Cu;
        goto label_14980c;
    }
    ctx->pc = 0x149804u;
    {
        const bool branch_taken_0x149804 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149804) {
            ctx->pc = 0x149824u;
            goto label_149824;
        }
    }
    ctx->pc = 0x14980Cu;
label_14980c:
    // 0x14980c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x14980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149810:
    // 0x149810: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x149810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149814:
    // 0x149814: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x149814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149818:
    // 0x149818: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14981c:
    // 0x14981c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x14981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149820:
    // 0x149820: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x149820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_149824:
    // 0x149824: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_149828:
    // 0x149828: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14982c:
    // 0x14982c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_149830:
    // 0x149830: 0xc0573d8  jal         func_15CF60
label_149834:
    if (ctx->pc == 0x149834u) {
        ctx->pc = 0x149838u;
        goto label_149838;
    }
    ctx->pc = 0x149830u;
    SET_GPR_U32(ctx, 31, 0x149838u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x149830u, 0x149838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149838u;
label_149838:
    // 0x149838: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x149838u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14983c:
    // 0x14983c: 0xc097530  jal         func_25D4C0
label_149840:
    if (ctx->pc == 0x149840u) {
        ctx->pc = 0x149844u;
        goto label_149844;
    }
    ctx->pc = 0x14983Cu;
    SET_GPR_U32(ctx, 31, 0x149844u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14983Cu, 0x149844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149844u;
label_149844:
    // 0x149844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149848:
    // 0x149848: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x149848u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
label_14984c:
    // 0x14984c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14984cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_149850:
    // 0x149850: 0x2861008f  slti        $at, $v1, 0x8F
    ctx->pc = 0x149850u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)143) ? 1 : 0);
label_149854:
    // 0x149854: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
label_149858:
    if (ctx->pc == 0x149858u) {
        ctx->pc = 0x14985Cu;
        goto label_14985c;
    }
    ctx->pc = 0x149854u;
    {
        const bool branch_taken_0x149854 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x149854) {
            ctx->pc = 0x1498B8u;
            goto label_1498b8;
        }
    }
    ctx->pc = 0x14985Cu;
label_14985c:
    // 0x14985c: 0xc057acc  jal         func_15EB30
label_149860:
    if (ctx->pc == 0x149860u) {
        ctx->pc = 0x149864u;
        goto label_149864;
    }
    ctx->pc = 0x14985Cu;
    SET_GPR_U32(ctx, 31, 0x149864u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14985Cu, 0x149864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149864u;
label_149864:
    // 0x149864: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_149868:
    if (ctx->pc == 0x149868u) {
        ctx->pc = 0x14986Cu;
        goto label_14986c;
    }
    ctx->pc = 0x149864u;
    {
        const bool branch_taken_0x149864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149864) {
            ctx->pc = 0x1498B8u;
            goto label_1498b8;
        }
    }
    ctx->pc = 0x14986Cu;
label_14986c:
    // 0x14986c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14986cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_149870:
    // 0x149870: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149874:
    // 0x149874: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x149874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_149878:
    // 0x149878: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x149878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14987c:
    // 0x14987c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x14987cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_149880:
    // 0x149880: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x149880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_149884:
    // 0x149884: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x149884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_149888:
    // 0x149888: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x149888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_14988c:
    // 0x14988c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149890:
    // 0x149890: 0xc4611b30  lwc1        $f1, 0x1B30($v1)
    ctx->pc = 0x149890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149894:
    // 0x149894: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x149894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149898:
    // 0x149898: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14989c:
    // 0x14989c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1498a0:
    // 0x1498a0: 0xe4601b30  swc1        $f0, 0x1B30($v1)
    ctx->pc = 0x1498a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6960), bits); }
label_1498a4:
    // 0x1498a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1498a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1498a8:
    // 0x1498a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1498ac:
    // 0x1498ac: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1498acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1498b0:
    // 0x1498b0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1498b4:
    if (ctx->pc == 0x1498B4u) {
        ctx->pc = 0x1498B8u;
        goto label_1498b8;
    }
    ctx->pc = 0x1498B0u;
    {
        const bool branch_taken_0x1498b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1498b0) {
            ctx->pc = 0x149930u;
            goto label_149930;
        }
    }
    ctx->pc = 0x1498B8u;
label_1498b8:
    // 0x1498b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1498bc:
    // 0x1498bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1498bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1498c0:
    // 0x1498c0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1498c4:
    if (ctx->pc == 0x1498C4u) {
        ctx->pc = 0x1498C8u;
        goto label_1498c8;
    }
    ctx->pc = 0x1498C0u;
    {
        const bool branch_taken_0x1498c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1498c0) {
            ctx->pc = 0x149930u;
            goto label_149930;
        }
    }
    ctx->pc = 0x1498C8u;
label_1498c8:
    // 0x1498c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1498c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1498cc:
    // 0x1498cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1498d0:
    // 0x1498d0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1498d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1498d4:
    // 0x1498d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1498d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1498d8:
    // 0x1498d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1498dc:
    // 0x1498dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1498dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1498e0:
    // 0x1498e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1498e4:
    // 0x1498e4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1498e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1498e8:
    // 0x1498e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1498ec:
    // 0x1498ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1498ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1498f0:
    // 0x1498f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1498f4:
    // 0x1498f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1498f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1498f8:
    // 0x1498f8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1498f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1498fc:
    // 0x1498fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149900:
    // 0x149900: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x149900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_149904:
    // 0x149904: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x149904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_149908:
    // 0x149908: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x149908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_14990c:
    // 0x14990c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x14990cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_149910:
    // 0x149910: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x149910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_149914:
    // 0x149914: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x149914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_149918:
    // 0x149918: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14991c:
    // 0x14991c: 0xc4611b30  lwc1        $f1, 0x1B30($v1)
    ctx->pc = 0x14991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149920:
    // 0x149920: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x149920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149924:
    // 0x149924: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_149928:
    // 0x149928: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14992c:
    // 0x14992c: 0xe4601b30  swc1        $f0, 0x1B30($v1)
    ctx->pc = 0x14992cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6960), bits); }
label_149930:
    // 0x149930: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x149930u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_149934:
    // 0x149934: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x149934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_149938:
    // 0x149938: 0x3e00008  jr          $ra
label_14993c:
    if (ctx->pc == 0x14993Cu) {
        ctx->pc = 0x149940u;
        goto label_fallthrough_0x149938;
    }
    ctx->pc = 0x149938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x149938:
    ctx->pc = 0x149940u;
}
