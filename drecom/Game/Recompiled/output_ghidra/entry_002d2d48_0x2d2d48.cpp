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

// Function: entry_002d2d48
// Address: 0x2d2d48 - 0x2d2da4
void entry_002d2d48_0x2d2d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2d48_0x2d2d48");
#endif

    switch (ctx->pc) {
        case 0x2d2d58u: goto label_2d2d58;
        case 0x2d2d64u: goto label_2d2d64;
        default: break;
    }

    ctx->pc = 0x2d2d48u;

    // 0x2d2d48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2d4c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d2d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d2d50: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D2D50u;
    SET_GPR_U32(ctx, 31, 0x2D2D58u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D2D50u, 0x2D2D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D58u;
label_2d2d58:
    // 0x2d2d58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2d5c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D2D5Cu;
    SET_GPR_U32(ctx, 31, 0x2D2D64u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D2D5Cu, 0x2D2D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D64u;
label_2d2d64:
    // 0x2d2d64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2d68: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d2d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d2d6c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D2D6Cu;
    {
        const bool branch_taken_0x2d2d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2d6c) {
            ctx->pc = 0x2D2DA4u;
            return;
        }
    }
    ctx->pc = 0x2D2D74u;
    // 0x2d2d74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2d78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2d7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d2d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2d80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2d84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2d88: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d2d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2d8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2d90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d2d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2d94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2d98: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d2d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2d9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2da0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d2da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d2da4u;
}
