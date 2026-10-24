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

// Function: entry_0033d290
// Address: 0x33d290 - 0x33d298
void entry_0033d290_0x33d290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d290_0x33d290");
#endif

    ctx->pc = 0x33d290u;

    // 0x33d290: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x33d290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x33d294: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33d294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x33d298u;
}
