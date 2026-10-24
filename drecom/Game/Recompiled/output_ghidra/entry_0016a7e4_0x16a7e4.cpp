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

// Function: entry_0016a7e4
// Address: 0x16a7e4 - 0x16a910
void entry_0016a7e4_0x16a7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a7e4_0x16a7e4");
#endif

    ctx->pc = 0x16a7e4u;

    // 0x16a7e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a7e8: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16a7e8u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a7ec: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x16a7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a7f0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16a7f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a7f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a7f8: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16a7f8u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a7fc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x16a7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a800: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a804: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16a804u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a808: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a80c: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16a80cu;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a810: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x16a810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a814: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16a814u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a818: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a81c: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16a81cu;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a820: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x16a820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a824: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a828: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16a828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a82c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16a82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16a830: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x16a830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x16a834: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a838: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16a838u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a83c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x16a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a840: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16a840u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a844: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a848: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16a848u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a84c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x16a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a850: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a854: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16a854u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a858: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a85c: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16a85cu;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a860: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x16a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a864: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16a864u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a868: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a86c: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16a86cu;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a870: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x16a870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a874: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a878: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16a878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a87c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16a87cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16a880: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x16a880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x16a884: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a888: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16a888u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a88c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a890: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16a890u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a894: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a898: 0xc421aad0  lwc1        $f1, -0x5530($at)
    ctx->pc = 0x16a898u;
    { uint32_t bits = FAST_READ32(0x47AAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a89c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16a89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a8a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a8a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a8a4: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16a8a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a8a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a8ac: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16a8acu;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a8b0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x16a8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a8b4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16a8b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a8b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a8bc: 0xc421aad8  lwc1        $f1, -0x5528($at)
    ctx->pc = 0x16a8bcu;
    { uint32_t bits = FAST_READ32(0x47AAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a8c0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x16a8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a8c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a8c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a8c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16a8c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a8cc: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16a8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16a8d0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x16a8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x16a8d4: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x16a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a8d8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x16a8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a8dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a8dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a8e0: 0x0  nop
    ctx->pc = 0x16a8e0u;
    // NOP
    // 0x16a8e4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x16A8E4u;
    {
        const bool branch_taken_0x16a8e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a8e4) {
            ctx->pc = 0x16A91Cu;
            return;
        }
    }
    ctx->pc = 0x16A8ECu;
    // 0x16a8ec: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x16a8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a8f0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x16a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a8f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a8f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a8f8: 0x0  nop
    ctx->pc = 0x16a8f8u;
    // NOP
    // 0x16a8fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16A8FCu;
    {
        const bool branch_taken_0x16a8fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a8fc) {
            ctx->pc = 0x16A910u;
            return;
        }
    }
    ctx->pc = 0x16A904u;
    // 0x16a904: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x16a904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a908: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16A908u;
    {
        const bool branch_taken_0x16a908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a908) {
            ctx->pc = 0x16A944u;
            return;
        }
    }
    ctx->pc = 0x16A910u;
}
