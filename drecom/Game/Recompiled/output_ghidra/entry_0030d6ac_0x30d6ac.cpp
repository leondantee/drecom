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

// Function: entry_0030d6ac
// Address: 0x30d6ac - 0x30d6d0
void entry_0030d6ac_0x30d6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d6ac_0x30d6ac");
#endif

    ctx->pc = 0x30d6acu;

    // 0x30d6ac: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x30d6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x30d6b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D6B0u;
    {
        const bool branch_taken_0x30d6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d6b0) {
            ctx->pc = 0x30D6D0u;
            return;
        }
    }
    ctx->pc = 0x30D6B8u;
    // 0x30d6b8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x30d6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x30d6bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D6BCu;
    {
        const bool branch_taken_0x30d6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d6bc) {
            ctx->pc = 0x30D6D0u;
            return;
        }
    }
    ctx->pc = 0x30D6C4u;
    // 0x30d6c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d6c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d6cc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30d6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x30d6d0u;
}
