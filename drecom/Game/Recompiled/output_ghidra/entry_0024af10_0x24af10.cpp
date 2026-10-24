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

// Function: entry_0024af10
// Address: 0x24af10 - 0x24b188
void entry_0024af10_0x24af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024af10_0x24af10");
#endif

    switch (ctx->pc) {
        case 0x24af1cu: goto label_24af1c;
        case 0x24af34u: goto label_24af34;
        case 0x24af4cu: goto label_24af4c;
        case 0x24af94u: goto label_24af94;
        case 0x24afd0u: goto label_24afd0;
        case 0x24afecu: goto label_24afec;
        case 0x24b004u: goto label_24b004;
        case 0x24b038u: goto label_24b038;
        case 0x24b068u: goto label_24b068;
        case 0x24b074u: goto label_24b074;
        case 0x24b09cu: goto label_24b09c;
        case 0x24b140u: goto label_24b140;
        case 0x24b178u: goto label_24b178;
        default: break;
    }

    ctx->pc = 0x24af10u;

    // 0x24af10: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af14: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24AF14u;
    SET_GPR_U32(ctx, 31, 0x24AF1Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24AF1Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AF1Cu) { return; }
    ctx->pc = 0x24AF1Cu;
label_24af1c:
    // 0x24af1c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24af20: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24af20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af24: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24af24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af28: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x24af28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24af2c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x24AF2Cu;
    SET_GPR_U32(ctx, 31, 0x24AF34u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x24AF34u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AF34u) { return; }
    ctx->pc = 0x24AF34u;
label_24af34:
    // 0x24af34: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24af38: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24af38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af3c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af40: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x24af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24af44: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x24AF44u;
    SET_GPR_U32(ctx, 31, 0x24AF4Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24AF4Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AF4Cu) { return; }
    ctx->pc = 0x24AF4Cu;
label_24af4c:
    // 0x24af4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24af4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24af50: 0x0  nop
    ctx->pc = 0x24af50u;
    // NOP
    // 0x24af54: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24af54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24af58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24af58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24af5c: 0x0  nop
    ctx->pc = 0x24af5cu;
    // NOP
    // 0x24af60: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x24af60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24af64: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24af68: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x24af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24af6c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x24af6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24af70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24af70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24af74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24af74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24af78: 0x0  nop
    ctx->pc = 0x24af78u;
    // NOP
    // 0x24af7c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x24af7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24af80: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x24af80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24af84: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24af84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af88: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x24af88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24af8c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x24AF8Cu;
    SET_GPR_U32(ctx, 31, 0x24AF94u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x24AF94u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AF94u) { return; }
    ctx->pc = 0x24AF94u;
label_24af94:
    // 0x24af94: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x24af94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24af98: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x24af98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24af9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24af9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24afa0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x24afa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x24afa4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x24afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24afa8: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x24afa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24afac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24afacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24afb0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x24afb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x24afb4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x24afb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24afb8: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x24afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24afbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24afbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24afc0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x24afc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x24afc4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24afc8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24AFC8u;
    SET_GPR_U32(ctx, 31, 0x24AFD0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24AFD0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AFD0u) { return; }
    ctx->pc = 0x24AFD0u;
