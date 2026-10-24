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

// Function: Add_speedXYZ
// Address: 0x1734d0 - 0x173560
void Add_speedXYZ_0x1734d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Add_speedXYZ_0x1734d0");
#endif

    switch (ctx->pc) {
        case 0x1734f0u: goto label_1734f0;
        case 0x173508u: goto label_173508;
        case 0x173520u: goto label_173520;
        case 0x173534u: goto label_173534;
        case 0x173550u: goto label_173550;
        default: break;
    }

    ctx->pc = 0x1734d0u;

    // 0x1734d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1734d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1734d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1734d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1734d8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1734d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1734dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1734dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1734e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1734e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1734e4: 0xc44c00d0  lwc1        $f12, 0xD0($v0)
    ctx->pc = 0x1734e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1734e8: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x1734E8u;
    SET_GPR_U32(ctx, 31, 0x1734F0u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x1734E8u, 0x1734F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734F0u;
label_1734f0:
    // 0x1734f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1734f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1734f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1734f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1734f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1734f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1734fc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1734fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173500: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x173500u;
    SET_GPR_U32(ctx, 31, 0x173508u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x173508u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173508u) { return; }
    ctx->pc = 0x173508u;
label_173508:
    // 0x173508: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17350c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173510: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x173510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173514: 0xc44c00d8  lwc1        $f12, 0xD8($v0)
    ctx->pc = 0x173514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173518: 0xc040ce4  jal         func_103390
    ctx->pc = 0x173518u;
    SET_GPR_U32(ctx, 31, 0x173520u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x173520u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173520u) { return; }
    ctx->pc = 0x173520u;
label_173520:
    // 0x173520: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173524: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x173524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173528: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x173528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x17352c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x17352Cu;
    SET_GPR_U32(ctx, 31, 0x173534u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x173534u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173534u) { return; }
    ctx->pc = 0x173534u;
label_173534:
    // 0x173534: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x173534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173538: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17353c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x17353cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x173540: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x173540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173544: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x173544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x173548: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x173548u;
    SET_GPR_U32(ctx, 31, 0x173550u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x173550u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173550u) { return; }
    ctx->pc = 0x173550u;
label_173550:
    // 0x173550: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x173550u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173554: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x173554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173558: 0x3e00008  jr          $ra
    ctx->pc = 0x173558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173560u;
}
