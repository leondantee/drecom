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

// Function: entry_001443ec
// Address: 0x1443ec - 0x144408
void entry_001443ec_0x1443ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001443ec_0x1443ec");
#endif

    switch (ctx->pc) {
        case 0x1443fcu: goto label_1443fc;
        default: break;
    }

    ctx->pc = 0x1443ecu;

    // 0x1443ec: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1443ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1443f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1443f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1443f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1443F4u;
    SET_GPR_U32(ctx, 31, 0x1443FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1443F4u, 0x1443FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443FCu;
label_1443fc:
    // 0x1443fc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1443fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x144400: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x144400u;
    SET_GPR_U32(ctx, 31, 0x144408u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x144400u, 0x144408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144408u;
}
