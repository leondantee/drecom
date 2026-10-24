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

// Function: entry_001b7e8c
// Address: 0x1b7e8c - 0x1b7ec4
void entry_001b7e8c_0x1b7e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7e8c_0x1b7e8c");
#endif

    switch (ctx->pc) {
        case 0x1b7e98u: goto label_1b7e98;
        default: break;
    }

    ctx->pc = 0x1b7e8cu;

    // 0x1b7e8c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b7e8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b7e90: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B7E90u;
    SET_GPR_U32(ctx, 31, 0x1B7E98u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B7E90u, 0x1B7E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E98u;
label_1b7e98:
    // 0x1b7e98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7e98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7e9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7ea0: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x1b7ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x1b7ea4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7EA4u;
    {
        const bool branch_taken_0x1b7ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ea4) {
            ctx->pc = 0x1B7EC4u;
            return;
        }
    }
    ctx->pc = 0x1B7EACu;
    // 0x1b7eac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7eb0: 0x90640003  lbu         $a0, 0x3($v1)
    ctx->pc = 0x1b7eb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1b7eb4: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x1b7eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b7eb8: 0xa0710003  sb          $s1, 0x3($v1)
    ctx->pc = 0x1b7eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x1b7ebc: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x1B7EBCu;
    {
        const bool branch_taken_0x1b7ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ebc) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7EC4u;
}
