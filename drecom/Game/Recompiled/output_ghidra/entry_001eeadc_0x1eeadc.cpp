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

// Function: entry_001eeadc
// Address: 0x1eeadc - 0x1eeb2c
void entry_001eeadc_0x1eeadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eeadc_0x1eeadc");
#endif

    switch (ctx->pc) {
        case 0x1eeb20u: goto label_1eeb20;
        default: break;
    }

    ctx->pc = 0x1eeadcu;

    // 0x1eeadc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1eeadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeae0: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x1eeae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eeae4: 0x8cc70030  lw          $a3, 0x30($a2)
    ctx->pc = 0x1eeae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1eeae8: 0x30e81000  andi        $t0, $a3, 0x1000
    ctx->pc = 0x1eeae8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
    // 0x1eeaec: 0x1500000f  bnez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EEAECu;
    {
        const bool branch_taken_0x1eeaec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eeaec) {
            ctx->pc = 0x1EEB2Cu;
            return;
        }
    }
    ctx->pc = 0x1EEAF4u;
    // 0x1eeaf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eeaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeaf8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1eeaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeafc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eeafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeb00: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eeb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eeb04: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1eeb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1eeb08: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1eeb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eeb0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1eeb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1eeb10: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1eeb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1eeb14: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1eeb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eeb18: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EEB18u;
    SET_GPR_U32(ctx, 31, 0x1EEB20u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EEB18u, 0x1EEB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB20u;
label_1eeb20:
    // 0x1eeb20: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1eeb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1eeb24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EEB24u;
    {
        const bool branch_taken_0x1eeb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb24) {
            ctx->pc = 0x1EEB70u;
            return;
        }
    }
    ctx->pc = 0x1EEB2Cu;
}
