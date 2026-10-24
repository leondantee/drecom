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

// Function: entry_003308cc
// Address: 0x3308cc - 0x330910
void entry_003308cc_0x3308cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003308cc_0x3308cc");
#endif

    ctx->pc = 0x3308ccu;

    // 0x3308cc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3308ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3308d0: 0xafa6021c  sw          $a2, 0x21C($sp)
    ctx->pc = 0x3308d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 6));
    // 0x3308d4: 0xafa60218  sw          $a2, 0x218($sp)
    ctx->pc = 0x3308d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 6));
    // 0x3308d8: 0xafa60214  sw          $a2, 0x214($sp)
    ctx->pc = 0x3308d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 6));
    // 0x3308dc: 0xafa60210  sw          $a2, 0x210($sp)
    ctx->pc = 0x3308dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
    // 0x3308e0: 0x826265ae  lb          $v0, 0x65AE($s3)
    ctx->pc = 0x3308e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
    // 0x3308e4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3308e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3308e8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3308e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x3308ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3308ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3308f0: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x3308f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3308f4: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x3308f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x3308f8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3308f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3308fc: 0x244255a0  addiu       $v0, $v0, 0x55A0
    ctx->pc = 0x3308fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21920));
    // 0x330900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x330904: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x330904u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x330908: 0x100004d1  b           . + 4 + (0x4D1 << 2)
    ctx->pc = 0x330908u;
    {
        const bool branch_taken_0x330908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330908) {
            ctx->pc = 0x331C50u;
            return;
        }
    }
    ctx->pc = 0x330910u;
}
