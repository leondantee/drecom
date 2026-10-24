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

// Function: entry_00148b9c
// Address: 0x148b9c - 0x148bc8
void entry_00148b9c_0x148b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148b9c_0x148b9c");
#endif

    ctx->pc = 0x148b9cu;

    // 0x148b9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148ba0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x148ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x148ba4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x148ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x148ba8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x148ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x148bac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148BACu;
    {
        const bool branch_taken_0x148bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148bac) {
            ctx->pc = 0x148BC8u;
            return;
        }
    }
    ctx->pc = 0x148BB4u;
    // 0x148bb4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x148bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x148bb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148bbc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x148bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x148bc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x148BC0u;
    {
        const bool branch_taken_0x148bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148bc0) {
            ctx->pc = 0x148BD0u;
            return;
        }
    }
    ctx->pc = 0x148BC8u;
}
