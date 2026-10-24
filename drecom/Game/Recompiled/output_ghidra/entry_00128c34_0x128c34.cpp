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

// Function: entry_00128c34
// Address: 0x128c34 - 0x128c84
void entry_00128c34_0x128c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128c34_0x128c34");
#endif

    switch (ctx->pc) {
        case 0x128c44u: goto label_128c44;
        default: break;
    }

    ctx->pc = 0x128c34u;

    // 0x128c34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128c38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128c3c: 0xc05d25c  jal         func_174970
    ctx->pc = 0x128C3Cu;
    SET_GPR_U32(ctx, 31, 0x128C44u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128C3Cu, 0x128C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C44u;
label_128c44:
    // 0x128c44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x128C44u;
    {
        const bool branch_taken_0x128c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c44) {
            ctx->pc = 0x128C84u;
            return;
        }
    }
    ctx->pc = 0x128C4Cu;
    // 0x128c4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128c50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128c54: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128c58: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x128c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x128c5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128c60: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128c60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x128c64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128c68: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128c68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128c6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128c70: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128c70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x128c74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128c78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x128c7c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x128C7Cu;
    {
        const bool branch_taken_0x128c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c7c) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x128C84u;
}
