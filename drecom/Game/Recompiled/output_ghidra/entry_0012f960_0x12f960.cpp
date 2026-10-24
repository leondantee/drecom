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

// Function: entry_0012f960
// Address: 0x12f960 - 0x12f964
void entry_0012f960_0x12f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f960_0x12f960");
#endif

    ctx->pc = 0x12f960u;

    // 0x12f960: 0x2411003c  addiu       $s1, $zero, 0x3C
    ctx->pc = 0x12f960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x12f964u;
}
