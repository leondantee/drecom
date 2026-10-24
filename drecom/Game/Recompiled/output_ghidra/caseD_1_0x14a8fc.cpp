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

// Function: caseD_1
// Address: 0x14a8fc - 0x14a938
void caseD_1_0x14a8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x14a8fc");
#endif

    ctx->pc = 0x14a8fcu;

    // 0x14a8fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a900: 0x944209ee  lhu         $v0, 0x9EE($v0)
    ctx->pc = 0x14a900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2542)));
    // 0x14a904: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14a904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14a908: 0x28420034  slti        $v0, $v0, 0x34
    ctx->pc = 0x14a908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x14a90c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14A90Cu;
    {
        const bool branch_taken_0x14a90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a90c) {
            ctx->pc = 0x14A938u;
            return;
        }
    }
    ctx->pc = 0x14A914u;
    // 0x14a914: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a91c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14a920: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x14a920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x14a924: 0x34460028  ori         $a2, $v0, 0x28
    ctx->pc = 0x14a924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
    // 0x14a928: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14a928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a92c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a92cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14a930: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14A930u;
    SET_GPR_U32(ctx, 31, 0x14A938u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A930u, 0x14A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A938u;
}
