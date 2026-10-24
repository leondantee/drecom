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

// Function: e2d_id6b_type04
// Address: 0x2bb220 - 0x2bb2fc
void e2d_id6b_type04_0x2bb220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id6b_type04_0x2bb220");
#endif

    switch (ctx->pc) {
        case 0x2bb2b8u: goto label_2bb2b8;
        default: break;
    }

    ctx->pc = 0x2bb220u;

    // 0x2bb220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb224: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bb224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bb228: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bb228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bb22c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bb22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bb230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb234: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb238: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bb238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bb23c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bb23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bb240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb248: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bb248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bb24c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bb24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bb250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb254: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb258: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bb258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bb25c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bb25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bb260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb264: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb268: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bb268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bb26c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb270: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb274: 0xa043013f  sb          $v1, 0x13F($v0)
    ctx->pc = 0x2bb274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb27c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb280: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bb280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb284: 0x3c023ed7  lui         $v0, 0x3ED7
    ctx->pc = 0x2bb284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16087 << 16));
    // 0x2bb288: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x2bb288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x2bb28c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb290: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb294: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bb294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bb298: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2bb298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2bb29c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x2bb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2bb2a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bb2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bb2a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bb2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bb2a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb2ac: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2bb2acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb2b0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BB2B0u;
    SET_GPR_U32(ctx, 31, 0x2BB2B8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BB2B0u, 0x2BB2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB2B8u;
label_2bb2b8:
    // 0x2bb2b8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2bb2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2bb2bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bb2bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb2c0: 0x0  nop
    ctx->pc = 0x2bb2c0u;
    // NOP
    // 0x2bb2c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb2c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb2c8: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2bb2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2bb2cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb2ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb2d0: 0x0  nop
    ctx->pc = 0x2bb2d0u;
    // NOP
    // 0x2bb2d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb2d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb2dc: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bb2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bb2e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2bb2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bb2e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb2e8: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2bb2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bb2ec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bb2ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb2f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB2FCu;
}
