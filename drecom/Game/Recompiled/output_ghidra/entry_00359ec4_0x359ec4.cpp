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

// Function: entry_00359ec4
// Address: 0x359ec4 - 0x359ee0
void entry_00359ec4_0x359ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359ec4_0x359ec4");
#endif

    switch (ctx->pc) {
        case 0x359ed4u: goto label_359ed4;
        default: break;
    }

    ctx->pc = 0x359ec4u;

    // 0x359ec4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x359ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359ec8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x359ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x359ecc: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x359ECCu;
    SET_GPR_U32(ctx, 31, 0x359ED4u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x359ECCu, 0x359ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359ED4u;
label_359ed4:
    // 0x359ed4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x359ed4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359ed8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x359ED8u;
    {
        const bool branch_taken_0x359ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359ed8) {
            ctx->pc = 0x359F08u;
            return;
        }
    }
    ctx->pc = 0x359EE0u;
}
