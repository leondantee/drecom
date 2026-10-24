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

// Function: entry_002a2dd0
// Address: 0x2a2dd0 - 0x2a2e54
void entry_002a2dd0_0x2a2dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2dd0_0x2a2dd0");
#endif

    switch (ctx->pc) {
        case 0x2a2e14u: goto label_2a2e14;
        case 0x2a2e30u: goto label_2a2e30;
        default: break;
    }

    ctx->pc = 0x2a2dd0u;

    // 0x2a2dd0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2dd4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2a2dd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2a2dd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a2dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2ddc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2a2ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2a2de0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A2DE0u;
    {
        const bool branch_taken_0x2a2de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2de0) {
            ctx->pc = 0x2A2E54u;
            return;
        }
    }
    ctx->pc = 0x2A2DE8u;
    // 0x2a2de8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2dec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2df0: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2a2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2a2df4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2a2df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2a2df8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a2df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a2dfc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a2e00: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a2e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2e04: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a2e08: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a2e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a2e0c: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A2E0Cu;
    SET_GPR_U32(ctx, 31, 0x2A2E14u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A2E0Cu, 0x2A2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E14u;
label_2a2e14:
    // 0x2a2e14: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a2e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a2e18: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e1c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a2e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2e20: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a2e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2e24: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a2e24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2e28: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A2E28u;
    SET_GPR_U32(ctx, 31, 0x2A2E30u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A2E28u, 0x2A2E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E30u;
label_2a2e30:
    // 0x2a2e30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e34: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a2e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a2e38: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2e40: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2a2e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2e44: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e48: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2a2e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2e4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2e4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2e50: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2a2e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x2a2e54u;
}
