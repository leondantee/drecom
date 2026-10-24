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

// Function: entry_001e79a8
// Address: 0x1e79a8 - 0x1e79e8
void entry_001e79a8_0x1e79a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e79a8_0x1e79a8");
#endif

    ctx->pc = 0x1e79a8u;

    // 0x1e79a8: 0x8fb601f0  lw          $s6, 0x1F0($sp)
    ctx->pc = 0x1e79a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e79ac: 0x6c0000e  bltz        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x1E79ACu;
    {
        const bool branch_taken_0x1e79ac = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x1e79ac) {
            ctx->pc = 0x1E79E8u;
            return;
        }
    }
    ctx->pc = 0x1E79B4u;
    // 0x1e79b4: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1e79b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e79b8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e79b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e79bc: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x1e79bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e79c0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E79C0u;
    {
        const bool branch_taken_0x1e79c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e79c0) {
            ctx->pc = 0x1E79E8u;
            return;
        }
    }
    ctx->pc = 0x1E79C8u;
    // 0x1e79c8: 0x8fa301f4  lw          $v1, 0x1F4($sp)
    ctx->pc = 0x1e79c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1e79cc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E79CCu;
    {
        const bool branch_taken_0x1e79cc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e79cc) {
            ctx->pc = 0x1E79E8u;
            return;
        }
    }
    ctx->pc = 0x1E79D4u;
    // 0x1e79d4: 0x8fb701f4  lw          $s7, 0x1F4($sp)
    ctx->pc = 0x1e79d4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1e79d8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e79d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e79dc: 0x2e1082a  slt         $at, $s7, $at
    ctx->pc = 0x1e79dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e79e0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E79E0u;
    {
        const bool branch_taken_0x1e79e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e79e0) {
            ctx->pc = 0x1E7A00u;
            return;
        }
    }
    ctx->pc = 0x1E79E8u;
}
