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

// Function: Camera_Subjection_init
// Address: 0x1832f0 - 0x18339c
void Camera_Subjection_init_0x1832f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_Subjection_init_0x1832f0");
#endif

    switch (ctx->pc) {
        case 0x183370u: goto label_183370;
        case 0x18337cu: goto label_18337c;
        default: break;
    }

    ctx->pc = 0x1832f0u;

    // 0x1832f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1832f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1832f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1832f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1832f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1832f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1832fc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1832fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x183300: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x183300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x183304: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x183304u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x183308: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x183308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x18330c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18330cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183310: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183314: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x183314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x183318: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183318u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18331c: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x18331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x183320: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183320u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183324: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183328: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x183328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x18332c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18332cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183330: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183334: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x183334u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x183338: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x183338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18333c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18333cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x183340: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x183340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183348: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x183348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18334c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x18334cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x183350: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x183350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x183354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183358: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x183358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18335c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x18335cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183360: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x183360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x183364: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x183364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183368: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x183368u;
    SET_GPR_U32(ctx, 31, 0x183370u);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x183368u, 0x183370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183370u;
label_183370:
    // 0x183370: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x183370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183374: 0xc060ce8  jal         func_1833A0
    ctx->pc = 0x183374u;
    SET_GPR_U32(ctx, 31, 0x18337Cu);
    ctx->pc = 0x1833A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1833A0u, 0x183374u, 0x18337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18337Cu;
label_18337c:
    // 0x18337c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x18337cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x183380: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x183380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183384: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x183384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x183388: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x183388u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18338c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18338cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183390: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x183390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183394: 0x3e00008  jr          $ra
    ctx->pc = 0x183394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18339Cu;
}
