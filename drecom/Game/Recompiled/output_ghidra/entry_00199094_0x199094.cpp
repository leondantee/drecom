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

// Function: entry_00199094
// Address: 0x199094 - 0x19909c
void entry_00199094_0x199094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199094_0x199094");
#endif

    ctx->pc = 0x199094u;

    // 0x199094: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199098: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x199098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x19909cu;
}
