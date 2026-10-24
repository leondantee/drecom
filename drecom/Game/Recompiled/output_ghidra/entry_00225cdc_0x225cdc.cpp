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

// Function: entry_00225cdc
// Address: 0x225cdc - 0x225d54
void entry_00225cdc_0x225cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225cdc_0x225cdc");
#endif

    switch (ctx->pc) {
        case 0x225cfcu: goto label_225cfc;
        case 0x225d04u: goto label_225d04;
        default: break;
    }

    ctx->pc = 0x225cdcu;

    // 0x225cdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ce0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ce4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x225ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x225ce8: 0x24067808  addiu       $a2, $zero, 0x7808
    ctx->pc = 0x225ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30728));
    // 0x225cec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225cf0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x225cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x225cf4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x225CF4u;
    SET_GPR_U32(ctx, 31, 0x225CFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x225CF4u, 0x225CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CFCu;
label_225cfc:
    // 0x225cfc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225CFCu;
    SET_GPR_U32(ctx, 31, 0x225D04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225CFCu, 0x225D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D04u;
label_225d04:
    // 0x225d04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x225d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225d08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x225d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x225d0c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x225D0Cu;
    {
        const bool branch_taken_0x225d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225d0c) {
            ctx->pc = 0x225D54u;
            return;
        }
    }
    ctx->pc = 0x225D14u;
    // 0x225d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225d18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d1c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x225d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x225d20: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x225d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x225d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225d28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225d30: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x225d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x225d34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x225d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x225d40: 0x2406780a  addiu       $a2, $zero, 0x780A
    ctx->pc = 0x225d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30730));
    // 0x225d44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225d48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x225d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x225d4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x225D4Cu;
    SET_GPR_U32(ctx, 31, 0x225D54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x225D4Cu, 0x225D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D54u;
}
