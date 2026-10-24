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

// Function: entry_0035bc5c
// Address: 0x35bc5c - 0x35bcb0
void entry_0035bc5c_0x35bc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bc5c_0x35bc5c");
#endif

    switch (ctx->pc) {
        case 0x35bc68u: goto label_35bc68;
        case 0x35bc74u: goto label_35bc74;
        default: break;
    }

    ctx->pc = 0x35bc5cu;

    // 0x35bc5c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc60: 0xc05cd10  jal         func_173440
    ctx->pc = 0x35BC60u;
    SET_GPR_U32(ctx, 31, 0x35BC68u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x35BC60u, 0x35BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC68u;
label_35bc68:
    // 0x35bc68: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc6c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35BC6Cu;
    SET_GPR_U32(ctx, 31, 0x35BC74u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35BC6Cu, 0x35BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC74u;
label_35bc74:
    // 0x35bc74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc78: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x35bc78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x35bc7c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x35BC7Cu;
    {
        const bool branch_taken_0x35bc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bc7c) {
            ctx->pc = 0x35BCB0u;
            return;
        }
    }
    ctx->pc = 0x35BC84u;
    // 0x35bc84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35bc88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35bc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35bc90: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc94: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35bc94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bc98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35bc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bca0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bca4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35bca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bca8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bcac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x35bcb0u;
}
