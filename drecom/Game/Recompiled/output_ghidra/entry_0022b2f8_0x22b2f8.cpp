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

// Function: entry_0022b2f8
// Address: 0x22b2f8 - 0x22b348
void entry_0022b2f8_0x22b2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b2f8_0x22b2f8");
#endif

    switch (ctx->pc) {
        case 0x22b300u: goto label_22b300;
        default: break;
    }

    ctx->pc = 0x22b2f8u;

    // 0x22b2f8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B2F8u;
    SET_GPR_U32(ctx, 31, 0x22B300u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B2F8u, 0x22B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B300u;
label_22b300:
    // 0x22b300: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22b300u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22b304: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x22b304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22b308: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x22b308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x22b30c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b310: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22B310u;
    {
        const bool branch_taken_0x22b310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b310) {
            ctx->pc = 0x22B348u;
            return;
        }
    }
    ctx->pc = 0x22B318u;
    // 0x22b318: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22b318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b31c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b320: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22b320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22b324: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x22b324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x22b328: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b32c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22b32cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22b330: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b334: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x22b334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b338: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b33c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x22b33cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b340: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b344: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22b344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x22b348u;
}
