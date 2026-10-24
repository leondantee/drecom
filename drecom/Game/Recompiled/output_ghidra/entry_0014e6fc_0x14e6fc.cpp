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

// Function: entry_0014e6fc
// Address: 0x14e6fc - 0x14e878
void entry_0014e6fc_0x14e6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e6fc_0x14e6fc");
#endif

    switch (ctx->pc) {
        case 0x14e754u: goto label_14e754;
        case 0x14e7c4u: goto label_14e7c4;
        case 0x14e83cu: goto label_14e83c;
        default: break;
    }

    ctx->pc = 0x14e6fcu;

    // 0x14e6fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e700: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e704: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x14e708: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x14E708u;
    {
        const bool branch_taken_0x14e708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e708) {
            ctx->pc = 0x14E878u;
            return;
        }
    }
    ctx->pc = 0x14E710u;
    // 0x14e710: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e714: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14e718: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14e718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14e71c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x14E71Cu;
    {
        const bool branch_taken_0x14e71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e71c) {
            ctx->pc = 0x14E878u;
            return;
        }
    }
    ctx->pc = 0x14E724u;
    // 0x14e724: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e728: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e728u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e72c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e730: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e738: 0x8c50024c  lw          $s0, 0x24C($v0)
    ctx->pc = 0x14e738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x14e73c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e740: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x14e740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e744: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x14e744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x14e748: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x14e748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14e74c: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x14E74Cu;
    SET_GPR_U32(ctx, 31, 0x14E754u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x14E74Cu, 0x14E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E754u;
label_14e754:
    // 0x14e754: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e758: 0x8c50024c  lw          $s0, 0x24C($v0)
    ctx->pc = 0x14e758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x14e75c: 0x3c02c13b  lui         $v0, 0xC13B
    ctx->pc = 0x14e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49467 << 16));
    // 0x14e760: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x14e760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
    // 0x14e764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e768: 0x0  nop
    ctx->pc = 0x14e768u;
    // NOP
    // 0x14e76c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x14e76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14e770: 0x3c024203  lui         $v0, 0x4203
    ctx->pc = 0x14e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16899 << 16));
    // 0x14e774: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x14e774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
    // 0x14e778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e77c: 0x0  nop
    ctx->pc = 0x14e77cu;
    // NOP
    // 0x14e780: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x14e780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x14e784: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x14e784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x14e788: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x14e788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
    // 0x14e78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e790: 0x0  nop
    ctx->pc = 0x14e790u;
    // NOP
    // 0x14e794: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x14e794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x14e798: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e7a0: 0x0  nop
    ctx->pc = 0x14e7a0u;
    // NOP
    // 0x14e7a4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x14e7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x14e7a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e7ac: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x14e7b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e7b4: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x14e7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x14e7b8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14e7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e7bc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x14E7BCu;
    SET_GPR_U32(ctx, 31, 0x14E7C4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x14E7C4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14E7C4u) { return; }
    ctx->pc = 0x14E7C4u;
label_14e7c4:
    // 0x14e7c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e7c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e7cc: 0x0  nop
    ctx->pc = 0x14e7ccu;
    // NOP
    // 0x14e7d0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x14e7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x14e7d4: 0x3c02c13b  lui         $v0, 0xC13B
    ctx->pc = 0x14e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49467 << 16));
    // 0x14e7d8: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x14e7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
    // 0x14e7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e7e0: 0x0  nop
    ctx->pc = 0x14e7e0u;
    // NOP
    // 0x14e7e4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x14e7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14e7e8: 0x3c02422b  lui         $v0, 0x422B
    ctx->pc = 0x14e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16939 << 16));
    // 0x14e7ec: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x14e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
    // 0x14e7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e7f4: 0x0  nop
    ctx->pc = 0x14e7f4u;
    // NOP
    // 0x14e7f8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x14e7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x14e7fc: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x14e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x14e800: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x14e800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
    // 0x14e804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e808: 0x0  nop
    ctx->pc = 0x14e808u;
    // NOP
    // 0x14e80c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x14e80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14e810: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e818: 0x0  nop
    ctx->pc = 0x14e818u;
    // NOP
    // 0x14e81c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14e81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14e820: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e824: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x14e828: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14e828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e82c: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x14e82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x14e830: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14e830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e834: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x14E834u;
    SET_GPR_U32(ctx, 31, 0x14E83Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x14E83Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14E83Cu) { return; }
    ctx->pc = 0x14E83Cu;
label_14e83c:
    // 0x14e83c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e844: 0x0  nop
    ctx->pc = 0x14e844u;
    // NOP
    // 0x14e848: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14e848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14e84c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e850: 0x8c44024c  lw          $a0, 0x24C($v0)
    ctx->pc = 0x14e850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x14e854: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e858: 0x8c450250  lw          $a1, 0x250($v0)
    ctx->pc = 0x14e858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x14e85c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14e85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e860: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x14e860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e864: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x14e864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14e868: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e86c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x14e86cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e870: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x14E870u;
    SET_GPR_U32(ctx, 31, 0x14E878u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x14E870u, 0x14E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E878u;
}
