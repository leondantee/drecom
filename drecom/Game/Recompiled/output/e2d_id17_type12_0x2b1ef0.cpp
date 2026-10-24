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

// Function: e2d_id17_type12
// Address: 0x2b1ef0 - 0x2b1f94
void e2d_id17_type12_0x2b1ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type12_0x2b1ef0");
#endif

    switch (ctx->pc) {
        case 0x2b1f44u: goto label_2b1f44;
        default: break;
    }

    ctx->pc = 0x2b1ef0u;

    // 0x2b1ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b1ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b1ef4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b1ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b1ef8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b1ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b1efc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b1f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1f04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1f08: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b1f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b1f0c: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x2b1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x2b1f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1f14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1f18: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b1f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b1f1c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b1f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1f24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1f28: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b1f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b1f2c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2b1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2b1f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1f34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1f38: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b1f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b1f3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B1F3Cu;
    SET_GPR_U32(ctx, 31, 0x2B1F44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B1F3Cu, 0x2B1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F44u;
label_2b1f44:
    // 0x2b1f44: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b1f48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b1f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1f4c: 0x0  nop
    ctx->pc = 0x2b1f4cu;
    // NOP
    // 0x2b1f50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b1f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b1f54: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b1f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1f5c: 0x0  nop
    ctx->pc = 0x2b1f5cu;
    // NOP
    // 0x2b1f60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b1f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b1f64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1f68: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1f6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b1f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1f70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1f74: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b1f74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1f78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1f7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1f80: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b1f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1f84: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b1f84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1f88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b1f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b1f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1F94u;
}
