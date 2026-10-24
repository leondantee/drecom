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

// Function: entry_0035ca88
// Address: 0x35ca88 - 0x35caf4
void entry_0035ca88_0x35ca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ca88_0x35ca88");
#endif

    switch (ctx->pc) {
        case 0x35cac8u: goto label_35cac8;
        case 0x35cae0u: goto label_35cae0;
        default: break;
    }

    ctx->pc = 0x35ca88u;

    // 0x35ca88: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35ca8c: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x35ca8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35ca90: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x35ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35ca94: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x35ca94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x35ca98: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x35CA98u;
    {
        const bool branch_taken_0x35ca98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ca98) {
            ctx->pc = 0x35CAF4u;
            return;
        }
    }
    ctx->pc = 0x35CAA0u;
    // 0x35caa0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x35caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35caa4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35caa8: 0x62a823  subu        $s5, $v1, $v0
    ctx->pc = 0x35caa8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35caac: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x35caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35cab0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35cab4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x35cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35cab8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x35cab8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35cabc: 0x72a03628  paddub      $a2, $s5, $zero
    ctx->pc = 0x35cabcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x35cac0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x35CAC0u;
    SET_GPR_U32(ctx, 31, 0x35CAC8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x35CAC8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CAC8u) { return; }
    ctx->pc = 0x35CAC8u;
label_35cac8:
    // 0x35cac8: 0x2352821  addu        $a1, $s1, $s5
    ctx->pc = 0x35cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x35cacc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x35caccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35cad0: 0x2623023  subu        $a2, $s3, $v0
    ctx->pc = 0x35cad0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35cad4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x35cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35cad8: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x35CAD8u;
    SET_GPR_U32(ctx, 31, 0x35CAE0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x35CAE0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CAE0u) { return; }
    ctx->pc = 0x35CAE0u;
label_35cae0:
    // 0x35cae0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x35cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35cae4: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x35cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35cae8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x35cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x35caec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35CAECu;
    {
        const bool branch_taken_0x35caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35caec) {
            ctx->pc = 0x35CB1Cu;
            return;
        }
    }
    ctx->pc = 0x35CAF4u;
}
