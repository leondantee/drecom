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

// Function: entry_001a0498
// Address: 0x1a0498 - 0x1a04dc
void entry_001a0498_0x1a0498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0498_0x1a0498");
#endif

    switch (ctx->pc) {
        case 0x1a04a4u: goto label_1a04a4;
        case 0x1a04c4u: goto label_1a04c4;
        default: break;
    }

    ctx->pc = 0x1a0498u;

    // 0x1a0498: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0498u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a049c: 0xc042f96  jal         func_10BE58
    ctx->pc = 0x1A049Cu;
    SET_GPR_U32(ctx, 31, 0x1A04A4u);
    ctx->pc = 0x10BE58u;
    {
        ctx->pc = 0x1A04A4u;
        ps2_stubs::scePadInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A04A4u) { return; }
    ctx->pc = 0x1A04A4u;
label_1a04a4:
    // 0x1a04a4: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A04A4u;
    {
        const bool branch_taken_0x1a04a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a04a4) {
            ctx->pc = 0x1A0484u;
            return;
        }
    }
    ctx->pc = 0x1A04ACu;
    // 0x1a04ac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a04acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a04b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a04b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a04b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a04b8: 0x24462780  addiu       $a2, $v0, 0x2780
    ctx->pc = 0x1a04b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10112));
    // 0x1a04bc: 0xc04302e  jal         func_10C0B8
    ctx->pc = 0x1A04BCu;
    SET_GPR_U32(ctx, 31, 0x1A04C4u);
    ctx->pc = 0x10C0B8u;
    {
        ctx->pc = 0x1A04C4u;
        ps2_stubs::scePadPortOpen(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A04C4u) { return; }
    ctx->pc = 0x1A04C4u;
label_1a04c4:
    // 0x1a04c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A04C4u;
    {
        const bool branch_taken_0x1a04c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a04c4) {
            ctx->pc = 0x1A04DCu;
            return;
        }
    }
    ctx->pc = 0x1A04CCu;
    // 0x1a04cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a04d0: 0x2444ef70  addiu       $a0, $v0, -0x1090
    ctx->pc = 0x1a04d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963056));
    // 0x1a04d4: 0xc046760  jal         func_119D80
    ctx->pc = 0x1A04D4u;
    SET_GPR_U32(ctx, 31, 0x1A04DCu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1A04DCu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A04DCu) { return; }
    ctx->pc = 0x1A04DCu;
}
