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

// Function: entry_00274a50
// Address: 0x274a50 - 0x274a58
void entry_00274a50_0x274a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274a50_0x274a50");
#endif

    ctx->pc = 0x274a50u;

    // 0x274a50: 0x2415001d  addiu       $s5, $zero, 0x1D
    ctx->pc = 0x274a50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x274a54: 0x0  nop
    ctx->pc = 0x274a54u;
    // NOP
    ctx->pc = 0x274a58u;
}
