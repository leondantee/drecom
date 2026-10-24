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

// Function: entry_0032c058
// Address: 0x32c058 - 0x32c088
void entry_0032c058_0x32c058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c058_0x32c058");
#endif

    switch (ctx->pc) {
        case 0x32c070u: goto label_32c070;
        default: break;
    }

    ctx->pc = 0x32c058u;

    // 0x32c058: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32c058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32c05c: 0x24421a14  addiu       $v0, $v0, 0x1A14
    ctx->pc = 0x32c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32c060: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32c060u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c064: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32c064u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32c068: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32C068u;
    SET_GPR_U32(ctx, 31, 0x32C070u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32C068u, 0x32C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C070u;
label_32c070:
    // 0x32c070: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x32c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32c074: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32c074u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c078: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x32c078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x32c07c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32c080: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x32c080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x32c084: 0x0  nop
    ctx->pc = 0x32c084u;
    // NOP
    ctx->pc = 0x32c088u;
}
