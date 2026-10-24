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

// Function: entry_0027fa48
// Address: 0x27fa48 - 0x27fa88
void entry_0027fa48_0x27fa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027fa48_0x27fa48");
#endif

    switch (ctx->pc) {
        case 0x27fa68u: goto label_27fa68;
        default: break;
    }

    ctx->pc = 0x27fa48u;

    // 0x27fa48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fa4c: 0x94221b78  lhu         $v0, 0x1B78($at)
    ctx->pc = 0x27fa4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B78u));
    // 0x27fa50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27fa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27fa54: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x27fa54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27fa58: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x27FA58u;
    {
        const bool branch_taken_0x27fa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fa58) {
            ctx->pc = 0x27F9C8u;
            return;
        }
    }
    ctx->pc = 0x27FA60u;
    // 0x27fa60: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27FA60u;
    SET_GPR_U32(ctx, 31, 0x27FA68u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27FA60u, 0x27FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA68u;
label_27fa68:
    // 0x27fa68: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x27fa68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fa6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27fa6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27fa70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27fa70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fa74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27fa74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fa78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27fa78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fa7c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27fa7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27fa80: 0x3e00008  jr          $ra
    ctx->pc = 0x27FA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FA88u;
}
