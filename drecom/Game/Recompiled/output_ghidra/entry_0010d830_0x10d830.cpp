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

// Function: entry_0010d830
// Address: 0x10d830 - 0x10d838
void entry_0010d830_0x10d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d830_0x10d830");
#endif

    ctx->pc = 0x10d830u;

    // 0x10d830: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10d830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d834: 0x0  nop
    ctx->pc = 0x10d834u;
    // NOP
    ctx->pc = 0x10d838u;
}
