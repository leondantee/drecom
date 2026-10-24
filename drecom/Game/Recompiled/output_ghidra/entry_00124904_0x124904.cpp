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

// Function: entry_00124904
// Address: 0x124904 - 0x124944
void entry_00124904_0x124904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124904_0x124904");
#endif

    switch (ctx->pc) {
        case 0x12493cu: goto label_12493c;
        default: break;
    }

    ctx->pc = 0x124904u;

    // 0x124904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124908: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x124908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12490c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12490cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x124910: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x124910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x124914: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x124914u;
    {
        const bool branch_taken_0x124914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124914) {
            ctx->pc = 0x124944u;
            return;
        }
    }
    ctx->pc = 0x12491Cu;
    // 0x12491c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124920: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124924: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x124924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124928: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x124928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12492c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12492cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124930: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124934: 0xc0965d0  jal         func_259740
    ctx->pc = 0x124934u;
    SET_GPR_U32(ctx, 31, 0x12493Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x124934u, 0x12493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12493Cu;
label_12493c:
    // 0x12493c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12493Cu;
    {
        const bool branch_taken_0x12493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12493c) {
            ctx->pc = 0x124964u;
            return;
        }
    }
    ctx->pc = 0x124944u;
}
