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

// Function: caseD_6
// Address: 0x2092c0 - 0x2092e0
void caseD_6_0x2092c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2092c0");
#endif

    ctx->pc = 0x2092c0u;

    // 0x2092c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2092c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2092c4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2092c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2092c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2092c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2092cc: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2092ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2092d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2092d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2092d4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2092d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2092d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2092d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2092dc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2092dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2092e0u;
}
