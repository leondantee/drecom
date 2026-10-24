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

// Function: entry_0028b6cc
// Address: 0x28b6cc - 0x28b6f8
void entry_0028b6cc_0x28b6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b6cc_0x28b6cc");
#endif

    ctx->pc = 0x28b6ccu;

    // 0x28b6cc: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x28b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x28b6d0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x28b6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b6d4: 0x1068002a  beq         $v1, $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x28B6D4u;
    {
        const bool branch_taken_0x28b6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x28b6d4) {
            ctx->pc = 0x28B780u;
            return;
        }
    }
    ctx->pc = 0x28B6DCu;
    // 0x28b6dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28b6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b6e0: 0x10670016  beq         $v1, $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x28B6E0u;
    {
        const bool branch_taken_0x28b6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x28b6e0) {
            ctx->pc = 0x28B73Cu;
            return;
        }
    }
    ctx->pc = 0x28B6E8u;
    // 0x28b6e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B6E8u;
    {
        const bool branch_taken_0x28b6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b6e8) {
            ctx->pc = 0x28B6F8u;
            return;
        }
    }
    ctx->pc = 0x28B6F0u;
    // 0x28b6f0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x28B6F0u;
    {
        const bool branch_taken_0x28b6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b6f0) {
            ctx->pc = 0x28B7B4u;
            return;
        }
    }
    ctx->pc = 0x28B6F8u;
}
