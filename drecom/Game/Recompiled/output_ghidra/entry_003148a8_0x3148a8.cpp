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

// Function: entry_003148a8
// Address: 0x3148a8 - 0x3148b0
void entry_003148a8_0x3148a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003148a8_0x3148a8");
#endif

    ctx->pc = 0x3148a8u;

    // 0x3148a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3148a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3148ac: 0x0  nop
    ctx->pc = 0x3148acu;
    // NOP
    ctx->pc = 0x3148b0u;
}
