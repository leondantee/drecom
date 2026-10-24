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

// Function: entry_00213f50
// Address: 0x213f50 - 0x213f54
void entry_00213f50_0x213f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213f50_0x213f50");
#endif

    ctx->pc = 0x213f50u;

    // 0x213f50: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x213f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x213f54u;
}
