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

// Function: entry_00359a04
// Address: 0x359a04 - 0x359a28
void entry_00359a04_0x359a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359a04_0x359a04");
#endif

    switch (ctx->pc) {
        case 0x359a14u: goto label_359a14;
        case 0x359a20u: goto label_359a20;
        default: break;
    }

    ctx->pc = 0x359a04u;

    // 0x359a04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359a08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359a08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359a0c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x359A0Cu;
    SET_GPR_U32(ctx, 31, 0x359A14u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x359A0Cu, 0x359A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A14u;
label_359a14:
    // 0x359a14: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359a18: 0xc05cd10  jal         func_173440
    ctx->pc = 0x359A18u;
    SET_GPR_U32(ctx, 31, 0x359A20u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x359A18u, 0x359A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A20u;
label_359a20:
    // 0x359a20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359a24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359a24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x359a28u;
}
