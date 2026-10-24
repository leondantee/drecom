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

// Function: entry_00377480
// Address: 0x377480 - 0x377484
void entry_00377480_0x377480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377480_0x377480");
#endif

    ctx->pc = 0x377480u;

    // 0x377480: 0x24457190  addiu       $a1, $v0, 0x7190
    ctx->pc = 0x377480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29072));
    ctx->pc = 0x377484u;
}
