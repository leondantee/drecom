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

// Function: Em05_R0_move
// Address: 0x2056f0 - 0x2057dc
void Em05_R0_move_0x2056f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R0_move_0x2056f0");
#endif

    switch (ctx->pc) {
        case 0x2056f0u: goto label_2056f0;
        case 0x2056f4u: goto label_2056f4;
        case 0x2056f8u: goto label_2056f8;
        case 0x2056fcu: goto label_2056fc;
        case 0x205700u: goto label_205700;
        case 0x205704u: goto label_205704;
        case 0x205708u: goto label_205708;
        case 0x20570cu: goto label_20570c;
        case 0x205710u: goto label_205710;
        case 0x205714u: goto label_205714;
        case 0x205718u: goto label_205718;
        case 0x20571cu: goto label_20571c;
        case 0x205720u: goto label_205720;
        case 0x205724u: goto label_205724;
        case 0x205728u: goto label_205728;
        case 0x20572cu: goto label_20572c;
        case 0x205730u: goto label_205730;
        case 0x205734u: goto label_205734;
        case 0x205738u: goto label_205738;
        case 0x20573cu: goto label_20573c;
        case 0x205740u: goto label_205740;
        case 0x205744u: goto label_205744;
        case 0x205748u: goto label_205748;
        case 0x20574cu: goto label_20574c;
        case 0x205750u: goto label_205750;
        case 0x205754u: goto label_205754;
        case 0x205758u: goto label_205758;
        case 0x20575cu: goto label_20575c;
        case 0x205760u: goto label_205760;
        case 0x205764u: goto label_205764;
        case 0x205768u: goto label_205768;
        case 0x20576cu: goto label_20576c;
        case 0x205770u: goto label_205770;
        case 0x205774u: goto label_205774;
        case 0x205778u: goto label_205778;
        case 0x20577cu: goto label_20577c;
        case 0x205780u: goto label_205780;
        case 0x205784u: goto label_205784;
        case 0x205788u: goto label_205788;
        case 0x20578cu: goto label_20578c;
        case 0x205790u: goto label_205790;
        case 0x205794u: goto label_205794;
        case 0x205798u: goto label_205798;
        case 0x20579cu: goto label_20579c;
        case 0x2057a0u: goto label_2057a0;
        case 0x2057a4u: goto label_2057a4;
        case 0x2057a8u: goto label_2057a8;
        case 0x2057acu: goto label_2057ac;
        case 0x2057b0u: goto label_2057b0;
        case 0x2057b4u: goto label_2057b4;
        case 0x2057b8u: goto label_2057b8;
        case 0x2057bcu: goto label_2057bc;
        case 0x2057c0u: goto label_2057c0;
        case 0x2057c4u: goto label_2057c4;
        case 0x2057c8u: goto label_2057c8;
        case 0x2057ccu: goto label_2057cc;
        case 0x2057d0u: goto label_2057d0;
        case 0x2057d4u: goto label_2057d4;
        case 0x2057d8u: goto label_2057d8;
        default: break;
    }

    ctx->pc = 0x2056f0u;

label_2056f0:
    // 0x2056f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2056f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2056f4:
    // 0x2056f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2056f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2056f8:
    // 0x2056f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2056f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2056fc:
    // 0x2056fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2056fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_205700:
    // 0x205700: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_205704:
    // 0x205704: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x205704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_205708:
    // 0x205708: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x205708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20570c:
    // 0x20570c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20570cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_205710:
    // 0x205710: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x205710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_205714:
    // 0x205714: 0x24429fd0  addiu       $v0, $v0, -0x6030
    ctx->pc = 0x205714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942672));
label_205718:
    // 0x205718: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20571c:
    // 0x20571c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205720:
    // 0x205720: 0x40f809  jalr        $v0
label_205724:
    if (ctx->pc == 0x205724u) {
        ctx->pc = 0x205728u;
        goto label_205728;
    }
    ctx->pc = 0x205720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205728u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205720u, 0x205728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205728u;
label_205728:
    // 0x205728: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_20572c:
    // 0x20572c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_205730:
    // 0x205730: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x205730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_205734:
    // 0x205734: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x205734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_205738:
    // 0x205738: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x205738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20573c:
    // 0x20573c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20573cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_205740:
    // 0x205740: 0x2442a030  addiu       $v0, $v0, -0x5FD0
    ctx->pc = 0x205740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942768));
label_205744:
    // 0x205744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_205748:
    // 0x205748: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x205748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20574c:
    // 0x20574c: 0x40f809  jalr        $v0
