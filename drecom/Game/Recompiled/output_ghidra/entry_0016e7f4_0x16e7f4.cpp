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

// Function: entry_0016e7f4
// Address: 0x16e7f4 - 0x16e824
void entry_0016e7f4_0x16e7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e7f4_0x16e7f4");
#endif

    switch (ctx->pc) {
        case 0x16e80cu: goto label_16e80c;
        default: break;
    }

    ctx->pc = 0x16e7f4u;

    // 0x16e7f4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x16e7f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x16e7f8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x16e7f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x16e7fc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x16e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e800: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x16e800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16e804: 0xc05ba0c  jal         func_16E830
    ctx->pc = 0x16E804u;
    SET_GPR_U32(ctx, 31, 0x16E80Cu);
    ctx->pc = 0x16E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E830u, 0x16E804u, 0x16E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E80Cu;
label_16e80c:
    // 0x16e80c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x16e80cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16e810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e818: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16e81c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E824u;
}
