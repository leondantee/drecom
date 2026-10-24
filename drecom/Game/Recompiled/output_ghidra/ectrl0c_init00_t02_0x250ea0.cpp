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

// Function: ectrl0c_init00_t02
// Address: 0x250ea0 - 0x250fb8
void ectrl0c_init00_t02_0x250ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0c_init00_t02_0x250ea0");
#endif

    switch (ctx->pc) {
        case 0x250f98u: goto label_250f98;
        case 0x250fa4u: goto label_250fa4;
        default: break;
    }

    ctx->pc = 0x250ea0u;

    // 0x250ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250ea4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x250ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x250ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x250ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x250eac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x250eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x250eb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x250eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250eb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250eb8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x250eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x250ebc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250ec0: 0x8c5000c4  lw          $s0, 0xC4($v0)
    ctx->pc = 0x250ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x250ec4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250ec8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x250ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x250ecc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250ed0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250ed4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250ed8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250edc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250ee0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250ee4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250ee8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250eec: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x250eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x250ef0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250ef4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250ef8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250efc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250f00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250f04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250f08: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x250f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x250f0c: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x250f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x250f10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250f14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250f18: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250f1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250f20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250f24: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250f28: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x250f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x250f2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250f30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250f34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250f38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250f3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250f40: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x250f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x250f44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250f48: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250f4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250f50: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250f54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250f58: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250f5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250f60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250f64: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250f68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250f6c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250f70: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250f74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250f78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250f7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250f80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250f84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250f88: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x250f88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x250f8c: 0x24041800  addiu       $a0, $zero, 0x1800
    ctx->pc = 0x250f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x250f90: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x250F90u;
    SET_GPR_U32(ctx, 31, 0x250F98u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x250F90u, 0x250F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F98u;
label_250f98:
    // 0x250f98: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250f98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250f9c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x250F9Cu;
    SET_GPR_U32(ctx, 31, 0x250FA4u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x250F9Cu, 0x250FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FA4u;
label_250fa4:
    // 0x250fa4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x250fa4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250fac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x250facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x250FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250FB8u;
}
