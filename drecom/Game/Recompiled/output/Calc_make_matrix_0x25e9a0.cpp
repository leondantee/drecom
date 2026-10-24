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

// Function: Calc_make_matrix
// Address: 0x25e9a0 - 0x25ee4c
void Calc_make_matrix_0x25e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Calc_make_matrix_0x25e9a0");
#endif

    switch (ctx->pc) {
        case 0x25e9d0u: goto label_25e9d0;
        case 0x25e9f0u: goto label_25e9f0;
        case 0x25ea10u: goto label_25ea10;
        case 0x25ea30u: goto label_25ea30;
        case 0x25ea50u: goto label_25ea50;
        case 0x25ea90u: goto label_25ea90;
        case 0x25eab0u: goto label_25eab0;
        case 0x25eaf0u: goto label_25eaf0;
        case 0x25eb38u: goto label_25eb38;
        case 0x25ecd8u: goto label_25ecd8;
        case 0x25ed04u: goto label_25ed04;
        case 0x25ed48u: goto label_25ed48;
        case 0x25ed64u: goto label_25ed64;
        case 0x25ed88u: goto label_25ed88;
        case 0x25edb0u: goto label_25edb0;
        case 0x25edc4u: goto label_25edc4;
        case 0x25edd4u: goto label_25edd4;
        case 0x25ee0cu: goto label_25ee0c;
        default: break;
    }

    ctx->pc = 0x25e9a0u;

    // 0x25e9a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25e9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25e9a4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x25e9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x25e9a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25e9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25e9ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25e9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25e9b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e9b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e9b8: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x25e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x25e9bc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x25e9bcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25e9c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25e9c4: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x25e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25e9c8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25E9C8u;
    SET_GPR_U32(ctx, 31, 0x25E9D0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25E9D0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25E9D0u) { return; }
    ctx->pc = 0x25E9D0u;
