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

// Function: e2d_id25_type01
// Address: 0x2b3820 - 0x2b390c
void e2d_id25_type01_0x2b3820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id25_type01_0x2b3820");
#endif

    switch (ctx->pc) {
        case 0x2b38b4u: goto label_2b38b4;
        default: break;
    }

    ctx->pc = 0x2b3820u;

    // 0x2b3820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3824: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b3824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b3828: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b3828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b382c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b382cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3834: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3838: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b3838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b383c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b383cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3844: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3848: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b3848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b384c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b384cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3854: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3858: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b3858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b385c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b385cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3864: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3868: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b3868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b386c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2b386cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2b3870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3874: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3878: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2b3878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2b387c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b387cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b3880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3884: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3888: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b3888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b388c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2b388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2b3890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3894: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3898: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b3898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b389c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b389cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b38a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b38a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b38a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b38a8: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b38a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b38ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B38ACu;
    SET_GPR_U32(ctx, 31, 0x2B38B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B38ACu, 0x2B38B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38B4u;
label_2b38b4:
    // 0x2b38b4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b38b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b38b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b38bc: 0x0  nop
    ctx->pc = 0x2b38bcu;
    // NOP
    // 0x2b38c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b38c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b38c4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b38c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b38c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b38cc: 0x0  nop
    ctx->pc = 0x2b38ccu;
    // NOP
    // 0x2b38d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b38d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b38d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b38d8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b38d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b38dc: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2b38dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2b38e0: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2b38e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2b38e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b38e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b38e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b38e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b38ec: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b38ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b38f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b38f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b38f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b38f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b38f8: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b38f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b38fc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b38fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3900: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b3900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b3904: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B390Cu;
}
