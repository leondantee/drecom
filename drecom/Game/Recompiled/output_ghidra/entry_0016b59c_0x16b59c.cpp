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

// Function: entry_0016b59c
// Address: 0x16b59c - 0x16b5a8
void entry_0016b59c_0x16b59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b59c_0x16b59c");
#endif

    ctx->pc = 0x16b59cu;

    // 0x16b59c: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x16b59cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16b5a0: 0x8fb100b8  lw          $s1, 0xB8($sp)
    ctx->pc = 0x16b5a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16b5a4: 0x0  nop
    ctx->pc = 0x16b5a4u;
    // NOP
    ctx->pc = 0x16b5a8u;
}