label_24afd0:
    // 0x24afd0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24afd4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24afd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24afd8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24afdc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24afdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24afe0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x24afe0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24afe4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24AFE4u;
    SET_GPR_U32(ctx, 31, 0x24AFECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24AFE4u, 0x24AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFECu;
label_24afec:
    // 0x24afec: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x24afecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x24aff0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24aff4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24aff8: 0xc7ac0158  lwc1        $f12, 0x158($sp)
    ctx->pc = 0x24aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24affc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x24AFFCu;
    SET_GPR_U32(ctx, 31, 0x24B004u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24B004u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B004u) { return; }
    ctx->pc = 0x24B004u;
label_24b004:
    // 0x24b004: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x24b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b008: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24b008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24b00c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24b00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b010: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x24b010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24b014: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x24b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b018: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x24b018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24b01c: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x24b01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b020: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x24b020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24b024: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b028: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b02c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24b02cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b030: 0xc040c00  jal         func_103000
    ctx->pc = 0x24B030u;
    SET_GPR_U32(ctx, 31, 0x24B038u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24B038u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B038u) { return; }
    ctx->pc = 0x24B038u;
label_24b038:
    // 0x24b038: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x24b038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b03c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x24b03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x24b040: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x24b040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b044: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x24b044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x24b048: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x24b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b04c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x24b04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x24b050: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x24b050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b054: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x24b054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x24b058: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x24b058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x24b05c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b060: 0xc040ca2  jal         func_103288
    ctx->pc = 0x24B060u;
    SET_GPR_U32(ctx, 31, 0x24B068u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x24B068u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B068u) { return; }
    ctx->pc = 0x24B068u;
label_24b068:
    // 0x24b068: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x24b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b06c: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x24B06Cu;
    SET_GPR_U32(ctx, 31, 0x24B074u);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x24B06Cu, 0x24B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B074u;
label_24b074:
    // 0x24b074: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x24b074u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24b078: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x24b078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x24b07c: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x24B07Cu;
    {
        const bool branch_taken_0x24b07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b07c) {
            ctx->pc = 0x24B188u;
            return;
        }
    }
    ctx->pc = 0x24B084u;
    // 0x24b084: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x24b084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x24b088: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24b088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b08c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x24b08cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x24b090: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b094: 0xc05cad8  jal         func_172B60
    ctx->pc = 0x24B094u;
    SET_GPR_U32(ctx, 31, 0x24B09Cu);
    ctx->pc = 0x172B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172B60u, 0x24B094u, 0x24B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B09Cu;
label_24b09c:
    // 0x24b09c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24b09cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b0a0: 0x0  nop
    ctx->pc = 0x24b0a0u;
    // NOP
    // 0x24b0a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x24b0a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b0a8: 0x0  nop
    ctx->pc = 0x24b0a8u;
    // NOP
    // 0x24b0ac: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x24B0ACu;
    {
        const bool branch_taken_0x24b0ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b0ac) {
            ctx->pc = 0x24B188u;
            return;
        }
    }
    ctx->pc = 0x24B0B4u;
    // 0x24b0b4: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x24b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b0b8: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x24b0b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x24b0bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24b0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24b0c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24b0c4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x24b0c8: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x24b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x24b0cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24b0d0: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x24b0d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b0d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b0d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b0dc: 0xa022edae  sb          $v0, -0x1252($at)
    ctx->pc = 0x24b0dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAEu, _value); } while (0);
    // 0x24b0e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b0e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b0e8: 0xa022edaf  sb          $v0, -0x1251($at)
    ctx->pc = 0x24b0e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAFu, _value); } while (0);
    // 0x24b0ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b0f0: 0xa420edb4  sh          $zero, -0x124C($at)
    ctx->pc = 0x24b0f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB4u, _value); } while (0);
    // 0x24b0f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b0f8: 0xa420edb2  sh          $zero, -0x124E($at)
    ctx->pc = 0x24b0f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB2u, _value); } while (0);
    // 0x24b0fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24b100: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b104: 0xa422edb6  sh          $v0, -0x124A($at)
    ctx->pc = 0x24b104u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB6u, _value); } while (0);
    // 0x24b108: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b10c: 0xa020edb0  sb          $zero, -0x1250($at)
    ctx->pc = 0x24b10cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDB0u, _value); } while (0);
    // 0x24b110: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x24b110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b114: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b118: 0xac22edd0  sw          $v0, -0x1230($at)
    ctx->pc = 0x24b118u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEDD0u, _value); } while (0);
    // 0x24b11c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b120: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24b120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b124: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x24b124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x24b128: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24b128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24b12c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b130: 0x0  nop
    ctx->pc = 0x24b130u;
    // NOP
    // 0x24b134: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x24b134u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24b138: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24B138u;
    SET_GPR_U32(ctx, 31, 0x24B140u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24B138u, 0x24B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B140u;
label_24b140:
    // 0x24b140: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b144: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x24b144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x24b148: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24b148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24b14c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b150: 0xa043001d  sb          $v1, 0x1D($v0)
    ctx->pc = 0x24b150u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x24b154: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x24b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b158: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x24b158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24b15c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x24b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24b160: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24b160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24b164: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x24b164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x24b168: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x24b168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x24b16c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x24b16cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x24b170: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x24B170u;
    SET_GPR_U32(ctx, 31, 0x24B178u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x24B170u, 0x24B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B178u;
label_24b178:
    // 0x24b178: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x24b178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x24b17c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x24b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x24b180: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x24B180u;
    SET_GPR_U32(ctx, 31, 0x24B188u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x24B180u, 0x24B188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B188u;
}
