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

// Function: entry_002686ac
// Address: 0x2686ac - 0x2686b0
void entry_002686ac_0x2686ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002686ac_0x2686ac");
#endif

    ctx->pc = 0x2686acu;

    // 0x2686ac: 0x244586d0  addiu       $a1, $v0, -0x7930
    ctx->pc = 0x2686acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936272));
    ctx->pc = 0x2686b0u;
}
