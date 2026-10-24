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

// Function: entry_0024102c
// Address: 0x24102c - 0x241048
void entry_0024102c_0x24102c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024102c_0x24102c");
#endif

    switch (ctx->pc) {
        case 0x24103cu: goto label_24103c;
        default: break;
    }

    ctx->pc = 0x24102cu;

    // 0x24102c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x24102cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x241030: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x241030u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x241034: 0xc040ca2  jal         func_103288
    ctx->pc = 0x241034u;
    SET_GPR_U32(ctx, 31, 0x24103Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x24103Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24103Cu) { return; }
    ctx->pc = 0x24103Cu;
label_24103c:
    // 0x24103c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24103cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241040: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x241040u;
    {
        const bool branch_taken_0x241040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241040) {
            ctx->pc = 0x241114u;
            return;
        }
    }
    ctx->pc = 0x241048u;
}
