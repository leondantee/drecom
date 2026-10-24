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

// Function: entry_001bd840
// Address: 0x1bd840 - 0x1bd858
void entry_001bd840_0x1bd840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd840_0x1bd840");
#endif

    switch (ctx->pc) {
        case 0x1bd854u: goto label_1bd854;
        default: break;
    }

    ctx->pc = 0x1bd840u;

    // 0x1bd840: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x1bd840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x1bd844: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x1bd844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x1bd848: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1bd848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1bd84c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1BD84Cu;
    SET_GPR_U32(ctx, 31, 0x1BD854u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1BD84Cu, 0x1BD854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD854u;
label_1bd854:
    // 0x1bd854: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bd854u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1bd858u;
}
