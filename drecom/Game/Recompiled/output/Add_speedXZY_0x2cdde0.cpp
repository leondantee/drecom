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

// Function: Add_speedXZY
// Address: 0x2cdde0 - 0x2cde70
void Add_speedXZY_0x2cdde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Add_speedXZY_0x2cdde0");
#endif

    switch (ctx->pc) {
        case 0x2cde00u: goto label_2cde00;
        case 0x2cde18u: goto label_2cde18;
        case 0x2cde30u: goto label_2cde30;
        case 0x2cde44u: goto label_2cde44;
        case 0x2cde60u: goto label_2cde60;
        default: break;
    }

    ctx->pc = 0x2cdde0u;

    // 0x2cdde0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cdde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cdde4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2cdde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2cdde8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2cdde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x2cddec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cddf0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2cddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cddf4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2cddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cddf8: 0xc067844  jal         func_19E110
    ctx->pc = 0x2CDDF8u;
    SET_GPR_U32(ctx, 31, 0x2CDE00u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x2CDDF8u, 0x2CDE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE00u;
label_2cde00:
    // 0x2cde00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cde00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cde04: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2cde04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cde08: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2cde08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cde0c: 0xc44c00d8  lwc1        $f12, 0xD8($v0)
    ctx->pc = 0x2cde0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cde10: 0xc040ce4  jal         func_103390
    ctx->pc = 0x2CDE10u;
    SET_GPR_U32(ctx, 31, 0x2CDE18u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x2CDE18u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CDE18u) { return; }
    ctx->pc = 0x2CDE18u;
label_2cde18:
    // 0x2cde18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cde18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cde1c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2cde1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cde20: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2cde20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cde24: 0xc44c00d0  lwc1        $f12, 0xD0($v0)
    ctx->pc = 0x2cde24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cde28: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2CDE28u;
    SET_GPR_U32(ctx, 31, 0x2CDE30u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2CDE30u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CDE30u) { return; }
    ctx->pc = 0x2CDE30u;
label_2cde30:
    // 0x2cde30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cde30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cde34: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2cde34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cde38: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2cde38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2cde3c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2CDE3Cu;
    SET_GPR_U32(ctx, 31, 0x2CDE44u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2CDE44u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CDE44u) { return; }
    ctx->pc = 0x2CDE44u;
label_2cde44:
    // 0x2cde44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cde44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cde48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cde48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cde4c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2cde4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cde50: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2cde50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cde54: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cde54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cde58: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2CDE58u;
    SET_GPR_U32(ctx, 31, 0x2CDE60u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2CDE60u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CDE60u) { return; }
    ctx->pc = 0x2CDE60u;
label_2cde60:
    // 0x2cde60: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2cde60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cde64: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2cde64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2cde68: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDE70u;
}
