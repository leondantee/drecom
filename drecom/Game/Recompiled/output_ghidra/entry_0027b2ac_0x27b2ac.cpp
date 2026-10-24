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

// Function: entry_0027b2ac
// Address: 0x27b2ac - 0x27b320
void entry_0027b2ac_0x27b2ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b2ac_0x27b2ac");
#endif

    switch (ctx->pc) {
        case 0x27b2f0u: goto label_27b2f0;
        case 0x27b2fcu: goto label_27b2fc;
        case 0x27b314u: goto label_27b314;
        default: break;
    }

    ctx->pc = 0x27b2acu;

    // 0x27b2ac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27b2b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27b2b4: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x27b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x27b2b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b2bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27b2bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27b2c0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27b2c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27b2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27b2c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27b2cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b2d0: 0x0  nop
    ctx->pc = 0x27b2d0u;
    // NOP
    // 0x27b2d4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27b2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27b2d8: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x27b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x27b2dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27b2dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b2e0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27b2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27b2e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27b2e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b2e8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27B2E8u;
    SET_GPR_U32(ctx, 31, 0x27B2F0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27B2E8u, 0x27B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2F0u;
label_27b2f0:
    // 0x27b2f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27b2f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27b2f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27B2F4u;
    SET_GPR_U32(ctx, 31, 0x27B2FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27B2F4u, 0x27B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2FCu;
label_27b2fc:
    // 0x27b2fc: 0x24045a02  addiu       $a0, $zero, 0x5A02
    ctx->pc = 0x27b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23042));
    // 0x27b300: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27b300u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b304: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27b304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27b308: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27b308u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b30c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27B30Cu;
    SET_GPR_U32(ctx, 31, 0x27B314u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27B30Cu, 0x27B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B314u;
label_27b314:
    // 0x27b314: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27b314u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27b318: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27B318u;
    SET_GPR_U32(ctx, 31, 0x27B320u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27B318u, 0x27B320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B320u;
}
