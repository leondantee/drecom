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

// Function: entry_00359af4
// Address: 0x359af4 - 0x359b2c
void entry_00359af4_0x359af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359af4_0x359af4");
#endif

    switch (ctx->pc) {
        case 0x359b04u: goto label_359b04;
        case 0x359b10u: goto label_359b10;
        case 0x359b1cu: goto label_359b1c;
        default: break;
    }

    ctx->pc = 0x359af4u;

    // 0x359af4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x359af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359af8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359af8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359afc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x359AFCu;
    SET_GPR_U32(ctx, 31, 0x359B04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x359AFCu, 0x359B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B04u;
label_359b04:
    // 0x359b04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x359b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359b08: 0xc05cd10  jal         func_173440
    ctx->pc = 0x359B08u;
    SET_GPR_U32(ctx, 31, 0x359B10u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x359B08u, 0x359B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B10u;
label_359b10:
    // 0x359b10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x359b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359b14: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x359B14u;
    SET_GPR_U32(ctx, 31, 0x359B1Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x359B14u, 0x359B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B1Cu;
label_359b1c:
    // 0x359b1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x359b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359b20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x359b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x359b24: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x359B24u;
    SET_GPR_U32(ctx, 31, 0x359B2Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x359B24u, 0x359B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B2Cu;
}
