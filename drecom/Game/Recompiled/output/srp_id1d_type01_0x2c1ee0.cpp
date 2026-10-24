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

// Function: srp_id1d_type01
// Address: 0x2c1ee0 - 0x2c1fc4
void srp_id1d_type01_0x2c1ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1d_type01_0x2c1ee0");
#endif

    switch (ctx->pc) {
        case 0x2c1f68u: goto label_2c1f68;
        default: break;
    }

    ctx->pc = 0x2c1ee0u;

    // 0x2c1ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1ee4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c1ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c1ee8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c1ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c1eec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c1ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1ef4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1ef8: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c1ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c1efc: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x2c1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x2c1f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1f04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1f08: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c1f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c1f0c: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x2c1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x2c1f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1f14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1f18: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c1f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c1f1c: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x2c1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
    // 0x2c1f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1f24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1f28: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c1f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c1f2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1f30: 0xa0400368  sb          $zero, 0x368($v0)
    ctx->pc = 0x2c1f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1f34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1f38: 0xa0400342  sb          $zero, 0x342($v0)
    ctx->pc = 0x2c1f38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1f3c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c1f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c1f40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1f44: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c1f44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1f48: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c1f4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1f50: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c1f50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1f54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1f58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1f5c: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c1f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1f60: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C1F60u;
    SET_GPR_U32(ctx, 31, 0x2C1F68u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C1F60u, 0x2C1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F68u;
label_2c1f68:
    // 0x2c1f68: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2c1f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c1f6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2c1f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c1f70: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x2c1f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2c1f74: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1F74u;
    {
        const bool branch_taken_0x2c1f74 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2c1f74) {
            ctx->pc = 0x2C1F88u;
            goto label_2c1f88;
        }
    }
    ctx->pc = 0x2C1F7Cu;
    // 0x2c1f7c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1F7Cu;
    {
        const bool branch_taken_0x2c1f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f7c) {
            ctx->pc = 0x2C1F88u;
            goto label_2c1f88;
        }
    }
    ctx->pc = 0x2C1F84u;
    // 0x2c1f84: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2c1f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_2c1f88:
    // 0x2c1f88: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2c1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2c1f8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c1f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c1f90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1f94: 0xa0640368  sb          $a0, 0x368($v1)
    ctx->pc = 0x2c1f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1f98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1f9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1fa0: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c1fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1fa4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2c1fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2c1fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1fac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1fb0: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c1fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c1fb4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c1fb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1fb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c1fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c1fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1FC4u;
}