label_25e9d0:
    // 0x25e9d0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25e9d4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25e9d8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25e9dc: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25e9e0: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25e9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25e9e4: 0xc44c00d0  lwc1        $f12, 0xD0($v0)
    ctx->pc = 0x25e9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25e9e8: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x25E9E8u;
    SET_GPR_U32(ctx, 31, 0x25E9F0u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x25E9E8u, 0x25E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E9F0u;
label_25e9f0:
    // 0x25e9f0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25e9f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25e9f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25e9fc: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25e9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25ea00: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25ea04: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x25ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25ea08: 0xc067808  jal         func_19E020
    ctx->pc = 0x25EA08u;
    SET_GPR_U32(ctx, 31, 0x25EA10u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25EA08u, 0x25EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA10u;
label_25ea10:
    // 0x25ea10: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ea14: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ea18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ea1c: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25ea20: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25ea24: 0xc44c00d8  lwc1        $f12, 0xD8($v0)
    ctx->pc = 0x25ea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25ea28: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25EA28u;
    SET_GPR_U32(ctx, 31, 0x25EA30u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25EA28u, 0x25EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA30u;
label_25ea30:
    // 0x25ea30: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ea34: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25ea38: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x25ea38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x25ea3c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25EA3Cu;
    {
        const bool branch_taken_0x25ea3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ea3c) {
            ctx->pc = 0x25EA90u;
            goto label_25ea90;
        }
    }
    ctx->pc = 0x25EA44u;
    // 0x25ea44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ea48: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25EA48u;
    SET_GPR_U32(ctx, 31, 0x25EA50u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25EA50u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EA50u) { return; }
    ctx->pc = 0x25EA50u;
label_25ea50:
    // 0x25ea50: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ea54: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x25ea54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ea58: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25ea58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25ea5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ea60: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x25ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ea64: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25ea64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25ea68: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ea6c: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x25ea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ea70: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25ea70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25ea74: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ea78: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ea7c: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x25ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25ea80: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x25ea80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25ea84: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25ea84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ea88: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25EA88u;
    SET_GPR_U32(ctx, 31, 0x25EA90u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25EA88u, 0x25EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA90u;
label_25ea90:
    // 0x25ea90: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ea94: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25ea98: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x25ea98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x25ea9c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25EA9Cu;
    {
        const bool branch_taken_0x25ea9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ea9c) {
            ctx->pc = 0x25EAF0u;
            goto label_25eaf0;
        }
    }
    ctx->pc = 0x25EAA4u;
    // 0x25eaa4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25eaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25eaa8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25EAA8u;
    SET_GPR_U32(ctx, 31, 0x25EAB0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25EAB0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EAB0u) { return; }
    ctx->pc = 0x25EAB0u;
label_25eab0:
    // 0x25eab0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eab4: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x25eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25eab8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25eab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25eabc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eac0: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x25eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25eac4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25eac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25eac8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eacc: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x25eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ead0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25ead0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25ead4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ead8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eadc: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x25eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25eae0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25eae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25eae4: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25eae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25eae8: 0xc067618  jal         func_19D860
    ctx->pc = 0x25EAE8u;
    SET_GPR_U32(ctx, 31, 0x25EAF0u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x25EAE8u, 0x25EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAF0u;
label_25eaf0:
    // 0x25eaf0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eaf4: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x25eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x25eaf8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25eaf8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25eafc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb00: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x25eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x25eb04: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x25eb08: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb0c: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x25eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25eb10: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25EB10u;
    {
        const bool branch_taken_0x25eb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25eb10) {
            ctx->pc = 0x25EB38u;
            goto label_25eb38;
        }
    }
    ctx->pc = 0x25EB18u;
    // 0x25eb18: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25eb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb1c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb20: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb24: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25eb28: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x25eb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25eb2c: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25eb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25eb30: 0xc040c00  jal         func_103000
    ctx->pc = 0x25EB30u;
    SET_GPR_U32(ctx, 31, 0x25EB38u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25EB38u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EB38u) { return; }
    ctx->pc = 0x25EB38u;
label_25eb38:
    // 0x25eb38: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x25eb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb3c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x25eb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x25eb40: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x25eb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x25eb44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25eb48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25eb4c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25eb50: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25eb54: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25eb54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25eb58: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x25eb58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25eb5c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25eb5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25eb60: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25eb64: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25EB64u;
    {
        const bool branch_taken_0x25eb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25eb64) {
            ctx->pc = 0x25EB98u;
            goto label_25eb98;
        }
    }
    ctx->pc = 0x25EB6Cu;
    // 0x25eb6c: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x25eb6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25eb70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25eb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25eb74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25eb78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25eb7c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25eb80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25eb84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25eb88: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb8c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x25eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x25eb90: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x25eb90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25eb94: 0x0  nop
    ctx->pc = 0x25eb94u;
    // NOP
label_25eb98:
    // 0x25eb98: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25eb98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25eb9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25eb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25eba0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25eba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25eba4: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x25EBA4u;
    {
        const bool branch_taken_0x25eba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25eba4) {
            ctx->pc = 0x25EE10u;
            goto label_25ee10;
        }
    }
    ctx->pc = 0x25EBACu;
    // 0x25ebac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ebb0: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x25ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x25ebb4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25ebb8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x25ebb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ebbc: 0x92020143  lbu         $v0, 0x143($s0)
    ctx->pc = 0x25ebbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25ebc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25ebc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ebc4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x25ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25ebc8: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x25EBC8u;
    {
        const bool branch_taken_0x25ebc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ebc8) {
            ctx->pc = 0x25ECB8u;
            goto label_25ecb8;
        }
    }
    ctx->pc = 0x25EBD0u;
    // 0x25ebd0: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25ebd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25ebd4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25ebd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25ebd8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25ebd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25ebdc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x25EBDCu;
    {
        const bool branch_taken_0x25ebdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ebdc) {
            ctx->pc = 0x25ECB8u;
            goto label_25ecb8;
        }
    }
    ctx->pc = 0x25EBE4u;
    // 0x25ebe4: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25ebe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25ebe8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25ebec: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x25ebecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x25ebf0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25EBF0u;
    {
        const bool branch_taken_0x25ebf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ebf0) {
            ctx->pc = 0x25EC30u;
            goto label_25ec30;
        }
    }
    ctx->pc = 0x25EBF8u;
    // 0x25ebf8: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x25ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ebfc: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x25ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ec00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ec04: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x25ec04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x25ec08: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x25ec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ec0c: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x25ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ec10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ec14: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x25ec14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x25ec18: 0xc621013c  lwc1        $f1, 0x13C($s1)
    ctx->pc = 0x25ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ec1c: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x25ec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ec20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ec24: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x25ec24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x25ec28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25EC28u;
    {
        const bool branch_taken_0x25ec28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ec28) {
            ctx->pc = 0x25EC58u;
            goto label_25ec58;
        }
    }
    ctx->pc = 0x25EC30u;
