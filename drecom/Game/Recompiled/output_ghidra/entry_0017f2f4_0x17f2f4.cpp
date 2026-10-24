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

// Function: entry_0017f2f4
// Address: 0x17f2f4 - 0x17f338
void entry_0017f2f4_0x17f2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f2f4_0x17f2f4");
#endif

    switch (ctx->pc) {
        case 0x17f328u: goto label_17f328;
        default: break;
    }

    ctx->pc = 0x17f2f4u;

    // 0x17f2f4: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f2f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f2f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f2fc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f304: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f308: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f30c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f310: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f314: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f318: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f31c: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x17f31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x17f320: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F320u;
    SET_GPR_U32(ctx, 31, 0x17F328u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F328u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F328u) { return; }
    ctx->pc = 0x17F328u;
label_17f328:
    // 0x17f328: 0x26220190  addiu       $v0, $s1, 0x190
    ctx->pc = 0x17f328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x17f32c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x17f32cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f330: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17F330u;
    {
        const bool branch_taken_0x17f330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f330) {
            ctx->pc = 0x17F378u;
            return;
        }
    }
    ctx->pc = 0x17F338u;
}
