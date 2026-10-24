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

// Function: Check_jump
// Address: 0x15f360 - 0x15f904
void Check_jump_0x15f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_jump_0x15f360");
#endif

    switch (ctx->pc) {
        case 0x15f3d8u: goto label_15f3d8;
        case 0x15f3fcu: goto label_15f3fc;
        case 0x15f458u: goto label_15f458;
        case 0x15f468u: goto label_15f468;
        case 0x15f49cu: goto label_15f49c;
        case 0x15f4c0u: goto label_15f4c0;
        case 0x15f584u: goto label_15f584;
        case 0x15f598u: goto label_15f598;
        case 0x15f5b0u: goto label_15f5b0;
        case 0x15f65cu: goto label_15f65c;
        case 0x15f670u: goto label_15f670;
        case 0x15f688u: goto label_15f688;
        case 0x15f6b0u: goto label_15f6b0;
        case 0x15f710u: goto label_15f710;
        case 0x15f720u: goto label_15f720;
        default: break;
    }

    ctx->pc = 0x15f360u;

    // 0x15f360: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x15f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x15f364: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x15f364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x15f368: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15f368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15f36c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15f370: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15f374: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f378: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x15f378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x15f37c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15f380: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15f380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15f384: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15f384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15f388: 0x2451eea0  addiu       $s1, $v0, -0x1160
    ctx->pc = 0x15f388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
    // 0x15f38c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15f390: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x15f390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15f394: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x15f394u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0110u));
    // 0x15f398: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15f39c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F39Cu;
    {
        const bool branch_taken_0x15f39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f39c) {
            ctx->pc = 0x15F3B0u;
            goto label_15f3b0;
        }
    }
    ctx->pc = 0x15F3A4u;
    // 0x15f3a4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f3a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f3a8: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x15F3A8u;
    {
        const bool branch_taken_0x15f3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f3a8) {
            ctx->pc = 0x15F8E4u;
            goto label_15f8e4;
        }
    }
    ctx->pc = 0x15F3B0u;
label_15f3b0:
    // 0x15f3b0: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x15f3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f3b4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x15f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x15f3b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f3bc: 0x0  nop
    ctx->pc = 0x15f3bcu;
    // NOP
    // 0x15f3c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15f3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f3c4: 0x0  nop
    ctx->pc = 0x15f3c4u;
    // NOP
    // 0x15f3c8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x15F3C8u;
    {
        const bool branch_taken_0x15f3c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f3c8) {
            ctx->pc = 0x15F3ECu;
            goto label_15f3ec;
        }
    }
    ctx->pc = 0x15F3D0u;
    // 0x15f3d0: 0xc057c40  jal         func_15F100
    ctx->pc = 0x15F3D0u;
    SET_GPR_U32(ctx, 31, 0x15F3D8u);
    ctx->pc = 0x15F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F100u, 0x15F3D0u, 0x15F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F3D8u;
label_15f3d8:
    // 0x15f3d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F3D8u;
    {
        const bool branch_taken_0x15f3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f3d8) {
            ctx->pc = 0x15F3ECu;
            goto label_15f3ec;
        }
    }
    ctx->pc = 0x15F3E0u;
    // 0x15f3e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f3e4: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x15F3E4u;
    {
        const bool branch_taken_0x15f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f3e4) {
            ctx->pc = 0x15F8E4u;
            goto label_15f8e4;
        }
    }
    ctx->pc = 0x15F3ECu;
