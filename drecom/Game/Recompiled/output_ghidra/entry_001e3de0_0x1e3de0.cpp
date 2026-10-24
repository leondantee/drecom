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

// Function: entry_001e3de0
// Address: 0x1e3de0 - 0x1e3e28
void entry_001e3de0_0x1e3de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3de0_0x1e3de0");
#endif

    switch (ctx->pc) {
        case 0x1e3df8u: goto label_1e3df8;
        default: break;
    }

    ctx->pc = 0x1e3de0u;

    // 0x1e3de0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e3de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3de4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e3de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e3de8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e3de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e3dec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e3decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3df0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E3DF0u;
    SET_GPR_U32(ctx, 31, 0x1E3DF8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E3DF8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E3DF8u) { return; }
    ctx->pc = 0x1E3DF8u;
label_1e3df8:
    // 0x1e3df8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3dfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3e00: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3e04: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3e04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3e08: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3E08u;
    {
        const bool branch_taken_0x1e3e08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e08) {
            ctx->pc = 0x1E3E28u;
            return;
        }
    }
    ctx->pc = 0x1E3E10u;
    // 0x1e3e10: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e3e14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3e18: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3e18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3e1c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3e1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3e20: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3E20u;
    {
        const bool branch_taken_0x1e3e20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e20) {
            ctx->pc = 0x1E3E30u;
            return;
        }
    }
    ctx->pc = 0x1E3E28u;
}
