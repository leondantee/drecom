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

// Function: Stop_calc_make_matrix
// Address: 0x25ee50 - 0x25f1a4
void Stop_calc_make_matrix_0x25ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Stop_calc_make_matrix_0x25ee50");
#endif

    switch (ctx->pc) {
        case 0x25ee80u: goto label_25ee80;
        case 0x25eea0u: goto label_25eea0;
        case 0x25eec0u: goto label_25eec0;
        case 0x25eee0u: goto label_25eee0;
        case 0x25ef00u: goto label_25ef00;
        case 0x25ef40u: goto label_25ef40;
        case 0x25ef60u: goto label_25ef60;
        case 0x25efa0u: goto label_25efa0;
        case 0x25efe8u: goto label_25efe8;
        case 0x25f0a4u: goto label_25f0a4;
        case 0x25f0c0u: goto label_25f0c0;
        case 0x25f0e0u: goto label_25f0e0;
        case 0x25f108u: goto label_25f108;
        case 0x25f11cu: goto label_25f11c;
        case 0x25f12cu: goto label_25f12c;
        case 0x25f164u: goto label_25f164;
        default: break;
    }

    ctx->pc = 0x25ee50u;

    // 0x25ee50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25ee54: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x25ee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x25ee58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25ee5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25ee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25ee60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25ee64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ee64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ee68: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x25ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x25ee6c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x25ee6cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25ee70: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ee74: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x25ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25ee78: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25EE78u;
    SET_GPR_U32(ctx, 31, 0x25EE80u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25EE80u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EE80u) { return; }
    ctx->pc = 0x25EE80u;
label_25ee80:
    // 0x25ee80: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ee84: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ee88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ee8c: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25ee90: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25ee94: 0xc44c00d0  lwc1        $f12, 0xD0($v0)
    ctx->pc = 0x25ee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25ee98: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x25EE98u;
    SET_GPR_U32(ctx, 31, 0x25EEA0u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x25EE98u, 0x25EEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EEA0u;
label_25eea0:
    // 0x25eea0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25eea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eea4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eea8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eeac: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25eeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25eeb0: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25eeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25eeb4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x25eeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25eeb8: 0xc067808  jal         func_19E020
    ctx->pc = 0x25EEB8u;
    SET_GPR_U32(ctx, 31, 0x25EEC0u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25EEB8u, 0x25EEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EEC0u;
label_25eec0:
    // 0x25eec0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eec4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eec8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eecc: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25eed0: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25eed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25eed4: 0xc44c00d8  lwc1        $f12, 0xD8($v0)
    ctx->pc = 0x25eed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25eed8: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25EED8u;
    SET_GPR_U32(ctx, 31, 0x25EEE0u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25EED8u, 0x25EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EEE0u;
label_25eee0:
    // 0x25eee0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eee4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25eee8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x25eee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x25eeec: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25EEECu;
    {
        const bool branch_taken_0x25eeec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25eeec) {
            ctx->pc = 0x25EF40u;
            goto label_25ef40;
        }
    }
    ctx->pc = 0x25EEF4u;
    // 0x25eef4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25eef8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25EEF8u;
    SET_GPR_U32(ctx, 31, 0x25EF00u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25EF00u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EF00u) { return; }
    ctx->pc = 0x25EF00u;
label_25ef00:
    // 0x25ef00: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef04: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x25ef04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef08: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25ef08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25ef0c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef10: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x25ef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef14: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25ef14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25ef18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef1c: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x25ef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef20: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25ef20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25ef24: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef28: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef2c: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x25ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25ef30: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x25ef30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25ef34: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25ef34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ef38: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25EF38u;
    SET_GPR_U32(ctx, 31, 0x25EF40u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25EF38u, 0x25EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF40u;
label_25ef40:
    // 0x25ef40: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef44: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25ef48: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x25ef48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x25ef4c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25EF4Cu;
    {
        const bool branch_taken_0x25ef4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef4c) {
            ctx->pc = 0x25EFA0u;
            goto label_25efa0;
        }
    }
    ctx->pc = 0x25EF54u;
    // 0x25ef54: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ef58: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25EF58u;
    SET_GPR_U32(ctx, 31, 0x25EF60u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25EF60u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EF60u) { return; }
    ctx->pc = 0x25EF60u;
label_25ef60:
    // 0x25ef60: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef64: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x25ef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef68: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25ef68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25ef6c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef70: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x25ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef74: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25ef74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25ef78: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef7c: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x25ef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ef80: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25ef80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25ef84: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ef8c: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x25ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25ef90: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ef94: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25ef94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25ef98: 0xc067618  jal         func_19D860
    ctx->pc = 0x25EF98u;
    SET_GPR_U32(ctx, 31, 0x25EFA0u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x25EF98u, 0x25EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFA0u;
label_25efa0:
    // 0x25efa0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efa4: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x25efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x25efa8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25efa8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25efac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25efacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efb0: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x25efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x25efb4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25efb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x25efb8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efbc: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x25efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25efc0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25EFC0u;
    {
        const bool branch_taken_0x25efc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25efc0) {
            ctx->pc = 0x25EFE8u;
            goto label_25efe8;
        }
    }
    ctx->pc = 0x25EFC8u;
    // 0x25efc8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efcc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efd0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efd4: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25efd8: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x25efd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25efdc: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25efe0: 0xc040c00  jal         func_103000
    ctx->pc = 0x25EFE0u;
    SET_GPR_U32(ctx, 31, 0x25EFE8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25EFE8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EFE8u) { return; }
    ctx->pc = 0x25EFE8u;
label_25efe8:
    // 0x25efe8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x25efe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efec: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25efecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25eff0: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x25eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25eff4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25eff8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25effc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25effcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f000: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25f004: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25f004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f008: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x25f008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25f00c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25f00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25f010: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25f014: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25F014u;
    {
        const bool branch_taken_0x25f014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25f014) {
            ctx->pc = 0x25F048u;
            goto label_25f048;
        }
    }
    ctx->pc = 0x25F01Cu;
    // 0x25f01c: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x25f01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25f020: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25f020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25f024: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f028: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f02c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f030: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25f030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f034: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25f034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f038: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f03c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x25f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x25f040: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x25f040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f044: 0x0  nop
    ctx->pc = 0x25f044u;
    // NOP
label_25f048:
    // 0x25f048: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25f048u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f04c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f050: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25f050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25f054: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x25F054u;
    {
        const bool branch_taken_0x25f054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f054) {
            ctx->pc = 0x25F168u;
            goto label_25f168;
        }
    }
    ctx->pc = 0x25F05Cu;
    // 0x25f05c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f060: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x25f060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x25f064: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25f068: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x25f068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f06c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f06cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f070: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f074: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25f074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25f078: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25F078u;
    {
        const bool branch_taken_0x25f078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f078) {
            ctx->pc = 0x25F0ACu;
            goto label_25f0ac;
        }
    }
    ctx->pc = 0x25F080u;
    // 0x25f080: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f084: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f088: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x25f088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x25f08c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25F08Cu;
    {
        const bool branch_taken_0x25f08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f08c) {
            ctx->pc = 0x25F0C0u;
            goto label_25f0c0;
        }
    }
    ctx->pc = 0x25F094u;
    // 0x25f094: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25f094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f098: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25f098u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f09c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25F09Cu;
    SET_GPR_U32(ctx, 31, 0x25F0A4u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25F0A4u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F0A4u) { return; }
    ctx->pc = 0x25F0A4u;
