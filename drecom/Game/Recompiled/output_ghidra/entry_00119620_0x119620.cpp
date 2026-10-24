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

// Function: entry_00119620
// Address: 0x119620 - 0x119628
void entry_00119620_0x119620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119620_0x119620");
#endif

    ctx->pc = 0x119620u;

    // 0x119620: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x119620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x119624: 0x0  nop
    ctx->pc = 0x119624u;
    // NOP
    ctx->pc = 0x119628u;
}
