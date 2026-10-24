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

// Function: e2d_id7c_type00
// Address: 0x2bcc50 - 0x2bcd2c
void e2d_id7c_type00_0x2bcc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id7c_type00_0x2bcc50");
#endif

    switch (ctx->pc) {
        case 0x2bccb0u: goto label_2bccb0;
        default: break;
    }

    ctx->pc = 0x2bcc50u;

    // 0x2bcc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bcc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bcc54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bcc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bcc58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bcc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bcc5c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bcc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bcc60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcc64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcc68: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bcc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bcc6c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bcc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bcc70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcc70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcc74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcc78: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bcc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bcc7c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bcc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bcc80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcc80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcc84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcc88: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bcc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bcc8c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bcc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bcc90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcc90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcc94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcc98: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bcc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bcc9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2bcc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bcca0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcca4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2bcca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bcca8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BCCA8u;
    SET_GPR_U32(ctx, 31, 0x2BCCB0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BCCA8u, 0x2BCCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCCB0u;
label_2bccb0:
    // 0x2bccb0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2bccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2bccb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bccb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bccb8: 0x0  nop
    ctx->pc = 0x2bccb8u;
    // NOP
    // 0x2bccbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bccbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bccc0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2bccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2bccc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bccc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bccc8: 0x0  nop
    ctx->pc = 0x2bccc8u;
    // NOP
    // 0x2bcccc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bccccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bccd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bccd4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bccd8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2bccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2bccdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bccdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcce0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcce4: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2bcce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2bcce8: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2bcce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2bccec: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2bccecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2bccf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bccf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bccf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bccf8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2bccf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2bccfc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2bccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2bcd00: 0x2464dce0  addiu       $a0, $v1, -0x2320
    ctx->pc = 0x2bcd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2bcd04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcd08: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x2bcd08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x2bcd0c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2bcd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2bcd10: 0x24648e8c  addiu       $a0, $v1, -0x7174
    ctx->pc = 0x2bcd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938252));
    // 0x2bcd14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcd18: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x2bcd18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x2bcd1c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bcd1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcd20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bcd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bcd24: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCD2Cu;
}
