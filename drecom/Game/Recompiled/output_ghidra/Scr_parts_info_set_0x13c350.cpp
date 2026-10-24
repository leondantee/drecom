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

// Function: Scr_parts_info_set
// Address: 0x13c350 - 0x13c44c
void Scr_parts_info_set_0x13c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_info_set_0x13c350");
#endif

    switch (ctx->pc) {
        case 0x13c390u: goto label_13c390;
        case 0x13c3acu: goto label_13c3ac;
        default: break;
    }

    ctx->pc = 0x13c350u;

    // 0x13c350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13c354: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x13c354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x13c358: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13c35c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13c360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c368: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x13c368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x13c36c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13c370: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x13c370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x13c374: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x13c374u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13c378: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13c37c: 0x8c5002d0  lw          $s0, 0x2D0($v0)
    ctx->pc = 0x13c37cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x13c380: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13c384: 0x8c53005c  lw          $s3, 0x5C($v0)
    ctx->pc = 0x13c384u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x13c388: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x13c388u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x13c38c: 0x0  nop
    ctx->pc = 0x13c38cu;
    // NOP
label_13c390:
    // 0x13c390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c394: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x13c394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13c398: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x13c398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x13c39c: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x13c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x13c3a0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x13c3a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13c3a4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x13C3A4u;
    SET_GPR_U32(ctx, 31, 0x13C3ACu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x13C3ACu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13C3ACu) { return; }
    ctx->pc = 0x13C3ACu;
label_13c3ac:
    // 0x13c3ac: 0xc60000bc  lwc1        $f0, 0xBC($s0)
    ctx->pc = 0x13c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c3b0: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x13c3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x13c3b4: 0xc60000cc  lwc1        $f0, 0xCC($s0)
    ctx->pc = 0x13c3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c3b8: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x13c3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x13c3bc: 0xc60000dc  lwc1        $f0, 0xDC($s0)
    ctx->pc = 0x13c3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c3c0: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x13c3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x13c3c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c3c8: 0x0  nop
    ctx->pc = 0x13c3c8u;
    // NOP
    // 0x13c3cc: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x13c3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x13c3d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c3d4: 0x0  nop
    ctx->pc = 0x13c3d4u;
    // NOP
    // 0x13c3d8: 0xe60000cc  swc1        $f0, 0xCC($s0)
    ctx->pc = 0x13c3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x13c3dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c3dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c3e0: 0x0  nop
    ctx->pc = 0x13c3e0u;
    // NOP
    // 0x13c3e4: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x13c3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x13c3e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13c3ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13c3ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c3f0: 0x0  nop
    ctx->pc = 0x13c3f0u;
    // NOP
    // 0x13c3f4: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x13c3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x13c3f8: 0xa2000100  sb          $zero, 0x100($s0)
    ctx->pc = 0x13c3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c3fc: 0xa2000101  sb          $zero, 0x101($s0)
    ctx->pc = 0x13c3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 257), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c400: 0xa2000102  sb          $zero, 0x102($s0)
    ctx->pc = 0x13c400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c404: 0xa2000103  sb          $zero, 0x103($s0)
    ctx->pc = 0x13c404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c408: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x13c408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x13c40c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x13c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x13c410: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x13c410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x13c414: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x13c414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x13c418: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13c418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13c41c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x13c41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x13c420: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x13c420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x13c424: 0x1640ffda  bnez        $s2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x13C424u;
    {
        const bool branch_taken_0x13c424 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c424) {
            ctx->pc = 0x13C390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c390;
        }
    }
    ctx->pc = 0x13C42Cu;
    // 0x13c42c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x13c42cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c430: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13c430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c434: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c440: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13c444: 0x3e00008  jr          $ra
    ctx->pc = 0x13C444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C44Cu;
}
