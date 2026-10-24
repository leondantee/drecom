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

// Function: entry_0027e1d0
// Address: 0x27e1d0 - 0x27e254
void entry_0027e1d0_0x27e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e1d0_0x27e1d0");
#endif

    switch (ctx->pc) {
        case 0x27e238u: goto label_27e238;
        default: break;
    }

    ctx->pc = 0x27e1d0u;

    // 0x27e1d0: 0x2e02000c  sltiu       $v0, $s0, 0xC
    ctx->pc = 0x27e1d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x27e1d4: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x27E1D4u;
    {
        const bool branch_taken_0x27e1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e1d4) {
            ctx->pc = 0x27E12Cu;
            return;
        }
    }
    ctx->pc = 0x27E1DCu;
    // 0x27e1dc: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x27e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
    // 0x27e1e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27e1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27e1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e1e8: 0x0  nop
    ctx->pc = 0x27e1e8u;
    // NOP
    // 0x27e1ec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27e1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27e1f0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e1f4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x27e1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x27e1f8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x27e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x27e1fc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x27e1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x27e200: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x27e200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x27e204: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e208: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x27e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e20c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27e20cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e210: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e214: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x27e214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27e218: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27e218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27e21c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27e21cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e220: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x27e220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27e224: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x27e224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e228: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27e228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e22c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x27e22cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e230: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x27E230u;
    SET_GPR_U32(ctx, 31, 0x27E238u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x27E230u, 0x27E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E238u;
label_27e238:
    // 0x27e238: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x27e238u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e23c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27e23cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27e240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e248: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27e248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27e24c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E254u;
}
