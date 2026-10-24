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

// Function: entry_001bb508
// Address: 0x1bb508 - 0x1bb53c
void entry_001bb508_0x1bb508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb508_0x1bb508");
#endif

    switch (ctx->pc) {
        case 0x1bb514u: goto label_1bb514;
        default: break;
    }

    ctx->pc = 0x1bb508u;

    // 0x1bb508: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bb508u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb50c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BB50Cu;
    SET_GPR_U32(ctx, 31, 0x1BB514u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BB50Cu, 0x1BB514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB514u;
label_1bb514:
    // 0x1bb514: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1bb514u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb518: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1bb518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb51c: 0x8ce81b60  lw          $t0, 0x1B60($a3)
    ctx->pc = 0x1bb51cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7008)));
    // 0x1bb520: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB520u;
    {
        const bool branch_taken_0x1bb520 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb520) {
            ctx->pc = 0x1BB53Cu;
            return;
        }
    }
    ctx->pc = 0x1BB528u;
    // 0x1bb528: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1bb528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bb52c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb530: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bb530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bb534: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x1BB534u;
    {
        const bool branch_taken_0x1bb534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb534) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB53Cu;
}
