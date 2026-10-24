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

// Function: Camera_transration1
// Address: 0x182ec0 - 0x182fc4
void Camera_transration1_0x182ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_transration1_0x182ec0");
#endif

    switch (ctx->pc) {
        case 0x182f0cu: goto label_182f0c;
        case 0x182f60u: goto label_182f60;
        case 0x182fa4u: goto label_182fa4;
        case 0x182fb0u: goto label_182fb0;
        default: break;
    }

    ctx->pc = 0x182ec0u;

    // 0x182ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182ec4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x182ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x182ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182ecc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x182eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x182ed0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x182ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x182ed4: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x182ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x182ed8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182edc: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182edcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182ee0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182ee4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182ee4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182ee8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182ef0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182ef4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182ef8: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182efc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x182efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182f00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x182f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x182f04: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x182F04u;
    SET_GPR_U32(ctx, 31, 0x182F0Cu);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x182F04u, 0x182F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F0Cu;
label_182f0c:
    // 0x182f0c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x182f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x182f10: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x182f10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182f14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x182f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182f18: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x182f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x182f1c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x182f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x182f20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x182f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182f24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182f28: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182f28u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182f2c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182f30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182f30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182f34: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182f3c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182f40: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182f44: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182f48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182f4c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x182f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x182f50: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x182f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x182f54: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x182f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x182f58: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x182F58u;
    SET_GPR_U32(ctx, 31, 0x182F60u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x182F58u, 0x182F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F60u;
label_182f60:
    // 0x182f60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182f64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x182f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182f68: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x182f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x182f6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x182f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182f70: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x182f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x182f74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x182F74u;
    {
        const bool branch_taken_0x182f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182f74) {
            ctx->pc = 0x182F88u;
            goto label_182f88;
        }
    }
    ctx->pc = 0x182F7Cu;
    // 0x182f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182f80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x182f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182f84: 0xac4300b8  sw          $v1, 0xB8($v0)
    ctx->pc = 0x182f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
label_182f88:
    // 0x182f88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x182f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x182f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182f90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x182f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182f94: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x182f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x182f98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x182f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182f9c: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x182F9Cu;
    SET_GPR_U32(ctx, 31, 0x182FA4u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x182F9Cu, 0x182FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FA4u;
label_182fa4:
    // 0x182fa4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x182fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182fa8: 0xc05f910  jal         func_17E440
    ctx->pc = 0x182FA8u;
    SET_GPR_U32(ctx, 31, 0x182FB0u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x182FA8u, 0x182FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FB0u;
label_182fb0:
    // 0x182fb0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x182fb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182fb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x182fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x182fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x182FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182FC4u;
}
