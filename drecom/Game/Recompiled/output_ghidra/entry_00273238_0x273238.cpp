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

// Function: entry_00273238
// Address: 0x273238 - 0x27327c
void entry_00273238_0x273238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273238_0x273238");
#endif

    switch (ctx->pc) {
        case 0x273264u: goto label_273264;
        default: break;
    }

    ctx->pc = 0x273238u;

    // 0x273238: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x273238u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27323c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x273240: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x273240u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273244: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x273244u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x273248: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x273248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x27324c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27324cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273250: 0x28420186  slti        $v0, $v0, 0x186
    ctx->pc = 0x273250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)390) ? 1 : 0);
    // 0x273254: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x273254u;
    {
        const bool branch_taken_0x273254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273254) {
            ctx->pc = 0x2731FCu;
            return;
        }
    }
    ctx->pc = 0x27325Cu;
    // 0x27325c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27325Cu;
    SET_GPR_U32(ctx, 31, 0x273264u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27325Cu, 0x273264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273264u;
label_273264:
    // 0x273264: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x273264u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27326c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27326cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273270: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x273270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x273274: 0x3e00008  jr          $ra
    ctx->pc = 0x273274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27327Cu;
}
