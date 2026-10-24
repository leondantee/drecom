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

// Function: entry_00221da0
// Address: 0x221da0 - 0x221dcc
void entry_00221da0_0x221da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221da0_0x221da0");
#endif

    ctx->pc = 0x221da0u;

    // 0x221da0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x221da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x221da4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221da8: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x221da8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x221dac: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221db0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x221db0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x221db4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221db8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x221db8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x221dbc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221dc0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x221dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x221dc4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221dc8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x221dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x221dccu;
}
