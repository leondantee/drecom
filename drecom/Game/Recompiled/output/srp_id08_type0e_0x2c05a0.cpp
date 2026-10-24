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

// Function: srp_id08_type0e
// Address: 0x2c05a0 - 0x2c0664
void srp_id08_type0e_0x2c05a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id08_type0e_0x2c05a0");
#endif

    switch (ctx->pc) {
        case 0x2c062cu: goto label_2c062c;
        default: break;
    }

    ctx->pc = 0x2c05a0u;

    // 0x2c05a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c05a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c05a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c05a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c05a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c05a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c05ac: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x2c05acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x2c05b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c05b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c05b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c05b8: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c05b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c05bc: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x2c05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x2c05c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c05c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c05c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c05c8: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c05c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c05cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c05d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c05d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c05d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c05d8: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c05d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c05dc: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2c05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2c05e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c05e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c05e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c05e8: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c05e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c05ec: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2c05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x2c05f0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2c05f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2c05f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c05f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c05f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c05f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c05fc: 0xe44002ec  swc1        $f0, 0x2EC($v0)
    ctx->pc = 0x2c05fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 748), bits); }
    // 0x2c0600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0604: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0608: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c0608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c060c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c060cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0610: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0614: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c0614u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c061c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0620: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c0620u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0624: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C0624u;
    SET_GPR_U32(ctx, 31, 0x2C062Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C0624u, 0x2C062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C062Cu;
label_2c062c:
    // 0x2c062c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2c062cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2c0630: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c0630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0634: 0x0  nop
    ctx->pc = 0x2c0634u;
    // NOP
    // 0x2c0638: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0638u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c063c: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x2c063cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x2c0640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0644: 0x0  nop
    ctx->pc = 0x2c0644u;
    // NOP
    // 0x2c0648: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c064c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c064cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0650: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c0650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c0654: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c0654u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0658: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c0658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c065c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C065Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C065Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0664u;
}
