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

// Function: entry_001af038
// Address: 0x1af038 - 0x1af040
void entry_001af038_0x1af038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af038_0x1af038");
#endif

    ctx->pc = 0x1af038u;

    // 0x1af038: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1af038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1af03c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1af040u;
}
