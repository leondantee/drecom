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

// Function: entry_00258360
// Address: 0x258360 - 0x258380
void entry_00258360_0x258360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258360_0x258360");
#endif

    switch (ctx->pc) {
        case 0x258374u: goto label_258374;
        default: break;
    }

    ctx->pc = 0x258360u;

    // 0x258360: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258364: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x258364u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258368: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258368u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25836c: 0xc0960ec  jal         func_2583B0
    ctx->pc = 0x25836Cu;
    SET_GPR_U32(ctx, 31, 0x258374u);
    ctx->pc = 0x2583B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2583B0u, 0x25836Cu, 0x258374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258374u;
label_258374:
    // 0x258374: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x258374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x258378: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x258378u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25837c: 0x0  nop
    ctx->pc = 0x25837cu;
    // NOP
    ctx->pc = 0x258380u;
}
