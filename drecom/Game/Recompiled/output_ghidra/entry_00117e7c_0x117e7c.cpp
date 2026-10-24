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

// Function: entry_00117e7c
// Address: 0x117e7c - 0x117eb4
void entry_00117e7c_0x117e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117e7c_0x117e7c");
#endif

    switch (ctx->pc) {
        case 0x117e88u: goto label_117e88;
        default: break;
    }

    ctx->pc = 0x117e7cu;

    // 0x117e7c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x117e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x117e80: 0xc04605a  jal         func_118168
    ctx->pc = 0x117E80u;
    SET_GPR_U32(ctx, 31, 0x117E88u);
    ctx->pc = 0x117E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E80u;
    // 0x117e84: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118168u;
    {
        ctx->pc = 0x117E88u;
        ps2_stubs::malloc_r(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117E88u) { return; }
    ctx->pc = 0x117E88u;
label_117e88:
    // 0x117e88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e8c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x117E8Cu;
    {
        const bool branch_taken_0x117e8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x117E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E8Cu;
        // 0x117e90: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e8c) {
            ctx->pc = 0x117EB4u;
            return;
        }
    }
    ctx->pc = 0x117E94u;
    // 0x117e94: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x117e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x117e98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x117e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117e9c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x117e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x117ea0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x117ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x117ea4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x117ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x117ea8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x117ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x117eac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x117EACu;
    {
        const bool branch_taken_0x117eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EACu;
        // 0x117eb0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117eac) {
            ctx->pc = 0x117EF8u;
            return;
        }
    }
    ctx->pc = 0x117EB4u;
}