label_25f0a4:
    // 0x25f0a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25F0A4u;
    {
        const bool branch_taken_0x25f0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f0a4) {
            ctx->pc = 0x25F0C0u;
            goto label_25f0c0;
        }
    }
    ctx->pc = 0x25F0ACu;
label_25f0ac:
    // 0x25f0ac: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25f0acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f0b0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25f0b4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25f0b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f0b8: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F0B8u;
    SET_GPR_U32(ctx, 31, 0x25F0C0u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F0B8u, 0x25F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0C0u;
label_25f0c0:
    // 0x25f0c0: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f0c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f0c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f0c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25f0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25f0cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25F0CCu;
    {
        const bool branch_taken_0x25f0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f0cc) {
            ctx->pc = 0x25F130u;
            goto label_25f130;
        }
    }
    ctx->pc = 0x25F0D4u;
    // 0x25f0d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f0d8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F0D8u;
    SET_GPR_U32(ctx, 31, 0x25F0E0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F0E0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F0E0u) { return; }
    ctx->pc = 0x25F0E0u;
label_25f0e0:
    // 0x25f0e0: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25f0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f0e4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25f0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25f0e8: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25f0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f0ec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25f0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25f0f0: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f0f4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25f0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25f0f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25f0fc: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x25f0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25f100: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F100u;
    SET_GPR_U32(ctx, 31, 0x25F108u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F108u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F108u) { return; }
    ctx->pc = 0x25F108u;
label_25f108:
    // 0x25f108: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25f108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f10c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25f10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f110: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x25f110u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f114: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F114u;
    SET_GPR_U32(ctx, 31, 0x25F11Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F114u, 0x25F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F11Cu;
label_25f11c:
    // 0x25f11c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x25f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25f120: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25f120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25f124: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F124u;
    SET_GPR_U32(ctx, 31, 0x25F12Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F12Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F12Cu) { return; }
    ctx->pc = 0x25F12Cu;
label_25f12c:
    // 0x25f12c: 0x0  nop
    ctx->pc = 0x25f12cu;
    // NOP
label_25f130:
    // 0x25f130: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f134: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f138: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f138u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25f13c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f140: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x25f140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x25f144: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x25f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x25f148: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25f148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f14c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x25f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x25f150: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x25f150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25f154: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25f154u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f158: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x25f158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25f15c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F15Cu;
    SET_GPR_U32(ctx, 31, 0x25F164u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F15Cu, 0x25F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F164u;
label_25f164:
    // 0x25f164: 0x0  nop
    ctx->pc = 0x25f164u;
    // NOP
label_25f168:
    // 0x25f168: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25f168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25f16c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f170: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25f170u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25f174: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f178: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25f178u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25f17c: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
    ctx->pc = 0x25F17Cu;
    {
        const bool branch_taken_0x25f17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f17c) {
            ctx->pc = 0x25EFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25efe8;
        }
    }
    ctx->pc = 0x25F184u;
    // 0x25f184: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x25f184u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f188: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25f188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f18c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f198: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25f198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25f19c: 0x3e00008  jr          $ra
    ctx->pc = 0x25F19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F1A4u;
}
