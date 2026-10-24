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

// Function: entry_00205090
// Address: 0x205090 - 0x2050ec
void entry_00205090_0x205090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205090_0x205090");
#endif

    switch (ctx->pc) {
        case 0x2050b8u: goto label_2050b8;
        case 0x2050e0u: goto label_2050e0;
        default: break;
    }

    ctx->pc = 0x205090u;

    // 0x205090: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x205090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x205094: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x205094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x205098: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20509c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20509cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2050a0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2050a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2050a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2050a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2050a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2050a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2050ac: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2050acu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2050b0: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x2050B0u;
    SET_GPR_U32(ctx, 31, 0x2050B8u);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x2050B0u, 0x2050B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050B8u;
label_2050b8:
    // 0x2050b8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2050b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2050bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2050bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2050c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2050c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2050c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2050c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2050c8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2050c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2050cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2050ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2050d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2050d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2050d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2050d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2050d8: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x2050D8u;
    SET_GPR_U32(ctx, 31, 0x2050E0u);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x2050D8u, 0x2050E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050E0u;
label_2050e0:
    // 0x2050e0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2050e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2050e4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2050E4u;
    {
        const bool branch_taken_0x2050e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2050e4) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x2050ECu;
}
