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

// Function: entry_003484c8
// Address: 0x3484c8 - 0x3484f0
void entry_003484c8_0x3484c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003484c8_0x3484c8");
#endif

    ctx->pc = 0x3484c8u;

    // 0x3484c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3484c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3484cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3484ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3484d0: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x3484d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3484d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3484d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3484d8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3484d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3484dc: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x3484dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x3484e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3484e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3484e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3484e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3484e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3484e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3484ec: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x3484ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x3484f0u;
}
