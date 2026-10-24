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

// Function: entry_00113f80
// Address: 0x113f80 - 0x113fc8
void entry_00113f80_0x113f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113f80_0x113f80");
#endif

    ctx->pc = 0x113f80u;

label_113f80:
    // 0x113f80: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x113f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x113f84: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x113f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x113f88: 0x2562d7f0  addiu       $v0, $t3, -0x2810
    ctx->pc = 0x113f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294957040));
    // 0x113f8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113f90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x113f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113f94: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x113f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x113f98: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x113f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113f9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x113f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x113fa0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x113fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113fa4: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x113fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x113fa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x113fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x113fac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x113FACu;
    {
        const bool branch_taken_0x113fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FACu;
        // 0x113fb0: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fac) {
            ctx->pc = 0x113FD0u;
            return;
        }
    }
    ctx->pc = 0x113FB4u;
    // 0x113fb4: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x113fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x113fb8: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x113FB8u;
    {
        const bool branch_taken_0x113fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FB8u;
        // 0x113fbc: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fb8) {
            ctx->pc = 0x113F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113f80;
        }
    }
    ctx->pc = 0x113FC0u;
    // 0x113fc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x113FC0u;
    {
        const bool branch_taken_0x113fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FC0u;
        // 0x113fc4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fc0) {
            ctx->pc = 0x113FD8u;
            return;
        }
    }
    ctx->pc = 0x113FC8u;
}
