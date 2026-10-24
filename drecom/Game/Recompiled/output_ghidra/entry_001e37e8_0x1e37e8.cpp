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

// Function: entry_001e37e8
// Address: 0x1e37e8 - 0x1e3808
void entry_001e37e8_0x1e37e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e37e8_0x1e37e8");
#endif

    switch (ctx->pc) {
        case 0x1e3804u: goto label_1e3804;
        default: break;
    }

    ctx->pc = 0x1e37e8u;

    // 0x1e37e8: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e37e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e37ec: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e37ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e37f0: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e37f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e37f4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1e37f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e37f8: 0x72204628  paddub      $t0, $s1, $zero
    ctx->pc = 0x1e37f8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e37fc: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E37FCu;
    SET_GPR_U32(ctx, 31, 0x1E3804u);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E37FCu, 0x1E3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3804u;
label_1e3804:
    // 0x1e3804: 0x0  nop
    ctx->pc = 0x1e3804u;
    // NOP
    ctx->pc = 0x1e3808u;
}
