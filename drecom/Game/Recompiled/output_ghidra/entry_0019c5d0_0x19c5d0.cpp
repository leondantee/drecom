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

// Function: entry_0019c5d0
// Address: 0x19c5d0 - 0x19c5fc
void entry_0019c5d0_0x19c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c5d0_0x19c5d0");
#endif

    ctx->pc = 0x19c5d0u;

    // 0x19c5d0: 0x72401e28  paddub      $v1, $s2, $zero
    ctx->pc = 0x19c5d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x19c5d4: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x19c5d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19c5d8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x19C5D8u;
    {
        const bool branch_taken_0x19c5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c5d8) {
            ctx->pc = 0x19C5A0u;
            return;
        }
    }
    ctx->pc = 0x19C5E0u;
    // 0x19c5e0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x19c5e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c5e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c5e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c5e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c5e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c5ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c5f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19c5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19c5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x19C5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C5FCu;
}
