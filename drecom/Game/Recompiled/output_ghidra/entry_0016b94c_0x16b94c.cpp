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

// Function: entry_0016b94c
// Address: 0x16b94c - 0x16b958
void entry_0016b94c_0x16b94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b94c_0x16b94c");
#endif

    ctx->pc = 0x16b94cu;

    // 0x16b94c: 0x8fb200a0  lw          $s2, 0xA0($sp)
    ctx->pc = 0x16b94cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16b950: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x16b950u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b954: 0x0  nop
    ctx->pc = 0x16b954u;
    // NOP
    ctx->pc = 0x16b958u;
}
