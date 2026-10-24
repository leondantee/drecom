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

// Function: entry_00112f9c
// Address: 0x112f9c - 0x112fb8
void entry_00112f9c_0x112f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112f9c_0x112f9c");
#endif

    ctx->pc = 0x112f9cu;

    // 0x112f9c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x112f9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fa0: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x112fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x112fa4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x112FA4u;
    {
        const bool branch_taken_0x112fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FA4u;
        // 0x112fa8: 0xafb70250  sw          $s7, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fa4) {
            ctx->pc = 0x11306Cu;
            return;
        }
    }
    ctx->pc = 0x112FACu;
    // 0x112fac: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x112facu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x112fb0: 0x2bd70000  slti        $s7, $fp, 0x0
    ctx->pc = 0x112fb0u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x112fb4: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x112fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    ctx->pc = 0x112fb8u;
}
