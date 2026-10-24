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

// Function: entry_002d6f4c
// Address: 0x2d6f4c - 0x2d6f58
void entry_002d6f4c_0x2d6f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6f4c_0x2d6f4c");
#endif

    ctx->pc = 0x2d6f4cu;

    // 0x2d6f4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d6f50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f54: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2d6f54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2d6f58u;
}
