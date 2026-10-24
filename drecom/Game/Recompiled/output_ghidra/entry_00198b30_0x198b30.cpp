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

// Function: entry_00198b30
// Address: 0x198b30 - 0x198b8c
void entry_00198b30_0x198b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198b30_0x198b30");
#endif

    switch (ctx->pc) {
        case 0x198b40u: goto label_198b40;
        case 0x198b4cu: goto label_198b4c;
        default: break;
    }

    ctx->pc = 0x198b30u;

    // 0x198b30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x198b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198b38: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x198B38u;
    SET_GPR_U32(ctx, 31, 0x198B40u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x198B38u, 0x198B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B40u;
label_198b40:
    // 0x198b40: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b44: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x198B44u;
    SET_GPR_U32(ctx, 31, 0x198B4Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x198B44u, 0x198B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B4Cu;
label_198b4c:
    // 0x198b4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b50: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x198b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x198b54: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x198B54u;
    {
        const bool branch_taken_0x198b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198b54) {
            ctx->pc = 0x198B8Cu;
            return;
        }
    }
    ctx->pc = 0x198B5Cu;
    // 0x198b5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198b60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b64: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198b64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198b68: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x198b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198b6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b70: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198b70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198b74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x198b78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198b7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b80: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198b80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198b84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b88: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x198b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x198b8cu;
}
