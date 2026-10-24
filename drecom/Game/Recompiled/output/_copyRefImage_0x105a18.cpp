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

// Function: _copyRefImage
// Address: 0x105a18 - 0x105a78
void _copyRefImage_0x105a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_copyRefImage_0x105a18");
#endif

    switch (ctx->pc) {
        case 0x105a28u: goto label_105a28;
        default: break;
    }

    ctx->pc = 0x105a18u;

    // 0x105a18: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x105a18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x105a1c: 0x3c0a0010  lui         $t2, 0x10
    ctx->pc = 0x105a1cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16 << 16));
    // 0x105a20: 0x254a5a60  addiu       $t2, $t2, 0x5A60
    ctx->pc = 0x105a20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 23136));
    // 0x105a24: 0x794b0000  lq          $t3, 0x0($t2)
    ctx->pc = 0x105a24u;
    SET_GPR_VEC(ctx, 11, FAST_READ128(0x105A60u));
label_105a28:
    // 0x105a28: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x105a28u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105a2c: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x105a2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x105a30: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x105a30u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x105a34: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x105a34u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x105a38: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x105a38u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x105a3c: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x105a3cu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x105a40: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x105a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x105a44: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x105a44u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x105a48: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x105a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x105a4c: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x105a4cu;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105a50: 0x1580fff5  bnez        $t4, . + 4 + (-0xB << 2)
    ctx->pc = 0x105A50u;
    {
        const bool branch_taken_0x105a50 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x105A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A50u;
        // 0x105a54: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a50) {
            ctx->pc = 0x105A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105a28;
        }
    }
    ctx->pc = 0x105A58u;
    // 0x105a58: 0x0  nop
    ctx->pc = 0x105a58u;
    // NOP
    // 0x105a5c: 0x0  nop
    ctx->pc = 0x105a5cu;
    // NOP
    // 0x105a60: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x105a60u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x105a64: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x105a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x105a68: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x105a68u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x105a6c: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x105a6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x105a70: 0x3e00008  jr          $ra
    ctx->pc = 0x105A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105A78u;
}
