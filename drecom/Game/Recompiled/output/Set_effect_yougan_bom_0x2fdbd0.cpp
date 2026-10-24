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

// Function: Set_effect_yougan_bom
// Address: 0x2fdbd0 - 0x2fdc94
void Set_effect_yougan_bom_0x2fdbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_yougan_bom_0x2fdbd0");
#endif

    switch (ctx->pc) {
        case 0x2fdc00u: goto label_2fdc00;
        case 0x2fdc74u: goto label_2fdc74;
        default: break;
    }

    ctx->pc = 0x2fdbd0u;

    // 0x2fdbd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fdbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fdbd4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2fdbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2fdbd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fdbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fdbdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fdbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fdbe0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2fdbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2fdbe4: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x2fdbe4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2fdbe8: 0x24040309  addiu       $a0, $zero, 0x309
    ctx->pc = 0x2fdbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
    // 0x2fdbec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fdbecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fdbf0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2fdbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fdbf4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fdbf4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fdbf8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FDBF8u;
    SET_GPR_U32(ctx, 31, 0x2FDC00u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FDBF8u, 0x2FDC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC00u;
label_2fdc00:
    // 0x2fdc00: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2fdc00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fdc04: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2fdc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2fdc08: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x2fdc08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fdc0c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fdc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fdc10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdc10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdc14: 0x0  nop
    ctx->pc = 0x2fdc14u;
    // NOP
    // 0x2fdc18: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2fdc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2fdc1c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fdc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fdc20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdc24: 0x0  nop
    ctx->pc = 0x2fdc24u;
    // NOP
    // 0x2fdc28: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2fdc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2fdc2c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fdc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fdc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdc34: 0x0  nop
    ctx->pc = 0x2fdc34u;
    // NOP
    // 0x2fdc38: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2fdc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2fdc3c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2fdc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2fdc40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdc44: 0x0  nop
    ctx->pc = 0x2fdc44u;
    // NOP
    // 0x2fdc48: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fdc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2fdc4c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2fdc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdc50: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2fdc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2fdc54: 0x3c023fb3  lui         $v0, 0x3FB3
    ctx->pc = 0x2fdc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
    // 0x2fdc58: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2fdc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2fdc5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdc5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdc60: 0x0  nop
    ctx->pc = 0x2fdc60u;
    // NOP
    // 0x2fdc64: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x2fdc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x2fdc68: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2fdc68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2fdc6c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FDC6Cu;
    SET_GPR_U32(ctx, 31, 0x2FDC74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FDC6Cu, 0x2FDC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC74u;
label_2fdc74:
    // 0x2fdc74: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2fdc74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fdc78: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x2fdc78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2fdc7c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2fdc7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fdc80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fdc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fdc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdc88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2fdc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fdc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC94u;
}
