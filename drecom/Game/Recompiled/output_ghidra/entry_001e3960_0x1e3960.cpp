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

// Function: entry_001e3960
// Address: 0x1e3960 - 0x1e39a8
void entry_001e3960_0x1e3960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3960_0x1e3960");
#endif

    switch (ctx->pc) {
        case 0x1e3998u: goto label_1e3998;
        default: break;
    }

    ctx->pc = 0x1e3960u;

    // 0x1e3960: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e3960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3964: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e3964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e3968: 0x10600173  beqz        $v1, . + 4 + (0x173 << 2)
    ctx->pc = 0x1E3968u;
    {
        const bool branch_taken_0x1e3968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3968) {
            ctx->pc = 0x1E3F38u;
            return;
        }
    }
    ctx->pc = 0x1E3970u;
    // 0x1e3970: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1e3970u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e3974: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3978: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e3978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e397c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E397Cu;
    {
        const bool branch_taken_0x1e397c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e397c) {
            ctx->pc = 0x1E39A8u;
            return;
        }
    }
    ctx->pc = 0x1E3984u;
    // 0x1e3984: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3984u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e3988: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e3988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e398c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e398cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e3990: 0xc077ff4  jal         func_1DFFD0
    ctx->pc = 0x1E3990u;
    SET_GPR_U32(ctx, 31, 0x1E3998u);
    ctx->pc = 0x1DFFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFD0u, 0x1E3990u, 0x1E3998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3998u;
label_1e3998:
    // 0x1e3998: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1e3998u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1e399c: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e399cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e39a0: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x1E39A0u;
    {
        const bool branch_taken_0x1e39a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e39a0) {
            ctx->pc = 0x1E3F40u;
            return;
        }
    }
    ctx->pc = 0x1E39A8u;
}
