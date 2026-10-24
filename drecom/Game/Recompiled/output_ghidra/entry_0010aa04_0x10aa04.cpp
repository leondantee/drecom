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

// Function: entry_0010aa04
// Address: 0x10aa04 - 0x10aa08
void entry_0010aa04_0x10aa04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010aa04_0x10aa04");
#endif

    ctx->pc = 0x10aa04u;

    // 0x10aa04: 0x8e843d04  lw          $a0, 0x3D04($s4)
    ctx->pc = 0x10aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15620)));
    ctx->pc = 0x10aa08u;
}