label_25ec30:
    // 0x25ec30: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x25ec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec34: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x25ec34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x25ec38: 0xc6200138  lwc1        $f0, 0x138($s1)
    ctx->pc = 0x25ec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec3c: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x25ec3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x25ec40: 0xc620013c  lwc1        $f0, 0x13C($s1)
    ctx->pc = 0x25ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec44: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x25ec44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x25ec48: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25ec48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ec4c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x25ec4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x25ec50: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25ec50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ec54: 0x0  nop
    ctx->pc = 0x25ec54u;
    // NOP
label_25ec58:
    // 0x25ec58: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ec5c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x25ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x25ec60: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25ec64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ec68: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x25ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ec6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25ec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ec70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ec74: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25ec74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x25ec78: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ec7c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x25ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x25ec80: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25ec84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ec88: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x25ec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ec8c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25ec8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ec90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ec94: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25ec94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x25ec98: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ec9c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x25ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x25eca0: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25eca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25eca8: 0xc621013c  lwc1        $f1, 0x13C($s1)
    ctx->pc = 0x25eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ecac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ecb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ecb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ecb4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25ecb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_25ecb8:
    // 0x25ecb8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25ecb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ecbc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25ecbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25ecc0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25ecc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x25ecc4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25ECC4u;
    {
        const bool branch_taken_0x25ecc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ecc4) {
            ctx->pc = 0x25ED10u;
            goto label_25ed10;
        }
    }
    ctx->pc = 0x25ECCCu;
    // 0x25eccc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25ecccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ecd0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25ECD0u;
    SET_GPR_U32(ctx, 31, 0x25ECD8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25ECD8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25ECD8u) { return; }
    ctx->pc = 0x25ECD8u;
label_25ecd8:
    // 0x25ecd8: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25ecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ecdc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25ecdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25ece0: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25ece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ece4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25ece4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25ece8: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25ece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ecec: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25ececu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25ecf0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25ecf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25ecf4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25ecf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25ecf8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25ecf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ecfc: 0xc040c00  jal         func_103000
    ctx->pc = 0x25ECFCu;
    SET_GPR_U32(ctx, 31, 0x25ED04u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25ED04u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25ED04u) { return; }
    ctx->pc = 0x25ED04u;
label_25ed04:
    // 0x25ed04: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25ed04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ed08: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25ed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25ed0c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25ed0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
label_25ed10:
    // 0x25ed10: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25ed10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ed14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25ed14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25ed18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25ed18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25ed1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25ED1Cu;
    {
        const bool branch_taken_0x25ed1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ed1c) {
            ctx->pc = 0x25ED50u;
            goto label_25ed50;
        }
    }
    ctx->pc = 0x25ED24u;
    // 0x25ed24: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25ed24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ed28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25ed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25ed2c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x25ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x25ed30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25ED30u;
    {
        const bool branch_taken_0x25ed30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ed30) {
            ctx->pc = 0x25ED68u;
            goto label_25ed68;
        }
    }
    ctx->pc = 0x25ED38u;
    // 0x25ed38: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x25ed38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25ed3c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25ed3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25ed40: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25ED40u;
    SET_GPR_U32(ctx, 31, 0x25ED48u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25ED48u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25ED48u) { return; }
    ctx->pc = 0x25ED48u;
