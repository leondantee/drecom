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

// Function: entry_0019f640
// Address: 0x19f640 - 0x19f670
void entry_0019f640_0x19f640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f640_0x19f640");
#endif

    switch (ctx->pc) {
        case 0x19f64cu: goto label_19f64c;
        default: break;
    }

    ctx->pc = 0x19f640u;

    // 0x19f640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19f640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f644: 0xc0ce824  jal         func_33A090
    ctx->pc = 0x19F644u;
    SET_GPR_U32(ctx, 31, 0x19F64Cu);
    ctx->pc = 0x33A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A090u, 0x19F644u, 0x19F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F64Cu;
label_19f64c:
    // 0x19f64c: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x19f64cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19f650: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x19f650u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19f654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f65c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f65cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f664: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19f664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19f668: 0x3e00008  jr          $ra
    ctx->pc = 0x19F668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F670u;
}
