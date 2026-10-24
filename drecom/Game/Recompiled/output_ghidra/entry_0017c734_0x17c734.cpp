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

// Function: entry_0017c734
// Address: 0x17c734 - 0x17c8b4
void entry_0017c734_0x17c734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c734_0x17c734");
#endif

    switch (ctx->pc) {
        case 0x17c758u: goto label_17c758;
        case 0x17c778u: goto label_17c778;
        case 0x17c794u: goto label_17c794;
        case 0x17c7a8u: goto label_17c7a8;
        case 0x17c7c8u: goto label_17c7c8;
        case 0x17c810u: goto label_17c810;
        case 0x17c824u: goto label_17c824;
        case 0x17c884u: goto label_17c884;
        case 0x17c898u: goto label_17c898;
        default: break;
    }

    ctx->pc = 0x17c734u;

    // 0x17c734: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c738: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17c738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c73c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17c740: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c744: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17c744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c748: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x17c748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17c74c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c750: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C750u;
    SET_GPR_U32(ctx, 31, 0x17C758u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C758u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C758u) { return; }
    ctx->pc = 0x17C758u;
label_17c758:
    // 0x17c758: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c75c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c760: 0x0  nop
    ctx->pc = 0x17c760u;
    // NOP
    // 0x17c764: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x17c764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x17c768: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c76c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17c76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c770: 0xc040c24  jal         func_103090
    ctx->pc = 0x17C770u;
    SET_GPR_U32(ctx, 31, 0x17C778u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17C778u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C778u) { return; }
    ctx->pc = 0x17C778u;
label_17c778:
    // 0x17c778: 0x3c02433b  lui         $v0, 0x433B
    ctx->pc = 0x17c778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17211 << 16));
    // 0x17c77c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x17c77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x17c780: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c784: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17c784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c788: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17c788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c78c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x17C78Cu;
    SET_GPR_U32(ctx, 31, 0x17C794u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x17C794u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C794u) { return; }
    ctx->pc = 0x17C794u;
label_17c794:
    // 0x17c794: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17c794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c798: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17c798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17c79c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x17c79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c7a0: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17C7A0u;
    SET_GPR_U32(ctx, 31, 0x17C7A8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17C7A8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C7A8u) { return; }
    ctx->pc = 0x17C7A8u;
label_17c7a8:
    // 0x17c7a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c7ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c7b0: 0x0  nop
    ctx->pc = 0x17c7b0u;
    // NOP
    // 0x17c7b4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x17c7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17c7b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c7bc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17c7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c7c0: 0xc040c24  jal         func_103090
    ctx->pc = 0x17C7C0u;
    SET_GPR_U32(ctx, 31, 0x17C7C8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17C7C8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C7C8u) { return; }
    ctx->pc = 0x17C7C8u;
label_17c7c8:
    // 0x17c7c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c7cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c7d0: 0x0  nop
    ctx->pc = 0x17c7d0u;
    // NOP
    // 0x17c7d4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x17c7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17c7d8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c7dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c7dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c7e0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x17c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c7e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c7e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c7ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c7f0: 0x0  nop
    ctx->pc = 0x17c7f0u;
    // NOP
    // 0x17c7f4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x17c7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x17c7f8: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x17c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x17c7fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c800: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17c800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c804: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17c804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c808: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x17C808u;
    SET_GPR_U32(ctx, 31, 0x17C810u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x17C810u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C810u) { return; }
    ctx->pc = 0x17C810u;
label_17c810:
    // 0x17c810: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17c810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c814: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17c814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c818: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c81c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17C81Cu;
    SET_GPR_U32(ctx, 31, 0x17C824u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17C824u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C824u) { return; }
    ctx->pc = 0x17C824u;
label_17c824:
    // 0x17c824: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c82c: 0x0  nop
    ctx->pc = 0x17c82cu;
    // NOP
    // 0x17c830: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x17c830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17c834: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x17C834u;
    {
        const bool branch_taken_0x17c834 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c834) {
            ctx->pc = 0x17C8D4u;
            return;
        }
    }
    ctx->pc = 0x17C83Cu;
    // 0x17c83c: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x17c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x17c840: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17c840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c844: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x17c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c848: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17c848u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c84c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x17c84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c850: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c854: 0x0  nop
    ctx->pc = 0x17c854u;
    // NOP
    // 0x17c858: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x17C858u;
    {
        const bool branch_taken_0x17c858 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c858) {
            ctx->pc = 0x17C8B4u;
            return;
        }
    }
    ctx->pc = 0x17C860u;
    // 0x17c860: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x17c860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c864: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x17c864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c868: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17c868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17c86c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x17c86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x17c870: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x17c870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17c874: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17c874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c878: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x17c878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c87c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x17C87Cu;
    SET_GPR_U32(ctx, 31, 0x17C884u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x17C884u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C884u) { return; }
    ctx->pc = 0x17C884u;
label_17c884:
    // 0x17c884: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x17c884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17c888: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x17c888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17c88c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c890: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17C890u;
    SET_GPR_U32(ctx, 31, 0x17C898u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17C898u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C898u) { return; }
    ctx->pc = 0x17C898u;
label_17c898:
    // 0x17c898: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c89c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c8a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17c8a4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x17c8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x17c8a8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x17c8a8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17c8ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17C8ACu;
    {
        const bool branch_taken_0x17c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c8ac) {
            ctx->pc = 0x17C8F0u;
            return;
        }
    }
    ctx->pc = 0x17C8B4u;
}
