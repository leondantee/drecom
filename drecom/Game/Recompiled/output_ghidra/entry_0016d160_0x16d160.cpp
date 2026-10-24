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

// Function: entry_0016d160
// Address: 0x16d160 - 0x16d16c
void entry_0016d160_0x16d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d160_0x16d160");
#endif

    ctx->pc = 0x16d160u;

    // 0x16d160: 0x8fb500b8  lw          $s5, 0xB8($sp)
    ctx->pc = 0x16d160u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16d164: 0x8fbe00a8  lw          $fp, 0xA8($sp)
    ctx->pc = 0x16d164u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16d168: 0x0  nop
    ctx->pc = 0x16d168u;
    // NOP
    ctx->pc = 0x16d16cu;
}
