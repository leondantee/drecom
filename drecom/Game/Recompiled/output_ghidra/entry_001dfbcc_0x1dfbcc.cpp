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

// Function: entry_001dfbcc
// Address: 0x1dfbcc - 0x1dfbe8
void entry_001dfbcc_0x1dfbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfbcc_0x1dfbcc");
#endif

    switch (ctx->pc) {
        case 0x1dfbdcu: goto label_1dfbdc;
        default: break;
    }

    ctx->pc = 0x1dfbccu;

    // 0x1dfbcc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1dfbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dfbd0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1dfbd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dfbd4: 0xc077eac  jal         func_1DFAB0
    ctx->pc = 0x1DFBD4u;
    SET_GPR_U32(ctx, 31, 0x1DFBDCu);
    ctx->pc = 0x1DFAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFAB0u, 0x1DFBD4u, 0x1DFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBDCu;
label_1dfbdc:
    // 0x1dfbdc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1dfbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dfbe0: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1dfbe0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dfbe4: 0x0  nop
    ctx->pc = 0x1dfbe4u;
    // NOP
    ctx->pc = 0x1dfbe8u;
}