label_25ed48:
    // 0x25ed48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25ED48u;
    {
        const bool branch_taken_0x25ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ed48) {
            ctx->pc = 0x25ED68u;
            goto label_25ed68;
        }
    }
    ctx->pc = 0x25ED50u;
label_25ed50:
    // 0x25ed50: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x25ed50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25ed54: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25ed54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25ed58: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25ed58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25ed5c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25ED5Cu;
    SET_GPR_U32(ctx, 31, 0x25ED64u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25ED5Cu, 0x25ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED64u;
label_25ed64:
    // 0x25ed64: 0x0  nop
    ctx->pc = 0x25ed64u;
    // NOP
label_25ed68:
    // 0x25ed68: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25ed68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ed6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25ed6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25ed70: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25ed70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25ed74: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25ED74u;
    {
        const bool branch_taken_0x25ed74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ed74) {
            ctx->pc = 0x25EDD8u;
            goto label_25edd8;
        }
    }
    ctx->pc = 0x25ED7Cu;
    // 0x25ed7c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ed80: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25ED80u;
    SET_GPR_U32(ctx, 31, 0x25ED88u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25ED88u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25ED88u) { return; }
    ctx->pc = 0x25ED88u;
label_25ed88:
    // 0x25ed88: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25ed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ed8c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25ed8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25ed90: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ed94: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25ed94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25ed98: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ed9c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25ed9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25eda0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25eda4: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x25eda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x25eda8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25EDA8u;
    SET_GPR_U32(ctx, 31, 0x25EDB0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25EDB0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EDB0u) { return; }
    ctx->pc = 0x25EDB0u;
label_25edb0:
    // 0x25edb0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x25edb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25edb4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25edb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25edb8: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x25edb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25edbc: 0xc040c00  jal         func_103000
    ctx->pc = 0x25EDBCu;
    SET_GPR_U32(ctx, 31, 0x25EDC4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25EDC4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EDC4u) { return; }
    ctx->pc = 0x25EDC4u;
label_25edc4:
    // 0x25edc4: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x25edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x25edc8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25edc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25edcc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25EDCCu;
    SET_GPR_U32(ctx, 31, 0x25EDD4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25EDD4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EDD4u) { return; }
    ctx->pc = 0x25EDD4u;
label_25edd4:
    // 0x25edd4: 0x0  nop
    ctx->pc = 0x25edd4u;
    // NOP
label_25edd8:
    // 0x25edd8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25edd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25eddc: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25eddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25ede0: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25ede0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ede4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ede8: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x25ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x25edec: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x25edecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x25edf0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25edf4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x25edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x25edf8: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x25edf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25edfc: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x25edfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25ee00: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x25ee00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25ee04: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25EE04u;
    SET_GPR_U32(ctx, 31, 0x25EE0Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25EE04u, 0x25EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE0Cu;
label_25ee0c:
    // 0x25ee0c: 0x0  nop
    ctx->pc = 0x25ee0cu;
    // NOP
label_25ee10:
    // 0x25ee10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x25ee10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25ee14: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ee18: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25ee18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25ee1c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25ee1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25ee20: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x25ee20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25ee24: 0x1460ff44  bnez        $v1, . + 4 + (-0xBC << 2)
    ctx->pc = 0x25EE24u;
    {
        const bool branch_taken_0x25ee24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ee24) {
            ctx->pc = 0x25EB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25eb38;
        }
    }
    ctx->pc = 0x25EE2Cu;
    // 0x25ee2c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x25ee2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ee30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25ee30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ee34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25ee34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ee38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ee38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ee3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ee3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ee40: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25ee44: 0x3e00008  jr          $ra
    ctx->pc = 0x25EE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EE4Cu;
}
