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

// Function: entry_001bc884
// Address: 0x1bc884 - 0x1bc8b8
void entry_001bc884_0x1bc884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc884_0x1bc884");
#endif

    switch (ctx->pc) {
        case 0x1bc890u: goto label_1bc890;
        default: break;
    }

    ctx->pc = 0x1bc884u;

    // 0x1bc884: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bc884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bc888: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BC888u;
    SET_GPR_U32(ctx, 31, 0x1BC890u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BC888u, 0x1BC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC890u;
label_1bc890:
    // 0x1bc890: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc890u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc894: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc898: 0x8c641b60  lw          $a0, 0x1B60($v1)
    ctx->pc = 0x1bc898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1bc89c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC89Cu;
    {
        const bool branch_taken_0x1bc89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc89c) {
            ctx->pc = 0x1BC8B8u;
            return;
        }
    }
    ctx->pc = 0x1BC8A4u;
    // 0x1bc8a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1bc8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bc8a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc8ac: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1bc8acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bc8b0: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x1BC8B0u;
    {
        const bool branch_taken_0x1bc8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8b0) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC8B8u;
}
