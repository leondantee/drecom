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

// Function: entry_00105d58
// Address: 0x105d58 - 0x105d5c
void entry_00105d58_0x105d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105d58_0x105d58");
#endif

    ctx->pc = 0x105d58u;

    // 0x105d58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105d58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x105d5cu;
}
