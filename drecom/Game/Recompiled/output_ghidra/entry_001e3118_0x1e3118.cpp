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

// Function: entry_001e3118
// Address: 0x1e3118 - 0x1e3160
void entry_001e3118_0x1e3118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3118_0x1e3118");
#endif

    switch (ctx->pc) {
        case 0x1e3130u: goto label_1e3130;
        default: break;
    }

    ctx->pc = 0x1e3118u;

    // 0x1e3118: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e3118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e311c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e311cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e3120: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e3120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e3124: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e3124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3128: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E3128u;
    SET_GPR_U32(ctx, 31, 0x1E3130u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E3130u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E3130u) { return; }
    ctx->pc = 0x1E3130u;
label_1e3130:
    // 0x1e3130: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e3130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3134: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3138: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e313c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e313cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3140: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3140u;
    {
        const bool branch_taken_0x1e3140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3140) {
            ctx->pc = 0x1E3160u;
            return;
        }
    }
    ctx->pc = 0x1E3148u;
    // 0x1e3148: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e3148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e314c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3150: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3154: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3154u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3158: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3158u;
    {
        const bool branch_taken_0x1e3158 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3158) {
            ctx->pc = 0x1E3168u;
            return;
        }
    }
    ctx->pc = 0x1E3160u;
}
