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

// Function: Check_handrail_LR
// Address: 0x15eeb0 - 0x15f100
void Check_handrail_LR_0x15eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_handrail_LR_0x15eeb0");
#endif

    switch (ctx->pc) {
        case 0x15eed4u: goto label_15eed4;
        case 0x15eee8u: goto label_15eee8;
        case 0x15ef50u: goto label_15ef50;
        case 0x15ef70u: goto label_15ef70;
        case 0x15ef88u: goto label_15ef88;
        case 0x15eff0u: goto label_15eff0;
        case 0x15f010u: goto label_15f010;
        case 0x15f028u: goto label_15f028;
        case 0x15f094u: goto label_15f094;
        case 0x15f0b4u: goto label_15f0b4;
        case 0x15f0ccu: goto label_15f0cc;
        default: break;
    }

    ctx->pc = 0x15eeb0u;

    // 0x15eeb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15eeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15eeb4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x15eeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x15eeb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15eebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15eebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15eec0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15eec4: 0x2451dbc0  addiu       $s1, $v0, -0x2440
    ctx->pc = 0x15eec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15eec8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15eecc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x15EECCu;
    SET_GPR_U32(ctx, 31, 0x15EED4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x15EED4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15EED4u) { return; }
    ctx->pc = 0x15EED4u;
label_15eed4:
    // 0x15eed4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15eed8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15eedc: 0x262600d0  addiu       $a2, $s1, 0xD0
    ctx->pc = 0x15eedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x15eee0: 0xc040d62  jal         func_103588
    ctx->pc = 0x15EEE0u;
    SET_GPR_U32(ctx, 31, 0x15EEE8u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x15EEE8u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15EEE8u) { return; }
    ctx->pc = 0x15EEE8u;
label_15eee8:
    // 0x15eee8: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x15eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x15eeec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15eeecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15eef0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x15eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15eef4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15eef4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15eef8: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x15eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x15eefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15eefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ef00: 0x0  nop
    ctx->pc = 0x15ef00u;
    // NOP
    // 0x15ef04: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15ef04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15ef08: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x15ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
    // 0x15ef0c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15ef0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15ef10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ef10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ef14: 0x0  nop
    ctx->pc = 0x15ef14u;
    // NOP
    // 0x15ef18: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x15ef18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x15ef1c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15ef20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ef20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ef24: 0x0  nop
    ctx->pc = 0x15ef24u;
    // NOP
    // 0x15ef28: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x15ef28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15ef2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15ef30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ef30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ef34: 0x0  nop
    ctx->pc = 0x15ef34u;
    // NOP
    // 0x15ef38: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15ef38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15ef3c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15ef40: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ef44: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15ef44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15ef48: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15EF48u;
    SET_GPR_U32(ctx, 31, 0x15EF50u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15EF50u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15EF50u) { return; }
    ctx->pc = 0x15EF50u;
label_15ef50:
    // 0x15ef50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ef50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ef54: 0x0  nop
    ctx->pc = 0x15ef54u;
    // NOP
    // 0x15ef58: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x15ef58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15ef5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15ef60: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15ef60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ef64: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15ef64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15ef68: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15EF68u;
    SET_GPR_U32(ctx, 31, 0x15EF70u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15EF70u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15EF70u) { return; }
    ctx->pc = 0x15EF70u;
label_15ef70:
    // 0x15ef70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15ef74: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15ef78: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15ef78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15ef7c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x15ef7cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15ef80: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15EF80u;
    SET_GPR_U32(ctx, 31, 0x15EF88u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15EF80u, 0x15EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF88u;
label_15ef88:
    // 0x15ef88: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x15ef88u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15ef8c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EF8Cu;
    {
        const bool branch_taken_0x15ef8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef8c) {
            ctx->pc = 0x15EFA0u;
            goto label_15efa0;
        }
    }
    ctx->pc = 0x15EF94u;
    // 0x15ef94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ef98: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x15EF98u;
    {
        const bool branch_taken_0x15ef98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef98) {
            ctx->pc = 0x15F0E8u;
            goto label_15f0e8;
        }
    }
    ctx->pc = 0x15EFA0u;
