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

// Function: entry_003009e4
// Address: 0x3009e4 - 0x300a14
void entry_003009e4_0x3009e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003009e4_0x3009e4");
#endif

    ctx->pc = 0x3009e4u;

    // 0x3009e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3009e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3009e8: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x3009e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x3009ec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3009ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3009f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3009F0u;
    {
        const bool branch_taken_0x3009f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3009f0) {
            ctx->pc = 0x300A14u;
            return;
        }
    }
    ctx->pc = 0x3009F8u;
    // 0x3009f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3009f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3009fc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3009fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300a00: 0x245107e0  addiu       $s1, $v0, 0x7E0
    ctx->pc = 0x300a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
    // 0x300a04: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300a08: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x300a08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x300a0c: 0xc079140  jal         func_1E4500
    ctx->pc = 0x300A0Cu;
    SET_GPR_U32(ctx, 31, 0x300A14u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300A0Cu, 0x300A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A14u;
}
