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

// Function: entry_0016c80c
// Address: 0x16c80c - 0x16c818
void entry_0016c80c_0x16c80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c80c_0x16c80c");
#endif

    ctx->pc = 0x16c80cu;

    // 0x16c80c: 0x8fb100d0  lw          $s1, 0xD0($sp)
    ctx->pc = 0x16c80cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16c810: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x16c810u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16c814: 0x0  nop
    ctx->pc = 0x16c814u;
    // NOP
    ctx->pc = 0x16c818u;
}
