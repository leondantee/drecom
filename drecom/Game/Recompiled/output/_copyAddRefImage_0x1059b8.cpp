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

// Function: _copyAddRefImage
// Address: 0x1059b8 - 0x105a14
void _copyAddRefImage_0x1059b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_copyAddRefImage_0x1059b8");
#endif

    switch (ctx->pc) {
        case 0x1059c8u: goto label_1059c8;
        default: break;
    }

    ctx->pc = 0x1059b8u;

    // 0x1059b8: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x1059b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1059bc: 0x3c0a0010  lui         $t2, 0x10
    ctx->pc = 0x1059bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16 << 16));
    // 0x1059c0: 0x254a5a60  addiu       $t2, $t2, 0x5A60
    ctx->pc = 0x1059c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 23136));
    // 0x1059c4: 0x794b0000  lq          $t3, 0x0($t2)
    ctx->pc = 0x1059c4u;
    SET_GPR_VEC(ctx, 11, FAST_READ128(0x105A60u));
label_1059c8:
    // 0x1059c8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1059c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1059cc: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x1059ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1059d0: 0x78cd0000  lq          $t5, 0x0($a2)
    ctx->pc = 0x1059d0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1059d4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1059d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1059d8: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x1059d8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1059dc: 0x710d4108  paddh       $t0, $t0, $t5
    ctx->pc = 0x1059dcu;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x1059e0: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x1059e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1059e4: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x1059e4u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x1059e8: 0x71224908  paddh       $t1, $t1, $v0
    ctx->pc = 0x1059e8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1059ec: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x1059ecu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1059f0: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x1059f0u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x1059f4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1059f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1059f8: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x1059f8u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1059fc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1059fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x105a00: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x105a00u;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105a04: 0x1580fff0  bnez        $t4, . + 4 + (-0x10 << 2)
    ctx->pc = 0x105A04u;
    {
        const bool branch_taken_0x105a04 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x105A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A04u;
        // 0x105a08: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a04) {
            ctx->pc = 0x1059C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1059c8;
        }
    }
    ctx->pc = 0x105A0Cu;
    // 0x105a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x105A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105A14u;
}
