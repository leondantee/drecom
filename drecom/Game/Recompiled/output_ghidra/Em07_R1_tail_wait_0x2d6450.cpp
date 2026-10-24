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

// Function: Em07_R1_tail_wait
// Address: 0x2d6450 - 0x2d64d0
void Em07_R1_tail_wait_0x2d6450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_tail_wait_0x2d6450");
#endif

    switch (ctx->pc) {
        case 0x2d64a4u: goto label_2d64a4;
        case 0x2d64c0u: goto label_2d64c0;
        default: break;
    }

    ctx->pc = 0x2d6450u;

    // 0x2d6450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6454: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d6454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d6458: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d6458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d645c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6460: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d6460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d6464: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d6464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d6468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d646c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D646Cu;
    {
        const bool branch_taken_0x2d646c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d646c) {
            ctx->pc = 0x2D64B4u;
            goto label_2d64b4;
        }
    }
    ctx->pc = 0x2D6474u;
    // 0x2d6474: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6474u;
    {
        const bool branch_taken_0x2d6474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6474) {
            ctx->pc = 0x2D6484u;
            goto label_2d6484;
        }
    }
    ctx->pc = 0x2D647Cu;
    // 0x2d647c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D647Cu;
    {
        const bool branch_taken_0x2d647c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d647c) {
            ctx->pc = 0x2D64C0u;
            goto label_2d64c0;
        }
    }
    ctx->pc = 0x2D6484u;
label_2d6484:
    // 0x2d6484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d6484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6488: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d6488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d648c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d648cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d6490: 0x24063c01  addiu       $a2, $zero, 0x3C01
    ctx->pc = 0x2d6490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15361));
    // 0x2d6494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d6494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6498: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d6498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d649c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D649Cu;
    SET_GPR_U32(ctx, 31, 0x2D64A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D649Cu, 0x2D64A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D64A4u;
label_2d64a4:
    // 0x2d64a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d64a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d64a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d64a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d64ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d64acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d64b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d64b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d64b4:
    // 0x2d64b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d64b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d64b8: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D64B8u;
    SET_GPR_U32(ctx, 31, 0x2D64C0u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D64B8u, 0x2D64C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D64C0u;
label_2d64c0:
    // 0x2d64c0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d64c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d64c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d64c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d64c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D64C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D64C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D64D0u;
}
