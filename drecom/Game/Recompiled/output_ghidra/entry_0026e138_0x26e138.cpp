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

// Function: entry_0026e138
// Address: 0x26e138 - 0x26e1f4
void entry_0026e138_0x26e138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026e138_0x26e138");
#endif

    switch (ctx->pc) {
        case 0x26e160u: goto label_26e160;
        case 0x26e170u: goto label_26e170;
        case 0x26e18cu: goto label_26e18c;
        case 0x26e1b8u: goto label_26e1b8;
        case 0x26e1d8u: goto label_26e1d8;
        default: break;
    }

    ctx->pc = 0x26e138u;

    // 0x26e138: 0x1260002e  beqz        $s3, . + 4 + (0x2E << 2)
    ctx->pc = 0x26E138u;
    {
        const bool branch_taken_0x26e138 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e138) {
            ctx->pc = 0x26E1F4u;
            return;
        }
    }
    ctx->pc = 0x26E140u;
    // 0x26e140: 0x8e630130  lw          $v1, 0x130($s3)
    ctx->pc = 0x26e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x26e144: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26e148: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26e14c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26e14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e150: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x26e150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x26e154: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x26e154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26e158: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x26E158u;
    SET_GPR_U32(ctx, 31, 0x26E160u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x26E158u, 0x26E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E160u;
label_26e160:
    // 0x26e160: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26e160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e164: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x26e164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e168: 0xc040c24  jal         func_103090
    ctx->pc = 0x26E168u;
    SET_GPR_U32(ctx, 31, 0x26E170u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x26E170u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E170u) { return; }
    ctx->pc = 0x26E170u;
label_26e170:
    // 0x26e170: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x26e170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x26e174: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x26e174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x26e178: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26e178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e17c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e180: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x26e180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e184: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x26E184u;
    SET_GPR_U32(ctx, 31, 0x26E18Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x26E18Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E18Cu) { return; }
    ctx->pc = 0x26E18Cu;
label_26e18c:
    // 0x26e18c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26e190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e194: 0x0  nop
    ctx->pc = 0x26e194u;
    // NOP
    // 0x26e198: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x26e198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x26e19c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26e1a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26e1a4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e1a8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x26e1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26e1ac: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x26e1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e1b0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x26E1B0u;
    SET_GPR_U32(ctx, 31, 0x26E1B8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x26E1B0u, 0x26E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E1B8u;
label_26e1b8:
    // 0x26e1b8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26e1bc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26e1c0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26e1c4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x26e1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26e1c8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x26e1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e1cc: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x26e1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x26e1d0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x26E1D0u;
    SET_GPR_U32(ctx, 31, 0x26E1D8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x26E1D0u, 0x26E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E1D8u;
label_26e1d8:
    // 0x26e1d8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x26e1d8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26e1dc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E1DCu;
    {
        const bool branch_taken_0x26e1dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e1dc) {
            ctx->pc = 0x26E1F4u;
            return;
        }
    }
    ctx->pc = 0x26E1E4u;
    // 0x26e1e4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e1e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x26e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26e1ec: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26E1ECu;
    SET_GPR_U32(ctx, 31, 0x26E1F4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26E1F4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E1F4u) { return; }
    ctx->pc = 0x26E1F4u;
}
