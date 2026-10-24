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

// Function: entry_0026bbb8
// Address: 0x26bbb8 - 0x26bbf8
void entry_0026bbb8_0x26bbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026bbb8_0x26bbb8");
#endif

    switch (ctx->pc) {
        case 0x26bbe0u: goto label_26bbe0;
        default: break;
    }

    ctx->pc = 0x26bbb8u;

    // 0x26bbb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bbbc: 0x8c821b6c  lw          $v0, 0x1B6C($a0)
    ctx->pc = 0x26bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x26bbc0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x26BBC0u;
    {
        const bool branch_taken_0x26bbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bbc0) {
            ctx->pc = 0x26BC48u;
            return;
        }
    }
    ctx->pc = 0x26BBC8u;
    // 0x26bbc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bbcc: 0x8c441b6c  lw          $a0, 0x1B6C($v0)
    ctx->pc = 0x26bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x26bbd0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x26bbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x26bbd4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x26bbd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x26bbd8: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x26BBD8u;
    SET_GPR_U32(ctx, 31, 0x26BBE0u);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x26BBD8u, 0x26BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBE0u;
label_26bbe0:
    // 0x26bbe0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bbe4: 0x8c451b6c  lw          $a1, 0x1B6C($v0)
    ctx->pc = 0x26bbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x26bbe8: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x26bbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x26bbec: 0xac461b6c  sw          $a2, 0x1B6C($v0)
    ctx->pc = 0x26bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 6));
    // 0x26bbf0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26BBF0u;
    {
        const bool branch_taken_0x26bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bbf0) {
            ctx->pc = 0x26BC48u;
            return;
        }
    }
    ctx->pc = 0x26BBF8u;
}
