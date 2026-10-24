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

// Function: entry_0023d76c
// Address: 0x23d76c - 0x23d810
void entry_0023d76c_0x23d76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d76c_0x23d76c");
#endif

    switch (ctx->pc) {
        case 0x23d7bcu: goto label_23d7bc;
        case 0x23d7ccu: goto label_23d7cc;
        case 0x23d7e0u: goto label_23d7e0;
        case 0x23d804u: goto label_23d804;
        default: break;
    }

    ctx->pc = 0x23d76cu;

    // 0x23d76c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x23d76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d770: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23d770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23d774: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x23d774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x23d778: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d77c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23d77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23d780: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23d780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23d784: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23d784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23d788: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23d78c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23d78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23d790: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23d794: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23d794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23d798: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23d798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23d79c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d7a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23d7a4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23d7a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23d7a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d7ac: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23d7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23d7b0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23d7b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d7b4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23D7B4u;
    SET_GPR_U32(ctx, 31, 0x23D7BCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23D7B4u, 0x23D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7BCu;
label_23d7bc:
    // 0x23d7bc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23d7c0: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x23d7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x23d7c4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23D7C4u;
    SET_GPR_U32(ctx, 31, 0x23D7CCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23D7C4u, 0x23D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7CCu;
label_23d7cc:
    // 0x23d7cc: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x23d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x23d7d0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x23d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x23d7d4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23d7d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23d7d8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23D7D8u;
    SET_GPR_U32(ctx, 31, 0x23D7E0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23D7D8u, 0x23D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7E0u;
label_23d7e0:
    // 0x23d7e0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x23d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x23d7e4: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x23d7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x23d7e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23d7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d7ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d7f0: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23d7f4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23d7f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23d7f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d7fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23D7FCu;
    SET_GPR_U32(ctx, 31, 0x23D804u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23D7FCu, 0x23D804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D804u;
label_23d804:
    // 0x23d804: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23d804u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23d808: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x23D808u;
    {
        const bool branch_taken_0x23d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d808) {
            ctx->pc = 0x23D904u;
            return;
        }
    }
    ctx->pc = 0x23D810u;
}
