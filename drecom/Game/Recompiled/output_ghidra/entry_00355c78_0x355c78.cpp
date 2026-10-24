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

// Function: entry_00355c78
// Address: 0x355c78 - 0x355e98
void entry_00355c78_0x355c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355c78_0x355c78");
#endif

    switch (ctx->pc) {
        case 0x355ce4u: goto label_355ce4;
        case 0x355d24u: goto label_355d24;
        case 0x355d64u: goto label_355d64;
        case 0x355dbcu: goto label_355dbc;
        case 0x355dfcu: goto label_355dfc;
        case 0x355e3cu: goto label_355e3c;
        default: break;
    }

    ctx->pc = 0x355c78u;

    // 0x355c78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x355c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x355c7c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x355c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x355c80: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x355c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x355c84: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x355C84u;
    {
        const bool branch_taken_0x355c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355c84) {
            ctx->pc = 0x355F18u;
            return;
        }
    }
    ctx->pc = 0x355C8Cu;
    // 0x355c8c: 0x3c02413b  lui         $v0, 0x413B
    ctx->pc = 0x355c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16699 << 16));
    // 0x355c90: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x355c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
    // 0x355c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355c98: 0x0  nop
    ctx->pc = 0x355c98u;
    // NOP
    // 0x355c9c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x355c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x355ca0: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x355ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
    // 0x355ca4: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x355ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
    // 0x355ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355cac: 0x0  nop
    ctx->pc = 0x355cacu;
    // NOP
    // 0x355cb0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x355cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x355cb4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x355cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x355cb8: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x355cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
    // 0x355cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355cc0: 0x0  nop
    ctx->pc = 0x355cc0u;
    // NOP
    // 0x355cc4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x355cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x355cc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x355cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x355ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355cd0: 0x0  nop
    ctx->pc = 0x355cd0u;
    // NOP
    // 0x355cd4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x355cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x355cd8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x355cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355cdc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x355CDCu;
    SET_GPR_U32(ctx, 31, 0x355CE4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x355CDCu, 0x355CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355CE4u;
label_355ce4:
    // 0x355ce4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x355ce8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x355ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x355cec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355cf0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x355cf4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x355cf8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x355cfc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x355cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x355d00: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x355d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x355d04: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x355d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x355d08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x355d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x355d0c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x355d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x355d10: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x355d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355d14: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x355d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355d18: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x355d18u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355d1c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x355D1Cu;
    SET_GPR_U32(ctx, 31, 0x355D24u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x355D1Cu, 0x355D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D24u;
label_355d24:
    // 0x355d24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x355d28: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x355d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x355d2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355d30: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x355d34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x355d38: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x355d3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x355d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x355d40: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x355d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x355d44: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x355d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x355d48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x355d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x355d4c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x355d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x355d50: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x355d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355d54: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x355d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355d58: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x355d58u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355d5c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x355D5Cu;
    SET_GPR_U32(ctx, 31, 0x355D64u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x355D5Cu, 0x355D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D64u;
label_355d64:
    // 0x355d64: 0x3c02c13b  lui         $v0, 0xC13B
    ctx->pc = 0x355d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49467 << 16));
    // 0x355d68: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x355d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
    // 0x355d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355d70: 0x0  nop
    ctx->pc = 0x355d70u;
    // NOP
    // 0x355d74: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x355d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x355d78: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x355d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
    // 0x355d7c: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x355d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
    // 0x355d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355d84: 0x0  nop
    ctx->pc = 0x355d84u;
    // NOP
    // 0x355d88: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x355d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x355d8c: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x355d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x355d90: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x355d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
    // 0x355d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355d98: 0x0  nop
    ctx->pc = 0x355d98u;
    // NOP
    // 0x355d9c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x355d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x355da0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x355da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x355da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355da8: 0x0  nop
    ctx->pc = 0x355da8u;
    // NOP
    // 0x355dac: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x355dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x355db0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x355db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355db4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x355DB4u;
    SET_GPR_U32(ctx, 31, 0x355DBCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x355DB4u, 0x355DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DBCu;
label_355dbc:
    // 0x355dbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x355dc0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x355dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x355dc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355dc8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x355dcc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x355dd0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x355dd4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x355dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x355dd8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x355dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x355ddc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x355ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x355de0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x355de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x355de4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x355de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x355de8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x355de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355dec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x355decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355df0: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x355df0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355df4: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x355DF4u;
    SET_GPR_U32(ctx, 31, 0x355DFCu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x355DF4u, 0x355DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DFCu;
label_355dfc:
    // 0x355dfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x355e00: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x355e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x355e04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355e08: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x355e0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x355e10: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x355e14: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x355e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x355e18: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x355e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x355e1c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x355e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x355e20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x355e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x355e24: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x355e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x355e28: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x355e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355e2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x355e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355e30: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x355e30u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355e34: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x355E34u;
    SET_GPR_U32(ctx, 31, 0x355E3Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x355E34u, 0x355E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355E3Cu;
label_355e3c:
    // 0x355e3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x355e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x355e40: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x355e40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x355e44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x355e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x355e48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x355e48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x355e4c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x355e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x355e50: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x355E50u;
    {
        const bool branch_taken_0x355e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e50) {
            ctx->pc = 0x355E98u;
            return;
        }
    }
    ctx->pc = 0x355E58u;
    // 0x355e58: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x355e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x355e5c: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x355e5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x355e60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x355e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x355e64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x355e64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x355e68: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x355e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x355e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355e70: 0x0  nop
    ctx->pc = 0x355e70u;
    // NOP
    // 0x355e74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x355e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x355e78: 0x3c024077  lui         $v0, 0x4077
    ctx->pc = 0x355e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16503 << 16));
    // 0x355e7c: 0x3442bdef  ori         $v0, $v0, 0xBDEF
    ctx->pc = 0x355e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48623);
    // 0x355e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355e84: 0x0  nop
    ctx->pc = 0x355e84u;
    // NOP
    // 0x355e88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x355e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x355e8c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x355e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x355e90: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x355E90u;
    {
        const bool branch_taken_0x355e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e90) {
            ctx->pc = 0x355ED8u;
            return;
        }
    }
    ctx->pc = 0x355E98u;
}