label_15f3ec:
    // 0x15f3ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f3f0: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x15f3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f3f4: 0xc067844  jal         func_19E110
    ctx->pc = 0x15F3F4u;
    SET_GPR_U32(ctx, 31, 0x15F3FCu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x15F3F4u, 0x15F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F3FCu;
label_15f3fc:
    // 0x15f3fc: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x15f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15f400: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15f400u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f404: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x15f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15f408: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15f408u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15f40c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f410: 0x0  nop
    ctx->pc = 0x15f410u;
    // NOP
    // 0x15f414: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15f414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f418: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f41c: 0x0  nop
    ctx->pc = 0x15f41cu;
    // NOP
    // 0x15f420: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15f420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15f424: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15f428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f42c: 0x0  nop
    ctx->pc = 0x15f42cu;
    // NOP
    // 0x15f430: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15f430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15f434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f43c: 0x0  nop
    ctx->pc = 0x15f43cu;
    // NOP
    // 0x15f440: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15f440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15f444: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f448: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f44c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15f44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f450: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F450u;
    SET_GPR_U32(ctx, 31, 0x15F458u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F458u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F458u) { return; }
    ctx->pc = 0x15F458u;
label_15f458:
    // 0x15f458: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f45c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x15f45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15f460: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x15F460u;
    SET_GPR_U32(ctx, 31, 0x15F468u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x15F460u, 0x15F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F468u;
label_15f468:
    // 0x15f468: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x15f468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x15f46c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f470: 0x304201c0  andi        $v0, $v0, 0x1C0
    ctx->pc = 0x15f470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)448);
    // 0x15f474: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F474u;
    {
        const bool branch_taken_0x15f474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f474) {
            ctx->pc = 0x15F488u;
            goto label_15f488;
        }
    }
    ctx->pc = 0x15F47Cu;
    // 0x15f47c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f47cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f480: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x15F480u;
    {
        const bool branch_taken_0x15f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f480) {
            ctx->pc = 0x15F8E4u;
            goto label_15f8e4;
        }
    }
    ctx->pc = 0x15F488u;
label_15f488:
    // 0x15f488: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f48c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x15f48cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x15f490: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x15f490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15f494: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15F494u;
    SET_GPR_U32(ctx, 31, 0x15F49Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15F494u, 0x15F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F49Cu;
label_15f49c:
    // 0x15f49c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x15f49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f4a0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x15f4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f4a4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15f4a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15f4a8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x15f4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f4ac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x15f4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f4b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15f4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15f4b4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15f4b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15f4b8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15F4B8u;
    SET_GPR_U32(ctx, 31, 0x15F4C0u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15F4B8u, 0x15F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F4C0u;
label_15f4c0:
    // 0x15f4c0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x15f4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x15f4c4: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x15f4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f4c8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x15f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x15f4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f4d0: 0x0  nop
    ctx->pc = 0x15f4d0u;
    // NOP
    // 0x15f4d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15f4d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f4d8: 0x0  nop
    ctx->pc = 0x15f4d8u;
    // NOP
    // 0x15f4dc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15F4DCu;
    {
        const bool branch_taken_0x15f4dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f4dc) {
            ctx->pc = 0x15F4F0u;
            goto label_15f4f0;
        }
    }
    ctx->pc = 0x15F4E4u;
    // 0x15f4e4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f4e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f4e8: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x15F4E8u;
    {
        const bool branch_taken_0x15f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4e8) {
            ctx->pc = 0x15F8E4u;
            goto label_15f8e4;
        }
    }
    ctx->pc = 0x15F4F0u;
label_15f4f0:
    // 0x15f4f0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f4f8: 0x0  nop
    ctx->pc = 0x15f4f8u;
    // NOP
    // 0x15f4fc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15f4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f500: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f508: 0x0  nop
    ctx->pc = 0x15f508u;
    // NOP
    // 0x15f50c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15f50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15f510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f514: 0x0  nop
    ctx->pc = 0x15f514u;
    // NOP
    // 0x15f518: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15f518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15f51c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f524: 0x0  nop
    ctx->pc = 0x15f524u;
    // NOP
    // 0x15f528: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15f528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15f52c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f534: 0x0  nop
    ctx->pc = 0x15f534u;
    // NOP
    // 0x15f538: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15f538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15f53c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f544: 0x0  nop
    ctx->pc = 0x15f544u;
    // NOP
    // 0x15f548: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15f548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15f54c: 0x3c02441c  lui         $v0, 0x441C
    ctx->pc = 0x15f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17436 << 16));
    // 0x15f550: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15f550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15f554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f558: 0x0  nop
    ctx->pc = 0x15f558u;
    // NOP
    // 0x15f55c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15f560: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f568: 0x0  nop
    ctx->pc = 0x15f568u;
    // NOP
    // 0x15f56c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x15f56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x15f570: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f574: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f578: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15f578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f57c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F57Cu;
    SET_GPR_U32(ctx, 31, 0x15F584u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F584u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F584u) { return; }
    ctx->pc = 0x15F584u;
