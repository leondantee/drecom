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

// Function: Shotgun_wall_hit_effect
// Address: 0x152ca0 - 0x152e20
void Shotgun_wall_hit_effect_0x152ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shotgun_wall_hit_effect_0x152ca0");
#endif

    switch (ctx->pc) {
        case 0x152cd0u: goto label_152cd0;
        case 0x152d18u: goto label_152d18;
        case 0x152d20u: goto label_152d20;
        case 0x152d48u: goto label_152d48;
        case 0x152d50u: goto label_152d50;
        case 0x152d7cu: goto label_152d7c;
        case 0x152d90u: goto label_152d90;
        case 0x152da4u: goto label_152da4;
        case 0x152dbcu: goto label_152dbc;
        case 0x152de0u: goto label_152de0;
        case 0x152decu: goto label_152dec;
        default: break;
    }

    ctx->pc = 0x152ca0u;

    // 0x152ca0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x152ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x152ca4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x152ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x152ca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152cb4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x152cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x152cb8: 0x2452a4a0  addiu       $s2, $v0, -0x5B60
    ctx->pc = 0x152cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x152cbc: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x152cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152cc0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x152cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x152cc4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x152cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x152cc8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x152CC8u;
    SET_GPR_U32(ctx, 31, 0x152CD0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x152CD0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x152CD0u) { return; }
    ctx->pc = 0x152CD0u;
label_152cd0:
    // 0x152cd0: 0x3c0347c3  lui         $v1, 0x47C3
    ctx->pc = 0x152cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18371 << 16));
    // 0x152cd4: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x152cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x152cd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152cd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152cdc: 0x0  nop
    ctx->pc = 0x152cdcu;
    // NOP
    // 0x152ce0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x152ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x152ce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152ce8: 0x0  nop
    ctx->pc = 0x152ce8u;
    // NOP
    // 0x152cec: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x152cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x152cf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152cf4: 0x0  nop
    ctx->pc = 0x152cf4u;
    // NOP
    // 0x152cf8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x152cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x152cfc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x152cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x152d00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152d04: 0x0  nop
    ctx->pc = 0x152d04u;
    // NOP
    // 0x152d08: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x152d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x152d0c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x152d0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152d10: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x152D10u;
    {
        const bool branch_taken_0x152d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152d10) {
            ctx->pc = 0x152DF8u;
            goto label_152df8;
        }
    }
    ctx->pc = 0x152D18u;
label_152d18:
    // 0x152d18: 0xc06765c  jal         func_19D970
    ctx->pc = 0x152D18u;
    SET_GPR_U32(ctx, 31, 0x152D20u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x152D18u, 0x152D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D20u;
label_152d20:
    // 0x152d20: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x152d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x152d24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x152d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x152d28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x152d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152d2c: 0x0  nop
    ctx->pc = 0x152d2cu;
    // NOP
    // 0x152d30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x152d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x152d34: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x152d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x152d38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x152d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x152d3c: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x152d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152d40: 0xc067874  jal         func_19E1D0
    ctx->pc = 0x152D40u;
    SET_GPR_U32(ctx, 31, 0x152D48u);
    ctx->pc = 0x19E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1D0u, 0x152D40u, 0x152D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D48u;
label_152d48:
    // 0x152d48: 0xc06765c  jal         func_19D970
    ctx->pc = 0x152D48u;
    SET_GPR_U32(ctx, 31, 0x152D50u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x152D48u, 0x152D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D50u;
label_152d50:
    // 0x152d50: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x152d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x152d54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x152d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x152d58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x152d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152d5c: 0x0  nop
    ctx->pc = 0x152d5cu;
    // NOP
    // 0x152d60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x152d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x152d64: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x152d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x152d68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x152d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x152d6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x152d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x152d70: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x152d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152d74: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x152D74u;
    SET_GPR_U32(ctx, 31, 0x152D7Cu);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x152D74u, 0x152D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D7Cu;
label_152d7c:
    // 0x152d7c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x152d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x152d80: 0x8e450130  lw          $a1, 0x130($s2)
    ctx->pc = 0x152d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x152d84: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x152d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x152d88: 0xc040c00  jal         func_103000
    ctx->pc = 0x152D88u;
    SET_GPR_U32(ctx, 31, 0x152D90u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x152D90u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x152D90u) { return; }
    ctx->pc = 0x152D90u;
label_152d90:
    // 0x152d90: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x152d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x152d94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x152d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x152d98: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x152d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x152d9c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x152D9Cu;
    SET_GPR_U32(ctx, 31, 0x152DA4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x152DA4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x152DA4u) { return; }
    ctx->pc = 0x152DA4u;
label_152da4:
    // 0x152da4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x152da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x152da8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x152da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x152dac: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x152dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x152db0: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x152db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x152db4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x152DB4u;
    SET_GPR_U32(ctx, 31, 0x152DBCu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x152DB4u, 0x152DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DBCu;
label_152dbc:
    // 0x152dbc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x152dbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152dc0: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x152DC0u;
    {
        const bool branch_taken_0x152dc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x152dc0) {
            ctx->pc = 0x152DF0u;
            goto label_152df0;
        }
    }
    ctx->pc = 0x152DC8u;
    // 0x152dc8: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x152dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x152dcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152dccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152dd0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x152dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x152dd4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x152dd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152dd8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152DD8u;
    SET_GPR_U32(ctx, 31, 0x152DE0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152DD8u, 0x152DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DE0u;
label_152de0:
    // 0x152de0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152de4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152DE4u;
    SET_GPR_U32(ctx, 31, 0x152DECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152DE4u, 0x152DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DECu;
label_152dec:
    // 0x152dec: 0x0  nop
    ctx->pc = 0x152decu;
    // NOP
label_152df0:
    // 0x152df0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x152df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x152df4: 0x0  nop
    ctx->pc = 0x152df4u;
    // NOP
label_152df8:
    // 0x152df8: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x152df8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x152dfc: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x152DFCu;
    {
        const bool branch_taken_0x152dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x152dfc) {
            ctx->pc = 0x152D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152d18;
        }
    }
    ctx->pc = 0x152E04u;
    // 0x152e04: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x152e04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152e08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152e14: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x152e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x152e18: 0x3e00008  jr          $ra
    ctx->pc = 0x152E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152E20u;
}
