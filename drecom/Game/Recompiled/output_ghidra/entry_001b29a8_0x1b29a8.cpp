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

// Function: entry_001b29a8
// Address: 0x1b29a8 - 0x1b29d4
void entry_001b29a8_0x1b29a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b29a8_0x1b29a8");
#endif

    switch (ctx->pc) {
        case 0x1b29c8u: goto label_1b29c8;
        default: break;
    }

    ctx->pc = 0x1b29a8u;

    // 0x1b29a8: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x1b29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x1b29ac: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b29acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b29b0: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1B29B0u;
    {
        const bool branch_taken_0x1b29b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b29b0) {
            ctx->pc = 0x1B291Cu;
            return;
        }
    }
    ctx->pc = 0x1B29B8u;
    // 0x1b29b8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b29b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b29bc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1b29bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b29c0: 0xc040c24  jal         func_103090
    ctx->pc = 0x1B29C0u;
    SET_GPR_U32(ctx, 31, 0x1B29C8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1B29C8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B29C8u) { return; }
    ctx->pc = 0x1B29C8u;
label_1b29c8:
    // 0x1b29c8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b29c8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b29cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B29CCu;
    {
        const bool branch_taken_0x1b29cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b29cc) {
            ctx->pc = 0x1B2A28u;
            return;
        }
    }
    ctx->pc = 0x1B29D4u;
}
