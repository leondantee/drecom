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

// Function: entry_0029c314
// Address: 0x29c314 - 0x29c3c8
void entry_0029c314_0x29c314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c314_0x29c314");
#endif

    switch (ctx->pc) {
        case 0x29c358u: goto label_29c358;
        case 0x29c380u: goto label_29c380;
        default: break;
    }

    ctx->pc = 0x29c314u;

    // 0x29c314: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c318: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29c318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c31c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c31cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c320: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x29c320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c324: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c328: 0x0  nop
    ctx->pc = 0x29c328u;
    // NOP
    // 0x29c32c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x29C32Cu;
    {
        const bool branch_taken_0x29c32c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c32c) {
            ctx->pc = 0x29C3C8u;
            return;
        }
    }
    ctx->pc = 0x29C334u;
    // 0x29c334: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c338: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x29c338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c33c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29c33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c340: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29c340u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29c344: 0x0  nop
    ctx->pc = 0x29c344u;
    // NOP
    // 0x29c348: 0x0  nop
    ctx->pc = 0x29c348u;
    // NOP
    // 0x29c34c: 0x0  nop
    ctx->pc = 0x29c34cu;
    // NOP
    // 0x29c350: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29C350u;
    SET_GPR_U32(ctx, 31, 0x29C358u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29C350u, 0x29C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C358u;
label_29c358:
    // 0x29c358: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x29c358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x29c35c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c360: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x29c360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c364: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29c364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c368: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29c368u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29c36c: 0x0  nop
    ctx->pc = 0x29c36cu;
    // NOP
    // 0x29c370: 0x0  nop
    ctx->pc = 0x29c370u;
    // NOP
    // 0x29c374: 0x0  nop
    ctx->pc = 0x29c374u;
    // NOP
    // 0x29c378: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29C378u;
    SET_GPR_U32(ctx, 31, 0x29C380u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29C378u, 0x29C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C380u;
label_29c380:
    // 0x29c380: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x29c380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x29c384: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x29c384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x29c388: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x29c388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c38c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29c390: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x29c390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29c394: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c398: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x29c398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c39c: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x29c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x29c3a0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x29c3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29c3a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c3a8: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x29c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29c3ac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x29c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c3b0: 0x3c034271  lui         $v1, 0x4271
    ctx->pc = 0x29c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17009 << 16));
    // 0x29c3b4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x29c3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x29c3b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c3b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c3bc: 0x0  nop
    ctx->pc = 0x29c3bcu;
    // NOP
    // 0x29c3c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29c3c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29c3c4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x29c3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    ctx->pc = 0x29c3c8u;
}
