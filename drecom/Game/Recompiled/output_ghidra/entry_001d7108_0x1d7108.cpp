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

// Function: entry_001d7108
// Address: 0x1d7108 - 0x1d710c
void entry_001d7108_0x1d7108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7108_0x1d7108");
#endif

    ctx->pc = 0x1d7108u;

    // 0x1d7108: 0x24100700  addiu       $s0, $zero, 0x700
    ctx->pc = 0x1d7108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    ctx->pc = 0x1d710cu;
}
