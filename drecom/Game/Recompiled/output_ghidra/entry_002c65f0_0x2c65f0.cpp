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

// Function: entry_002c65f0
// Address: 0x2c65f0 - 0x2c664c
void entry_002c65f0_0x2c65f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c65f0_0x2c65f0");
#endif

    switch (ctx->pc) {
        case 0x2c6644u: goto label_2c6644;
        default: break;
    }

    ctx->pc = 0x2c65f0u;

    // 0x2c65f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c65f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c65f4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2c65f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c65f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c65fc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2c65fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c6600: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6604: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2c6604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2c6608: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c6608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c660c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c660cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c6610: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2c6610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c6614: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6614u;
    {
        const bool branch_taken_0x2c6614 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6614) {
            ctx->pc = 0x2C664Cu;
            return;
        }
    }
    ctx->pc = 0x2C661Cu;
    // 0x2c661c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6620: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6624: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x2c6624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6628: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c662c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c662cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6630: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2c6630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6634: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6638: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2c6638u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c663c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C663Cu;
    SET_GPR_U32(ctx, 31, 0x2C6644u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C663Cu, 0x2C6644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6644u;
label_2c6644:
    // 0x2c6644: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6648: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c6648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x2c664cu;
}
