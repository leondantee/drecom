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

// Function: entry_0016e3a0
// Address: 0x16e3a0 - 0x16e4cc
void entry_0016e3a0_0x16e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e3a0_0x16e3a0");
#endif

    ctx->pc = 0x16e3a0u;

    // 0x16e3a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e3a4: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16e3a4u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e3a8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x16e3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e3ac: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16e3acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e3b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e3b4: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16e3b4u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e3b8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x16e3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e3bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16e3bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e3c0: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16e3c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16e3c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e3c8: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16e3c8u;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e3cc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x16e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e3d0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16e3d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e3d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e3d8: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16e3d8u;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e3dc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x16e3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e3e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16e3e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e3e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16e3e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16e3e8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16e3e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16e3ec: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x16e3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x16e3f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e3f4: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16e3f4u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e3f8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e3fc: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16e3fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e400: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e404: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16e404u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e408: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e40c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16e40cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e410: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16e410u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16e414: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e418: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16e418u;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e41c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x16e41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e420: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16e420u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e424: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e428: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16e428u;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e42c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x16e42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e430: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16e430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e434: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16e434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16e438: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16e438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16e43c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x16e43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x16e440: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e444: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16e444u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e448: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x16e448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e44c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16e44cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e450: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e454: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16e454u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e458: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x16e458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e45c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16e45cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e460: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16e460u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16e464: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e468: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16e468u;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e46c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x16e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e470: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16e470u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e474: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e478: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16e478u;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e47c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x16e47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e480: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16e480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e484: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16e484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16e488: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16e488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16e48c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x16e48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x16e490: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x16e490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e494: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x16e494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e498: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e49c: 0x0  nop
    ctx->pc = 0x16e49cu;
    // NOP
    // 0x16e4a0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x16E4A0u;
    {
        const bool branch_taken_0x16e4a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e4a0) {
            ctx->pc = 0x16E4D8u;
            return;
        }
    }
    ctx->pc = 0x16E4A8u;
    // 0x16e4a8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x16e4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e4ac: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x16e4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e4b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e4b4: 0x0  nop
    ctx->pc = 0x16e4b4u;
    // NOP
    // 0x16e4b8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E4B8u;
    {
        const bool branch_taken_0x16e4b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e4b8) {
            ctx->pc = 0x16E4CCu;
            return;
        }
    }
    ctx->pc = 0x16E4C0u;
    // 0x16e4c0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x16e4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e4c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16E4C4u;
    {
        const bool branch_taken_0x16e4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e4c4) {
            ctx->pc = 0x16E500u;
            return;
        }
    }
    ctx->pc = 0x16E4CCu;
}
