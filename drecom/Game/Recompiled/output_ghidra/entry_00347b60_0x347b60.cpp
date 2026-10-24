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

// Function: entry_00347b60
// Address: 0x347b60 - 0x347b88
void entry_00347b60_0x347b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347b60_0x347b60");
#endif

    ctx->pc = 0x347b60u;

    // 0x347b60: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b64: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x347b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347b68: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x347b68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x347b6c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347b74: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x347b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x347b78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x347b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347b7c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x347b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b80: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x347b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x347b84: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x347b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x347b88u;
}
