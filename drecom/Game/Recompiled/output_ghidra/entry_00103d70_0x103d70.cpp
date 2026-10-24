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

// Function: entry_00103d70
// Address: 0x103d70 - 0x103da8
void entry_00103d70_0x103d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103d70_0x103d70");
#endif

    ctx->pc = 0x103d70u;

label_103d70:
    // 0x103d70: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x103d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x103d74: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x103d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x103d78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x103d78u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u));
    // 0x103d7c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x103d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x103d80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x103d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x103d84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x103D84u;
    {
        const bool branch_taken_0x103d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x103d84) {
            ctx->pc = 0x103D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103d70;
        }
    }
    ctx->pc = 0x103D8Cu;
    // 0x103d8c: 0x25e241f8  addiu       $v0, $t7, 0x41F8
    ctx->pc = 0x103d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
    // 0x103d90: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x103d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103d94: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x103d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x103d98: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x103d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x103d9c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x103d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103da0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x103DA0u;
    {
        const bool branch_taken_0x103da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DA0u;
        // 0x103da4: 0xac600138  sw          $zero, 0x138($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103da0) {
            ctx->pc = 0x103F30u;
            return;
        }
    }
    ctx->pc = 0x103DA8u;
}
