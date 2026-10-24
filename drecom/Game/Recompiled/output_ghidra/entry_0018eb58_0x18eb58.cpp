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

// Function: entry_0018eb58
// Address: 0x18eb58 - 0x18eb6c
void entry_0018eb58_0x18eb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eb58_0x18eb58");
#endif

    ctx->pc = 0x18eb58u;

    // 0x18eb58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb5c: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18eb60: 0xac400214  sw          $zero, 0x214($v0)
    ctx->pc = 0x18eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 0));
    // 0x18eb64: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18EB64u;
    {
        const bool branch_taken_0x18eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb64) {
            ctx->pc = 0x18EBB0u;
            return;
        }
    }
    ctx->pc = 0x18EB6Cu;
}
