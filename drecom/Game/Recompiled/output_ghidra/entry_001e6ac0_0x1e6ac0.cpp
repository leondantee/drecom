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

// Function: entry_001e6ac0
// Address: 0x1e6ac0 - 0x1e6b00
void entry_001e6ac0_0x1e6ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6ac0_0x1e6ac0");
#endif

    ctx->pc = 0x1e6ac0u;

    // 0x1e6ac0: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x1e6ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e6ac4: 0x4a0000e  bltz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E6AC4u;
    {
        const bool branch_taken_0x1e6ac4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1e6ac4) {
            ctx->pc = 0x1E6B00u;
            return;
        }
    }
    ctx->pc = 0x1E6ACCu;
    // 0x1e6acc: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x1e6accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e6ad0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6ad4: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e6ad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6ad8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6AD8u;
    {
        const bool branch_taken_0x1e6ad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6ad8) {
            ctx->pc = 0x1E6B00u;
            return;
        }
    }
    ctx->pc = 0x1E6AE0u;
    // 0x1e6ae0: 0x8fb00204  lw          $s0, 0x204($sp)
    ctx->pc = 0x1e6ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1e6ae4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6AE4u;
    {
        const bool branch_taken_0x1e6ae4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1e6ae4) {
            ctx->pc = 0x1E6B00u;
            return;
        }
    }
    ctx->pc = 0x1E6AECu;
    // 0x1e6aec: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x1e6aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1e6af0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6af4: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x1e6af4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6af8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6AF8u;
    {
        const bool branch_taken_0x1e6af8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6af8) {
            ctx->pc = 0x1E6B18u;
            return;
        }
    }
    ctx->pc = 0x1E6B00u;
}
