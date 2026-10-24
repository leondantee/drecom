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

// Function: entry_00195a38
// Address: 0x195a38 - 0x195a40
void entry_00195a38_0x195a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a38_0x195a38");
#endif

    ctx->pc = 0x195a38u;

    // 0x195a38: 0x8e1000e8  lw          $s0, 0xE8($s0)
    ctx->pc = 0x195a38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x195a3c: 0x0  nop
    ctx->pc = 0x195a3cu;
    // NOP
    ctx->pc = 0x195a40u;
}
