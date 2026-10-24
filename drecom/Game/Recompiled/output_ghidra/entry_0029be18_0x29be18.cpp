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

// Function: entry_0029be18
// Address: 0x29be18 - 0x29bec4
void entry_0029be18_0x29be18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029be18_0x29be18");
#endif

    switch (ctx->pc) {
        case 0x29be5cu: goto label_29be5c;
        case 0x29be84u: goto label_29be84;
        default: break;
    }

    ctx->pc = 0x29be18u;

    // 0x29be18: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29be18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29be1c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29be20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29be24: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x29be24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29be28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29be2c: 0x0  nop
    ctx->pc = 0x29be2cu;
    // NOP
    // 0x29be30: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x29BE30u;
    {
        const bool branch_taken_0x29be30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29be30) {
            ctx->pc = 0x29BEC4u;
            return;
        }
    }
    ctx->pc = 0x29BE38u;
    // 0x29be38: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29be3c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x29be3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29be40: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be44: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29be44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29be48: 0x0  nop
    ctx->pc = 0x29be48u;
    // NOP
    // 0x29be4c: 0x0  nop
    ctx->pc = 0x29be4cu;
    // NOP
    // 0x29be50: 0x0  nop
    ctx->pc = 0x29be50u;
    // NOP
    // 0x29be54: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29BE54u;
    SET_GPR_U32(ctx, 31, 0x29BE5Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29BE54u, 0x29BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE5Cu;
label_29be5c:
    // 0x29be5c: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x29be5cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29be60: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29be64: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x29be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29be68: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be6c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29be6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29be70: 0x0  nop
    ctx->pc = 0x29be70u;
    // NOP
    // 0x29be74: 0x0  nop
    ctx->pc = 0x29be74u;
    // NOP
    // 0x29be78: 0x0  nop
    ctx->pc = 0x29be78u;
    // NOP
    // 0x29be7c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29BE7Cu;
    SET_GPR_U32(ctx, 31, 0x29BE84u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29BE7Cu, 0x29BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE84u;
label_29be84:
    // 0x29be84: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x29be84u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29be88: 0x163080  sll         $a2, $s6, 2
    ctx->pc = 0x29be88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x29be8c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29be90: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x29be90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29be94: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29be94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29be98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29be98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29be9c: 0x2e31818  mult        $v1, $s7, $v1
    ctx->pc = 0x29be9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29bea0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29bea4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x29bea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29bea8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x29bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29beac: 0x3c034124  lui         $v1, 0x4124
    ctx->pc = 0x29beacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16676 << 16));
    // 0x29beb0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x29beb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29beb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29beb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29beb8: 0x0  nop
    ctx->pc = 0x29beb8u;
    // NOP
    // 0x29bebc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29bebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29bec0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x29bec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    ctx->pc = 0x29bec4u;
}
