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

// Function: Em1c_R1_atk_wave_s
// Address: 0x36e690 - 0x36e72c
void Em1c_R1_atk_wave_s_0x36e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_atk_wave_s_0x36e690");
#endif

    switch (ctx->pc) {
        case 0x36e6e4u: goto label_36e6e4;
        case 0x36e704u: goto label_36e704;
        case 0x36e710u: goto label_36e710;
        case 0x36e71cu: goto label_36e71c;
        default: break;
    }

    ctx->pc = 0x36e690u;

    // 0x36e690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36e694: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36e694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36e698: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36e698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36e69c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e6a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36e6a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e6a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36e6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36e6a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e6ac: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36E6ACu;
    {
        const bool branch_taken_0x36e6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e6ac) {
            ctx->pc = 0x36E6F4u;
            goto label_36e6f4;
        }
    }
    ctx->pc = 0x36E6B4u;
    // 0x36e6b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E6B4u;
    {
        const bool branch_taken_0x36e6b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e6b4) {
            ctx->pc = 0x36E6C4u;
            goto label_36e6c4;
        }
    }
    ctx->pc = 0x36E6BCu;
    // 0x36e6bc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36E6BCu;
    {
        const bool branch_taken_0x36e6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e6bc) {
            ctx->pc = 0x36E71Cu;
            goto label_36e71c;
        }
    }
    ctx->pc = 0x36E6C4u;
label_36e6c4:
    // 0x36e6c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e6c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e6cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e6d0: 0x24065a08  addiu       $a2, $zero, 0x5A08
    ctx->pc = 0x36e6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23048));
    // 0x36e6d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e6d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e6dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E6DCu;
    SET_GPR_U32(ctx, 31, 0x36E6E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E6DCu, 0x36E6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E6E4u;
label_36e6e4:
    // 0x36e6e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e6e8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e6ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e6f0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36e6f4:
    // 0x36e6f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e6f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e6f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e6fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E6FCu;
    SET_GPR_U32(ctx, 31, 0x36E704u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E6FCu, 0x36E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E704u;
label_36e704:
    // 0x36e704: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e708: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E708u;
    SET_GPR_U32(ctx, 31, 0x36E710u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E708u, 0x36E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E710u;
label_36e710:
    // 0x36e710: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e714: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36E714u;
    SET_GPR_U32(ctx, 31, 0x36E71Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36E714u, 0x36E71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E71Cu;
label_36e71c:
    // 0x36e71c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e71cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e720: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36e724: 0x3e00008  jr          $ra
    ctx->pc = 0x36E724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E72Cu;
}
