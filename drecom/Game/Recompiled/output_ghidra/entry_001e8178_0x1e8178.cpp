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

// Function: entry_001e8178
// Address: 0x1e8178 - 0x1e8194
void entry_001e8178_0x1e8178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8178_0x1e8178");
#endif

    ctx->pc = 0x1e8178u;

    // 0x1e8178: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e8178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e817c: 0x8fa303bc  lw          $v1, 0x3BC($sp)
    ctx->pc = 0x1e817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x1e8180: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1e8180u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1e8184: 0x8fa303bc  lw          $v1, 0x3BC($sp)
    ctx->pc = 0x1e8184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x1e8188: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e8188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e818c: 0x8fa303bc  lw          $v1, 0x3BC($sp)
    ctx->pc = 0x1e818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x1e8190: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e8190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1e8194u;
}
