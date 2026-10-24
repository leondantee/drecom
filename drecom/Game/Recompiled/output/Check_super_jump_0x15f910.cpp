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

// Function: Check_super_jump
// Address: 0x15f910 - 0x15fbe4
void Check_super_jump_0x15f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_super_jump_0x15f910");
#endif

    switch (ctx->pc) {
        case 0x15f970u: goto label_15f970;
        case 0x15f994u: goto label_15f994;
        case 0x15f9d4u: goto label_15f9d4;
        case 0x15fa78u: goto label_15fa78;
        case 0x15fa8cu: goto label_15fa8c;
        case 0x15faa4u: goto label_15faa4;
        case 0x15fb50u: goto label_15fb50;
        case 0x15fb64u: goto label_15fb64;
        case 0x15fb7cu: goto label_15fb7c;
        default: break;
    }

    ctx->pc = 0x15f910u;

    // 0x15f910: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x15f910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x15f914: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x15f914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x15f918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15f918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15f91c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15f920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15f924: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f928: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15f928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15f92c: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15f92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15f930: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15f930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15f934: 0x2451eea0  addiu       $s1, $v0, -0x1160
    ctx->pc = 0x15f934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
    // 0x15f938: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15f938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15f93c: 0x24530080  addiu       $s3, $v0, 0x80
    ctx->pc = 0x15f93cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15f940: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15f940u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EEEB4u));
    // 0x15f944: 0x304201c0  andi        $v0, $v0, 0x1C0
    ctx->pc = 0x15f944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)448);
    // 0x15f948: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F948u;
    {
        const bool branch_taken_0x15f948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f948) {
            ctx->pc = 0x15F95Cu;
            goto label_15f95c;
        }
    }
    ctx->pc = 0x15F950u;
    // 0x15f950: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f950u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f954: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x15F954u;
    {
        const bool branch_taken_0x15f954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f954) {
            ctx->pc = 0x15FBC4u;
            goto label_15fbc4;
        }
    }
    ctx->pc = 0x15F95Cu;
label_15f95c:
    // 0x15f95c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f960: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x15f960u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x15f964: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x15f964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15f968: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15F968u;
    SET_GPR_U32(ctx, 31, 0x15F970u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15F968u, 0x15F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F970u;
label_15f970:
    // 0x15f970: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x15f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f974: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x15f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f978: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15f978u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15f97c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x15f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f980: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x15f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f984: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15f984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15f988: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15f988u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15f98c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15F98Cu;
    SET_GPR_U32(ctx, 31, 0x15F994u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15F98Cu, 0x15F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F994u;
label_15f994:
    // 0x15f994: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x15f994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x15f998: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x15f998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f99c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x15f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x15f9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f9a4: 0x0  nop
    ctx->pc = 0x15f9a4u;
    // NOP
    // 0x15f9a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15f9a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f9ac: 0x0  nop
    ctx->pc = 0x15f9acu;
    // NOP
    // 0x15f9b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15F9B0u;
    {
        const bool branch_taken_0x15f9b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f9b0) {
            ctx->pc = 0x15F9C4u;
            goto label_15f9c4;
        }
    }
    ctx->pc = 0x15F9B8u;
    // 0x15f9b8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f9b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f9bc: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x15F9BCu;
    {
        const bool branch_taken_0x15f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9bc) {
            ctx->pc = 0x15FBC4u;
            goto label_15fbc4;
        }
    }
    ctx->pc = 0x15F9C4u;
label_15f9c4:
    // 0x15f9c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f9c8: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x15f9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f9cc: 0xc067844  jal         func_19E110
    ctx->pc = 0x15F9CCu;
    SET_GPR_U32(ctx, 31, 0x15F9D4u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x15F9CCu, 0x15F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F9D4u;
label_15f9d4:
    // 0x15f9d4: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x15f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15f9d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15f9d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f9dc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x15f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15f9e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15f9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15f9e4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f9ec: 0x0  nop
    ctx->pc = 0x15f9ecu;
    // NOP
    // 0x15f9f0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15f9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f9f4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f9fc: 0x0  nop
    ctx->pc = 0x15f9fcu;
    // NOP
    // 0x15fa00: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15fa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15fa04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15fa04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa08: 0x0  nop
    ctx->pc = 0x15fa08u;
    // NOP
    // 0x15fa0c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15fa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15fa10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15fa14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fa14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa18: 0x0  nop
    ctx->pc = 0x15fa18u;
    // NOP
    // 0x15fa1c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15fa1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15fa20: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15fa24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fa24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa28: 0x0  nop
    ctx->pc = 0x15fa28u;
    // NOP
    // 0x15fa2c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15fa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15fa30: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15fa34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fa34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa38: 0x0  nop
    ctx->pc = 0x15fa38u;
    // NOP
    // 0x15fa3c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15fa3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15fa40: 0x3c02441c  lui         $v0, 0x441C
    ctx->pc = 0x15fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17436 << 16));
    // 0x15fa44: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15fa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15fa48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa4c: 0x0  nop
    ctx->pc = 0x15fa4cu;
    // NOP
    // 0x15fa50: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15fa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15fa54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15fa58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fa58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa5c: 0x0  nop
    ctx->pc = 0x15fa5cu;
    // NOP
    // 0x15fa60: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x15fa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x15fa64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fa68: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15fa68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15fa6c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fa70: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FA70u;
    SET_GPR_U32(ctx, 31, 0x15FA78u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FA78u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FA78u) { return; }
    ctx->pc = 0x15FA78u;
