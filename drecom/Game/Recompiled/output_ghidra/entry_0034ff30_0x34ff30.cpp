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

// Function: entry_0034ff30
// Address: 0x34ff30 - 0x34ff58
void entry_0034ff30_0x34ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034ff30_0x34ff30");
#endif

    ctx->pc = 0x34ff30u;

    // 0x34ff30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ff34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ff38: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34ff38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ff3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ff40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ff44: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x34ff44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ff48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ff4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ff50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ff54: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34ff54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x34ff58u;
}
