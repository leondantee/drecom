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

// Function: Set_effect_em00_yougan
// Address: 0x357e20 - 0x357ec8
void Set_effect_em00_yougan_0x357e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em00_yougan_0x357e20");
#endif

    switch (ctx->pc) {
        case 0x357e98u: goto label_357e98;
        default: break;
    }

    ctx->pc = 0x357e20u;

    // 0x357e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x357e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x357e24: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x357e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x357e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x357e2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x357e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x357e30: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x357e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x357e34: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x357e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x357e38: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x357e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x357e3c: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x357e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
    // 0x357e40: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x357e40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x357e44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x357e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357e48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x357e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x357e4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x357e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x357e50: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x357e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x357e54: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x357e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x357e58: 0x34440017  ori         $a0, $v0, 0x17
    ctx->pc = 0x357e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
    // 0x357e5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x357e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357e60: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x357e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x357e64: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x357e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x357e68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x357e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x357e6c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357e70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x357e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x357e74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357e78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x357e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x357e7c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x357e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x357e80: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x357e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357e84: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x357e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x357e88: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x357e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x357e8c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x357e8cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357e90: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x357E90u;
    SET_GPR_U32(ctx, 31, 0x357E98u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x357E90u, 0x357E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E98u;
label_357e98:
    // 0x357e98: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x357e98u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357e9c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x357e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x357ea0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x357ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x357ea4: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x357EA4u;
    {
        const bool branch_taken_0x357ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x357ea4) {
            ctx->pc = 0x357EB4u;
            goto label_357eb4;
        }
    }
    ctx->pc = 0x357EACu;
    // 0x357eac: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x357eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357eb0: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x357eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_357eb4:
    // 0x357eb4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x357eb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357ebc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x357ebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x357ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x357EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357EC8u;
}
