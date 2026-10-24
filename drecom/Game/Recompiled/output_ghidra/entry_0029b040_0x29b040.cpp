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

// Function: entry_0029b040
// Address: 0x29b040 - 0x29b160
void entry_0029b040_0x29b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b040_0x29b040");
#endif

    switch (ctx->pc) {
        case 0x29b068u: goto label_29b068;
        case 0x29b080u: goto label_29b080;
        case 0x29b0a0u: goto label_29b0a0;
        default: break;
    }

    ctx->pc = 0x29b040u;

    // 0x29b040: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29b040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29b044: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b048: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x29b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b04c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29b04cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29b050: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29b050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29b054: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x29b054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29b058: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x29b058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29b05c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29b05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29b060: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29B060u;
    SET_GPR_U32(ctx, 31, 0x29B068u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29B068u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B068u) { return; }
    ctx->pc = 0x29B068u;
label_29b068:
    // 0x29b068: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x29b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29b06c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29b06cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29b070: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29b070u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29b074: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29b074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29b078: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29B078u;
    SET_GPR_U32(ctx, 31, 0x29B080u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29B080u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B080u) { return; }
    ctx->pc = 0x29B080u;
label_29b080:
    // 0x29b080: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x29b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b084: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29b088: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x29b088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29b08c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29b08cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29b090: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x29b090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29b094: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29b094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29b098: 0xc040c60  jal         func_103180
    ctx->pc = 0x29B098u;
    SET_GPR_U32(ctx, 31, 0x29B0A0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29B0A0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B0A0u) { return; }
    ctx->pc = 0x29B0A0u;
label_29b0a0:
    // 0x29b0a0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x29b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x29b0a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29b0a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b0a8: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b0ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b0acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b0b0: 0x0  nop
    ctx->pc = 0x29b0b0u;
    // NOP
    // 0x29b0b4: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29B0B4u;
    {
        const bool branch_taken_0x29b0b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b0b4) {
            ctx->pc = 0x29B160u;
            return;
        }
    }
    ctx->pc = 0x29B0BCu;
    // 0x29b0bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29b0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29b0c0: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29b0c0u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b0c4: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b0c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b0c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b0cc: 0x0  nop
    ctx->pc = 0x29b0ccu;
    // NOP
    // 0x29b0d0: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29B0D0u;
    {
        const bool branch_taken_0x29b0d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b0d0) {
            ctx->pc = 0x29B160u;
            return;
        }
    }
    ctx->pc = 0x29B0D8u;
    // 0x29b0d8: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x29b0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b0dc: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x29b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x29b0e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29b0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29b0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b0e8: 0x0  nop
    ctx->pc = 0x29b0e8u;
    // NOP
    // 0x29b0ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b0ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b0f0: 0x0  nop
    ctx->pc = 0x29b0f0u;
    // NOP
    // 0x29b0f4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29B0F4u;
    {
        const bool branch_taken_0x29b0f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b0f4) {
            ctx->pc = 0x29B160u;
            return;
        }
    }
    ctx->pc = 0x29B0FCu;
    // 0x29b0fc: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x29b0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b100: 0x3c034516  lui         $v1, 0x4516
    ctx->pc = 0x29b100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17686 << 16));
    // 0x29b104: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29b104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b108: 0x0  nop
    ctx->pc = 0x29b108u;
    // NOP
    // 0x29b10c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b110: 0x0  nop
    ctx->pc = 0x29b110u;
    // NOP
    // 0x29b114: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29B114u;
    {
        const bool branch_taken_0x29b114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b114) {
            ctx->pc = 0x29B160u;
            return;
        }
    }
    ctx->pc = 0x29B11Cu;
    // 0x29b11c: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x29b11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b120: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29b120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29b124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b128: 0x0  nop
    ctx->pc = 0x29b128u;
    // NOP
    // 0x29b12c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b12cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b130: 0x0  nop
    ctx->pc = 0x29b130u;
    // NOP
    // 0x29b134: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29B134u;
    {
        const bool branch_taken_0x29b134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b134) {
            ctx->pc = 0x29B160u;
            return;
        }
    }
    ctx->pc = 0x29B13Cu;
    // 0x29b13c: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x29b13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b140: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29b140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29b144: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29b144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29b148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b14c: 0x0  nop
    ctx->pc = 0x29b14cu;
    // NOP
    // 0x29b150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b154: 0x0  nop
    ctx->pc = 0x29b154u;
    // NOP
    // 0x29b158: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29B158u;
    {
        const bool branch_taken_0x29b158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b158) {
            ctx->pc = 0x29B16Cu;
            return;
        }
    }
    ctx->pc = 0x29B160u;
}
