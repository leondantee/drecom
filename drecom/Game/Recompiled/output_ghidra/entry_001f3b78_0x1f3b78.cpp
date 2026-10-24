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

// Function: entry_001f3b78
// Address: 0x1f3b78 - 0x1f3bd0
void entry_001f3b78_0x1f3b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3b78_0x1f3b78");
#endif

    switch (ctx->pc) {
        case 0x1f3bc8u: goto label_1f3bc8;
        default: break;
    }

    ctx->pc = 0x1f3b78u;

    // 0x1f3b78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b7c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f3b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f3b80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f3b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f3b84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f3b84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f3b88: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F3B88u;
    {
        const bool branch_taken_0x1f3b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3b88) {
            ctx->pc = 0x1F3BF8u;
            return;
        }
    }
    ctx->pc = 0x1F3B90u;
    // 0x1f3b90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3b98: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f3b9c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f3b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f3ba0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F3BA0u;
    {
        const bool branch_taken_0x1f3ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ba0) {
            ctx->pc = 0x1F3BD0u;
            return;
        }
    }
    ctx->pc = 0x1F3BA8u;
    // 0x1f3ba8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3bac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3bb0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f3bb4: 0x24067809  addiu       $a2, $zero, 0x7809
    ctx->pc = 0x1f3bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30729));
    // 0x1f3bb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3bbc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f3bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3bc0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3BC0u;
    SET_GPR_U32(ctx, 31, 0x1F3BC8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3BC0u, 0x1F3BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BC8u;
label_1f3bc8:
    // 0x1f3bc8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1F3BC8u;
    {
        const bool branch_taken_0x1f3bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3bc8) {
            ctx->pc = 0x1F3C58u;
            return;
        }
    }
    ctx->pc = 0x1F3BD0u;
}
