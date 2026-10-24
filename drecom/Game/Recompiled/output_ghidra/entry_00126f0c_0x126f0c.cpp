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

// Function: entry_00126f0c
// Address: 0x126f0c - 0x126f64
void entry_00126f0c_0x126f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126f0c_0x126f0c");
#endif

    switch (ctx->pc) {
        case 0x126f14u: goto label_126f14;
        default: break;
    }

    ctx->pc = 0x126f0cu;

    // 0x126f0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x126F0Cu;
    SET_GPR_U32(ctx, 31, 0x126F14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x126F0Cu, 0x126F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F14u;
label_126f14:
    // 0x126f14: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x126f14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x126f18: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x126f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x126f1c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x126f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x126f20: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x126F20u;
    {
        const bool branch_taken_0x126f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126f20) {
            ctx->pc = 0x126F64u;
            return;
        }
    }
    ctx->pc = 0x126F28u;
    // 0x126f28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126f2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126f30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126f34: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x126f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x126f38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126f3c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126f40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126f44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126f44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126f48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126f4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126f50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126f54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126f58: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x126f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x126f5c: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x126F5Cu;
    {
        const bool branch_taken_0x126f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126f5c) {
            ctx->pc = 0x127374u;
            return;
        }
    }
    ctx->pc = 0x126F64u;
}
