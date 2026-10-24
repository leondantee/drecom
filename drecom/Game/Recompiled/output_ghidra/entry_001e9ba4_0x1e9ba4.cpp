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

// Function: entry_001e9ba4
// Address: 0x1e9ba4 - 0x1e9bd0
void entry_001e9ba4_0x1e9ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9ba4_0x1e9ba4");
#endif

    ctx->pc = 0x1e9ba4u;

    // 0x1e9ba4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9ba8: 0x946411f6  lhu         $a0, 0x11F6($v1)
    ctx->pc = 0x1e9ba8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x1e9bac: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x1e9bacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e9bb0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e9bb4: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E9BB4u;
    {
        const bool branch_taken_0x1e9bb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9bb4) {
            ctx->pc = 0x1E9C04u;
            return;
        }
    }
    ctx->pc = 0x1E9BBCu;
    // 0x1e9bbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e9bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9bc0: 0x10c40003  beq         $a2, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9BC0u;
    {
        const bool branch_taken_0x1e9bc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e9bc0) {
            ctx->pc = 0x1E9BD0u;
            return;
        }
    }
    ctx->pc = 0x1E9BC8u;
    // 0x1e9bc8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1E9BC8u;
    {
        const bool branch_taken_0x1e9bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9bc8) {
            ctx->pc = 0x1E9BD0u;
            return;
        }
    }
    ctx->pc = 0x1E9BD0u;
}
