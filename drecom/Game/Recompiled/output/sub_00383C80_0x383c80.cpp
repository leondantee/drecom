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

// Function: sub_00383C80
// Address: 0x383c80 - 0x383cc0
void sub_00383C80_0x383c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383C80_0x383c80");
#endif

    ctx->pc = 0x383c80u;

    // 0x383c80: 0x13101008  beq         $t8, $s0, . + 4 + (0x1008 << 2)
    ctx->pc = 0x383C80u;
    {
        const bool branch_taken_0x383c80 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 16));
        ctx->pc = 0x383C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C80u;
        // 0x383c84: 0x16161310  bne         $s0, $s6, . + 4 + (0x1310 << 2) (Delay Slot)
        // Likely branch instruction at 0x383C84 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c80) {
            ctx->pc = 0x387CA4u;
            return;
        }
    }
    ctx->pc = 0x383C88u;
    // 0x383c88: 0x16161616  bne         $s0, $s6, . + 4 + (0x1616 << 2)
    ctx->pc = 0x383C88u;
    {
        const bool branch_taken_0x383c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x383C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C88u;
        // 0x383c8c: 0x1b1a181a  .word       0x1B1A181A                   # blez        $t8, . + 4 + (0x181A << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x383C8C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c88) {
            ctx->pc = 0x3894E4u;
            return;
        }
    }
    ctx->pc = 0x383C90u;
    // 0x383c90: 0x1a1a1b1b  .word       0x1A1A1B1B                   # blez        $s0, . + 4 + (0x1B1B << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x383C90u;
    {
        const bool branch_taken_0x383c90 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x383C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C90u;
        // 0x383c94: 0x1b1b1a1a  .word       0x1B1B1A1A                   # blez        $t8, . + 4 + (0x1A1A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x383C94 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c90) {
            ctx->pc = 0x38A900u;
            return;
        }
    }
    ctx->pc = 0x383C98u;
    // 0x383c98: 0x1d1d1d1b  .word       0x1D1D1D1B                   # bgtz        $t0, . + 4 + (0x1D1B << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x383C98u;
    {
        const bool branch_taken_0x383c98 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x383C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C98u;
        // 0x383c9c: 0x1d222222  .word       0x1D222222                   # bgtz        $t1, . + 4 + (0x2222 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x383C9C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c98) {
            ctx->pc = 0x38B108u;
            return;
        }
    }
    ctx->pc = 0x383CA0u;
    // 0x383ca0: 0x1b1b1d1d  .word       0x1B1B1D1D                   # blez        $t8, . + 4 + (0x1D1D << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x383CA0u;
    {
        const bool branch_taken_0x383ca0 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x383CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CA0u;
        // 0x383ca4: 0x20201d1d  addi        $zero, $at, 0x1D1D (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ca0) {
            ctx->pc = 0x38B118u;
            return;
        }
    }
    ctx->pc = 0x383CA8u;
    // 0x383ca8: 0x26252222  addiu       $a1, $s1, 0x2222
    ctx->pc = 0x383ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8738));
    // 0x383cac: 0x22232325  addi        $v1, $s1, 0x2325
    ctx->pc = 0x383cacu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)8997, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x383cb0: 0x28262623  slti        $a2, $at, 0x2623
    ctx->pc = 0x383cb0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)9763) ? 1 : 0);
    // 0x383cb4: 0x30302828  andi        $s0, $at, 0x2828
    ctx->pc = 0x383cb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)10280);
    // 0x383cb8: 0x38382e2e  xori        $t8, $at, 0x2E2E
    ctx->pc = 0x383cb8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)11822);
    // 0x383cbc: 0x5345453a  beql        $k0, $a1, . + 4 + (0x453A << 2)
    ctx->pc = 0x383CBCu;
    {
        const bool branch_taken_0x383cbc = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x383cbc) {
            ctx->pc = 0x3951A8u;
            return;
        }
    }
    ctx->pc = 0x383CC4u;
}
