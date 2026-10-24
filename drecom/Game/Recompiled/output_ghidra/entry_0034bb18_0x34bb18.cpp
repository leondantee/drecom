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

// Function: entry_0034bb18
// Address: 0x34bb18 - 0x34bb48
void entry_0034bb18_0x34bb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034bb18_0x34bb18");
#endif

    ctx->pc = 0x34bb18u;

    // 0x34bb18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb1c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bb20: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34bb20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bb24: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bb2c: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x34bb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bb30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bb34: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bb3c: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34bb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bb40: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x34BB40u;
    {
        const bool branch_taken_0x34bb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bb40) {
            ctx->pc = 0x34BD88u;
            return;
        }
    }
    ctx->pc = 0x34BB48u;
}
