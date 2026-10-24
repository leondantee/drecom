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

// Function: entry_001502ec
// Address: 0x1502ec - 0x150310
void entry_001502ec_0x1502ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001502ec_0x1502ec");
#endif

    switch (ctx->pc) {
        case 0x1502fcu: goto label_1502fc;
        case 0x150308u: goto label_150308;
        default: break;
    }

    ctx->pc = 0x1502ecu;

    // 0x1502ec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1502ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1502f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1502f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1502f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1502F4u;
    SET_GPR_U32(ctx, 31, 0x1502FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1502F4u, 0x1502FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502FCu;
label_1502fc:
    // 0x1502fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1502fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150300: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x150300u;
    SET_GPR_U32(ctx, 31, 0x150308u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x150300u, 0x150308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150308u;
label_150308:
    // 0x150308: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x150308u;
    {
        const bool branch_taken_0x150308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150308) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x150310u;
}
