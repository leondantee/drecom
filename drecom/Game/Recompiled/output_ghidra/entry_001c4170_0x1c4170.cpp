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

// Function: entry_001c4170
// Address: 0x1c4170 - 0x1c417c
void entry_001c4170_0x1c4170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4170_0x1c4170");
#endif

    ctx->pc = 0x1c4170u;

    // 0x1c4170: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c4170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4174: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4178: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c4178u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c417cu;
}