label_15f584:
    // 0x15f584: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15f584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f588: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f58c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15f58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f590: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F590u;
    SET_GPR_U32(ctx, 31, 0x15F598u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F598u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F598u) { return; }
    ctx->pc = 0x15F598u;
label_15f598:
    // 0x15f598: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15f598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f59c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x15f59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f5a0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15f5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f5a4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x15f5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15f5a8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15F5A8u;
    SET_GPR_U32(ctx, 31, 0x15F5B0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15F5A8u, 0x15F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F5B0u;
label_15f5b0:
    // 0x15f5b0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x15f5b0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15f5b4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F5B4u;
    {
        const bool branch_taken_0x15f5b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f5b4) {
            ctx->pc = 0x15F5C8u;
            goto label_15f5c8;
        }
    }
    ctx->pc = 0x15F5BCu;
    // 0x15f5bc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f5bcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f5c0: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x15F5C0u;
    {
        const bool branch_taken_0x15f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f5c0) {
            ctx->pc = 0x15F8E4u;
            goto label_15f8e4;
        }
    }
    ctx->pc = 0x15F5C8u;
label_15f5c8:
    // 0x15f5c8: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x15f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x15f5cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f5d0: 0x0  nop
    ctx->pc = 0x15f5d0u;
    // NOP
    // 0x15f5d4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15f5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f5d8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f5e0: 0x0  nop
    ctx->pc = 0x15f5e0u;
    // NOP
    // 0x15f5e4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15f5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15f5e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f5e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f5ec: 0x0  nop
    ctx->pc = 0x15f5ecu;
    // NOP
    // 0x15f5f0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15f5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15f5f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f5f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f5fc: 0x0  nop
    ctx->pc = 0x15f5fcu;
    // NOP
    // 0x15f600: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15f600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15f604: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x15f604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x15f608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f60c: 0x0  nop
    ctx->pc = 0x15f60cu;
    // NOP
    // 0x15f610: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15f610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15f614: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f61c: 0x0  nop
    ctx->pc = 0x15f61cu;
    // NOP
    // 0x15f620: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15f620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15f624: 0x3c02441c  lui         $v0, 0x441C
    ctx->pc = 0x15f624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17436 << 16));
    // 0x15f628: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15f628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15f62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f630: 0x0  nop
    ctx->pc = 0x15f630u;
    // NOP
    // 0x15f634: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15f634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15f638: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f63c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f640: 0x0  nop
    ctx->pc = 0x15f640u;
    // NOP
    // 0x15f644: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x15f644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x15f648: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f64c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f650: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15f650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f654: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F654u;
    SET_GPR_U32(ctx, 31, 0x15F65Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F65Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F65Cu) { return; }
    ctx->pc = 0x15F65Cu;
label_15f65c:
    // 0x15f65c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15f65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f660: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f664: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15f664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f668: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F668u;
    SET_GPR_U32(ctx, 31, 0x15F670u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F670u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F670u) { return; }
    ctx->pc = 0x15F670u;