label_205750:
    if (ctx->pc == 0x205750u) {
        ctx->pc = 0x205754u;
        goto label_205754;
    }
    ctx->pc = 0x20574Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205754u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20574Cu, 0x205754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205754u;
label_205754:
    // 0x205754: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_205758:
    // 0x205758: 0xc05d1b8  jal         func_1746E0
label_20575c:
    if (ctx->pc == 0x20575Cu) {
        ctx->pc = 0x205760u;
        goto label_205760;
    }
    ctx->pc = 0x205758u;
    SET_GPR_U32(ctx, 31, 0x205760u);
    ctx->pc = 0x1746E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1746E0u, 0x205758u, 0x205760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205760u;
label_205760:
    // 0x205760: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_205764:
    // 0x205764: 0x8c63134c  lw          $v1, 0x134C($v1)
    ctx->pc = 0x205764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4940)));
label_205768:
    // 0x205768: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_20576c:
    if (ctx->pc == 0x20576Cu) {
        ctx->pc = 0x205770u;
        goto label_205770;
    }
    ctx->pc = 0x205768u;
    {
        const bool branch_taken_0x205768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205768) {
            ctx->pc = 0x205780u;
            goto label_205780;
        }
    }
    ctx->pc = 0x205770u;
label_205770:
    // 0x205770: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_205774:
    // 0x205774: 0x8c83134c  lw          $v1, 0x134C($a0)
    ctx->pc = 0x205774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4940)));
label_205778:
    // 0x205778: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x205778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20577c:
    // 0x20577c: 0xac83134c  sw          $v1, 0x134C($a0)
    ctx->pc = 0x20577cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4940), GPR_U32(ctx, 3));
label_205780:
    // 0x205780: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_205784:
    // 0x205784: 0x8c831370  lw          $v1, 0x1370($a0)
    ctx->pc = 0x205784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4976)));
label_205788:
    // 0x205788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x205788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20578c:
    // 0x20578c: 0xac831370  sw          $v1, 0x1370($a0)
    ctx->pc = 0x20578cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4976), GPR_U32(ctx, 3));
label_205790:
    // 0x205790: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_205794:
    // 0x205794: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x205794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_205798:
    // 0x205798: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x205798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_20579c:
    // 0x20579c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20579cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2057a0:
    // 0x2057a0: 0x286101f4  slti        $at, $v1, 0x1F4
    ctx->pc = 0x2057a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
label_2057a4:
    // 0x2057a4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_2057a8:
    if (ctx->pc == 0x2057A8u) {
        ctx->pc = 0x2057ACu;
        goto label_2057ac;
    }
    ctx->pc = 0x2057A4u;
    {
        const bool branch_taken_0x2057a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2057a4) {
            ctx->pc = 0x2057CCu;
            goto label_2057cc;
        }
    }
    ctx->pc = 0x2057ACu;
label_2057ac:
    // 0x2057ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2057acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2057b0:
    // 0x2057b0: 0x8c631370  lw          $v1, 0x1370($v1)
    ctx->pc = 0x2057b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4976)));
label_2057b4:
    // 0x2057b4: 0x2c611519  sltiu       $at, $v1, 0x1519
    ctx->pc = 0x2057b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5401) ? 1 : 0);
label_2057b8:
    // 0x2057b8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2057bc:
    if (ctx->pc == 0x2057BCu) {
        ctx->pc = 0x2057C0u;
        goto label_2057c0;
    }
    ctx->pc = 0x2057B8u;
    {
        const bool branch_taken_0x2057b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2057b8) {
            ctx->pc = 0x2057CCu;
            goto label_2057cc;
        }
    }
    ctx->pc = 0x2057C0u;
label_2057c0:
    // 0x2057c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2057c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2057c4:
    // 0x2057c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2057c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2057c8:
    // 0x2057c8: 0xac641360  sw          $a0, 0x1360($v1)
    ctx->pc = 0x2057c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4960), GPR_U32(ctx, 4));
label_2057cc:
    // 0x2057cc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2057ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2057d0:
    // 0x2057d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2057d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2057d4:
    // 0x2057d4: 0x3e00008  jr          $ra
label_2057d8:
    if (ctx->pc == 0x2057D8u) {
        ctx->pc = 0x2057DCu;
        goto label_fallthrough_0x2057d4;
    }
    ctx->pc = 0x2057D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2057D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2057d4:
    ctx->pc = 0x2057DCu;
}
