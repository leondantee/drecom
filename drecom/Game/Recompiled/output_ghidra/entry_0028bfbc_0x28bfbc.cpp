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

// Function: entry_0028bfbc
// Address: 0x28bfbc - 0x28bfe8
void entry_0028bfbc_0x28bfbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bfbc_0x28bfbc");
#endif

    switch (ctx->pc) {
        case 0x28bfd8u: goto label_28bfd8;
        default: break;
    }

    ctx->pc = 0x28bfbcu;

    // 0x28bfbc: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28bfbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28bfc0: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x28bfc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28bfc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bfc8: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BFC8u;
    {
        const bool branch_taken_0x28bfc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x28bfc8) {
            ctx->pc = 0x28BFE8u;
            return;
        }
    }
    ctx->pc = 0x28BFD0u;
    // 0x28bfd0: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28BFD0u;
    SET_GPR_U32(ctx, 31, 0x28BFD8u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28BFD0u, 0x28BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BFD8u;
label_28bfd8:
    // 0x28bfd8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28bfd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28bfdc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28bfe0: 0x2463e910  addiu       $v1, $v1, -0x16F0
    ctx->pc = 0x28bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
    // 0x28bfe4: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x28bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    ctx->pc = 0x28bfe8u;
}
