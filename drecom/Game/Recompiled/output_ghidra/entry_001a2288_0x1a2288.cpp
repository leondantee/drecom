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

// Function: entry_001a2288
// Address: 0x1a2288 - 0x1a2294
void entry_001a2288_0x1a2288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2288_0x1a2288");
#endif

    ctx->pc = 0x1a2288u;

    // 0x1a2288: 0x24040168  addiu       $a0, $zero, 0x168
    ctx->pc = 0x1a2288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1a228c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a2290: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1a2290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    ctx->pc = 0x1a2294u;
}
