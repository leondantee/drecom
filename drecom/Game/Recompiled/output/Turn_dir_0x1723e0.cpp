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

// Function: Turn_dir
// Address: 0x1723e0 - 0x17259c
void Turn_dir_0x1723e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Turn_dir_0x1723e0");
#endif

    ctx->pc = 0x1723e0u;

    // 0x1723e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1723e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1723e4: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x1723e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1723e8: 0xe7ad0030  swc1        $f13, 0x30($sp)
    ctx->pc = 0x1723e8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1723ec: 0xe7ae0038  swc1        $f14, 0x38($sp)
    ctx->pc = 0x1723ecu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1723f0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1723f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723f4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1723f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1723f8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1723f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1723fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1723fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172400: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172404: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x172404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x172408: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17240c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17240cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x172410: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172418: 0x0  nop
    ctx->pc = 0x172418u;
    // NOP
    // 0x17241c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17241cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172420: 0x0  nop
    ctx->pc = 0x172420u;
    // NOP
    // 0x172424: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x172424u;
    {
        const bool branch_taken_0x172424 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172424) {
            ctx->pc = 0x172448u;
            goto label_172448;
        }
    }
    ctx->pc = 0x17242Cu;
    // 0x17242c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x17242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172430: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x172434: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17243c: 0x0  nop
    ctx->pc = 0x17243cu;
    // NOP
    // 0x172440: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172444: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x172444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_172448:
    // 0x172448: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17244c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x17244cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x172450: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172458: 0x0  nop
    ctx->pc = 0x172458u;
    // NOP
    // 0x17245c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17245cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172460: 0x0  nop
    ctx->pc = 0x172460u;
    // NOP
    // 0x172464: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x172464u;
    {
        const bool branch_taken_0x172464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172464) {
            ctx->pc = 0x172488u;
            goto label_172488;
        }
    }
    ctx->pc = 0x17246Cu;
    // 0x17246c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x17246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172470: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x172474: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17247c: 0x0  nop
    ctx->pc = 0x17247cu;
    // NOP
    // 0x172480: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x172480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x172484: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x172484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_172488:
    // 0x172488: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17248c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17248cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172490: 0x0  nop
    ctx->pc = 0x172490u;
    // NOP
    // 0x172494: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172498: 0x0  nop
    ctx->pc = 0x172498u;
    // NOP
    // 0x17249c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x17249Cu;
    {
        const bool branch_taken_0x17249c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17249c) {
            ctx->pc = 0x1724BCu;
            goto label_1724bc;
        }
    }
    ctx->pc = 0x1724A4u;
    // 0x1724a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1724a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1724a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1724a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1724ac: 0x0  nop
    ctx->pc = 0x1724acu;
    // NOP
    // 0x1724b0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1724b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1724b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1724B4u;
    {
        const bool branch_taken_0x1724b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1724b4) {
            ctx->pc = 0x1724CCu;
            goto label_1724cc;
        }
    }
    ctx->pc = 0x1724BCu;
label_1724bc:
    // 0x1724bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1724bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1724c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1724c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1724c4: 0x0  nop
    ctx->pc = 0x1724c4u;
    // NOP
    // 0x1724c8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1724c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1724cc:
    // 0x1724cc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1724ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1724d0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1724d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1724d4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1724d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1724d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1724d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1724dc: 0x0  nop
    ctx->pc = 0x1724dcu;
    // NOP
    // 0x1724e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1724e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1724e4: 0x0  nop
    ctx->pc = 0x1724e4u;
    // NOP
    // 0x1724e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1724E8u;
    {
        const bool branch_taken_0x1724e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1724e8) {
            ctx->pc = 0x172500u;
            goto label_172500;
        }
    }
    ctx->pc = 0x1724F0u;
    // 0x1724f0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1724f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1724f4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1724f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1724f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1724F8u;
    {
        const bool branch_taken_0x1724f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1724f8) {
            ctx->pc = 0x17250Cu;
            goto label_17250c;
        }
    }
    ctx->pc = 0x172500u;
label_172500:
    // 0x172500: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x172500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172504: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172504u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172508: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x172508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_17250c:
    // 0x17250c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x17250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172510: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x172510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172514: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172514u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172518: 0x0  nop
    ctx->pc = 0x172518u;
    // NOP
    // 0x17251c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17251Cu;
    {
        const bool branch_taken_0x17251c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17251c) {
            ctx->pc = 0x172534u;
            goto label_172534;
        }
    }
    ctx->pc = 0x172524u;
    // 0x172524: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x172524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172528: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x172528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17252c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17252Cu;
    {
        const bool branch_taken_0x17252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17252c) {
            ctx->pc = 0x172574u;
            goto label_172574;
        }
    }
    ctx->pc = 0x172534u;
label_172534:
    // 0x172534: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172538: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17253c: 0x0  nop
    ctx->pc = 0x17253cu;
    // NOP
    // 0x172540: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172544: 0x0  nop
    ctx->pc = 0x172544u;
    // NOP
    // 0x172548: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172548u;
    {
        const bool branch_taken_0x172548 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172548) {
            ctx->pc = 0x172560u;
            goto label_172560;
        }
    }
    ctx->pc = 0x172550u;
    // 0x172550: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x172550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172554: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x172554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x172558: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172558u;
    {
        const bool branch_taken_0x172558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172558) {
            ctx->pc = 0x17256Cu;
            goto label_17256c;
        }
    }
    ctx->pc = 0x172560u;
label_172560:
    // 0x172560: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x172560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172564: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172564u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172568: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x172568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_17256c:
    // 0x17256c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x17256cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172570: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x172570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_172574:
    // 0x172574: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x172574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172578: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x172578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17257c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x17257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172580: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x172580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172584: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x172588: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x172588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17258c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x17258cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172590: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x172590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x172594: 0x3e00008  jr          $ra
    ctx->pc = 0x172594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17259Cu;
}
