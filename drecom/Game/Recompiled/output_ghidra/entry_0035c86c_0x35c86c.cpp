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

// Function: entry_0035c86c
// Address: 0x35c86c - 0x35c874
void entry_0035c86c_0x35c86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035c86c_0x35c86c");
#endif

    ctx->pc = 0x35c86cu;

    // 0x35c86c: 0x8fb10028  lw          $s1, 0x28($sp)
    ctx->pc = 0x35c86cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c870: 0x0  nop
    ctx->pc = 0x35c870u;
    // NOP
    ctx->pc = 0x35c874u;
}
