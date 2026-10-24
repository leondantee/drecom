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

// Function: entry_0018f040
// Address: 0x18f040 - 0x18f054
void entry_0018f040_0x18f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f040_0x18f040");
#endif

    ctx->pc = 0x18f040u;

    // 0x18f040: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f044: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x18f044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x18f048: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f04c: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x18f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x18f050: 0xac4300e4  sw          $v1, 0xE4($v0)
    ctx->pc = 0x18f050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 3));
    ctx->pc = 0x18f054u;
}
