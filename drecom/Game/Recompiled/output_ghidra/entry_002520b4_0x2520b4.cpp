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

// Function: entry_002520b4
// Address: 0x2520b4 - 0x2520c8
void entry_002520b4_0x2520b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002520b4_0x2520b4");
#endif

    ctx->pc = 0x2520b4u;

    // 0x2520b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2520b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2520b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2520b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2520bc: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2520bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2520c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2520c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2520c4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2520c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x2520c8u;
}
