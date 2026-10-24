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

// Function: entry_0016029c
// Address: 0x16029c - 0x160388
void entry_0016029c_0x16029c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016029c_0x16029c");
#endif

    switch (ctx->pc) {
        case 0x1602e0u: goto label_1602e0;
        case 0x160338u: goto label_160338;
        case 0x160368u: goto label_160368;
        default: break;
    }

    ctx->pc = 0x16029cu;

    // 0x16029c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x16029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1602a0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1602a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1602a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1602a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1602a8: 0x0  nop
    ctx->pc = 0x1602a8u;
    // NOP
    // 0x1602ac: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1602acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1602b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1602b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1602b4: 0x0  nop
    ctx->pc = 0x1602b4u;
    // NOP
    // 0x1602b8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1602b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1602bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1602bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1602c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1602c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1602c4: 0x0  nop
    ctx->pc = 0x1602c4u;
    // NOP
    // 0x1602c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1602c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1602cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1602ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1602d0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1602d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1602d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1602d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1602d8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1602D8u;
    SET_GPR_U32(ctx, 31, 0x1602E0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1602E0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1602E0u) { return; }
    ctx->pc = 0x1602E0u;
label_1602e0:
    // 0x1602e0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1602e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1602e4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1602e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1602e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1602e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1602ec: 0x0  nop
    ctx->pc = 0x1602ecu;
    // NOP
    // 0x1602f0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1602f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1602f4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1602f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1602f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1602f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1602fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1602fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x160300: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160304: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x160304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160308: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x160308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16030c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16030cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x160310: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x160310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x160314: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x160314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x160318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16031c: 0x0  nop
    ctx->pc = 0x16031cu;
    // NOP
    // 0x160320: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x160320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x160324: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x160324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160328: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x160328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16032c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x16032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160330: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x160330u;
    SET_GPR_U32(ctx, 31, 0x160338u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x160338u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x160338u) { return; }
    ctx->pc = 0x160338u;
label_160338:
    // 0x160338: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x160338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x16033c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16033cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160340: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x160340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160344: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x160348: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x160348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x16034c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x16034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x160350: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x160350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x160354: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x160354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x160358: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x160358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16035c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x16035cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160360: 0xc059e1c  jal         func_167870
    ctx->pc = 0x160360u;
    SET_GPR_U32(ctx, 31, 0x160368u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x160360u, 0x160368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160368u;
label_160368:
    // 0x160368: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x160368u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16036c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16036Cu;
    {
        const bool branch_taken_0x16036c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16036c) {
            ctx->pc = 0x160388u;
            return;
        }
    }
    ctx->pc = 0x160374u;
    // 0x160374: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x160378: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x160378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x16037c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16037cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160380: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x160380u;
    {
        const bool branch_taken_0x160380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160380) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x160388u;
}
