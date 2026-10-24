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

// Function: entry_0015da48
// Address: 0x15da48 - 0x15da78
void entry_0015da48_0x15da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015da48_0x15da48");
#endif

    ctx->pc = 0x15da48u;

    // 0x15da48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15da4c: 0x8c4213fc  lw          $v0, 0x13FC($v0)
    ctx->pc = 0x15da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5116)));
    // 0x15da50: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x15da50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x15da54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15DA54u;
    {
        const bool branch_taken_0x15da54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15da54) {
            ctx->pc = 0x15DA78u;
            return;
        }
    }
    ctx->pc = 0x15DA5Cu;
    // 0x15da5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15da60: 0x8c6213fc  lw          $v0, 0x13FC($v1)
    ctx->pc = 0x15da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5116)));
    // 0x15da64: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x15da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x15da68: 0xac6213fc  sw          $v0, 0x13FC($v1)
    ctx->pc = 0x15da68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5116), GPR_U32(ctx, 2));
    // 0x15da6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15da70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15DA70u;
    {
        const bool branch_taken_0x15da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da70) {
            ctx->pc = 0x15DA7Cu;
            return;
        }
    }
    ctx->pc = 0x15DA78u;
}
