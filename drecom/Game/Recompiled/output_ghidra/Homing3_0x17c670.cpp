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

// Function: Homing3
// Address: 0x17c670 - 0x17cb24
void Homing3_0x17c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Homing3_0x17c670");
#endif

    switch (ctx->pc) {
        case 0x17c720u: goto label_17c720;
        case 0x17c734u: goto label_17c734;
        case 0x17c758u: goto label_17c758;
        case 0x17c778u: goto label_17c778;
        case 0x17c794u: goto label_17c794;
        case 0x17c7a8u: goto label_17c7a8;
        case 0x17c7c8u: goto label_17c7c8;
        case 0x17c810u: goto label_17c810;
        case 0x17c824u: goto label_17c824;
        case 0x17c884u: goto label_17c884;
        case 0x17c898u: goto label_17c898;
        case 0x17c904u: goto label_17c904;
        case 0x17c954u: goto label_17c954;
        case 0x17c9d0u: goto label_17c9d0;
        case 0x17ca04u: goto label_17ca04;
        case 0x17ca18u: goto label_17ca18;
        case 0x17ca84u: goto label_17ca84;
        case 0x17ca98u: goto label_17ca98;
        default: break;
    }

    ctx->pc = 0x17c670u;

    // 0x17c670: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17c670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17c674: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x17c674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x17c678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17c67c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c680: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x17c680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x17c684: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x17c684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x17c688: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x17c688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x17c68c: 0xe7ac00b8  swc1        $f12, 0xB8($sp)
    ctx->pc = 0x17c68cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x17c690: 0x3c0348f4  lui         $v1, 0x48F4
    ctx->pc = 0x17c690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18676 << 16));
    // 0x17c694: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x17c694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x17c698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c69c: 0x0  nop
    ctx->pc = 0x17c69cu;
    // NOP
    // 0x17c6a0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x17c6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x17c6a4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x17c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17c6a8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x17c6a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17c6ac: 0x14200117  bnez        $at, . + 4 + (0x117 << 2)
    ctx->pc = 0x17C6ACu;
    {
        const bool branch_taken_0x17c6ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c6ac) {
            ctx->pc = 0x17CB0Cu;
            goto label_17cb0c;
        }
    }
    ctx->pc = 0x17C6B4u;
    // 0x17c6b4: 0x3c024874  lui         $v0, 0x4874
    ctx->pc = 0x17c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18548 << 16));
    // 0x17c6b8: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x17c6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x17c6bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c6bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c6c0: 0x0  nop
    ctx->pc = 0x17c6c0u;
    // NOP
    // 0x17c6c4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x17c6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x17c6c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c6c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c6cc: 0x0  nop
    ctx->pc = 0x17c6ccu;
    // NOP
    // 0x17c6d0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x17c6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x17c6d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c6d8: 0x0  nop
    ctx->pc = 0x17c6d8u;
    // NOP
    // 0x17c6dc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x17c6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x17c6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c6e4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17c6e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17c6e8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17c6ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c6ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c6f0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c6f4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c6f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c700: 0x0  nop
    ctx->pc = 0x17c700u;
    // NOP
    // 0x17c704: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17c704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17c708: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17c70c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17c70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17c710: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x17c710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17c714: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c718: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C718u;
    SET_GPR_U32(ctx, 31, 0x17C720u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C720u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C720u) { return; }
    ctx->pc = 0x17C720u;
label_17c720:
    // 0x17c720: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c728: 0x0  nop
    ctx->pc = 0x17c728u;
    // NOP
    // 0x17c72c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17c72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17c730: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17c730u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_17c734:
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
            goto label_17c8d4;
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
            goto label_17c8b4;
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
            goto label_17c8f0;
        }
    }
    ctx->pc = 0x17C8B4u;
label_17c8b4:
    // 0x17c8b4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c8b8: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x17c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x17c8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c8c0: 0x0  nop
    ctx->pc = 0x17c8c0u;
    // NOP
    // 0x17c8c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c8c8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x17c8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x17c8cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17C8CCu;
    {
        const bool branch_taken_0x17c8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c8cc) {
            ctx->pc = 0x17C8F0u;
            goto label_17c8f0;
        }
    }
    ctx->pc = 0x17C8D4u;
label_17c8d4:
    // 0x17c8d4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c8d8: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x17c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x17c8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c8e0: 0x0  nop
    ctx->pc = 0x17c8e0u;
    // NOP
    // 0x17c8e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c8e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c8e8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x17c8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x17c8ec: 0x0  nop
    ctx->pc = 0x17c8ecu;
    // NOP
label_17c8f0:
    // 0x17c8f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17c8f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c8f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c8fc: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C8FCu;
    SET_GPR_U32(ctx, 31, 0x17C904u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C904u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C904u) { return; }
    ctx->pc = 0x17C904u;
label_17c904:
    // 0x17c904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c90c: 0x0  nop
    ctx->pc = 0x17c90cu;
    // NOP
    // 0x17c910: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17c910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17c914: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c918: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c918u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c91c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c920: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c920u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c92c: 0x0  nop
    ctx->pc = 0x17c92cu;
    // NOP
    // 0x17c930: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17c930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17c934: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c938: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17c938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c93c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17c940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c944: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17c944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c948: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x17c948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17c94c: 0xc05f7ac  jal         func_17DEB0
    ctx->pc = 0x17C94Cu;
    SET_GPR_U32(ctx, 31, 0x17C954u);
    ctx->pc = 0x17DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DEB0u, 0x17C94Cu, 0x17C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C954u;
