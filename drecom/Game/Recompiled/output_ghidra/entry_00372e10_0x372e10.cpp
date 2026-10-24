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

// Function: entry_00372e10
// Address: 0x372e10 - 0x372f64
void entry_00372e10_0x372e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00372e10_0x372e10");
#endif

    switch (ctx->pc) {
        case 0x372e80u: goto label_372e80;
        case 0x372ea4u: goto label_372ea4;
        case 0x372ec4u: goto label_372ec4;
        case 0x372ee4u: goto label_372ee4;
        case 0x372f38u: goto label_372f38;
        default: break;
    }

    ctx->pc = 0x372e10u;

    // 0x372e10: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x372e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x372e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372e18: 0x0  nop
    ctx->pc = 0x372e18u;
    // NOP
    // 0x372e1c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x372e1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x372e20: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x372e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x372e24: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x372e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e28: 0xe44009d0  swc1        $f0, 0x9D0($v0)
    ctx->pc = 0x372e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2512), bits); }
    // 0x372e2c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x372e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e30: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x372e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x372e34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x372e34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372e38: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x372e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x372e3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x372e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x372e40: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e44: 0xc48009d0  lwc1        $f0, 0x9D0($a0)
    ctx->pc = 0x372e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372e48: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x372e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x372e4c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x372e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e50: 0xc4a009d4  lwc1        $f0, 0x9D4($a1)
    ctx->pc = 0x372e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372e54: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x372e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x372e58: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x372e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e5c: 0x94c209e0  lhu         $v0, 0x9E0($a2)
    ctx->pc = 0x372e5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2528)));
    // 0x372e60: 0xa7a200c8  sh          $v0, 0xC8($sp)
    ctx->pc = 0x372e60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 200), (uint16_t)GPR_U32(ctx, 2));
    // 0x372e64: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e68: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x372e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x372e6c: 0xa3a300e0  sb          $v1, 0xE0($sp)
    ctx->pc = 0x372e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 3));
    // 0x372e70: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e74: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x372e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x372e78: 0xc067688  jal         func_19DA20
    ctx->pc = 0x372E78u;
    SET_GPR_U32(ctx, 31, 0x372E80u);
    ctx->pc = 0x19DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA20u, 0x372E78u, 0x372E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E80u;
label_372e80:
    // 0x372e80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x372e80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x372e84: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e88: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x372e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e8c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e90: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x372e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x372e94: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x372e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x372e98: 0xc46c00d0  lwc1        $f12, 0xD0($v1)
    ctx->pc = 0x372e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372e9c: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x372E9Cu;
    SET_GPR_U32(ctx, 31, 0x372EA4u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x372E9Cu, 0x372EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EA4u;
label_372ea4:
    // 0x372ea4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372ea8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x372ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372eac: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x372eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372eb0: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x372eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x372eb4: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x372eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x372eb8: 0xc4cc00d4  lwc1        $f12, 0xD4($a2)
    ctx->pc = 0x372eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372ebc: 0xc067808  jal         func_19E020
    ctx->pc = 0x372EBCu;
    SET_GPR_U32(ctx, 31, 0x372EC4u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x372EBCu, 0x372EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EC4u;
label_372ec4:
    // 0x372ec4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372ec8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x372ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372ecc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x372eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372ed0: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x372ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x372ed4: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x372ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x372ed8: 0xc44c00d8  lwc1        $f12, 0xD8($v0)
    ctx->pc = 0x372ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372edc: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x372EDCu;
    SET_GPR_U32(ctx, 31, 0x372EE4u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x372EDCu, 0x372EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EE4u;
label_372ee4:
    // 0x372ee4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372ee8: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x372ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x372eec: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x372eecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x372ef0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372ef4: 0x24850110  addiu       $a1, $a0, 0x110
    ctx->pc = 0x372ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x372ef8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x372ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x372efc: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x372efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f00: 0x8cc205f4  lw          $v0, 0x5F4($a2)
    ctx->pc = 0x372f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1524)));
    // 0x372f04: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x372F04u;
    {
        const bool branch_taken_0x372f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372f04) {
            ctx->pc = 0x373020u;
            return;
        }
    }
    ctx->pc = 0x372F0Cu;
    // 0x372f0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x372f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372f10: 0xa7a400ca  sh          $a0, 0xCA($sp)
    ctx->pc = 0x372f10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 4));
    // 0x372f14: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x372f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f18: 0x8ca205f4  lw          $v0, 0x5F4($a1)
    ctx->pc = 0x372f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1524)));
    // 0x372f1c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x372f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x372f20: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x372f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f24: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x372f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x372f28: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x372f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x372f2c: 0x24460602  addiu       $a2, $v0, 0x602
    ctx->pc = 0x372f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1538));
    // 0x372f30: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x372F30u;
    SET_GPR_U32(ctx, 31, 0x372F38u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x372F30u, 0x372F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F38u;
label_372f38:
    // 0x372f38: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x372f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f3c: 0x944409e0  lhu         $a0, 0x9E0($v0)
    ctx->pc = 0x372f3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x372f40: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x372f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x372f44: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x372f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x372f48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x372F48u;
    {
        const bool branch_taken_0x372f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372f48) {
            ctx->pc = 0x372F64u;
            return;
        }
    }
    ctx->pc = 0x372F50u;
    // 0x372f50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x372f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x372f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x372f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x372f58: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x372f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x372f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x372f60: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x372f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->pc = 0x372f64u;
}
