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

// Function: entry_0017a460
// Address: 0x17a460 - 0x17a468
void entry_0017a460_0x17a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a460_0x17a460");
#endif

    ctx->pc = 0x17a460u;

    // 0x17a460: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x17a460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x17a464: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17a464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x17a468u;
}
