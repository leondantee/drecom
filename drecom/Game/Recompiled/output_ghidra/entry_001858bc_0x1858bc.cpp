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

// Function: entry_001858bc
// Address: 0x1858bc - 0x185980
void entry_001858bc_0x1858bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001858bc_0x1858bc");
#endif

    switch (ctx->pc) {
        case 0x1858d4u: goto label_1858d4;
        case 0x1858f8u: goto label_1858f8;
        default: break;
    }

    ctx->pc = 0x1858bcu;

    // 0x1858bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1858bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1858c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1858c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1858c4: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x1858c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1858c8: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x1858c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1858cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1858CCu;
    SET_GPR_U32(ctx, 31, 0x1858D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1858CCu, 0x1858D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858D4u;
label_1858d4:
    // 0x1858d4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1858d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1858d8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1858d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1858dc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1858dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1858e0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1858e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1858e4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1858e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1858e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1858e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1858ec: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1858ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1858f0: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1858F0u;
    SET_GPR_U32(ctx, 31, 0x1858F8u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1858F0u, 0x1858F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858F8u;
label_1858f8:
    // 0x1858f8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1858f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1858fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1858fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x185900: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x185900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185904: 0x0  nop
    ctx->pc = 0x185904u;
    // NOP
    // 0x185908: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x185908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18590c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x18590cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x185910: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185914: 0xc42102d4  lwc1        $f1, 0x2D4($at)
    ctx->pc = 0x185914u;
    { uint32_t bits = FAST_READ32(0x4802D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185918: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18591c: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x18591cu;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185920: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185920u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185924: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x185924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x185928: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x185928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18592c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18592cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185930: 0x0  nop
    ctx->pc = 0x185930u;
    // NOP
    // 0x185934: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185938: 0x0  nop
    ctx->pc = 0x185938u;
    // NOP
    // 0x18593c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x18593Cu;
    {
        const bool branch_taken_0x18593c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18593c) {
            ctx->pc = 0x185980u;
            return;
        }
    }
    ctx->pc = 0x185944u;
    // 0x185944: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x185944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185948: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x185948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18594c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18594cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x185950: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185954: 0x0  nop
    ctx->pc = 0x185954u;
    // NOP
    // 0x185958: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x185958u;
    {
        const bool branch_taken_0x185958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185958) {
            ctx->pc = 0x1859B0u;
            return;
        }
    }
    ctx->pc = 0x185960u;
    // 0x185960: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185964: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x185964u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185968: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x185968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18596c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18596cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185970: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185974: 0xe42002d4  swc1        $f0, 0x2D4($at)
    ctx->pc = 0x185974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802D4u, _value); } while (0); }
    // 0x185978: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185978u;
    {
        const bool branch_taken_0x185978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185978) {
            ctx->pc = 0x1859B0u;
            return;
        }
    }
    ctx->pc = 0x185980u;
}
