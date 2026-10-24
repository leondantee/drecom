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

// Function: Em01_hokan_rotation
// Address: 0x3080e0 - 0x3081c0
void Em01_hokan_rotation_0x3080e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_hokan_rotation_0x3080e0");
#endif

    switch (ctx->pc) {
        case 0x308100u: goto label_308100;
        case 0x308118u: goto label_308118;
        case 0x30812cu: goto label_30812c;
        case 0x308150u: goto label_308150;
        case 0x308160u: goto label_308160;
        case 0x308178u: goto label_308178;
        case 0x30818cu: goto label_30818c;
        case 0x3081b0u: goto label_3081b0;
        default: break;
    }

    ctx->pc = 0x3080e0u;

    // 0x3080e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3080e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3080e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3080e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3080e8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x3080e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x3080ec: 0xe7ac0058  swc1        $f12, 0x58($sp)
    ctx->pc = 0x3080ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3080f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3080f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3080f4: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x3080f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3080f8: 0xc067844  jal         func_19E110
    ctx->pc = 0x3080F8u;
    SET_GPR_U32(ctx, 31, 0x308100u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x3080F8u, 0x308100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308100u;
label_308100:
    // 0x308100: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x308100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308104: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x308104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x308108: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x308108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30810c: 0x24450240  addiu       $a1, $v0, 0x240
    ctx->pc = 0x30810cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x308110: 0xc040c9e  jal         func_103278
    ctx->pc = 0x308110u;
    SET_GPR_U32(ctx, 31, 0x308118u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x308118u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x308118u) { return; }
    ctx->pc = 0x308118u;
label_308118:
    // 0x308118: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x308118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30811c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x308120: 0x24440240  addiu       $a0, $v0, 0x240
    ctx->pc = 0x308120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x308124: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x308124u;
    SET_GPR_U32(ctx, 31, 0x30812Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x308124u, 0x30812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30812Cu;
label_30812c:
    // 0x30812c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x30812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308130: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x308130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x308134: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x308134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308138: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x308138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30813c: 0x24640210  addiu       $a0, $v1, 0x210
    ctx->pc = 0x30813cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x308140: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x308140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x308144: 0x24460210  addiu       $a2, $v0, 0x210
    ctx->pc = 0x308144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x308148: 0xc040c00  jal         func_103000
    ctx->pc = 0x308148u;
    SET_GPR_U32(ctx, 31, 0x308150u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x308150u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x308150u) { return; }
    ctx->pc = 0x308150u;
label_308150:
    // 0x308150: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x308150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x308154: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x308154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308158: 0xc067844  jal         func_19E110
    ctx->pc = 0x308158u;
    SET_GPR_U32(ctx, 31, 0x308160u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x308158u, 0x308160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308160u;
label_308160:
    // 0x308160: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x308160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308164: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x308164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x308168: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x308168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30816c: 0x24451e60  addiu       $a1, $v0, 0x1E60
    ctx->pc = 0x30816cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7776));
    // 0x308170: 0xc040c9e  jal         func_103278
    ctx->pc = 0x308170u;
    SET_GPR_U32(ctx, 31, 0x308178u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x308178u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x308178u) { return; }
    ctx->pc = 0x308178u;
label_308178:
    // 0x308178: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x308178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30817c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x308180: 0x24441e60  addiu       $a0, $v0, 0x1E60
    ctx->pc = 0x308180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7776));
    // 0x308184: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x308184u;
    SET_GPR_U32(ctx, 31, 0x30818Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x308184u, 0x30818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30818Cu;
label_30818c:
    // 0x30818c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x30818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308190: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x308190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x308194: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x308194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308198: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x308198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30819c: 0x24641e30  addiu       $a0, $v1, 0x1E30
    ctx->pc = 0x30819cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7728));
    // 0x3081a0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3081a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3081a4: 0x24461e30  addiu       $a2, $v0, 0x1E30
    ctx->pc = 0x3081a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7728));
    // 0x3081a8: 0xc040c00  jal         func_103000
    ctx->pc = 0x3081A8u;
    SET_GPR_U32(ctx, 31, 0x3081B0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x3081B0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3081B0u) { return; }
    ctx->pc = 0x3081B0u;
label_3081b0:
    // 0x3081b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3081b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3081b4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3081b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3081b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3081B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3081B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3081C0u;
}
