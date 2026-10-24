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

// Function: entry_00283a84
// Address: 0x283a84 - 0x283ab4
void entry_00283a84_0x283a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283a84_0x283a84");
#endif

    switch (ctx->pc) {
        case 0x283aacu: goto label_283aac;
        default: break;
    }

    ctx->pc = 0x283a84u;

    // 0x283a84: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x283a84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x283a88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283a8c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x283a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x283a90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283a94: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x283a94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283a98: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x283a98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x283a9c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x283a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x283aa0: 0x34452003  ori         $a1, $v0, 0x2003
    ctx->pc = 0x283aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8195);
    // 0x283aa4: 0xc077a5c  jal         func_1DE970
    ctx->pc = 0x283AA4u;
    SET_GPR_U32(ctx, 31, 0x283AACu);
    ctx->pc = 0x1DE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE970u, 0x283AA4u, 0x283AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AACu;
label_283aac:
    // 0x283aac: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x283AACu;
    {
        const bool branch_taken_0x283aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283aac) {
            ctx->pc = 0x283EE0u;
            return;
        }
    }
    ctx->pc = 0x283AB4u;
}
