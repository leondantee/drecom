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

// Function: entry_00286060
// Address: 0x286060 - 0x286090
void entry_00286060_0x286060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286060_0x286060");
#endif

    ctx->pc = 0x286060u;

    // 0x286060: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x286060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x286064: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x286064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x286068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x286068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28606c: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x28606Cu;
    {
        const bool branch_taken_0x28606c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28606c) {
            ctx->pc = 0x2860CCu;
            return;
        }
    }
    ctx->pc = 0x286074u;
    // 0x286074: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x286074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x286078: 0x8c23c294  lw          $v1, -0x3D6C($at)
    ctx->pc = 0x286078u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FC294u));
    // 0x28607c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28607Cu;
    {
        const bool branch_taken_0x28607c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28607c) {
            ctx->pc = 0x286090u;
            return;
        }
    }
    ctx->pc = 0x286084u;
    // 0x286084: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x286084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x286088: 0xc0d7558  jal         func_35D560
    ctx->pc = 0x286088u;
    SET_GPR_U32(ctx, 31, 0x286090u);
    ctx->pc = 0x35D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D560u, 0x286088u, 0x286090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286090u;
}
