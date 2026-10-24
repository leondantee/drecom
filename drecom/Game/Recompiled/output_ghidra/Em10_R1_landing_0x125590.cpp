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

// Function: Em10_R1_landing
// Address: 0x125590 - 0x1256d8
void Em10_R1_landing_0x125590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_landing_0x125590");
#endif

    switch (ctx->pc) {
        case 0x1255f0u: goto label_1255f0;
        case 0x125610u: goto label_125610;
        case 0x125620u: goto label_125620;
        case 0x12562cu: goto label_12562c;
        default: break;
    }

    ctx->pc = 0x125590u;

    // 0x125590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125594: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x125594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x125598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12559c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x12559cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1255a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1255a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1255a4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x1255a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1255a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1255a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1255ac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1255acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1255b0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1255b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1255b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1255b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1255b8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1255B8u;
    {
        const bool branch_taken_0x1255b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1255b8) {
            ctx->pc = 0x125600u;
            goto label_125600;
        }
    }
    ctx->pc = 0x1255C0u;
    // 0x1255c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1255C0u;
    {
        const bool branch_taken_0x1255c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1255c0) {
            ctx->pc = 0x1255D0u;
            goto label_1255d0;
        }
    }
    ctx->pc = 0x1255C8u;
    // 0x1255c8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1255C8u;
    {
        const bool branch_taken_0x1255c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1255c8) {
            ctx->pc = 0x1256C4u;
            goto label_1256c4;
        }
    }
    ctx->pc = 0x1255D0u;
label_1255d0:
    // 0x1255d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1255d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1255d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1255d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1255d8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1255d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1255dc: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1255dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1255e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1255e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1255e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1255e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1255e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1255E8u;
    SET_GPR_U32(ctx, 31, 0x1255F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1255E8u, 0x1255F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1255F0u;
label_1255f0:
    // 0x1255f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1255f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1255f4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1255f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1255f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1255f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1255fc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1255fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_125600:
    // 0x125600: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x125600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125604: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x125604u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x125608: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x125608u;
    SET_GPR_U32(ctx, 31, 0x125610u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x125608u, 0x125610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125610u;
label_125610:
    // 0x125610: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x125610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125614: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x125614u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x125618: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x125618u;
    SET_GPR_U32(ctx, 31, 0x125620u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x125618u, 0x125620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125620u;
label_125620:
    // 0x125620: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x125620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125624: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x125624u;
    SET_GPR_U32(ctx, 31, 0x12562Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x125624u, 0x12562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12562Cu;
label_12562c:
    // 0x12562c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125630: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x125630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x125634: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x125634u;
    {
        const bool branch_taken_0x125634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125634) {
            ctx->pc = 0x1256C4u;
            goto label_1256c4;
        }
    }
    ctx->pc = 0x12563Cu;
    // 0x12563c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12563cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125640: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x125640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x125644: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x125644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x125648: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x125648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12564c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12564Cu;
    {
        const bool branch_taken_0x12564c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12564c) {
            ctx->pc = 0x12568Cu;
            goto label_12568c;
        }
    }
    ctx->pc = 0x125654u;
    // 0x125654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125658: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x125658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12565c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12565cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125660: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x125660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x125664: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x125664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125668: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12566c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125670: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125674: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x125674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125678: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12567c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125680: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x125684: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x125684u;
    {
        const bool branch_taken_0x125684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125684) {
            ctx->pc = 0x1256BCu;
            goto label_1256bc;
        }
    }
    ctx->pc = 0x12568Cu;
label_12568c:
    // 0x12568c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125690: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x125690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125694: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125698: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x125698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12569c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1256a0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1256a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1256a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1256a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1256a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1256a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1256ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1256acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1256b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1256b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1256b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1256b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1256b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1256b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1256bc:
    // 0x1256bc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1256BCu;
    {
        const bool branch_taken_0x1256bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1256bc) {
            ctx->pc = 0x1256C4u;
            goto label_1256c4;
        }
    }
    ctx->pc = 0x1256C4u;
label_1256c4:
    // 0x1256c4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1256c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1256c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1256c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1256cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1256ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1256d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1256D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1256D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1256D8u;
}
