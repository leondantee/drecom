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

// Function: entry_002d8ef4
// Address: 0x2d8ef4 - 0x2d8f3c
void entry_002d8ef4_0x2d8ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8ef4_0x2d8ef4");
#endif

    switch (ctx->pc) {
        case 0x2d8f00u: goto label_2d8f00;
        default: break;
    }

    ctx->pc = 0x2d8ef4u;

    // 0x2d8ef4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ef8: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8EF8u;
    SET_GPR_U32(ctx, 31, 0x2D8F00u);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8EF8u, 0x2D8F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F00u;
label_2d8f00:
    // 0x2d8f00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8f04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8f0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8f10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f14: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8f14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8f18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8f20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8f24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8f28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8f30: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8f34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8F34u;
    {
        const bool branch_taken_0x2d8f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8f34) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8F3Cu;
}
