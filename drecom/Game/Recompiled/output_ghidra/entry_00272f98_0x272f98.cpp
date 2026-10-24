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

// Function: entry_00272f98
// Address: 0x272f98 - 0x272fd8
void entry_00272f98_0x272f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272f98_0x272f98");
#endif

    switch (ctx->pc) {
        case 0x272fc4u: goto label_272fc4;
        default: break;
    }

    ctx->pc = 0x272f98u;

    // 0x272f98: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x272f98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x272f9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x272f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x272fa0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x272fa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272fa4: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x272fa4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x272fa8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x272fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x272fac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272facu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x272fb0: 0x284200a2  slti        $v0, $v0, 0xA2
    ctx->pc = 0x272fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)162) ? 1 : 0);
    // 0x272fb4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x272FB4u;
    {
        const bool branch_taken_0x272fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272fb4) {
            ctx->pc = 0x272F88u;
            return;
        }
    }
    ctx->pc = 0x272FBCu;
    // 0x272fbc: 0xc084934  jal         func_2124D0
    ctx->pc = 0x272FBCu;
    SET_GPR_U32(ctx, 31, 0x272FC4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x272FBCu, 0x272FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FC4u;
label_272fc4:
    // 0x272fc4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x272fc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272fc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272fcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x272fccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x272fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x272FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272FD8u;
}
