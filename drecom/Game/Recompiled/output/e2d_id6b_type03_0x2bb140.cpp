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

// Function: e2d_id6b_type03
// Address: 0x2bb140 - 0x2bb218
void e2d_id6b_type03_0x2bb140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id6b_type03_0x2bb140");
#endif

    switch (ctx->pc) {
        case 0x2bb1d8u: goto label_2bb1d8;
        default: break;
    }

    ctx->pc = 0x2bb140u;

    // 0x2bb140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb144: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bb144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bb148: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bb148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bb14c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bb150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb154: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb158: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bb158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bb15c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bb15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bb160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb164: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb168: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bb168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bb16c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bb16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bb170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb174: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb178: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bb178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bb17c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bb17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bb180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb184: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb188: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bb188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bb18c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb190: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb194: 0xa043013f  sb          $v1, 0x13F($v0)
    ctx->pc = 0x2bb194u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb19c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb1a0: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bb1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb1a4: 0x3c023ed7  lui         $v0, 0x3ED7
    ctx->pc = 0x2bb1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16087 << 16));
    // 0x2bb1a8: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x2bb1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x2bb1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb1b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb1b4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bb1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bb1b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2bb1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2bb1bc: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x2bb1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2bb1c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bb1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bb1c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bb1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bb1c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb1cc: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2bb1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb1d0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BB1D0u;
    SET_GPR_U32(ctx, 31, 0x2BB1D8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BB1D0u, 0x2BB1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1D8u;
label_2bb1d8:
    // 0x2bb1d8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2bb1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2bb1dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bb1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb1e0: 0x0  nop
    ctx->pc = 0x2bb1e0u;
    // NOP
    // 0x2bb1e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb1e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb1e8: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2bb1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2bb1ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb1ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb1f0: 0x0  nop
    ctx->pc = 0x2bb1f0u;
    // NOP
    // 0x2bb1f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb1f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb1f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb1fc: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bb1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bb200: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb204: 0xa060011a  sb          $zero, 0x11A($v1)
    ctx->pc = 0x2bb204u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb208: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bb208u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb20c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb20cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb210: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB218u;
}
