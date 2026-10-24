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

// Function: entry_001f8034
// Address: 0x1f8034 - 0x1f805c
void entry_001f8034_0x1f8034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8034_0x1f8034");
#endif

    switch (ctx->pc) {
        case 0x1f8044u: goto label_1f8044;
        case 0x1f8058u: goto label_1f8058;
        default: break;
    }

    ctx->pc = 0x1f8034u;

    // 0x1f8034: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f8034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f8038: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f8038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f803c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F803Cu;
    SET_GPR_U32(ctx, 31, 0x1F8044u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F803Cu, 0x1F8044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8044u;
label_1f8044:
    // 0x1f8044: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f8044u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f8048: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f8048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f804c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1f804cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1f8050: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F8050u;
    SET_GPR_U32(ctx, 31, 0x1F8058u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F8050u, 0x1F8058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8058u;
label_1f8058:
    // 0x1f8058: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1f8058u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1f805cu;
}
