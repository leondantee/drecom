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

// Function: entry_00300af4
// Address: 0x300af4 - 0x300b24
void entry_00300af4_0x300af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00300af4_0x300af4");
#endif

    ctx->pc = 0x300af4u;

    // 0x300af4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300af8: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x300af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x300afc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x300afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x300b00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x300B00u;
    {
        const bool branch_taken_0x300b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300b00) {
            ctx->pc = 0x300B24u;
            return;
        }
    }
    ctx->pc = 0x300B08u;
    // 0x300b08: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300b0c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300b10: 0x24520480  addiu       $s2, $v0, 0x480
    ctx->pc = 0x300b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x300b14: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300b18: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x300b18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x300b1c: 0xc079140  jal         func_1E4500
    ctx->pc = 0x300B1Cu;
    SET_GPR_U32(ctx, 31, 0x300B24u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300B1Cu, 0x300B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B24u;
}
