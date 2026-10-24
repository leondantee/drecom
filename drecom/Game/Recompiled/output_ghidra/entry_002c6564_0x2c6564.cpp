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

// Function: entry_002c6564
// Address: 0x2c6564 - 0x2c65f0
void entry_002c6564_0x2c6564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6564_0x2c6564");
#endif

    switch (ctx->pc) {
        case 0x2c6598u: goto label_2c6598;
        case 0x2c65c4u: goto label_2c65c4;
        default: break;
    }

    ctx->pc = 0x2c6564u;

    // 0x2c6564: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c6564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6568: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c656c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c6570: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c6570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c6574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c6574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6578: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2c6578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c657c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2c657cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6580: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c6580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c6584: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c6584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c6588: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c6588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c658c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c6590: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C6590u;
    SET_GPR_U32(ctx, 31, 0x2C6598u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C6590u, 0x2C6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6598u;
label_2c6598:
    // 0x2c6598: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2c6598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c659c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c65a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c65a4: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x2c65a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c65a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c65ac: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c65acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c65b0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2c65b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c65b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c65b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c65b8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2c65b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c65bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C65BCu;
    SET_GPR_U32(ctx, 31, 0x2C65C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C65BCu, 0x2C65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C65C4u;
label_2c65c4:
    // 0x2c65c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c65c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c65c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c65cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c65d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c65d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c65d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C65D8u;
    {
        const bool branch_taken_0x2c65d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c65d8) {
            ctx->pc = 0x2C65F0u;
            return;
        }
    }
    ctx->pc = 0x2C65E0u;
    // 0x2c65e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c65e4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2c65e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c65e8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C65E8u;
    {
        const bool branch_taken_0x2c65e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c65e8) {
            ctx->pc = 0x2C6678u;
            return;
        }
    }
    ctx->pc = 0x2C65F0u;
}
