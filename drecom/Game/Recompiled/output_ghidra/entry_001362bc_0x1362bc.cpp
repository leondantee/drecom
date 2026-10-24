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

// Function: entry_001362bc
// Address: 0x1362bc - 0x1362d4
void entry_001362bc_0x1362bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001362bc_0x1362bc");
#endif

    ctx->pc = 0x1362bcu;

    // 0x1362bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1362bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1362c0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1362c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1362c4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1362c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1362c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1362c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1362cc: 0xc04d72c  jal         func_135CB0
    ctx->pc = 0x1362CCu;
    SET_GPR_U32(ctx, 31, 0x1362D4u);
    ctx->pc = 0x135CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135CB0u, 0x1362CCu, 0x1362D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362D4u;
}
