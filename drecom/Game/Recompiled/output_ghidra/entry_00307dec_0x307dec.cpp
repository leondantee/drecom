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

// Function: entry_00307dec
// Address: 0x307dec - 0x307e40
void entry_00307dec_0x307dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307dec_0x307dec");
#endif

    switch (ctx->pc) {
        case 0x307e00u: goto label_307e00;
        default: break;
    }

    ctx->pc = 0x307decu;

    // 0x307dec: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307df0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x307df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x307df4: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x307df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x307df8: 0xc05cd90  jal         func_173640
    ctx->pc = 0x307DF8u;
    SET_GPR_U32(ctx, 31, 0x307E00u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x307DF8u, 0x307E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E00u;
label_307e00:
    // 0x307e00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x307E00u;
    {
        const bool branch_taken_0x307e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e00) {
            ctx->pc = 0x307E40u;
            return;
        }
    }
    ctx->pc = 0x307E08u;
    // 0x307e08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x307e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307e0c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307e10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307e14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307e18: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e1c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x307e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x307e20: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e24: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307e24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e28: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x307e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e30: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x307e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x307e38: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x307E38u;
    {
        const bool branch_taken_0x307e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e38) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x307E40u;
}
