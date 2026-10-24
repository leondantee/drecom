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

// Function: Om2e_R0_move
// Address: 0x378700 - 0x3788b4
void Om2e_R0_move_0x378700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om2e_R0_move_0x378700");
#endif

    switch (ctx->pc) {
        case 0x378700u: goto label_378700;
        case 0x378704u: goto label_378704;
        case 0x378708u: goto label_378708;
        case 0x37870cu: goto label_37870c;
        case 0x378710u: goto label_378710;
        case 0x378714u: goto label_378714;
        case 0x378718u: goto label_378718;
        case 0x37871cu: goto label_37871c;
        case 0x378720u: goto label_378720;
        case 0x378724u: goto label_378724;
        case 0x378728u: goto label_378728;
        case 0x37872cu: goto label_37872c;
        case 0x378730u: goto label_378730;
        case 0x378734u: goto label_378734;
        case 0x378738u: goto label_378738;
        case 0x37873cu: goto label_37873c;
        case 0x378740u: goto label_378740;
        case 0x378744u: goto label_378744;
        case 0x378748u: goto label_378748;
        case 0x37874cu: goto label_37874c;
        case 0x378750u: goto label_378750;
        case 0x378754u: goto label_378754;
        case 0x378758u: goto label_378758;
        case 0x37875cu: goto label_37875c;
        case 0x378760u: goto label_378760;
        case 0x378764u: goto label_378764;
        case 0x378768u: goto label_378768;
        case 0x37876cu: goto label_37876c;
        case 0x378770u: goto label_378770;
        case 0x378774u: goto label_378774;
        case 0x378778u: goto label_378778;
        case 0x37877cu: goto label_37877c;
        case 0x378780u: goto label_378780;
        case 0x378784u: goto label_378784;
        case 0x378788u: goto label_378788;
        case 0x37878cu: goto label_37878c;
        case 0x378790u: goto label_378790;
        case 0x378794u: goto label_378794;
        case 0x378798u: goto label_378798;
        case 0x37879cu: goto label_37879c;
        case 0x3787a0u: goto label_3787a0;
        case 0x3787a4u: goto label_3787a4;
        case 0x3787a8u: goto label_3787a8;
        case 0x3787acu: goto label_3787ac;
        case 0x3787b0u: goto label_3787b0;
        case 0x3787b4u: goto label_3787b4;
        case 0x3787b8u: goto label_3787b8;
        case 0x3787bcu: goto label_3787bc;
        case 0x3787c0u: goto label_3787c0;
        case 0x3787c4u: goto label_3787c4;
        case 0x3787c8u: goto label_3787c8;
        case 0x3787ccu: goto label_3787cc;
        case 0x3787d0u: goto label_3787d0;
        case 0x3787d4u: goto label_3787d4;
        case 0x3787d8u: goto label_3787d8;
        case 0x3787dcu: goto label_3787dc;
        case 0x3787e0u: goto label_3787e0;
        case 0x3787e4u: goto label_3787e4;
        case 0x3787e8u: goto label_3787e8;
        case 0x3787ecu: goto label_3787ec;
        case 0x3787f0u: goto label_3787f0;
        case 0x3787f4u: goto label_3787f4;
        case 0x3787f8u: goto label_3787f8;
        case 0x3787fcu: goto label_3787fc;
        case 0x378800u: goto label_378800;
        case 0x378804u: goto label_378804;
        case 0x378808u: goto label_378808;
        case 0x37880cu: goto label_37880c;
        case 0x378810u: goto label_378810;
        case 0x378814u: goto label_378814;
        case 0x378818u: goto label_378818;
        case 0x37881cu: goto label_37881c;
        case 0x378820u: goto label_378820;
        case 0x378824u: goto label_378824;
        case 0x378828u: goto label_378828;
        case 0x37882cu: goto label_37882c;
        case 0x378830u: goto label_378830;
        case 0x378834u: goto label_378834;
        case 0x378838u: goto label_378838;
        case 0x37883cu: goto label_37883c;
        case 0x378840u: goto label_378840;
        case 0x378844u: goto label_378844;
        case 0x378848u: goto label_378848;
        case 0x37884cu: goto label_37884c;
        case 0x378850u: goto label_378850;
        case 0x378854u: goto label_378854;
        case 0x378858u: goto label_378858;
        case 0x37885cu: goto label_37885c;
        case 0x378860u: goto label_378860;
        case 0x378864u: goto label_378864;
        case 0x378868u: goto label_378868;
        case 0x37886cu: goto label_37886c;
        case 0x378870u: goto label_378870;
        case 0x378874u: goto label_378874;
        case 0x378878u: goto label_378878;
        case 0x37887cu: goto label_37887c;
        case 0x378880u: goto label_378880;
        case 0x378884u: goto label_378884;
        case 0x378888u: goto label_378888;
        case 0x37888cu: goto label_37888c;
        case 0x378890u: goto label_378890;
        case 0x378894u: goto label_378894;
        case 0x378898u: goto label_378898;
        case 0x37889cu: goto label_37889c;
        case 0x3788a0u: goto label_3788a0;
        case 0x3788a4u: goto label_3788a4;
        case 0x3788a8u: goto label_3788a8;
        case 0x3788acu: goto label_3788ac;
        case 0x3788b0u: goto label_3788b0;
        default: break;
    }

    ctx->pc = 0x378700u;

