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

// Function: entry_001b7690
// Address: 0x1b7690 - 0x1b76c8
void entry_001b7690_0x1b7690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7690_0x1b7690");
#endif

    switch (ctx->pc) {
        case 0x1b769cu: goto label_1b769c;
        default: break;
    }

    ctx->pc = 0x1b7690u;

    // 0x1b7690: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b7690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b7694: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B7694u;
    SET_GPR_U32(ctx, 31, 0x1B769Cu);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B7694u, 0x1B769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B769Cu;
label_1b769c:
    // 0x1b769c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1b769cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b76a0: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B76A0u;
    {
        const bool branch_taken_0x1b76a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b76a0) {
            ctx->pc = 0x1B7748u;
            return;
        }
    }
    ctx->pc = 0x1B76A8u;
    // 0x1b76a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b76ac: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B76ACu;
    {
        const bool branch_taken_0x1b76ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b76ac) {
            ctx->pc = 0x1B76C8u;
            return;
        }
    }
    ctx->pc = 0x1B76B4u;
    // 0x1b76b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b76b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b76b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b76b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b76bc: 0xac651b68  sw          $a1, 0x1B68($v1)
    ctx->pc = 0x1b76bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 5));
    // 0x1b76c0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B76C0u;
    {
        const bool branch_taken_0x1b76c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b76c0) {
            ctx->pc = 0x1B7748u;
            return;
        }
    }
    ctx->pc = 0x1B76C8u;
}
