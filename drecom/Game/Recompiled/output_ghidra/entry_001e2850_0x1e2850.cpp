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

// Function: entry_001e2850
// Address: 0x1e2850 - 0x1e2898
void entry_001e2850_0x1e2850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2850_0x1e2850");
#endif

    switch (ctx->pc) {
        case 0x1e2868u: goto label_1e2868;
        default: break;
    }

    ctx->pc = 0x1e2850u;

    // 0x1e2850: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e2850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e2854: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1e2854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e2858: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e2858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e285c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e285cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2860: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E2860u;
    SET_GPR_U32(ctx, 31, 0x1E2868u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E2868u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E2868u) { return; }
    ctx->pc = 0x1E2868u;
label_1e2868:
    // 0x1e2868: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e2868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e286c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2870: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e2870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2874: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2874u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e2878: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2878u;
    {
        const bool branch_taken_0x1e2878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2878) {
            ctx->pc = 0x1E2898u;
            return;
        }
    }
    ctx->pc = 0x1E2880u;
    // 0x1e2880: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e2880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e2884: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2888: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e2888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e288c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e288cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e2890: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2890u;
    {
        const bool branch_taken_0x1e2890 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2890) {
            ctx->pc = 0x1E28A0u;
            return;
        }
    }
    ctx->pc = 0x1E2898u;
}
