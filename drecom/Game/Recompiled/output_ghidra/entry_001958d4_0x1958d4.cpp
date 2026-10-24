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

// Function: entry_001958d4
// Address: 0x1958d4 - 0x1958e0
void entry_001958d4_0x1958d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001958d4_0x1958d4");
#endif

    ctx->pc = 0x1958d4u;

    // 0x1958d4: 0x8e1000e8  lw          $s0, 0xE8($s0)
    ctx->pc = 0x1958d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1958d8: 0x0  nop
    ctx->pc = 0x1958d8u;
    // NOP
    // 0x1958dc: 0x0  nop
    ctx->pc = 0x1958dcu;
    // NOP
    ctx->pc = 0x1958e0u;
}