label_15efa0:
    // 0x15efa0: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x15efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x15efa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15efa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15efa8: 0x0  nop
    ctx->pc = 0x15efa8u;
    // NOP
    // 0x15efac: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15efacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15efb0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15efb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15efb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15efb8: 0x0  nop
    ctx->pc = 0x15efb8u;
    // NOP
    // 0x15efbc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x15efbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x15efc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15efc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15efc4: 0x0  nop
    ctx->pc = 0x15efc4u;
    // NOP
    // 0x15efc8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x15efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15efcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15efccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15efd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15efd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15efd4: 0x0  nop
    ctx->pc = 0x15efd4u;
    // NOP
    // 0x15efd8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15efd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15efdc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15efe0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15efe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15efe4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15efe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15efe8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15EFE8u;
    SET_GPR_U32(ctx, 31, 0x15EFF0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15EFF0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15EFF0u) { return; }
    ctx->pc = 0x15EFF0u;
label_15eff0:
    // 0x15eff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15eff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eff4: 0x0  nop
    ctx->pc = 0x15eff4u;
    // NOP
    // 0x15eff8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15eff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15effc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15effcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f000: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f004: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15f004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f008: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F008u;
    SET_GPR_U32(ctx, 31, 0x15F010u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F010u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F010u) { return; }
    ctx->pc = 0x15F010u;
label_15f010:
    // 0x15f010: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15f010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15f014: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15f014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f018: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15f018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f01c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x15f01cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f020: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15F020u;
    SET_GPR_U32(ctx, 31, 0x15F028u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15F020u, 0x15F028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F028u;
label_15f028:
    // 0x15f028: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x15f028u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15f02c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F02Cu;
    {
        const bool branch_taken_0x15f02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f02c) {
            ctx->pc = 0x15F040u;
            goto label_15f040;
        }
    }
    ctx->pc = 0x15F034u;
    // 0x15f034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f038: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x15F038u;
    {
        const bool branch_taken_0x15f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f038) {
            ctx->pc = 0x15F0E8u;
            goto label_15f0e8;
        }
    }
    ctx->pc = 0x15F040u;
label_15f040:
    // 0x15f040: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x15f040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x15f044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f048: 0x0  nop
    ctx->pc = 0x15f048u;
    // NOP
    // 0x15f04c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15f04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15f050: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f058: 0x0  nop
    ctx->pc = 0x15f058u;
    // NOP
    // 0x15f05c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x15f05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x15f060: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15f064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f068: 0x0  nop
    ctx->pc = 0x15f068u;
    // NOP
    // 0x15f06c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x15f06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15f070: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f078: 0x0  nop
    ctx->pc = 0x15f078u;
    // NOP
    // 0x15f07c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15f07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15f080: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15f080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f084: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f088: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15f088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f08c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F08Cu;
    SET_GPR_U32(ctx, 31, 0x15F094u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F094u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F094u) { return; }
    ctx->pc = 0x15F094u;
label_15f094:
    // 0x15f094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f098: 0x0  nop
    ctx->pc = 0x15f098u;
    // NOP
    // 0x15f09c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15f09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15f0a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f0a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15f0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f0a8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15f0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f0ac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F0ACu;
    SET_GPR_U32(ctx, 31, 0x15F0B4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F0B4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F0B4u) { return; }
    ctx->pc = 0x15F0B4u;
label_15f0b4:
    // 0x15f0b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15f0b8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f0bc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15f0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f0c0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x15f0c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f0c4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15F0C4u;
    SET_GPR_U32(ctx, 31, 0x15F0CCu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15F0C4u, 0x15F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F0CCu;
label_15f0cc:
    // 0x15f0cc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x15f0ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15f0d0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F0D0u;
    {
        const bool branch_taken_0x15f0d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f0d0) {
            ctx->pc = 0x15F0E4u;
            goto label_15f0e4;
        }
    }
    ctx->pc = 0x15F0D8u;
    // 0x15f0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f0dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F0DCu;
    {
        const bool branch_taken_0x15f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f0dc) {
            ctx->pc = 0x15F0E8u;
            goto label_15f0e8;
        }
    }
    ctx->pc = 0x15F0E4u;
label_15f0e4:
    // 0x15f0e4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f0e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_15f0e8:
    // 0x15f0e8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x15f0e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f0ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f0ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f0f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f0f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x15f0f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15f0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x15F0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F100u;
}
