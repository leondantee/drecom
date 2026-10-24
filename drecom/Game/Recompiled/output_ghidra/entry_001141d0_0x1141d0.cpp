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

// Function: entry_001141d0
// Address: 0x1141d0 - 0x1141f8
void entry_001141d0_0x1141d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001141d0_0x1141d0");
#endif

    ctx->pc = 0x1141d0u;

label_1141d0:
    // 0x1141d0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1141d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1141d4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1141d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1141d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1141d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1141dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1141dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1141e0: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1141e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1141e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1141e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1141e8: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1141E8u;
    {
        const bool branch_taken_0x1141e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1141e8) {
            ctx->pc = 0x1141D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1141d0;
        }
    }
    ctx->pc = 0x1141F0u;
    // 0x1141f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1141F0u;
    {
        const bool branch_taken_0x1141f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1141F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141F0u;
        // 0x1141f4: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141f0) {
            ctx->pc = 0x114200u;
            return;
        }
    }
    ctx->pc = 0x1141F8u;
}
