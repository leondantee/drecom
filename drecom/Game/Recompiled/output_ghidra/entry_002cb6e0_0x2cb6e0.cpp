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

// Function: entry_002cb6e0
// Address: 0x2cb6e0 - 0x2cb788
void entry_002cb6e0_0x2cb6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cb6e0_0x2cb6e0");
#endif

    switch (ctx->pc) {
        case 0x2cb6e8u: goto label_2cb6e8;
        case 0x2cb720u: goto label_2cb720;
        case 0x2cb758u: goto label_2cb758;
        default: break;
    }

    ctx->pc = 0x2cb6e0u;

    // 0x2cb6e0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CB6E0u;
    SET_GPR_U32(ctx, 31, 0x2CB6E8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CB6E0u, 0x2CB6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6E8u;
label_2cb6e8:
    // 0x2cb6e8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cb6ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb6f0: 0x0  nop
    ctx->pc = 0x2cb6f0u;
    // NOP
    // 0x2cb6f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cb6f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb6f8: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cb6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cb6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb700: 0x0  nop
    ctx->pc = 0x2cb700u;
    // NOP
    // 0x2cb704: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cb704u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cb708: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2cb708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb70c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb70cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb710: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cb710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cb714: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cb714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cb718: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CB718u;
    SET_GPR_U32(ctx, 31, 0x2CB720u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CB718u, 0x2CB720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB720u;
label_2cb720:
    // 0x2cb720: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cb720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cb724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb728: 0x0  nop
    ctx->pc = 0x2cb728u;
    // NOP
    // 0x2cb72c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cb72cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb730: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2cb730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2cb734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb738: 0x0  nop
    ctx->pc = 0x2cb738u;
    // NOP
    // 0x2cb73c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cb73cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cb740: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2cb740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb744: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb748: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cb748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cb74c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cb74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cb750: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CB750u;
    SET_GPR_U32(ctx, 31, 0x2CB758u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CB750u, 0x2CB758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB758u;
label_2cb758:
    // 0x2cb758: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cb758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cb75c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb760: 0x0  nop
    ctx->pc = 0x2cb760u;
    // NOP
    // 0x2cb764: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cb764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb768: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2cb768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2cb76c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb76cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb770: 0x0  nop
    ctx->pc = 0x2cb770u;
    // NOP
    // 0x2cb774: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cb774u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cb778: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2cb778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb77c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb77cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb780: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cb780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cb784: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cb784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2cb788u;
}
