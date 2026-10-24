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

// Function: entry_003277fc
// Address: 0x3277fc - 0x327820
void entry_003277fc_0x3277fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003277fc_0x3277fc");
#endif

    switch (ctx->pc) {
        case 0x327814u: goto label_327814;
        default: break;
    }

    ctx->pc = 0x3277fcu;

    // 0x3277fc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3277fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327800: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x327800u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x327804: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327808: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x327808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32780c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x32780Cu;
    SET_GPR_U32(ctx, 31, 0x327814u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x32780Cu, 0x327814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327814u;
label_327814:
    // 0x327814: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x327814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327818: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x327818u;
    {
        const bool branch_taken_0x327818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327818) {
            ctx->pc = 0x327870u;
            return;
        }
    }
    ctx->pc = 0x327820u;
}
