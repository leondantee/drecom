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

// Function: entry_002d9d5c
// Address: 0x2d9d5c - 0x2d9db4
void entry_002d9d5c_0x2d9d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9d5c_0x2d9d5c");
#endif

    switch (ctx->pc) {
        case 0x2d9d64u: goto label_2d9d64;
        default: break;
    }

    ctx->pc = 0x2d9d5cu;

    // 0x2d9d5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D9D5Cu;
    SET_GPR_U32(ctx, 31, 0x2D9D64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D9D5Cu, 0x2D9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D64u;
label_2d9d64:
    // 0x2d9d64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d9d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9d68: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2d9d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2d9d6c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2d9d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d9d70: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2d9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2d9d74: 0x246389c0  addiu       $v1, $v1, -0x7640
    ctx->pc = 0x2d9d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937024));
    // 0x2d9d78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d9d7c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2d9d7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9d80: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d84: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2d9d84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d9d88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9d8c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d90: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2d9d90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9d94: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d98: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d9d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9d9c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9da0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2d9da0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9da4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9da8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d9da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9dac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9db0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d9db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d9db4u;
}
