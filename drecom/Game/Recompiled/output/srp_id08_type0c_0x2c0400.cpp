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

// Function: srp_id08_type0c
// Address: 0x2c0400 - 0x2c04d0
void srp_id08_type0c_0x2c0400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id08_type0c_0x2c0400");
#endif

    switch (ctx->pc) {
        case 0x2c0498u: goto label_2c0498;
        default: break;
    }

    ctx->pc = 0x2c0400u;

    // 0x2c0400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0404: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c0404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c0408: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c0408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c040c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c040cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0410: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0414: 0xa043034c  sb          $v1, 0x34C($v0)
    ctx->pc = 0x2c0414u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 844), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0418: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c0418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c041c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c041cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0420: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0424: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c0424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c0428: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c0428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c042c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c042cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0430: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0434: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c0434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c0438: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c0438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c043c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c043cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0440: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0444: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c0444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c0448: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c0448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c044c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c044cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0450: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0454: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c0454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c0458: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2c0458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x2c045c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2c045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2c0460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0464: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0468: 0xe44002ec  swc1        $f0, 0x2EC($v0)
    ctx->pc = 0x2c0468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 748), bits); }
    // 0x2c046c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0470: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0474: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c0474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c047c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0480: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c0480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0488: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c048c: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c048cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0490: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C0490u;
    SET_GPR_U32(ctx, 31, 0x2C0498u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C0490u, 0x2C0498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0498u;
label_2c0498:
    // 0x2c0498: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2c0498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2c049c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c049cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c04a0: 0x0  nop
    ctx->pc = 0x2c04a0u;
    // NOP
    // 0x2c04a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c04a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c04a8: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x2c04a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x2c04ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c04acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c04b0: 0x0  nop
    ctx->pc = 0x2c04b0u;
    // NOP
    // 0x2c04b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c04b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c04b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c04b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c04bc: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c04bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c04c0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c04c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c04c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c04c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c04c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C04C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C04C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C04D0u;
}
