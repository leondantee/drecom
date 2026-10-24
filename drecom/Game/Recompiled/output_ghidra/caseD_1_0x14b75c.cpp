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
// Address: 0x14b75c - 0x14b798
void caseD_1_0x14b75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x14b75c");
#endif

    ctx->pc = 0x14b75cu;

    // 0x14b75c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b760: 0x944209ee  lhu         $v0, 0x9EE($v0)
    ctx->pc = 0x14b760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2542)));
    // 0x14b764: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14b764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14b768: 0x28420034  slti        $v0, $v0, 0x34
    ctx->pc = 0x14b768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x14b76c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14B76Cu;
    {
        const bool branch_taken_0x14b76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b76c) {
            ctx->pc = 0x14B798u;
            return;
        }
    }
    ctx->pc = 0x14B774u;
    // 0x14b774: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b778: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b77c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14b780: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x14b780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x14b784: 0x34460028  ori         $a2, $v0, 0x28
    ctx->pc = 0x14b784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
    // 0x14b788: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b78c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14b78cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14b790: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14B790u;
    SET_GPR_U32(ctx, 31, 0x14B798u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14B790u, 0x14B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B798u;
}