label_15f670:
    // 0x15f670: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15f670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f674: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x15f674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f678: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15f678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f67c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x15f67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15f680: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15F680u;
    SET_GPR_U32(ctx, 31, 0x15F688u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15F680u, 0x15F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F688u;
label_15f688:
    // 0x15f688: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x15f688u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15f68c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F68Cu;
    {
        const bool branch_taken_0x15f68c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f68c) {
            ctx->pc = 0x15F6A0u;
            goto label_15f6a0;
        }
    }
    ctx->pc = 0x15F694u;
    // 0x15f694: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f694u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f698: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x15F698u;
    {
        const bool branch_taken_0x15f698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f698) {
            ctx->pc = 0x15F8E4u;
            goto label_15f8e4;
        }
    }
    ctx->pc = 0x15F6A0u;
label_15f6a0:
    // 0x15f6a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15f6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f6a4: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x15f6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f6a8: 0xc067844  jal         func_19E110
    ctx->pc = 0x15F6A8u;
    SET_GPR_U32(ctx, 31, 0x15F6B0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x15F6A8u, 0x15F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F6B0u;
label_15f6b0:
    // 0x15f6b0: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x15f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15f6b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15f6b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f6b8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x15f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15f6bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15f6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15f6c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f6c4: 0x0  nop
    ctx->pc = 0x15f6c4u;
    // NOP
    // 0x15f6c8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15f6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f6cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f6d0: 0x0  nop
    ctx->pc = 0x15f6d0u;
    // NOP
    // 0x15f6d4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15f6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15f6d8: 0x3c02441c  lui         $v0, 0x441C
    ctx->pc = 0x15f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17436 << 16));
    // 0x15f6dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15f6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15f6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f6e4: 0x0  nop
    ctx->pc = 0x15f6e4u;
    // NOP
    // 0x15f6e8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15f6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15f6ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f6f4: 0x0  nop
    ctx->pc = 0x15f6f4u;
    // NOP
    // 0x15f6f8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15f6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15f6fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f700: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f704: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15f704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f708: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F708u;
    SET_GPR_U32(ctx, 31, 0x15F710u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F710u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F710u) { return; }
    ctx->pc = 0x15F710u;
label_15f710:
    // 0x15f710: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f714: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x15f714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15f718: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x15F718u;
    SET_GPR_U32(ctx, 31, 0x15F720u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x15F718u, 0x15F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F720u;
label_15f720:
    // 0x15f720: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x15f720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x15f724: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f728: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x15f728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x15f72c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x15F72Cu;
    {
        const bool branch_taken_0x15f72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f72c) {
            ctx->pc = 0x15F7ECu;
            goto label_15f7ec;
        }
    }
    ctx->pc = 0x15F734u;
    // 0x15f734: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x15f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x15f738: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15f738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15f73c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x15F73Cu;
    {
        const bool branch_taken_0x15f73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f73c) {
            ctx->pc = 0x15F7ECu;
            goto label_15f7ec;
        }
    }
    ctx->pc = 0x15F744u;
    // 0x15f744: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x15f744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x15f748: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x15F748u;
    {
        const bool branch_taken_0x15f748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f748) {
            ctx->pc = 0x15F7ECu;
            goto label_15f7ec;
        }
    }
    ctx->pc = 0x15F750u;
    // 0x15f750: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x15f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f754: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x15f754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x15f758: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15f758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15f75c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f760: 0x0  nop
    ctx->pc = 0x15f760u;
    // NOP
    // 0x15f764: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15f764u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15f768: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x15f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f76c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15f76cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f770: 0x0  nop
    ctx->pc = 0x15f770u;
    // NOP
    // 0x15f774: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x15F774u;
    {
        const bool branch_taken_0x15f774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f774) {
            ctx->pc = 0x15F7B4u;
            goto label_15f7b4;
        }
    }
    ctx->pc = 0x15F77Cu;
    // 0x15f77c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f780: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15f780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f784: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15f784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15f788: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15f788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f78c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15f78cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f790: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f794: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15f794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15f798: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x15f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f79c: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x15f79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
    // 0x15f7a0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f7a4: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15f7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15f7a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f7ac: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x15F7ACu;
    {
        const bool branch_taken_0x15f7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f7ac) {
            ctx->pc = 0x15F8E4u;
            goto label_15f8e4;
        }
    }
    ctx->pc = 0x15F7B4u;
