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

// Function: entry_001e30b0
// Address: 0x1e30b0 - 0x1e30c8
void entry_001e30b0_0x1e30b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e30b0_0x1e30b0");
#endif

    ctx->pc = 0x1e30b0u;

    // 0x1e30b0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e30b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e30b4: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x1e30b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x1e30b8: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x1e30b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x1e30bc: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x1e30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1e30c0: 0x0  nop
    ctx->pc = 0x1e30c0u;
    // NOP
    // 0x1e30c4: 0x0  nop
    ctx->pc = 0x1e30c4u;
    // NOP
    ctx->pc = 0x1e30c8u;
}
