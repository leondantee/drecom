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

// Function: entry_0025b8f8
// Address: 0x25b8f8 - 0x25b950
void entry_0025b8f8_0x25b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b8f8_0x25b8f8");
#endif

    switch (ctx->pc) {
        case 0x25b948u: goto label_25b948;
        default: break;
    }

    ctx->pc = 0x25b8f8u;

    // 0x25b8f8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25b8f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25b8fc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x25b8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x25b900: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25b900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25b904: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25b904u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25b908: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25b908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25b90c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25b90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25b910: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x25B910u;
    {
        const bool branch_taken_0x25b910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b910) {
            ctx->pc = 0x25B950u;
            return;
        }
    }
    ctx->pc = 0x25B918u;
    // 0x25b918: 0x96110140  lhu         $s1, 0x140($s0)
    ctx->pc = 0x25b918u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25b91c: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x25b91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x25b920: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x25b920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x25b924: 0x14600260  bnez        $v1, . + 4 + (0x260 << 2)
    ctx->pc = 0x25B924u;
    {
        const bool branch_taken_0x25b924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b924) {
            ctx->pc = 0x25C2A8u;
            return;
        }
    }
    ctx->pc = 0x25B92Cu;
    // 0x25b92c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b930: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x25b930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25b934: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25b938: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x25b938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b93c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25b93cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b940: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25B940u;
    SET_GPR_U32(ctx, 31, 0x25B948u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25B948u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25B948u) { return; }
    ctx->pc = 0x25B948u;
label_25b948:
    // 0x25b948: 0x10000257  b           . + 4 + (0x257 << 2)
    ctx->pc = 0x25B948u;
    {
        const bool branch_taken_0x25b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b948) {
            ctx->pc = 0x25C2A8u;
            return;
        }
    }
    ctx->pc = 0x25B950u;
}
