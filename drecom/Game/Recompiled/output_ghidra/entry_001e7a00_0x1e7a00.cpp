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

// Function: entry_001e7a00
// Address: 0x1e7a00 - 0x1e7a40
void entry_001e7a00_0x1e7a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7a00_0x1e7a00");
#endif

    ctx->pc = 0x1e7a00u;

    // 0x1e7a00: 0x8fb30200  lw          $s3, 0x200($sp)
    ctx->pc = 0x1e7a00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e7a04: 0x660000e  bltz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7A04u;
    {
        const bool branch_taken_0x1e7a04 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x1e7a04) {
            ctx->pc = 0x1E7A40u;
            return;
        }
    }
    ctx->pc = 0x1E7A0Cu;
    // 0x1e7a0c: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x1e7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e7a10: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e7a14: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e7a14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7a18: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7A18u;
    {
        const bool branch_taken_0x1e7a18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a18) {
            ctx->pc = 0x1E7A40u;
            return;
        }
    }
    ctx->pc = 0x1E7A20u;
    // 0x1e7a20: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x1e7a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1e7a24: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7A24u;
    {
        const bool branch_taken_0x1e7a24 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1e7a24) {
            ctx->pc = 0x1E7A40u;
            return;
        }
    }
    ctx->pc = 0x1E7A2Cu;
    // 0x1e7a2c: 0x8fa30204  lw          $v1, 0x204($sp)
    ctx->pc = 0x1e7a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1e7a30: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e7a34: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e7a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7a38: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7A38u;
    {
        const bool branch_taken_0x1e7a38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a38) {
            ctx->pc = 0x1E7A58u;
            return;
        }
    }
    ctx->pc = 0x1E7A40u;
}
