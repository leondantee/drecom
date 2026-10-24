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

// Function: entry_00268edc
// Address: 0x268edc - 0x268efc
void entry_00268edc_0x268edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00268edc_0x268edc");
#endif

    ctx->pc = 0x268edcu;

    // 0x268edc: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x268edcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268ee0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x268ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268ee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x268ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268ef0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x268ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x268EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268EFCu;
}
