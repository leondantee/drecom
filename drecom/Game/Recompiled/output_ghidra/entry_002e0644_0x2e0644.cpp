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

// Function: entry_002e0644
// Address: 0x2e0644 - 0x2e065c
void entry_002e0644_0x2e0644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0644_0x2e0644");
#endif

    ctx->pc = 0x2e0644u;

    // 0x2e0644: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0648: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x2e0648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x2e064c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2e064cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2e0650: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e0650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e0654: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e0654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e0658: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x2e0658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    ctx->pc = 0x2e065cu;
}
