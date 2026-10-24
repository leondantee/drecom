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

// Function: entry_00363cd8
// Address: 0x363cd8 - 0x363d20
void entry_00363cd8_0x363cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363cd8_0x363cd8");
#endif

    switch (ctx->pc) {
        case 0x363ce0u: goto label_363ce0;
        default: break;
    }

    ctx->pc = 0x363cd8u;

    // 0x363cd8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x363CD8u;
    SET_GPR_U32(ctx, 31, 0x363CE0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x363CD8u, 0x363CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363CE0u;
label_363ce0:
    // 0x363ce0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x363ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363ce4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x363ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x363ce8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x363CE8u;
    {
        const bool branch_taken_0x363ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x363ce8) {
            ctx->pc = 0x363D20u;
            return;
        }
    }
    ctx->pc = 0x363CF0u;
    // 0x363cf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363cf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363cf8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363cfc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x363cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x363d00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d04: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363d04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363d08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d0c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363d10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d14: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363d18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x363d20u;
}
