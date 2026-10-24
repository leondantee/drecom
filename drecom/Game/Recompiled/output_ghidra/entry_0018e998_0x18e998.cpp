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

// Function: entry_0018e998
// Address: 0x18e998 - 0x18e9a0
void entry_0018e998_0x18e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e998_0x18e998");
#endif

    ctx->pc = 0x18e998u;

    // 0x18e998: 0x8e310b24  lw          $s1, 0xB24($s1)
    ctx->pc = 0x18e998u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2852)));
    // 0x18e99c: 0x0  nop
    ctx->pc = 0x18e99cu;
    // NOP
    ctx->pc = 0x18e9a0u;
}
