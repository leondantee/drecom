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

// Function: entry_0026e0d8
// Address: 0x26e0d8 - 0x26e118
void entry_0026e0d8_0x26e0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026e0d8_0x26e0d8");
#endif

    switch (ctx->pc) {
        case 0x26e0fcu: goto label_26e0fc;
        default: break;
    }

    ctx->pc = 0x26e0d8u;

    // 0x26e0d8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26e0dc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x26e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26e0e0: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x26e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x26e0e4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26e0e8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x26e0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x26e0ec: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x26e0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26e0f0: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x26e0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x26e0f4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x26E0F4u;
    SET_GPR_U32(ctx, 31, 0x26E0FCu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x26E0F4u, 0x26E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E0FCu;
label_26e0fc:
    // 0x26e0fc: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x26e0fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26e100: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E100u;
    {
        const bool branch_taken_0x26e100 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e100) {
            ctx->pc = 0x26E118u;
            return;
        }
    }
    ctx->pc = 0x26E108u;
    // 0x26e108: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x26e108u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26e10c: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x26e10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e110: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x26e110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x26e114: 0x0  nop
    ctx->pc = 0x26e114u;
    // NOP
    ctx->pc = 0x26e118u;
}
