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

// Function: entry_001a0634
// Address: 0x1a0634 - 0x1a0654
void entry_001a0634_0x1a0634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0634_0x1a0634");
#endif

    switch (ctx->pc) {
        case 0x1a064cu: goto label_1a064c;
        default: break;
    }

    ctx->pc = 0x1a0634u;

    // 0x1a0634: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0634u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0638: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a0638u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a063c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a0640: 0x24462760  addiu       $a2, $v0, 0x2760
    ctx->pc = 0x1a0640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10080));
    // 0x1a0644: 0xc043102  jal         func_10C408
    ctx->pc = 0x1A0644u;
    SET_GPR_U32(ctx, 31, 0x1A064Cu);
    ctx->pc = 0x10C408u;
    {
        ctx->pc = 0x1A064Cu;
        ps2_stubs::scePadRead(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A064Cu) { return; }
    ctx->pc = 0x1A064Cu;
label_1a064c:
    // 0x1a064c: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x1A064Cu;
    {
        const bool branch_taken_0x1a064c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a064c) {
            ctx->pc = 0x1A0A38u;
            return;
        }
    }
    ctx->pc = 0x1A0654u;
}
