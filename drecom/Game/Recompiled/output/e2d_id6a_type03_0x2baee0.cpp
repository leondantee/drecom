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

// Function: e2d_id6a_type03
// Address: 0x2baee0 - 0x2bafb0
void e2d_id6a_type03_0x2baee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id6a_type03_0x2baee0");
#endif

    switch (ctx->pc) {
        case 0x2baf78u: goto label_2baf78;
        default: break;
    }

    ctx->pc = 0x2baee0u;

    // 0x2baee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2baee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2baee4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2baee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2baee8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2baee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2baeec: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2baeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2baef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2baef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baef4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2baef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2baef8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2baef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2baefc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2baefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2baf00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2baf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baf04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2baf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2baf08: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2baf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2baf0c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2baf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2baf10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2baf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baf14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2baf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2baf18: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2baf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2baf1c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2baf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2baf20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2baf20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baf24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2baf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2baf28: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2baf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2baf2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2baf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2baf30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2baf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2baf34: 0xa043013f  sb          $v1, 0x13F($v0)
    ctx->pc = 0x2baf34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 3));
    // 0x2baf38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2baf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2baf3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2baf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2baf40: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2baf40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2baf44: 0x3c023ed7  lui         $v0, 0x3ED7
    ctx->pc = 0x2baf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16087 << 16));
    // 0x2baf48: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x2baf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x2baf4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2baf4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baf50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2baf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2baf54: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2baf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2baf58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2baf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2baf5c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x2baf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2baf60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2baf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2baf64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2baf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2baf68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2baf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2baf6c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2baf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2baf70: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BAF70u;
    SET_GPR_U32(ctx, 31, 0x2BAF78u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BAF70u, 0x2BAF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF78u;
label_2baf78:
    // 0x2baf78: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2baf78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2baf7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2baf7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2baf80: 0x0  nop
    ctx->pc = 0x2baf80u;
    // NOP
    // 0x2baf84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2baf84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2baf88: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2baf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2baf8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2baf8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baf90: 0x0  nop
    ctx->pc = 0x2baf90u;
    // NOP
    // 0x2baf94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2baf94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2baf98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2baf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2baf9c: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2baf9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bafa0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bafa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bafa4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bafa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bafa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAFB0u;
}
