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

// Function: entry_002bcd0c
// Address: 0x2bcd0c - 0x2bcd10
void entry_002bcd0c_0x2bcd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002bcd0c_0x2bcd0c");
#endif

    ctx->pc = 0x2bcd0cu;

    // 0x2bcd0c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2bcd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x2bcd10u;
}
