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

// Function: entry_0035c954
// Address: 0x35c954 - 0x35c97c
void entry_0035c954_0x35c954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035c954_0x35c954");
#endif

    switch (ctx->pc) {
        case 0x35c970u: goto label_35c970;
        default: break;
    }

    ctx->pc = 0x35c954u;

    // 0x35c954: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x35c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35c958: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35c95c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x35c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35c960: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x35c960u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x35c964: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x35c964u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35c968: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x35C968u;
    SET_GPR_U32(ctx, 31, 0x35C970u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x35C970u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C970u) { return; }
    ctx->pc = 0x35C970u;
label_35c970:
    // 0x35c970: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35c974: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35c978: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x35c978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x35c97cu;
}
