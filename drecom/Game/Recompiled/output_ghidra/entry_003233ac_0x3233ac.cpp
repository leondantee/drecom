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

// Function: entry_003233ac
// Address: 0x3233ac - 0x3233b4
void entry_003233ac_0x3233ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003233ac_0x3233ac");
#endif

    ctx->pc = 0x3233acu;

    // 0x3233ac: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x3233acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3233b0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3233b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x3233b4u;
}
