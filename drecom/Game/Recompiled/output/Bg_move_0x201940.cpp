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

// Function: Bg_move
// Address: 0x201940 - 0x201ad0
void Bg_move_0x201940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Bg_move_0x201940");
#endif

    switch (ctx->pc) {
        case 0x201998u: goto label_201998;
        case 0x2019c0u: goto label_2019c0;
        case 0x2019d0u: goto label_2019d0;
        case 0x2019f8u: goto label_2019f8;
        case 0x201a04u: goto label_201a04;
        case 0x201a14u: goto label_201a14;
        case 0x201a24u: goto label_201a24;
        case 0x201a68u: goto label_201a68;
        case 0x201ab0u: goto label_201ab0;
        default: break;
    }

    ctx->pc = 0x201940u;

    // 0x201940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x201940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x201944: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x201944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x201948: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x201948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20194c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x201950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x201958: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x201958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x20195c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x20195cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x201960: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201964: 0xac200ab0  sw          $zero, 0xAB0($at)
    ctx->pc = 0x201964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600AB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB0u, _value); } while (0);
    // 0x201968: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20196c: 0x8c23fde0  lw          $v1, -0x220($at)
    ctx->pc = 0x20196cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFDE0u));
    // 0x201970: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x201970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x201974: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201974u;
    {
        const bool branch_taken_0x201974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201974) {
            ctx->pc = 0x201990u;
            goto label_201990;
        }
    }
    ctx->pc = 0x20197Cu;
    // 0x20197c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201980: 0x8c23fde0  lw          $v1, -0x220($at)
    ctx->pc = 0x201980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFDE0u));
    // 0x201984: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x201984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x201988: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201988u;
    {
        const bool branch_taken_0x201988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201988) {
            ctx->pc = 0x201998u;
            goto label_201998;
        }
    }
    ctx->pc = 0x201990u;
label_201990:
    // 0x201990: 0xc08046c  jal         func_2011B0
    ctx->pc = 0x201990u;
    SET_GPR_U32(ctx, 31, 0x201998u);
    ctx->pc = 0x2011B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2011B0u, 0x201990u, 0x201998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201998u;
label_201998:
    // 0x201998: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20199c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x20199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2019a0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2019a0u;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u)); // MMIO: 0x10000800
    // 0x2019a4: 0x8e230a70  lw          $v1, 0xA70($s1)
    ctx->pc = 0x2019a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2672)));
    // 0x2019a8: 0x8e220a70  lw          $v0, 0xA70($s1)
    ctx->pc = 0x2019a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2672)));
    // 0x2019ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2019acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2019b0: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x2019b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x2019b4: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x2019b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2019b8: 0xc040c80  jal         func_103200
    ctx->pc = 0x2019B8u;
    SET_GPR_U32(ctx, 31, 0x2019C0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2019C0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2019C0u) { return; }
    ctx->pc = 0x2019C0u;
label_2019c0:
    // 0x2019c0: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x2019c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2019c4: 0xc7ad0050  lwc1        $f13, 0x50($sp)
    ctx->pc = 0x2019c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2019c8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2019C8u;
    SET_GPR_U32(ctx, 31, 0x2019D0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2019C8u, 0x2019D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019D0u;
label_2019d0:
    // 0x2019d0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2019d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2019d4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2019d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2019d8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2019d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2019dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2019dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2019e0: 0x0  nop
    ctx->pc = 0x2019e0u;
    // NOP
    // 0x2019e4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2019e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2019e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2019e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2019ec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2019ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2019f0: 0xc040c1a  jal         func_103068
    ctx->pc = 0x2019F0u;
    SET_GPR_U32(ctx, 31, 0x2019F8u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x2019F8u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2019F8u) { return; }
    ctx->pc = 0x2019F8u;
label_2019f8:
    // 0x2019f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2019f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2019fc: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2019FCu;
    SET_GPR_U32(ctx, 31, 0x201A04u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2019FCu, 0x201A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A04u;
label_201a04:
    // 0x201a04: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x201a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201a08: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x201a08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x201a0c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x201A0Cu;
    SET_GPR_U32(ctx, 31, 0x201A14u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x201A0Cu, 0x201A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A14u;
label_201a14:
    // 0x201a14: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x201a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x201a18: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x201a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201a1c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x201A1Cu;
    {
        const bool branch_taken_0x201a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a1c) {
            ctx->pc = 0x201A70u;
            goto label_201a70;
        }
    }
    ctx->pc = 0x201A24u;
label_201a24:
    // 0x201a24: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x201a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201a28: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x201a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x201a2c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x201a30: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
    // 0x201a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201a38: 0x9042485f  lbu         $v0, 0x485F($v0)
    ctx->pc = 0x201a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18527)));
    // 0x201a3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x201A3Cu;
    {
        const bool branch_taken_0x201a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a3c) {
            ctx->pc = 0x201A68u;
            goto label_201a68;
        }
    }
    ctx->pc = 0x201A44u;
    // 0x201a44: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x201a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201a48: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x201a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x201a4c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x201a50: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
    // 0x201a54: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x201a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201a58: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x201a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201a5c: 0xc7ad006c  lwc1        $f13, 0x6C($sp)
    ctx->pc = 0x201a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x201a60: 0xc0807f0  jal         func_201FC0
    ctx->pc = 0x201A60u;
    SET_GPR_U32(ctx, 31, 0x201A68u);
    ctx->pc = 0x201FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201FC0u, 0x201A60u, 0x201A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A68u;
label_201a68:
    // 0x201a68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x201a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x201a6c: 0x0  nop
    ctx->pc = 0x201a6cu;
    // NOP
label_201a70:
    // 0x201a70: 0x601ffec  bgez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x201A70u;
    {
        const bool branch_taken_0x201a70 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x201a70) {
            ctx->pc = 0x201A24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201a24;
        }
    }
    ctx->pc = 0x201A78u;
    // 0x201a78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x201a7c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x201a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x201a80: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x201a80u;
    SET_GPR_S32(ctx, 19, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u)); // MMIO: 0x10000800
    // 0x201a84: 0x2723023  subu        $a2, $s3, $s2
    ctx->pc = 0x201a84u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x201a88: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x201a8c: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x201a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x201a90: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201a94: 0x3c021c07  lui         $v0, 0x1C07
    ctx->pc = 0x201a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7175 << 16));
    // 0x201a98: 0x34420a12  ori         $v0, $v0, 0xA12
    ctx->pc = 0x201a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2578);
    // 0x201a9c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x201a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201aa0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x201aa4: 0x24450d38  addiu       $a1, $v0, 0xD38
    ctx->pc = 0x201aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3384));
    // 0x201aa8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x201AA8u;
    SET_GPR_U32(ctx, 31, 0x201AB0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201AA8u, 0x201AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201AB0u;
label_201ab0:
    // 0x201ab0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x201ab0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201ab4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201ab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201abc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201ac4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x201ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x201ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x201AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201AD0u;
}
