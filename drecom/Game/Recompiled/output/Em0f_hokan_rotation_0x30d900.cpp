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

// Function: Em0f_hokan_rotation
// Address: 0x30d900 - 0x30d9e0
void Em0f_hokan_rotation_0x30d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_hokan_rotation_0x30d900");
#endif

    switch (ctx->pc) {
        case 0x30d920u: goto label_30d920;
        case 0x30d938u: goto label_30d938;
        case 0x30d94cu: goto label_30d94c;
        case 0x30d970u: goto label_30d970;
        case 0x30d980u: goto label_30d980;
        case 0x30d998u: goto label_30d998;
        case 0x30d9acu: goto label_30d9ac;
        case 0x30d9d0u: goto label_30d9d0;
        default: break;
    }

    ctx->pc = 0x30d900u;

    // 0x30d900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30d904: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30d904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x30d908: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x30d908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x30d90c: 0xe7ac0058  swc1        $f12, 0x58($sp)
    ctx->pc = 0x30d90cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x30d910: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30d910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30d914: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x30d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d918: 0xc067844  jal         func_19E110
    ctx->pc = 0x30D918u;
    SET_GPR_U32(ctx, 31, 0x30D920u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x30D918u, 0x30D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D920u;
label_30d920:
    // 0x30d920: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x30d920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d924: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30d928: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30d928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30d92c: 0x24450240  addiu       $a1, $v0, 0x240
    ctx->pc = 0x30d92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x30d930: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30D930u;
    SET_GPR_U32(ctx, 31, 0x30D938u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30D938u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30D938u) { return; }
    ctx->pc = 0x30D938u;
label_30d938:
    // 0x30d938: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x30d938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d93c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30d940: 0x24440240  addiu       $a0, $v0, 0x240
    ctx->pc = 0x30d940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x30d944: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30D944u;
    SET_GPR_U32(ctx, 31, 0x30D94Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30D944u, 0x30D94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D94Cu;
label_30d94c:
    // 0x30d94c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x30d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d950: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x30d950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30d954: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x30d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d958: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30d95c: 0x24640210  addiu       $a0, $v1, 0x210
    ctx->pc = 0x30d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x30d960: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x30d960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30d964: 0x24460210  addiu       $a2, $v0, 0x210
    ctx->pc = 0x30d964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x30d968: 0xc040c00  jal         func_103000
    ctx->pc = 0x30D968u;
    SET_GPR_U32(ctx, 31, 0x30D970u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x30D970u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30D970u) { return; }
    ctx->pc = 0x30D970u;
label_30d970:
    // 0x30d970: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30d970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30d974: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x30d974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d978: 0xc067844  jal         func_19E110
    ctx->pc = 0x30D978u;
    SET_GPR_U32(ctx, 31, 0x30D980u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x30D978u, 0x30D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D980u;
label_30d980:
    // 0x30d980: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x30d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d984: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30d984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30d988: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30d98c: 0x24451e60  addiu       $a1, $v0, 0x1E60
    ctx->pc = 0x30d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7776));
    // 0x30d990: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30D990u;
    SET_GPR_U32(ctx, 31, 0x30D998u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30D998u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30D998u) { return; }
    ctx->pc = 0x30D998u;
label_30d998:
    // 0x30d998: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x30d998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d99c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30d9a0: 0x24441e60  addiu       $a0, $v0, 0x1E60
    ctx->pc = 0x30d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7776));
    // 0x30d9a4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30D9A4u;
    SET_GPR_U32(ctx, 31, 0x30D9ACu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30D9A4u, 0x30D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D9ACu;
label_30d9ac:
    // 0x30d9ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x30d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d9b0: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x30d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30d9b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x30d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d9b8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30d9bc: 0x24641e30  addiu       $a0, $v1, 0x1E30
    ctx->pc = 0x30d9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7728));
    // 0x30d9c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x30d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30d9c4: 0x24461e30  addiu       $a2, $v0, 0x1E30
    ctx->pc = 0x30d9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7728));
    // 0x30d9c8: 0xc040c00  jal         func_103000
    ctx->pc = 0x30D9C8u;
    SET_GPR_U32(ctx, 31, 0x30D9D0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x30D9D0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30D9D0u) { return; }
    ctx->pc = 0x30D9D0u;
label_30d9d0:
    // 0x30d9d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30d9d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d9d4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x30d9d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30d9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x30D9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D9E0u;
}
