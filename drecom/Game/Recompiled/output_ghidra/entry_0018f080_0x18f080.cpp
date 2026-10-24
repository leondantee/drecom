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

// Function: entry_0018f080
// Address: 0x18f080 - 0x18f098
void entry_0018f080_0x18f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f080_0x18f080");
#endif

    ctx->pc = 0x18f080u;

    // 0x18f080: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x18f080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x18f084: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f088: 0xac4300ec  sw          $v1, 0xEC($v0)
    ctx->pc = 0x18f088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 3));
    // 0x18f08c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f090: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x18f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x18f094: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x18f094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    ctx->pc = 0x18f098u;
}
