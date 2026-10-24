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

// Function: entry_0027cad4
// Address: 0x27cad4 - 0x27caf0
void entry_0027cad4_0x27cad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027cad4_0x27cad4");
#endif

    switch (ctx->pc) {
        case 0x27caecu: goto label_27caec;
        default: break;
    }

    ctx->pc = 0x27cad4u;

    // 0x27cad4: 0x24040418  addiu       $a0, $zero, 0x418
    ctx->pc = 0x27cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    // 0x27cad8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cadc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cae0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cae4: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CAE4u;
    SET_GPR_U32(ctx, 31, 0x27CAECu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CAE4u, 0x27CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAECu;
label_27caec:
    // 0x27caec: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27caecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x27caf0u;
}
