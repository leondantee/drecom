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

// Function: entry_0014e878
// Address: 0x14e878 - 0x14e880
void entry_0014e878_0x14e878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e878_0x14e878");
#endif

    ctx->pc = 0x14e878u;

    // 0x14e878: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e87c: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x14e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    ctx->pc = 0x14e880u;
}
