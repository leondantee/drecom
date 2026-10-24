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

// Function: entry_00305484
// Address: 0x305484 - 0x305508
void entry_00305484_0x305484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305484_0x305484");
#endif

    switch (ctx->pc) {
        case 0x305500u: goto label_305500;
        default: break;
    }

    ctx->pc = 0x305484u;

    // 0x305484: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305488: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x305488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30548c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x30548Cu;
    {
        const bool branch_taken_0x30548c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30548c) {
            ctx->pc = 0x305508u;
            return;
        }
    }
    ctx->pc = 0x305494u;
    // 0x305494: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305498: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x305498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x30549c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x30549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3054a0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3054a0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399600u));
    // 0x3054a4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3054a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3054a8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3054a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3054ac: 0x24429610  addiu       $v0, $v0, -0x69F0
    ctx->pc = 0x3054acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940176));
    // 0x3054b0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3054b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3054b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3054b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399610u));
    // 0x3054b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3054b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3054bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3054bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3054c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3054c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3054c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3054c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3054c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3054c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3054cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3054ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3054d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3054d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3054d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3054d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3054d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3054d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3054dc: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x3054dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x3054e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3054e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3054e4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3054e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3054e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3054e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3054ec: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3054ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3054f0: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x3054f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x3054f4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3054f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3054f8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3054F8u;
    SET_GPR_U32(ctx, 31, 0x305500u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3054F8u, 0x305500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305500u;
label_305500:
    // 0x305500: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305504: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x305504u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x305508u;
}
