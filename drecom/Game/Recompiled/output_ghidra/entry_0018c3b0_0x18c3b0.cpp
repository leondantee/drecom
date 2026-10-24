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

// Function: entry_0018c3b0
// Address: 0x18c3b0 - 0x18c3c4
void entry_0018c3b0_0x18c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c3b0_0x18c3b0");
#endif

    ctx->pc = 0x18c3b0u;

    // 0x18c3b0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x18c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x18c3b4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x18c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x18c3b8: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x18c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x18c3bc: 0xac500218  sw          $s0, 0x218($v0)
    ctx->pc = 0x18c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 16));
    // 0x18c3c0: 0xae50003c  sw          $s0, 0x3C($s2)
    ctx->pc = 0x18c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
    ctx->pc = 0x18c3c4u;
}