label_15fa78:
    // 0x15fa78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fa7c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15fa80: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15fa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fa84: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FA84u;
    SET_GPR_U32(ctx, 31, 0x15FA8Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FA8Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FA8Cu) { return; }
    ctx->pc = 0x15FA8Cu;
label_15fa8c:
    // 0x15fa8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15fa90: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x15fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fa94: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15fa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fa98: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x15fa98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15fa9c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15FA9Cu;
    SET_GPR_U32(ctx, 31, 0x15FAA4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15FA9Cu, 0x15FAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FAA4u;
label_15faa4:
    // 0x15faa4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x15faa4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15faa8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FAA8u;
    {
        const bool branch_taken_0x15faa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15faa8) {
            ctx->pc = 0x15FABCu;
            goto label_15fabc;
        }
    }
    ctx->pc = 0x15FAB0u;
    // 0x15fab0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15fab0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15fab4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x15FAB4u;
    {
        const bool branch_taken_0x15fab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fab4) {
            ctx->pc = 0x15FBC4u;
            goto label_15fbc4;
        }
    }
    ctx->pc = 0x15FABCu;
label_15fabc:
    // 0x15fabc: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x15fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x15fac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fac4: 0x0  nop
    ctx->pc = 0x15fac4u;
    // NOP
    // 0x15fac8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15fac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15facc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15faccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15fad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fad4: 0x0  nop
    ctx->pc = 0x15fad4u;
    // NOP
    // 0x15fad8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15fad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15fadc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15fadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fae0: 0x0  nop
    ctx->pc = 0x15fae0u;
    // NOP
    // 0x15fae4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15fae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15fae8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15faec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15faecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15faf0: 0x0  nop
    ctx->pc = 0x15faf0u;
    // NOP
    // 0x15faf4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15faf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15faf8: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x15faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x15fafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fb00: 0x0  nop
    ctx->pc = 0x15fb00u;
    // NOP
    // 0x15fb04: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15fb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15fb08: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15fb0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fb10: 0x0  nop
    ctx->pc = 0x15fb10u;
    // NOP
    // 0x15fb14: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15fb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15fb18: 0x3c02441c  lui         $v0, 0x441C
    ctx->pc = 0x15fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17436 << 16));
    // 0x15fb1c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15fb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15fb20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fb20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fb24: 0x0  nop
    ctx->pc = 0x15fb24u;
    // NOP
    // 0x15fb28: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15fb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15fb2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15fb30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fb34: 0x0  nop
    ctx->pc = 0x15fb34u;
    // NOP
    // 0x15fb38: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x15fb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x15fb3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fb40: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15fb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15fb44: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15fb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fb48: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FB48u;
    SET_GPR_U32(ctx, 31, 0x15FB50u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FB50u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FB50u) { return; }
    ctx->pc = 0x15FB50u;
label_15fb50:
    // 0x15fb50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fb54: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15fb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15fb58: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15fb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fb5c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FB5Cu;
    SET_GPR_U32(ctx, 31, 0x15FB64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FB64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FB64u) { return; }
    ctx->pc = 0x15FB64u;
label_15fb64:
    // 0x15fb64: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15fb68: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x15fb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fb6c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15fb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fb70: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x15fb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15fb74: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15FB74u;
    SET_GPR_U32(ctx, 31, 0x15FB7Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15FB74u, 0x15FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB7Cu;
label_15fb7c:
    // 0x15fb7c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x15fb7cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15fb80: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FB80u;
    {
        const bool branch_taken_0x15fb80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb80) {
            ctx->pc = 0x15FB94u;
            goto label_15fb94;
        }
    }
    ctx->pc = 0x15FB88u;
    // 0x15fb88: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15fb88u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15fb8c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15FB8Cu;
    {
        const bool branch_taken_0x15fb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb8c) {
            ctx->pc = 0x15FBC4u;
            goto label_15fbc4;
        }
    }
    ctx->pc = 0x15FB94u;
label_15fb94:
    // 0x15fb94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fb98: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15fb98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15fb9c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15fba0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15fba0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15fba4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15fba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15fba8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15fba8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15fbac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15fbb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15fbb4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x15fbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15fbb8: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fbbc: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15fbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15fbc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15fbc4:
    // 0x15fbc4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x15fbc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15fbc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15fbc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15fbcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15fbccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15fbd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fbd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fbd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fbd8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x15fbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15fbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x15FBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FBE4u;
}
