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

// Function: Camera_transration2_init
// Address: 0x182fd0 - 0x1830b4
void Camera_transration2_init_0x182fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_transration2_init_0x182fd0");
#endif

    switch (ctx->pc) {
        case 0x183088u: goto label_183088;
        case 0x183094u: goto label_183094;
        default: break;
    }

    ctx->pc = 0x182fd0u;

    // 0x182fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x182fd4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x182fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x182fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182fdc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x182fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x182fe0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x182fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x182fe4: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x182fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x182fe8: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x182fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x182fec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x182fecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182ff0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x182ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182ff4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x182ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x182ff8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x182ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x182ffc: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x182ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x183000: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183000u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183004: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183008: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x183008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x18300c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18300cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183010: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183014: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x183014u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x183018: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x183018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18301c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18301cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x183020: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x183020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x183024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183028: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x183028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18302c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183030: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x183030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x183034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183038: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x183038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18303c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18303cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x183040: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183044: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x183044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x183048: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18304c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x18304cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x183050: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x183050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183054: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x183054u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x183058: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x183058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18305c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183060: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x183060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x183064: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x183064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x183068: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x183068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x18306c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183070: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x183070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183074: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183078: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x183078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x18307c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x18307cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183080: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x183080u;
    SET_GPR_U32(ctx, 31, 0x183088u);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x183080u, 0x183088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183088u;
label_183088:
    // 0x183088: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x183088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18308c: 0xc060c30  jal         func_1830C0
    ctx->pc = 0x18308Cu;
    SET_GPR_U32(ctx, 31, 0x183094u);
    ctx->pc = 0x1830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1830C0u, 0x18308Cu, 0x183094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183094u;
label_183094:
    // 0x183094: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x183094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x183098: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x183098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18309c: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x18309cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1830a0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1830a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1830a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1830a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1830a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1830a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1830ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1830ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1830ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1830B4u;
}
