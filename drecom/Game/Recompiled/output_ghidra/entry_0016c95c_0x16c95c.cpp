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

// Function: entry_0016c95c
// Address: 0x16c95c - 0x16c968
void entry_0016c95c_0x16c95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c95c_0x16c95c");
#endif

    ctx->pc = 0x16c95cu;

    // 0x16c95c: 0x8fb100d8  lw          $s1, 0xD8($sp)
    ctx->pc = 0x16c95cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16c960: 0x8fb200c8  lw          $s2, 0xC8($sp)
    ctx->pc = 0x16c960u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16c964: 0x0  nop
    ctx->pc = 0x16c964u;
    // NOP
    ctx->pc = 0x16c968u;
}
