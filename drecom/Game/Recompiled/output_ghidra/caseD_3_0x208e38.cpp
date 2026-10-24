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

// Function: caseD_3
// Address: 0x208e38 - 0x208e60
void caseD_3_0x208e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x208e38");
#endif

    ctx->pc = 0x208e38u;

    // 0x208e38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208e3c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x208e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x208e40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208e44: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x208e44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x208e48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208e4c: 0xac401344  sw          $zero, 0x1344($v0)
    ctx->pc = 0x208e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 0));
    // 0x208e50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208e54: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x208e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x208e58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208e5c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x208e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x208e60u;
}
