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

// Function: e2d_id69_type06
// Address: 0x2bad80 - 0x2bae50
void e2d_id69_type06_0x2bad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id69_type06_0x2bad80");
#endif

    switch (ctx->pc) {
        case 0x2bae0cu: goto label_2bae0c;
        default: break;
    }

    ctx->pc = 0x2bad80u;

    // 0x2bad80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bad84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bad88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bad88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bad8c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bad90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bad90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bad94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bad94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bad98: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bad98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bad9c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bada0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bada0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bada4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bada4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bada8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bada8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2badac: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2badacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2badb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2badb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2badb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2badb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2badb8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2badb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2badbc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2badbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2badc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2badc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2badc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2badc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2badc8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2badc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2badcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2badccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2badd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2badd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2badd4: 0xa043013f  sb          $v1, 0x13F($v0)
    ctx->pc = 0x2badd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 3));
    // 0x2badd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2badd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2baddc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2baddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bade0: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bade0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bade4: 0x3c023ed7  lui         $v0, 0x3ED7
    ctx->pc = 0x2bade4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16087 << 16));
    // 0x2bade8: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x2bade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x2badec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2badecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2badf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2badf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2badf4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2badf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2badf8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2badf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2badfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2badfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bae00: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2bae00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bae04: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BAE04u;
    SET_GPR_U32(ctx, 31, 0x2BAE0Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BAE04u, 0x2BAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE0Cu;
label_2bae0c:
    // 0x2bae0c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2bae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2bae10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bae10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bae14: 0x0  nop
    ctx->pc = 0x2bae14u;
    // NOP
    // 0x2bae18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bae18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bae1c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2bae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2bae20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bae20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bae24: 0x0  nop
    ctx->pc = 0x2bae24u;
    // NOP
    // 0x2bae28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bae28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bae2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bae30: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bae30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bae34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2bae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bae38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bae3c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2bae3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bae40: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bae40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bae44: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bae44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bae48: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAE50u;
}
