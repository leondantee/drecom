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

// Function: entry_002d19e0
// Address: 0x2d19e0 - 0x2d1a50
void entry_002d19e0_0x2d19e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d19e0_0x2d19e0");
#endif

    switch (ctx->pc) {
        case 0x2d1a10u: goto label_2d1a10;
        default: break;
    }

    ctx->pc = 0x2d19e0u;

    // 0x2d19e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19e4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d19e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d19e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d19e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19ec: 0x3c023e65  lui         $v0, 0x3E65
    ctx->pc = 0x2d19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15973 << 16));
    // 0x2d19f0: 0x3442c8fa  ori         $v0, $v0, 0xC8FA
    ctx->pc = 0x2d19f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51450);
    // 0x2d19f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d19f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d19f8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d19f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d19fc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d19fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1a00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d1a04: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d1a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d1a08: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1A08u;
    SET_GPR_U32(ctx, 31, 0x2D1A10u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1A08u, 0x2D1A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A10u;
label_2d1a10:
    // 0x2d1a10: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D1A10u;
    {
        const bool branch_taken_0x2d1a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a10) {
            ctx->pc = 0x2D1A50u;
            return;
        }
    }
    ctx->pc = 0x2D1A18u;
    // 0x2d1a18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1a1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1a24: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2d1a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2d1a28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a2c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1a30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1a38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1a40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d1a48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D1A48u;
    {
        const bool branch_taken_0x2d1a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a48) {
            ctx->pc = 0x2D1A80u;
            return;
        }
    }
    ctx->pc = 0x2D1A50u;
}
