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

// Function: entry_002960d0
// Address: 0x2960d0 - 0x2960f8
void entry_002960d0_0x2960d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002960d0_0x2960d0");
#endif

    switch (ctx->pc) {
        case 0x2960ecu: goto label_2960ec;
        default: break;
    }

    ctx->pc = 0x2960d0u;

    // 0x2960d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2960d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2960d4: 0x240400b9  addiu       $a0, $zero, 0xB9
    ctx->pc = 0x2960d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x2960d8: 0x24061400  addiu       $a2, $zero, 0x1400
    ctx->pc = 0x2960d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x2960dc: 0x2407008e  addiu       $a3, $zero, 0x8E
    ctx->pc = 0x2960dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2960e0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2960e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2960e4: 0xc05e858  jal         func_17A160
    ctx->pc = 0x2960E4u;
    SET_GPR_U32(ctx, 31, 0x2960ECu);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x2960E4u, 0x2960ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960ECu;
label_2960ec:
    // 0x2960ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2960ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2960f0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2960F0u;
    {
        const bool branch_taken_0x2960f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2960f0) {
            ctx->pc = 0x2962D8u;
            return;
        }
    }
    ctx->pc = 0x2960F8u;
}
