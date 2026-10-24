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

// Function: entry_001dae00
// Address: 0x1dae00 - 0x1dae20
void entry_001dae00_0x1dae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dae00_0x1dae00");
#endif

    ctx->pc = 0x1dae00u;

    // 0x1dae00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1dae00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1dae04: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dae08: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x1dae08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1dae0c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dae10: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1dae10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1dae14: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dae18: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1dae18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1dae1c: 0x0  nop
    ctx->pc = 0x1dae1cu;
    // NOP
    ctx->pc = 0x1dae20u;
}
