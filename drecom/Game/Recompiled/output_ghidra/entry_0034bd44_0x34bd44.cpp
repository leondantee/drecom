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

// Function: entry_0034bd44
// Address: 0x34bd44 - 0x34bd6c
void entry_0034bd44_0x34bd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034bd44_0x34bd44");
#endif

    ctx->pc = 0x34bd44u;

    // 0x34bd44: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bd4c: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34bd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bd50: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bd58: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x34bd58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bd5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bd60: 0x8fb00098  lw          $s0, 0x98($sp)
    ctx->pc = 0x34bd60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd64: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x34bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34bd68: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34bd68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x34bd6cu;
}
