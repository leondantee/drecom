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

// Function: entry_0024bbcc
// Address: 0x24bbcc - 0x24bbfc
void entry_0024bbcc_0x24bbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024bbcc_0x24bbcc");
#endif

    switch (ctx->pc) {
        case 0x24bbe8u: goto label_24bbe8;
        case 0x24bbf4u: goto label_24bbf4;
        default: break;
    }

    ctx->pc = 0x24bbccu;

    // 0x24bbcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24bbd0: 0x3404a301  ori         $a0, $zero, 0xA301
    ctx->pc = 0x24bbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41729);
    // 0x24bbd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24bbd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24bbd8: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x24bbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24bbdc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24bbdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24bbe0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24BBE0u;
    SET_GPR_U32(ctx, 31, 0x24BBE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24BBE0u, 0x24BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BBE8u;
label_24bbe8:
    // 0x24bbe8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24bbe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24bbec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24BBECu;
    SET_GPR_U32(ctx, 31, 0x24BBF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24BBECu, 0x24BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BBF4u;
label_24bbf4:
    // 0x24bbf4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24BBF4u;
    {
        const bool branch_taken_0x24bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bbf4) {
            ctx->pc = 0x24BC24u;
            return;
        }
    }
    ctx->pc = 0x24BBFCu;
}
