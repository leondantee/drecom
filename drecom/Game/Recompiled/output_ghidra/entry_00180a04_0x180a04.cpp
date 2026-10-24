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

// Function: entry_00180a04
// Address: 0x180a04 - 0x180a28
void entry_00180a04_0x180a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180a04_0x180a04");
#endif

    switch (ctx->pc) {
        case 0x180a10u: goto label_180a10;
        case 0x180a24u: goto label_180a24;
        default: break;
    }

    ctx->pc = 0x180a04u;

    // 0x180a04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x180a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180a08: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x180A08u;
    SET_GPR_U32(ctx, 31, 0x180A10u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x180A08u, 0x180A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A10u;
label_180a10:
    // 0x180a10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x180a10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x180a14: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x180a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180a18: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x180a18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x180a1c: 0xc05f910  jal         func_17E440
    ctx->pc = 0x180A1Cu;
    SET_GPR_U32(ctx, 31, 0x180A24u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x180A1Cu, 0x180A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A24u;
label_180a24:
    // 0x180a24: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x180a24u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x180a28u;
}
