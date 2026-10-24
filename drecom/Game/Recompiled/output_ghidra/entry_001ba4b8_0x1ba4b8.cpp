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

// Function: entry_001ba4b8
// Address: 0x1ba4b8 - 0x1ba4ec
void entry_001ba4b8_0x1ba4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba4b8_0x1ba4b8");
#endif

    switch (ctx->pc) {
        case 0x1ba4c4u: goto label_1ba4c4;
        default: break;
    }

    ctx->pc = 0x1ba4b8u;

    // 0x1ba4b8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ba4b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ba4bc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BA4BCu;
    SET_GPR_U32(ctx, 31, 0x1BA4C4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BA4BCu, 0x1BA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4C4u;
label_1ba4c4:
    // 0x1ba4c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba4c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba4c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba4cc: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1ba4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1ba4d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA4D0u;
    {
        const bool branch_taken_0x1ba4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4d0) {
            ctx->pc = 0x1BA4ECu;
            return;
        }
    }
    ctx->pc = 0x1BA4D8u;
    // 0x1ba4d8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ba4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ba4dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba4e0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1ba4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ba4e4: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x1BA4E4u;
    {
        const bool branch_taken_0x1ba4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4e4) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA4ECu;
}
