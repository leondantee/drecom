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

// Function: entry_00105dc0
// Address: 0x105dc0 - 0x105dc4
void entry_00105dc0_0x105dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105dc0_0x105dc0");
#endif

    ctx->pc = 0x105dc0u;

    // 0x105dc0: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x105dc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x105dc4u;
}
