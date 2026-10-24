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

// Function: entry_00308d6c
// Address: 0x308d6c - 0x308dc8
void entry_00308d6c_0x308d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308d6c_0x308d6c");
#endif

    switch (ctx->pc) {
        case 0x308d7cu: goto label_308d7c;
        case 0x308d88u: goto label_308d88;
        default: break;
    }

    ctx->pc = 0x308d6cu;

    // 0x308d6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x308d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x308d74: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x308D74u;
    SET_GPR_U32(ctx, 31, 0x308D7Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x308D74u, 0x308D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308D7Cu;
label_308d7c:
    // 0x308d7c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d80: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x308D80u;
    SET_GPR_U32(ctx, 31, 0x308D88u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x308D80u, 0x308D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308D88u;
label_308d88:
    // 0x308d88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d8c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x308d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x308d90: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x308D90u;
    {
        const bool branch_taken_0x308d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308d90) {
            ctx->pc = 0x308DC8u;
            return;
        }
    }
    ctx->pc = 0x308D98u;
    // 0x308d98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308d9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308da0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308da8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308dac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x308db0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308db4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308db8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308dbc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308dc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308dc4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x308dc8u;
}
