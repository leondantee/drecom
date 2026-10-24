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

// Function: entry_00363594
// Address: 0x363594 - 0x3635ac
void entry_00363594_0x363594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363594_0x363594");
#endif

    ctx->pc = 0x363594u;

    // 0x363594: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x363594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x363598: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x363598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36359c: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x36359cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
    // 0x3635a0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3635a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3635a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3635a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3635a8: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x3635a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3635acu;
}
