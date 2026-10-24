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

// Function: entry_0035caf4
// Address: 0x35caf4 - 0x35cb1c
void entry_0035caf4_0x35caf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035caf4_0x35caf4");
#endif

    switch (ctx->pc) {
        case 0x35cb10u: goto label_35cb10;
        default: break;
    }

    ctx->pc = 0x35caf4u;

    // 0x35caf4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x35caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35caf8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35cafc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x35cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35cb00: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x35cb00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35cb04: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x35cb04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x35cb08: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x35CB08u;
    SET_GPR_U32(ctx, 31, 0x35CB10u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x35CB10u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CB10u) { return; }
    ctx->pc = 0x35CB10u;
label_35cb10:
    // 0x35cb10: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35cb14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x35cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35cb18: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x35cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x35cb1cu;
}
