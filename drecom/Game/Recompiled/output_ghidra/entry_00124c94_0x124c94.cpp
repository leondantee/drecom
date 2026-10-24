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

// Function: entry_00124c94
// Address: 0x124c94 - 0x124cd4
void entry_00124c94_0x124c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124c94_0x124c94");
#endif

    switch (ctx->pc) {
        case 0x124cccu: goto label_124ccc;
        default: break;
    }

    ctx->pc = 0x124c94u;

    // 0x124c94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c98: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x124c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x124c9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x124c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x124ca0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x124ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x124ca4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x124CA4u;
    {
        const bool branch_taken_0x124ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ca4) {
            ctx->pc = 0x124CD4u;
            return;
        }
    }
    ctx->pc = 0x124CACu;
    // 0x124cac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124cb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124cb4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x124cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124cb8: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x124cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x124cbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x124cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124cc0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124cc4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x124CC4u;
    SET_GPR_U32(ctx, 31, 0x124CCCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x124CC4u, 0x124CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CCCu;
label_124ccc:
    // 0x124ccc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x124CCCu;
    {
        const bool branch_taken_0x124ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ccc) {
            ctx->pc = 0x124CF4u;
            return;
        }
    }
    ctx->pc = 0x124CD4u;
}
