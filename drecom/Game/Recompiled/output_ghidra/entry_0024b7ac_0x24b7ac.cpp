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

// Function: entry_0024b7ac
// Address: 0x24b7ac - 0x24b7c0
void entry_0024b7ac_0x24b7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024b7ac_0x24b7ac");
#endif

    ctx->pc = 0x24b7acu;

    // 0x24b7ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b7b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b7b4: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24b7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24b7b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b7bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x24b7c0u;
}
