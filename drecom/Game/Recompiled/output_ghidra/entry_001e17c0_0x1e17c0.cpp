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

// Function: entry_001e17c0
// Address: 0x1e17c0 - 0x1e1808
void entry_001e17c0_0x1e17c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e17c0_0x1e17c0");
#endif

    switch (ctx->pc) {
        case 0x1e17d8u: goto label_1e17d8;
        default: break;
    }

    ctx->pc = 0x1e17c0u;

    // 0x1e17c0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e17c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e17c4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e17c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e17c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e17c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e17cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e17ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e17d0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E17D0u;
    SET_GPR_U32(ctx, 31, 0x1E17D8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E17D8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E17D8u) { return; }
    ctx->pc = 0x1E17D8u;
label_1e17d8:
    // 0x1e17d8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e17dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e17e0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e17e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e17e4: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e17e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e17e8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E17E8u;
    {
        const bool branch_taken_0x1e17e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e17e8) {
            ctx->pc = 0x1E1808u;
            return;
        }
    }
    ctx->pc = 0x1E17F0u;
    // 0x1e17f0: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e17f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e17f8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e17f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e17fc: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e17fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e1800: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1800u;
    {
        const bool branch_taken_0x1e1800 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1800) {
            ctx->pc = 0x1E182Cu;
            return;
        }
    }
    ctx->pc = 0x1E1808u;
}
