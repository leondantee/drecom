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

// Function: entry_0019fbb0
// Address: 0x19fbb0 - 0x19fbc8
void entry_0019fbb0_0x19fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fbb0_0x19fbb0");
#endif

    switch (ctx->pc) {
        case 0x19fbc4u: goto label_19fbc4;
        default: break;
    }

    ctx->pc = 0x19fbb0u;

    // 0x19fbb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19fbb4: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x19fbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19fbb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19fbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19fbbc: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19FBBCu;
    SET_GPR_U32(ctx, 31, 0x19FBC4u);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19FBBCu, 0x19FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FBC4u;
label_19fbc4:
    // 0x19fbc4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x19fbc4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x19fbc8u;
}
