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

// Function: entry_0016a080
// Address: 0x16a080 - 0x16a0d8
void entry_0016a080_0x16a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a080_0x16a080");
#endif

    switch (ctx->pc) {
        case 0x16a0a0u: goto label_16a0a0;
        case 0x16a0c4u: goto label_16a0c4;
        default: break;
    }

    ctx->pc = 0x16a080u;

    // 0x16a080: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16a080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a084: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16a084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16a088: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16a088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16a08c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a090: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16a090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16a094: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16a094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16a098: 0xc059c84  jal         func_167210
    ctx->pc = 0x16A098u;
    SET_GPR_U32(ctx, 31, 0x16A0A0u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16A098u, 0x16A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0A0u;
label_16a0a0:
    // 0x16a0a0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16a0a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16a0a4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16a0a8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16a0ac: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16a0b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a0b4: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16a0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16a0b8: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x16a0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16a0bc: 0xc059c84  jal         func_167210
    ctx->pc = 0x16A0BCu;
    SET_GPR_U32(ctx, 31, 0x16A0C4u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16A0BCu, 0x16A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0C4u;
label_16a0c4:
    // 0x16a0c4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x16a0c4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16a0c8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A0C8u;
    {
        const bool branch_taken_0x16a0c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a0c8) {
            ctx->pc = 0x16A0D8u;
            return;
        }
    }
    ctx->pc = 0x16A0D0u;
    // 0x16a0d0: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x16A0D0u;
    {
        const bool branch_taken_0x16a0d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0d0) {
            ctx->pc = 0x16A158u;
            return;
        }
    }
    ctx->pc = 0x16A0D8u;
}
