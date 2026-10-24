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

// Function: entry_002d8cb0
// Address: 0x2d8cb0 - 0x2d8cf8
void entry_002d8cb0_0x2d8cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8cb0_0x2d8cb0");
#endif

    switch (ctx->pc) {
        case 0x2d8cbcu: goto label_2d8cbc;
        default: break;
    }

    ctx->pc = 0x2d8cb0u;

    // 0x2d8cb0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8cb4: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8CB4u;
    SET_GPR_U32(ctx, 31, 0x2D8CBCu);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8CB4u, 0x2D8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8CBCu;
label_2d8cbc:
    // 0x2d8cbc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8cbcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8cc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8cc4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8cc8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8ccc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8cd0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d8cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8cd4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8cd8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8cdc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ce0: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2d8ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ce4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ce8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8cec: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8cf0: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2D8CF0u;
    {
        const bool branch_taken_0x2d8cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8cf0) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8CF8u;
}
