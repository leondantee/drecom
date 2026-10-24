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

// Function: entry_0033ee80
// Address: 0x33ee80 - 0x33ee90
void entry_0033ee80_0x33ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ee80_0x33ee80");
#endif

    ctx->pc = 0x33ee80u;

    // 0x33ee80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ee84: 0x906210a9  lbu         $v0, 0x10A9($v1)
    ctx->pc = 0x33ee84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4265)));
    // 0x33ee88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33ee8c: 0xa06210a9  sb          $v0, 0x10A9($v1)
    ctx->pc = 0x33ee8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4265), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x33ee90u;
}
