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

// Function: entry_002a3768
// Address: 0x2a3768 - 0x2a37e8
void entry_002a3768_0x2a3768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a3768_0x2a3768");
#endif

    switch (ctx->pc) {
        case 0x2a3770u: goto label_2a3770;
        case 0x2a3798u: goto label_2a3798;
        case 0x2a37c8u: goto label_2a37c8;
        default: break;
    }

    ctx->pc = 0x2a3768u;

    // 0x2a3768: 0xc067654  jal         func_19D950
    ctx->pc = 0x2A3768u;
    SET_GPR_U32(ctx, 31, 0x2A3770u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2A3768u, 0x2A3770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3770u;
label_2a3770:
    // 0x2a3770: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a3770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2a3774: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3778: 0x0  nop
    ctx->pc = 0x2a3778u;
    // NOP
    // 0x2a377c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a377cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3780: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a3780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3784: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a3784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3788: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2a3788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a378c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2a378cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2a3790: 0xc067654  jal         func_19D950
    ctx->pc = 0x2A3790u;
    SET_GPR_U32(ctx, 31, 0x2A3798u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2A3790u, 0x2A3798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3798u;
label_2a3798:
    // 0x2a3798: 0x3c0541a0  lui         $a1, 0x41A0
    ctx->pc = 0x2a3798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16800 << 16));
    // 0x2a379c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a379cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a37a0: 0x0  nop
    ctx->pc = 0x2a37a0u;
    // NOP
    // 0x2a37a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a37a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a37a8: 0x3c074248  lui         $a3, 0x4248
    ctx->pc = 0x2a37a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16968 << 16));
    // 0x2a37ac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a37acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a37b0: 0x0  nop
    ctx->pc = 0x2a37b0u;
    // NOP
    // 0x2a37b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a37b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a37b8: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x2a37b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a37bc: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x2a37bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2a37c0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2A37C0u;
    SET_GPR_U32(ctx, 31, 0x2A37C8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2A37C0u, 0x2A37C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A37C8u;
label_2a37c8:
    // 0x2a37c8: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x2a37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x2a37cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a37ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a37d0: 0x0  nop
    ctx->pc = 0x2a37d0u;
    // NOP
    // 0x2a37d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a37d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a37d8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a37d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a37dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a37dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a37e0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2a37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a37e4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2a37e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    ctx->pc = 0x2a37e8u;
}