label_17c954:
    // 0x17c954: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x17c954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x17c958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17c958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c95c: 0x0  nop
    ctx->pc = 0x17c95cu;
    // NOP
    // 0x17c960: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17c960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c964: 0x0  nop
    ctx->pc = 0x17c964u;
    // NOP
    // 0x17c968: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C968u;
    {
        const bool branch_taken_0x17c968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c968) {
            ctx->pc = 0x17C978u;
            goto label_17c978;
        }
    }
    ctx->pc = 0x17C970u;
    // 0x17c970: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17c970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17c974: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17c974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17c978:
    // 0x17c978: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c97c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17c980: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x17c980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17c984: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x17c984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17c988: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x17C988u;
    {
        const bool branch_taken_0x17c988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c988) {
            ctx->pc = 0x17C734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c734;
        }
    }
    ctx->pc = 0x17C990u;
    // 0x17c990: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c994: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17c994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c998: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17c99c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c9a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c9a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c9a4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c9a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c9ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c9b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c9b4: 0x0  nop
    ctx->pc = 0x17c9b4u;
    // NOP
    // 0x17c9b8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x17c9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17c9bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17c9c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c9c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c9c8: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C9C8u;
    SET_GPR_U32(ctx, 31, 0x17C9D0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C9D0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C9D0u) { return; }
    ctx->pc = 0x17C9D0u;
label_17c9d0:
    // 0x17c9d0: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x17c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c9d4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x17c9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c9d8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17c9d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c9dc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x17c9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c9e0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x17c9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c9e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c9e8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17c9e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17c9ec: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17c9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c9f0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17c9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c9f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c9f8: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x17c9f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17c9fc: 0xc045630  jal         func_1158C0
    ctx->pc = 0x17C9FCu;
    SET_GPR_U32(ctx, 31, 0x17CA04u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x17C9FCu, 0x17CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA04u;
label_17ca04:
    // 0x17ca04: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x17ca04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x17ca08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ca0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17ca0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ca10: 0xc040c24  jal         func_103090
    ctx->pc = 0x17CA10u;
    SET_GPR_U32(ctx, 31, 0x17CA18u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17CA18u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17CA18u) { return; }
    ctx->pc = 0x17CA18u;
label_17ca18:
    // 0x17ca18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17ca1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ca1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ca20: 0x0  nop
    ctx->pc = 0x17ca20u;
    // NOP
    // 0x17ca24: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17ca24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17ca28: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x17CA28u;
    {
        const bool branch_taken_0x17ca28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ca28) {
            ctx->pc = 0x17CACCu;
            goto label_17cacc;
        }
    }
    ctx->pc = 0x17CA30u;
    // 0x17ca30: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17ca30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ca34: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x17ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ca38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17ca38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17ca3c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17ca40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ca40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ca44: 0x0  nop
    ctx->pc = 0x17ca44u;
    // NOP
    // 0x17ca48: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x17ca48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17ca4c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x17ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ca50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ca50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ca54: 0x0  nop
    ctx->pc = 0x17ca54u;
    // NOP
    // 0x17ca58: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x17CA58u;
    {
        const bool branch_taken_0x17ca58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ca58) {
            ctx->pc = 0x17CAB4u;
            goto label_17cab4;
        }
    }
    ctx->pc = 0x17CA60u;
    // 0x17ca60: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x17ca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ca64: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x17ca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ca68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17ca68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17ca6c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x17ca6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x17ca70: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x17ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17ca74: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17ca74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ca78: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x17ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ca7c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x17CA7Cu;
    SET_GPR_U32(ctx, 31, 0x17CA84u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x17CA84u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17CA84u) { return; }
    ctx->pc = 0x17CA84u;
label_17ca84:
    // 0x17ca84: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x17ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17ca88: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x17ca88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17ca8c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17ca8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17ca90: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17CA90u;
    SET_GPR_U32(ctx, 31, 0x17CA98u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17CA98u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17CA98u) { return; }
    ctx->pc = 0x17CA98u;
label_17ca98:
    // 0x17ca98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17ca9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ca9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17caa0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x17caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17caa4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x17caa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x17caa8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x17caa8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17caac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17CAACu;
    {
        const bool branch_taken_0x17caac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17caac) {
            ctx->pc = 0x17CADCu;
            goto label_17cadc;
        }
    }
    ctx->pc = 0x17CAB4u;
label_17cab4:
    // 0x17cab4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17cab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cab8: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x17cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cabc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17cabcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17cac0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x17cac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x17cac4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17CAC4u;
    {
        const bool branch_taken_0x17cac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cac4) {
            ctx->pc = 0x17CADCu;
            goto label_17cadc;
        }
    }
    ctx->pc = 0x17CACCu;
label_17cacc:
    // 0x17cacc: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cad0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x17cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cad4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17cad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17cad8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x17cad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_17cadc:
    // 0x17cadc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x17cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17cae0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x17cae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cae4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17cae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17cae8: 0xc420f0f0  lwc1        $f0, -0xF10($at)
    ctx->pc = 0x17cae8u;
    { uint32_t bits = FAST_READ32(0x47F0F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17caec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17caecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17caf0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x17caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17caf4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x17caf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17caf8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CAF8u;
    {
        const bool branch_taken_0x17caf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17caf8) {
            ctx->pc = 0x17CB0Cu;
            goto label_17cb0c;
        }
    }
    ctx->pc = 0x17CB00u;
    // 0x17cb00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cb00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cb04: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x17cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17cb08: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x17cb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_17cb0c:
    // 0x17cb0c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x17cb0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cb10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17cb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17cb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cb18: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x17cb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17cb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CB24u;
}
