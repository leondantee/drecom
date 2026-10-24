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

// Function: entry_00105d14
// Address: 0x105d14 - 0x105d18
void entry_00105d14_0x105d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105d14_0x105d14");
#endif

    ctx->pc = 0x105d14u;

    // 0x105d14: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x105d14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
    ctx->pc = 0x105d18u;
}
