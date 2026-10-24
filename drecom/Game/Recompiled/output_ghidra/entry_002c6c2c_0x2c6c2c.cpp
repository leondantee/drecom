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

// Function: entry_002c6c2c
// Address: 0x2c6c2c - 0x2c6c8c
void entry_002c6c2c_0x2c6c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6c2c_0x2c6c2c");
#endif

    switch (ctx->pc) {
        case 0x2c6c68u: goto label_2c6c68;
        case 0x2c6c84u: goto label_2c6c84;
        default: break;
    }

    ctx->pc = 0x2c6c2cu;

    // 0x2c6c2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c30: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2c6c30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2c6c34: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C6C34u;
    {
        const bool branch_taken_0x2c6c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6c34) {
            ctx->pc = 0x2C6C8Cu;
            return;
        }
    }
    ctx->pc = 0x2C6C3Cu;
    // 0x2c6c3c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c6c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c44: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c6c48: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c6c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c6c4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c6c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c6c50: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c6c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c6c54: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c6c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c6c58: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c6c5c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c6c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c6c60: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C6C60u;
    SET_GPR_U32(ctx, 31, 0x2C6C68u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C6C60u, 0x2C6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C68u;
label_2c6c68:
    // 0x2c6c68: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c6c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c6c6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c70: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c6c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6c74: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c6c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c78: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c6c78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6c7c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C6C7Cu;
    SET_GPR_U32(ctx, 31, 0x2C6C84u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C6C7Cu, 0x2C6C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C84u;
label_2c6c84:
    // 0x2c6c84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c88: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c6c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x2c6c8cu;
}
