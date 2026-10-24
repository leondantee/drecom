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

// Function: entry_002c5b9c
// Address: 0x2c5b9c - 0x2c5c10
void entry_002c5b9c_0x2c5b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5b9c_0x2c5b9c");
#endif

    switch (ctx->pc) {
        case 0x2c5ba4u: goto label_2c5ba4;
        case 0x2c5be4u: goto label_2c5be4;
        case 0x2c5c00u: goto label_2c5c00;
        default: break;
    }

    ctx->pc = 0x2c5b9cu;

    // 0x2c5b9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C5B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C5BA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C5B9Cu, 0x2C5BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5BA4u;
label_2c5ba4:
    // 0x2c5ba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5ba8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2c5ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c5bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5bb0: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C5BB0u;
    {
        const bool branch_taken_0x2c5bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5bb0) {
            ctx->pc = 0x2C5C10u;
            return;
        }
    }
    ctx->pc = 0x2C5BB8u;
    // 0x2c5bb8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5bbc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5bc0: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2c5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2c5bc4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2c5bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2c5bc8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c5bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c5bcc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c5bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c5bd0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c5bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c5bd4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c5bd8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c5bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c5bdc: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C5BDCu;
    SET_GPR_U32(ctx, 31, 0x2C5BE4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C5BDCu, 0x2C5BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5BE4u;
label_2c5be4:
    // 0x2c5be4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2c5be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c5be8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5bec: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c5becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5bf0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2c5bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5bf4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c5bf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c5bf8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C5BF8u;
    SET_GPR_U32(ctx, 31, 0x2C5C00u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C5BF8u, 0x2C5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C00u;
label_2c5c00:
    // 0x2c5c00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c04: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c5c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c5c08: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C5C08u;
    {
        const bool branch_taken_0x2c5c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5c08) {
            ctx->pc = 0x2C5C60u;
            return;
        }
    }
    ctx->pc = 0x2C5C10u;
}
