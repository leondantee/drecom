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

// Function: entry_001140d8
// Address: 0x1140d8 - 0x1140f8
void entry_001140d8_0x1140d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001140d8_0x1140d8");
#endif

    ctx->pc = 0x1140d8u;

label_1140d8:
    // 0x1140d8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1140d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1140dc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1140dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1140e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1140e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1140e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1140e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1140e8: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x1140e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1140ec: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1140ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1140f0: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1140F0u;
    {
        const bool branch_taken_0x1140f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1140f0) {
            ctx->pc = 0x1140D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1140d8;
        }
    }
    ctx->pc = 0x1140F8u;
}
