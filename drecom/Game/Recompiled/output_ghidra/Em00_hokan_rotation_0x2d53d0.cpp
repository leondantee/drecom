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

// Function: Em00_hokan_rotation
// Address: 0x2d53d0 - 0x2d5460
void Em00_hokan_rotation_0x2d53d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_hokan_rotation_0x2d53d0");
#endif

    switch (ctx->pc) {
        case 0x2d53f0u: goto label_2d53f0;
        case 0x2d5400u: goto label_2d5400;
        case 0x2d5418u: goto label_2d5418;
        case 0x2d542cu: goto label_2d542c;
        case 0x2d5450u: goto label_2d5450;
        default: break;
    }

    ctx->pc = 0x2d53d0u;

    // 0x2d53d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d53d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d53d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d53d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d53d8: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2d53d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2d53dc: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x2d53dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2d53e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d53e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d53e4: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x2d53e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d53e8: 0xc067844  jal         func_19E110
    ctx->pc = 0x2D53E8u;
    SET_GPR_U32(ctx, 31, 0x2D53F0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x2D53E8u, 0x2D53F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D53F0u;
label_2d53f0:
    // 0x2d53f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d53f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d53f4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d53f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d53f8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2D53F8u;
    SET_GPR_U32(ctx, 31, 0x2D5400u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2D5400u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D5400u) { return; }
    ctx->pc = 0x2D5400u;
label_2d5400:
    // 0x2d5400: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d5400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d5404: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d5404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d5408: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2d5408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d540c: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2d540cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2d5410: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2D5410u;
    SET_GPR_U32(ctx, 31, 0x2D5418u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2D5418u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D5418u) { return; }
    ctx->pc = 0x2D5418u;
label_2d5418:
    // 0x2d5418: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d5418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d541c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d5420: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2d5420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2d5424: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2D5424u;
    SET_GPR_U32(ctx, 31, 0x2D542Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2D5424u, 0x2D542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D542Cu;
label_2d542c:
    // 0x2d542c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d5430: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x2d5430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d5434: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d5434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d5438: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d5438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d543c: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x2d543cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2d5440: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d5440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5444: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x2d5444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2d5448: 0xc040c00  jal         func_103000
    ctx->pc = 0x2D5448u;
    SET_GPR_U32(ctx, 31, 0x2D5450u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2D5450u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D5450u) { return; }
    ctx->pc = 0x2D5450u;
label_2d5450:
    // 0x2d5450: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d5450u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5454: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2d5454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d5458: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5460u;
}
