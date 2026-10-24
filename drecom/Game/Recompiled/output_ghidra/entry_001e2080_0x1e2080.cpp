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

// Function: entry_001e2080
// Address: 0x1e2080 - 0x1e20c8
void entry_001e2080_0x1e2080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2080_0x1e2080");
#endif

    switch (ctx->pc) {
        case 0x1e2098u: goto label_1e2098;
        default: break;
    }

    ctx->pc = 0x1e2080u;

    // 0x1e2080: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e2080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e2084: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1e2084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e2088: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e2088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e208c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e208cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2090: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E2090u;
    SET_GPR_U32(ctx, 31, 0x1E2098u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E2098u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E2098u) { return; }
    ctx->pc = 0x1E2098u;
label_1e2098:
    // 0x1e2098: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e2098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e209c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e20a0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e20a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e20a4: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e20a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e20a8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E20A8u;
    {
        const bool branch_taken_0x1e20a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e20a8) {
            ctx->pc = 0x1E20C8u;
            return;
        }
    }
    ctx->pc = 0x1E20B0u;
    // 0x1e20b0: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e20b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e20b8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e20b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e20bc: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e20bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e20c0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E20C0u;
    {
        const bool branch_taken_0x1e20c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e20c0) {
            ctx->pc = 0x1E20D0u;
            return;
        }
    }
    ctx->pc = 0x1E20C8u;
}
