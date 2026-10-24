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

// Function: entry_00374920
// Address: 0x374920 - 0x374944
void entry_00374920_0x374920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374920_0x374920");
#endif

    ctx->pc = 0x374920u;

    // 0x374920: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x374920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x374924: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x374924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x374928: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x374928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x37492c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37492Cu;
    {
        const bool branch_taken_0x37492c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37492c) {
            ctx->pc = 0x374944u;
            return;
        }
    }
    ctx->pc = 0x374934u;
    // 0x374934: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x374934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374938: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x374938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    // 0x37493c: 0xc05a400  jal         func_169000
    ctx->pc = 0x37493Cu;
    SET_GPR_U32(ctx, 31, 0x374944u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x37493Cu, 0x374944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374944u;
}
