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

// Function: entry_003057bc
// Address: 0x3057bc - 0x305840
void entry_003057bc_0x3057bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003057bc_0x3057bc");
#endif

    switch (ctx->pc) {
        case 0x305838u: goto label_305838;
        default: break;
    }

    ctx->pc = 0x3057bcu;

    // 0x3057bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3057bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3057c0: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x3057c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x3057c4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3057C4u;
    {
        const bool branch_taken_0x3057c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3057c4) {
            ctx->pc = 0x305840u;
            return;
        }
    }
    ctx->pc = 0x3057CCu;
    // 0x3057cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3057ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3057d0: 0x24429630  addiu       $v0, $v0, -0x69D0
    ctx->pc = 0x3057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940208));
    // 0x3057d4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3057d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3057d8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3057d8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399630u));
    // 0x3057dc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3057dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3057e0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3057e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3057e4: 0x24429640  addiu       $v0, $v0, -0x69C0
    ctx->pc = 0x3057e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940224));
    // 0x3057e8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3057e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3057ec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3057ecu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399640u));
    // 0x3057f0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3057f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3057f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3057f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3057f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3057f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3057fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3057fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x305800: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x305800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x305804: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x305804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x305808: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x305808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30580c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30580cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x305810: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x305810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x305814: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x305814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x305818: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30581c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305820: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x305820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x305824: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x305824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305828: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x305828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x30582c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30582cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305830: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x305830u;
    SET_GPR_U32(ctx, 31, 0x305838u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x305830u, 0x305838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305838u;
label_305838:
    // 0x305838: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30583c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30583cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x305840u;
}
