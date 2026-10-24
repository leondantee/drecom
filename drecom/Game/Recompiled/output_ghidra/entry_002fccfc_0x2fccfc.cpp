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

// Function: entry_002fccfc
// Address: 0x2fccfc - 0x2fcd1c
void entry_002fccfc_0x2fccfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fccfc_0x2fccfc");
#endif

    switch (ctx->pc) {
        case 0x2fcd18u: goto label_2fcd18;
        default: break;
    }

    ctx->pc = 0x2fccfcu;

    // 0x2fccfc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2fccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2fcd00: 0x24649240  addiu       $a0, $v1, -0x6DC0
    ctx->pc = 0x2fcd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
    // 0x2fcd04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fcd04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fcd08: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2fcd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2fcd0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fcd0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fcd10: 0xc087170  jal         func_21C5C0
    ctx->pc = 0x2FCD10u;
    SET_GPR_U32(ctx, 31, 0x2FCD18u);
    ctx->pc = 0x21C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C5C0u, 0x2FCD10u, 0x2FCD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD18u;
label_2fcd18:
    // 0x2fcd18: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fcd18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fcd1cu;
}
