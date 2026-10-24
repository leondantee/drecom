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

// Function: entry_00105ba8
// Address: 0x105ba8 - 0x105bb0
void entry_00105ba8_0x105ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105ba8_0x105ba8");
#endif

    ctx->pc = 0x105ba8u;

    // 0x105ba8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x105ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x105bac: 0xae02449c  sw          $v0, 0x449C($s0)
    ctx->pc = 0x105bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17564), GPR_U32(ctx, 2));
    ctx->pc = 0x105bb0u;
}
