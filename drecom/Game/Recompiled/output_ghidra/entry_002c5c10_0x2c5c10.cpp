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

// Function: entry_002c5c10
// Address: 0x2c5c10 - 0x2c5c60
void entry_002c5c10_0x2c5c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5c10_0x2c5c10");
#endif

    switch (ctx->pc) {
        case 0x2c5c3cu: goto label_2c5c3c;
        case 0x2c5c58u: goto label_2c5c58;
        default: break;
    }

    ctx->pc = 0x2c5c10u;

    // 0x2c5c10: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c18: 0x3c023cd6  lui         $v0, 0x3CD6
    ctx->pc = 0x2c5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15574 << 16));
    // 0x2c5c1c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2c5c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2c5c20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c5c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c5c24: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c5c28: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c5c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c5c2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c5c30: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c5c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c5c34: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C5C34u;
    SET_GPR_U32(ctx, 31, 0x2C5C3Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C5C34u, 0x2C5C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C3Cu;
label_2c5c3c:
    // 0x2c5c3c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2c5c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c5c40: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c44: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c5c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5c48: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2c5c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5c4c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c5c4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c5c50: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C5C50u;
    SET_GPR_U32(ctx, 31, 0x2C5C58u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C5C50u, 0x2C5C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C58u;
label_2c5c58:
    // 0x2c5c58: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c5c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c5c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x2c5c60u;
}
