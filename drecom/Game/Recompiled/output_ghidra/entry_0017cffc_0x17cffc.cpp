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

// Function: entry_0017cffc
// Address: 0x17cffc - 0x17d00c
void entry_0017cffc_0x17cffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cffc_0x17cffc");
#endif

    ctx->pc = 0x17cffcu;

    // 0x17cffc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17cffcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d000: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d000u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d004: 0xc0566cc  jal         func_159B30
    ctx->pc = 0x17D004u;
    SET_GPR_U32(ctx, 31, 0x17D00Cu);
    ctx->pc = 0x159B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159B30u, 0x17D004u, 0x17D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D00Cu;
}
