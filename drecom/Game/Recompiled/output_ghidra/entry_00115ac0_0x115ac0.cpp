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

// Function: entry_00115ac0
// Address: 0x115ac0 - 0x115ae4
void entry_00115ac0_0x115ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115ac0_0x115ac0");
#endif

    switch (ctx->pc) {
        case 0x115ad4u: goto label_115ad4;
        default: break;
    }

    ctx->pc = 0x115ac0u;

    // 0x115ac0: 0x3c10009a  lui         $s0, 0x9A
    ctx->pc = 0x115ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)154 << 16));
    // 0x115ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115ac8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x115ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115acc: 0xc084c18  jal         func_213060
    ctx->pc = 0x115ACCu;
    SET_GPR_U32(ctx, 31, 0x115AD4u);
    ctx->pc = 0x115AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115ACCu;
    // 0x115ad0: 0xae000e20  sw          $zero, 0xE20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3616), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213060u;
    {
        ctx->pc = 0x115AD4u;
        ps2_stubs::close(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x115AD4u) { return; }
    ctx->pc = 0x115AD4u;
label_115ad4:
    // 0x115ad4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x115ad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ad8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115adc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115ADCu;
    {
        const bool branch_taken_0x115adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x115AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115ADCu;
        // 0x115ae0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115adc) {
            ctx->pc = 0x115AF4u;
            return;
        }
    }
    ctx->pc = 0x115AE4u;
}