label_378700:
    // 0x378700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x378700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_378704:
    // 0x378704: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x378704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_378708:
    // 0x378708: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x378708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37870c:
    // 0x37870c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_378710:
    // 0x378710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_378714:
    // 0x378714: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x378714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_378718:
    // 0x378718: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x378718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_37871c:
    // 0x37871c: 0x8c621330  lw          $v0, 0x1330($v1)
    ctx->pc = 0x37871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
label_378720:
    // 0x378720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x378720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_378724:
    // 0x378724: 0xac621330  sw          $v0, 0x1330($v1)
    ctx->pc = 0x378724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 2));
label_378728:
    // 0x378728: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_37872c:
    // 0x37872c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x37872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_378730:
    // 0x378730: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x378730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_378734:
    // 0x378734: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x378734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_378738:
    // 0x378738: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x378738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37873c:
    // 0x37873c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37873cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_378740:
    // 0x378740: 0x2442b6f0  addiu       $v0, $v0, -0x4910
    ctx->pc = 0x378740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948592));
label_378744:
    // 0x378744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_378748:
    // 0x378748: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x378748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37874c:
    // 0x37874c: 0x40f809  jalr        $v0
label_378750:
    if (ctx->pc == 0x378750u) {
        ctx->pc = 0x378754u;
        goto label_378754;
    }
    ctx->pc = 0x37874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x378754u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37874Cu, 0x378754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x378754u;
label_378754:
    // 0x378754: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x378754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_378758:
    // 0x378758: 0x10000031  b           . + 4 + (0x31 << 2)
label_37875c:
    if (ctx->pc == 0x37875Cu) {
        ctx->pc = 0x378760u;
        goto label_378760;
    }
    ctx->pc = 0x378758u;
    {
        const bool branch_taken_0x378758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378758) {
            ctx->pc = 0x378820u;
            goto label_378820;
        }
    }
    ctx->pc = 0x378760u;
label_378760:
    // 0x378760: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_378764:
    // 0x378764: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x378764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_378768:
    // 0x378768: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x378768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_37876c:
    // 0x37876c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37876cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_378770:
    // 0x378770: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x378770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_378774:
    // 0x378774: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x378774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_378778:
    // 0x378778: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x378778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_37877c:
    // 0x37877c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x37877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_378780:
    // 0x378780: 0x8c421330  lw          $v0, 0x1330($v0)
    ctx->pc = 0x378780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4912)));
label_378784:
    // 0x378784: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x378784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_378788:
    // 0x378788: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_37878c:
    if (ctx->pc == 0x37878Cu) {
        ctx->pc = 0x378790u;
        goto label_378790;
    }
    ctx->pc = 0x378788u;
    {
        const bool branch_taken_0x378788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378788) {
            ctx->pc = 0x3787D8u;
            goto label_3787d8;
        }
    }
    ctx->pc = 0x378790u;
