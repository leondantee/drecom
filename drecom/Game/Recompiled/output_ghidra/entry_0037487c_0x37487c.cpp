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

// Function: entry_0037487c
// Address: 0x37487c - 0x3748b0
void entry_0037487c_0x37487c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037487c_0x37487c");
#endif

    ctx->pc = 0x37487cu;

    // 0x37487c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x37487cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374880: 0xa46010a6  sh          $zero, 0x10A6($v1)
    ctx->pc = 0x374880u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 0));
    // 0x374884: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x374884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374888: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37488c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x37488cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x374890: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374894: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x374894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x374898: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37489c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x37489cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3748a0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3748a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3748a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3748a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3748a8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3748a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3748ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3748acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3748b0u;
}
