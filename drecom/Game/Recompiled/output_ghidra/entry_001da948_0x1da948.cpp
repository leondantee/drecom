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

// Function: entry_001da948
// Address: 0x1da948 - 0x1da950
void entry_001da948_0x1da948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da948_0x1da948");
#endif

    ctx->pc = 0x1da948u;

    // 0x1da948: 0x2402027c  addiu       $v0, $zero, 0x27C
    ctx->pc = 0x1da948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x1da94c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da94cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1da950u;
}
