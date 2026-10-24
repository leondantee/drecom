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

// Function: entry_00276730
// Address: 0x276730 - 0x276804
void entry_00276730_0x276730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276730_0x276730");
#endif

    switch (ctx->pc) {
        case 0x276738u: goto label_276738;
        case 0x27676cu: goto label_27676c;
        case 0x276778u: goto label_276778;
        default: break;
    }

    ctx->pc = 0x276730u;

    // 0x276730: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x276730u;
    SET_GPR_U32(ctx, 31, 0x276738u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x276730u, 0x276738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276738u;
label_276738:
    // 0x276738: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x276738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27673c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27673cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276740: 0x0  nop
    ctx->pc = 0x276740u;
    // NOP
    // 0x276744: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276748: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x276748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x27674c: 0xe420d2cc  swc1        $f0, -0x2D34($at)
    ctx->pc = 0x27674cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38D2CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38D2CCu, _value); } while (0); }
    // 0x276750: 0x24042c26  addiu       $a0, $zero, 0x2C26
    ctx->pc = 0x276750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11302));
    // 0x276754: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276754u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276758: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27675c: 0x2446d2c0  addiu       $a2, $v0, -0x2D40
    ctx->pc = 0x27675cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955712));
    // 0x276760: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276760u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276764: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276764u;
    SET_GPR_U32(ctx, 31, 0x27676Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276764u, 0x27676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27676Cu;
label_27676c:
    // 0x27676c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27676cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x276770: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276770u;
    SET_GPR_U32(ctx, 31, 0x276778u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276770u, 0x276778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276778u;
label_276778:
    // 0x276778: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x276778u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27677c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x27677cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x276780: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x276780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x276784: 0x12640046  beq         $s3, $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x276784u;
    {
        const bool branch_taken_0x276784 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        if (branch_taken_0x276784) {
            ctx->pc = 0x2768A0u;
            return;
        }
    }
    ctx->pc = 0x27678Cu;
    // 0x27678c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x27678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x276790: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x276790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x276794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x276794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276798: 0x0  nop
    ctx->pc = 0x276798u;
    // NOP
    // 0x27679c: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x27679cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x2767a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2767a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2767a4: 0x0  nop
    ctx->pc = 0x2767a4u;
    // NOP
    // 0x2767a8: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x2767a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x2767ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2767acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2767b0: 0x0  nop
    ctx->pc = 0x2767b0u;
    // NOP
    // 0x2767b4: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x2767b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x2767b8: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2767b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2767bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2767bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2767c0: 0x0  nop
    ctx->pc = 0x2767c0u;
    // NOP
    // 0x2767c4: 0xe6600060  swc1        $f0, 0x60($s3)
    ctx->pc = 0x2767c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x2767c8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2767c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2767cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2767ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2767d0: 0x0  nop
    ctx->pc = 0x2767d0u;
    // NOP
    // 0x2767d4: 0xe6600068  swc1        $f0, 0x68($s3)
    ctx->pc = 0x2767d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x2767d8: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x2767d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x2767dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2767dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2767e0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2767E0u;
    {
        const bool branch_taken_0x2767e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2767e0) {
            ctx->pc = 0x276834u;
            return;
        }
    }
    ctx->pc = 0x2767E8u;
    // 0x2767e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2767e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2767ec: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2767ECu;
    {
        const bool branch_taken_0x2767ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2767ec) {
            ctx->pc = 0x27681Cu;
            return;
        }
    }
    ctx->pc = 0x2767F4u;
    // 0x2767f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2767F4u;
    {
        const bool branch_taken_0x2767f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2767f4) {
            ctx->pc = 0x276804u;
            return;
        }
    }
    ctx->pc = 0x2767FCu;
    // 0x2767fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2767FCu;
    {
        const bool branch_taken_0x2767fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2767fc) {
            ctx->pc = 0x276848u;
            return;
        }
    }
    ctx->pc = 0x276804u;
}