label_15f7b4:
    // 0x15f7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f7b8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15f7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f7bc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15f7c0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15f7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f7c4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15f7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f7c8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f7cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15f7d0: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x15f7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f7d4: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x15f7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
    // 0x15f7d8: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f7dc: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15f7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15f7e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f7e4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x15F7E4u;
    {
        const bool branch_taken_0x15f7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f7e4) {
            ctx->pc = 0x15F8E4u;
            goto label_15f8e4;
        }
    }
    ctx->pc = 0x15F7ECu;
label_15f7ec:
    // 0x15f7ec: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x15f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f7f0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x15f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x15f7f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f7f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F7F8u;
    {
        const bool branch_taken_0x15f7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f7f8) {
            ctx->pc = 0x15F80Cu;
            goto label_15f80c;
        }
    }
    ctx->pc = 0x15F800u;
    // 0x15f800: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f800u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f804: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15F804u;
    {
        const bool branch_taken_0x15f804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f804) {
            ctx->pc = 0x15F8E4u;
            goto label_15f8e4;
        }
    }
    ctx->pc = 0x15F80Cu;
label_15f80c:
    // 0x15f80c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f810: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x15f810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x15f814: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15F814u;
    {
        const bool branch_taken_0x15f814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f814) {
            ctx->pc = 0x15F850u;
            goto label_15f850;
        }
    }
    ctx->pc = 0x15F81Cu;
    // 0x15f81c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f820: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15f820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f824: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15f824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15f828: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15f828u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f82c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15f82cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f830: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f834: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15f834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15f838: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f83c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f840: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15f840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15f844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f848: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x15F848u;
    {
        const bool branch_taken_0x15f848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f848) {
            ctx->pc = 0x15F8E4u;
            goto label_15f8e4;
        }
    }
    ctx->pc = 0x15F850u;
label_15f850:
    // 0x15f850: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f854: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15f854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15f858: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15F858u;
    {
        const bool branch_taken_0x15f858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f858) {
            ctx->pc = 0x15F898u;
            goto label_15f898;
        }
    }
    ctx->pc = 0x15F860u;
    // 0x15f860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f864: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15f864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f868: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15f868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15f86c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15f86cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f870: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15f870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f874: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f874u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f878: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15f878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15f87c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f880: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x15f880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f884: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15f884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f888: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15f888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15f88c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f890: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15F890u;
    {
        const bool branch_taken_0x15f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f890) {
            ctx->pc = 0x15F8E4u;
            goto label_15f8e4;
        }
    }
    ctx->pc = 0x15F898u;
label_15f898:
    // 0x15f898: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15f898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f89c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15f89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x15f8a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15F8A0u;
    {
        const bool branch_taken_0x15f8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f8a0) {
            ctx->pc = 0x15F8E0u;
            goto label_15f8e0;
        }
    }
    ctx->pc = 0x15F8A8u;
    // 0x15f8a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f8ac: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15f8acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f8b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15f8b4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15f8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f8b8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15f8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f8bc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f8c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15f8c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f8c8: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x15f8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f8cc: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f8d0: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15f8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15f8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f8d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F8D8u;
    {
        const bool branch_taken_0x15f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f8d8) {
            ctx->pc = 0x15F8E4u;
            goto label_15f8e4;
        }
    }
    ctx->pc = 0x15F8E0u;
label_15f8e0:
    // 0x15f8e0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f8e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_15f8e4:
    // 0x15f8e4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x15f8e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f8e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15f8e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f8ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f8ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f8f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f8f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f8f8: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x15f8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x15f8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x15F8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F904u;
}