label_378790:
    // 0x378790: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x378790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_378794:
    // 0x378794: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x378794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_378798:
    // 0x378798: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x378798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_37879c:
    // 0x37879c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x37879cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3787a0:
    // 0x3787a0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3787a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3787a4:
    // 0x3787a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3787a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3787a8:
    // 0x3787a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3787a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3787ac:
    // 0x3787ac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3787acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3787b0:
    // 0x3787b0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3787b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3787b4:
    // 0x3787b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3787b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3787b8:
    // 0x3787b8: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x3787b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_3787bc:
    // 0x3787bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3787bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3787c0:
    // 0x3787c0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3787c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3787c4:
    // 0x3787c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3787c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3787c8:
    // 0x3787c8: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x3787c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_3787cc:
    // 0x3787cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3787ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3787d0:
    // 0x3787d0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3787d4:
    if (ctx->pc == 0x3787D4u) {
        ctx->pc = 0x3787D8u;
        goto label_3787d8;
    }
    ctx->pc = 0x3787D0u;
    {
        const bool branch_taken_0x3787d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3787d0) {
            ctx->pc = 0x378818u;
            goto label_378818;
        }
    }
    ctx->pc = 0x3787D8u;
label_3787d8:
    // 0x3787d8: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3787d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3787dc:
    // 0x3787dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3787dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3787e0:
    // 0x3787e0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3787e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_3787e4:
    // 0x3787e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3787e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3787e8:
    // 0x3787e8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3787e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3787ec:
    // 0x3787ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3787ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3787f0:
    // 0x3787f0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3787f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_3787f4:
    // 0x3787f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3787f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3787f8:
    // 0x3787f8: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3787f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3787fc:
    // 0x3787fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3787fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_378800:
    // 0x378800: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x378800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_378804:
    // 0x378804: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x378804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_378808:
    // 0x378808: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x378808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_37880c:
    // 0x37880c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x37880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_378810:
    // 0x378810: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x378810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_378814:
    // 0x378814: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x378814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_378818:
    // 0x378818: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x378818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_37881c:
    // 0x37881c: 0x0  nop
    ctx->pc = 0x37881cu;
    // NOP
label_378820:
    // 0x378820: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x378820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_378824:
    // 0x378824: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_378828:
    if (ctx->pc == 0x378828u) {
        ctx->pc = 0x37882Cu;
        goto label_37882c;
    }
    ctx->pc = 0x378824u;
    {
        const bool branch_taken_0x378824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378824) {
            ctx->pc = 0x378760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378760;
        }
    }
    ctx->pc = 0x37882Cu;
label_37882c:
    // 0x37882c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x37882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_378830:
    // 0x378830: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x378830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
label_378834:
    // 0x378834: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x378834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_378838:
    // 0x378838: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x378838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
label_37883c:
    // 0x37883c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x37883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_378840:
    // 0x378840: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x378840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
label_378844:
    // 0x378844: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x378844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_378848:
    // 0x378848: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x378848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
label_37884c:
    // 0x37884c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x37884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_378850:
    // 0x378850: 0x944210a4  lhu         $v0, 0x10A4($v0)
    ctx->pc = 0x378850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4260)));
label_378854:
    // 0x378854: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x378854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_378858:
    // 0x378858: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x378858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_37885c:
    // 0x37885c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37885cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_378860:
    // 0x378860: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x378860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_378864:
    // 0x378864: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x378864u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_378868:
    // 0x378868: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x378868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_37886c:
    // 0x37886c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_378870:
    // 0x378870: 0x3c020704  lui         $v0, 0x704
    ctx->pc = 0x378870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1796 << 16));
label_378874:
    // 0x378874: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x378874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
label_378878:
    // 0x378878: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x378878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_37887c:
    // 0x37887c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x37887cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_378880:
    // 0x378880: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x378880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_378884:
    // 0x378884: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x378884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_378888:
    // 0x378888: 0x24452b88  addiu       $a1, $v0, 0x2B88
    ctx->pc = 0x378888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11144));
label_37888c:
    // 0x37888c: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x37888cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_378890:
    // 0x378890: 0xc059b14  jal         func_166C50
label_378894:
    if (ctx->pc == 0x378894u) {
        ctx->pc = 0x378898u;
        goto label_378898;
    }
    ctx->pc = 0x378890u;
    SET_GPR_U32(ctx, 31, 0x378898u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x378890u, 0x378898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378898u;
label_378898:
    // 0x378898: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x378898u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37889c:
    // 0x37889c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37889cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3788a0:
    // 0x3788a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3788a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3788a4:
    // 0x3788a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3788a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3788a8:
    // 0x3788a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3788a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3788ac:
    // 0x3788ac: 0x3e00008  jr          $ra
label_3788b0:
    if (ctx->pc == 0x3788B0u) {
        ctx->pc = 0x3788B4u;
        goto label_fallthrough_0x3788ac;
    }
    ctx->pc = 0x3788ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3788ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3788ac:
    ctx->pc = 0x3788B4u;
}
