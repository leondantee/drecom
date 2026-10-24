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

// Function: entry_00344a54
// Address: 0x344a54 - 0x344ad8
void entry_00344a54_0x344a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00344a54_0x344a54");
#endif

    switch (ctx->pc) {
        case 0x344a80u: goto label_344a80;
        default: break;
    }

    ctx->pc = 0x344a54u;

    // 0x344a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344a58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a5c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x344a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x344a60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x344a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a68: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x344a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x344a6c: 0x24061e02  addiu       $a2, $zero, 0x1E02
    ctx->pc = 0x344a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7682));
    // 0x344a70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x344a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344a74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x344a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x344a78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x344A78u;
    SET_GPR_U32(ctx, 31, 0x344A80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x344A78u, 0x344A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A80u;
label_344a80:
    // 0x344a80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a84: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x344a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344a88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x344a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x344a8c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x344a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x344a90: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x344a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x344a94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a98: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x344a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344a9c: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x344a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x344aa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344aa4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x344aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344aa8: 0xa040006f  sb          $zero, 0x6F($v0)
    ctx->pc = 0x344aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x344aac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x344aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344ab4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x344ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344ab8: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x344ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x344abc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344ac0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x344ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x344ac4: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x344ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x344ac8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x344ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x344acc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x344accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344ad0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x344ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x344ad4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x344ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x344ad8u;
}
