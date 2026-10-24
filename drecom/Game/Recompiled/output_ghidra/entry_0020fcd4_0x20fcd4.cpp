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

// Function: entry_0020fcd4
// Address: 0x20fcd4 - 0x20fd08
void entry_0020fcd4_0x20fcd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fcd4_0x20fcd4");
#endif

    switch (ctx->pc) {
        case 0x20fd04u: goto label_20fd04;
        default: break;
    }

    ctx->pc = 0x20fcd4u;

    // 0x20fcd4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20fcd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fcd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20fcd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fcdc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20fcdcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fce0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x20fce0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fce4: 0x71603e28  paddub      $a3, $t3, $zero
    ctx->pc = 0x20fce4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x20fce8: 0x3c0380ef  lui         $v1, 0x80EF
    ctx->pc = 0x20fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33007 << 16));
    // 0x20fcec: 0x346ab0b0  ori         $t2, $v1, 0xB0B0
    ctx->pc = 0x20fcecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45232);
    // 0x20fcf0: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x20fcf0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20fcf4: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x20fcf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x20fcf8: 0x240a0019  addiu       $t2, $zero, 0x19
    ctx->pc = 0x20fcf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20fcfc: 0xc059190  jal         func_164640
    ctx->pc = 0x20FCFCu;
    SET_GPR_U32(ctx, 31, 0x20FD04u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x20FCFCu, 0x20FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD04u;
label_20fd04:
    // 0x20fd04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20fd04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20fd08u;
}
