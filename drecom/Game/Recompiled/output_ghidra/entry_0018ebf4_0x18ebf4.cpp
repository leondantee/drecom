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

// Function: entry_0018ebf4
// Address: 0x18ebf4 - 0x18ec04
void entry_0018ebf4_0x18ebf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ebf4_0x18ebf4");
#endif

    ctx->pc = 0x18ebf4u;

    // 0x18ebf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ebf8: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x18ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x18ebfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ec00: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    ctx->pc = 0x18ec04u;
}
