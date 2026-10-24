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

// Function: Add_speedXZ
// Address: 0x173440 - 0x1734d0
void Add_speedXZ_0x173440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Add_speedXZ_0x173440");
#endif

    switch (ctx->pc) {
        case 0x173458u: goto label_173458;
        case 0x173470u: goto label_173470;
        case 0x173484u: goto label_173484;
        case 0x1734a4u: goto label_1734a4;
        case 0x1734c0u: goto label_1734c0;
        default: break;
    }

    ctx->pc = 0x173440u;

    // 0x173440: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x173440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x173444: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x173444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x173448: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x173448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x17344c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173450: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x173450u;
    SET_GPR_U32(ctx, 31, 0x173458u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x173458u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173458u) { return; }
    ctx->pc = 0x173458u;
label_173458:
    // 0x173458: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x173458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17345c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173460: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x173460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173464: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x173464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x173468: 0xc040d62  jal         func_103588
    ctx->pc = 0x173468u;
    SET_GPR_U32(ctx, 31, 0x173470u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x173470u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173470u) { return; }
    ctx->pc = 0x173470u;
label_173470:
    // 0x173470: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x173470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x173474: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x173474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173478: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x173478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x17347c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x17347Cu;
    SET_GPR_U32(ctx, 31, 0x173484u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x173484u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173484u) { return; }
    ctx->pc = 0x173484u;
label_173484:
    // 0x173484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173488: 0x0  nop
    ctx->pc = 0x173488u;
    // NOP
    // 0x17348c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x17348cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x173490: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x173490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173494: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x173494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173498: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x173498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17349c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17349Cu;
    SET_GPR_U32(ctx, 31, 0x1734A4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1734A4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1734A4u) { return; }
    ctx->pc = 0x1734A4u;
label_1734a4:
    // 0x1734a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1734a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1734a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1734a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1734ac: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1734acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1734b0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1734b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1734b4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1734b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1734b8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1734B8u;
    SET_GPR_U32(ctx, 31, 0x1734C0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1734B8u, 0x1734C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734C0u;
label_1734c0:
    // 0x1734c0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1734c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1734c4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1734c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1734c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1734C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1734C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1734D0u;
}
