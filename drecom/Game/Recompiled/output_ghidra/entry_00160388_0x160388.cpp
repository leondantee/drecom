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

// Function: entry_00160388
// Address: 0x160388 - 0x16047c
void entry_00160388_0x160388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160388_0x160388");
#endif

    switch (ctx->pc) {
        case 0x1603d0u: goto label_1603d0;
        case 0x16042cu: goto label_16042c;
        case 0x16045cu: goto label_16045c;
        default: break;
    }

    ctx->pc = 0x160388u;

    // 0x160388: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x160388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16038c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16038cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x160390: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x160390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x160394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160398: 0x0  nop
    ctx->pc = 0x160398u;
    // NOP
    // 0x16039c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x16039cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1603a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1603a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1603a4: 0x0  nop
    ctx->pc = 0x1603a4u;
    // NOP
    // 0x1603a8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1603a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1603ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1603acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1603b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1603b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1603b4: 0x0  nop
    ctx->pc = 0x1603b4u;
    // NOP
    // 0x1603b8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1603b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1603bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1603bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1603c0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1603c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1603c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1603c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1603c8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1603C8u;
    SET_GPR_U32(ctx, 31, 0x1603D0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1603D0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1603D0u) { return; }
    ctx->pc = 0x1603D0u;
label_1603d0:
    // 0x1603d0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1603d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1603d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1603d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1603d8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1603d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1603dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1603dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1603e0: 0x0  nop
    ctx->pc = 0x1603e0u;
    // NOP
    // 0x1603e4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1603e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1603e8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1603e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1603ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1603ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1603f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1603f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1603f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1603f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1603f8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1603f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1603fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1603fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160400: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x160400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x160404: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x160404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x160408: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x160408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16040c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16040cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160410: 0x0  nop
    ctx->pc = 0x160410u;
    // NOP
    // 0x160414: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x160414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x160418: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x160418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16041c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x16041cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160420: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x160420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160424: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x160424u;
    SET_GPR_U32(ctx, 31, 0x16042Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x16042Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16042Cu) { return; }
    ctx->pc = 0x16042Cu;
label_16042c:
    // 0x16042c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x16042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x160430: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160434: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x160434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160438: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16043c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x16043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x160440: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x160440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x160444: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x160444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x160448: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x160448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16044c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x16044cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160450: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x160450u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160454: 0xc059e1c  jal         func_167870
    ctx->pc = 0x160454u;
    SET_GPR_U32(ctx, 31, 0x16045Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x160454u, 0x16045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16045Cu;
label_16045c:
    // 0x16045c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x16045cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x160460: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x160460u;
    {
        const bool branch_taken_0x160460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x160460) {
            ctx->pc = 0x16047Cu;
            return;
        }
    }
    ctx->pc = 0x160468u;
    // 0x160468: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x16046c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x16046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x160470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160474: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x160474u;
    {
        const bool branch_taken_0x160474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160474) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x16047Cu;
}
