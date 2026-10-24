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

// Function: entry_001a0430
// Address: 0x1a0430 - 0x1a0450
void entry_001a0430_0x1a0430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0430_0x1a0430");
#endif

    switch (ctx->pc) {
        case 0x1a044cu: goto label_1a044c;
        default: break;
    }

    ctx->pc = 0x1a0430u;

    // 0x1a0430: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x1a0430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a0434: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1A0434u;
    {
        const bool branch_taken_0x1a0434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0434) {
            ctx->pc = 0x1A03C8u;
            return;
        }
    }
    ctx->pc = 0x1A043Cu;
    // 0x1a043c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a043cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a0440: 0x2444ef40  addiu       $a0, $v0, -0x10C0
    ctx->pc = 0x1a0440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963008));
    // 0x1a0444: 0xc046760  jal         func_119D80
    ctx->pc = 0x1A0444u;
    SET_GPR_U32(ctx, 31, 0x1A044Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1A044Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A044Cu) { return; }
    ctx->pc = 0x1A044Cu;
label_1a044c:
    // 0x1a044c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1a044cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1a0450u;
}
