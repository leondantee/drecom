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

// Function: srp_id08_type0b
// Address: 0x2c0330 - 0x2c0400
void srp_id08_type0b_0x2c0330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id08_type0b_0x2c0330");
#endif

    switch (ctx->pc) {
        case 0x2c03c8u: goto label_2c03c8;
        default: break;
    }

    ctx->pc = 0x2c0330u;

    // 0x2c0330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0334: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c0334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c0338: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c0338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c033c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c033cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0340: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0344: 0xa043034c  sb          $v1, 0x34C($v0)
    ctx->pc = 0x2c0344u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 844), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0348: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c0348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c034c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c034cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0350: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0354: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c0354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c0358: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c0358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c035c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c035cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0360: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0364: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c0364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c0368: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c0368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c036c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c036cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0370: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0374: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c0374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c0378: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c0378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c037c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c037cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0380: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0384: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c0384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c0388: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2c0388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x2c038c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2c038cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2c0390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0394: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0398: 0xe44002ec  swc1        $f0, 0x2EC($v0)
    ctx->pc = 0x2c0398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 748), bits); }
    // 0x2c039c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c03a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c03a4: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c03a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c03a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c03ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c03acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c03b0: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c03b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c03b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c03b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c03b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c03bc: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c03bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c03c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C03C0u;
    SET_GPR_U32(ctx, 31, 0x2C03C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C03C0u, 0x2C03C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C03C8u;
label_2c03c8:
    // 0x2c03c8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c03c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c03cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c03ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c03d0: 0x0  nop
    ctx->pc = 0x2c03d0u;
    // NOP
    // 0x2c03d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c03d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c03d8: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x2c03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x2c03dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c03dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c03e0: 0x0  nop
    ctx->pc = 0x2c03e0u;
    // NOP
    // 0x2c03e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c03e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c03e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c03e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c03ec: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c03ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c03f0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c03f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c03f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c03f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c03f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C03F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C03F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0400u;
}
