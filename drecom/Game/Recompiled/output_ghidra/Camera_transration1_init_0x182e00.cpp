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

// Function: Camera_transration1_init
// Address: 0x182e00 - 0x182eb8
void Camera_transration1_init_0x182e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_transration1_init_0x182e00");
#endif

    switch (ctx->pc) {
        case 0x182e8cu: goto label_182e8c;
        case 0x182e98u: goto label_182e98;
        default: break;
    }

    ctx->pc = 0x182e00u;

    // 0x182e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x182e04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x182e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x182e08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182e0c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x182e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x182e10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x182e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x182e14: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x182e14u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x182e18: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x182e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x182e1c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x182e1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182e20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x182e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182e24: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x182e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x182e28: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x182e28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x182e2c: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x182e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x182e30: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x182e30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182e34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x182e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182e38: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x182e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x182e3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x182e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x182e40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182e44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x182e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182e48: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x182e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x182e4c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182e50: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182e50u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182e54: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182e58: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182e58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182e5c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182e64: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182e68: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182e6c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182e70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182e74: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x182e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182e78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x182e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182e7c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x182e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x182e80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x182e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182e84: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x182E84u;
    SET_GPR_U32(ctx, 31, 0x182E8Cu);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x182E84u, 0x182E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E8Cu;
label_182e8c:
    // 0x182e8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x182e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182e90: 0xc060bb0  jal         func_182EC0
    ctx->pc = 0x182E90u;
    SET_GPR_U32(ctx, 31, 0x182E98u);
    ctx->pc = 0x182EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182EC0u, 0x182E90u, 0x182E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E98u;
label_182e98:
    // 0x182e98: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x182e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x182e9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x182e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182ea0: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x182ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x182ea4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x182ea4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182eac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x182eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x182eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x182EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182EB8u;
}
