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

// Function: entry_00377fb8
// Address: 0x377fb8 - 0x377fe4
void entry_00377fb8_0x377fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377fb8_0x377fb8");
#endif

    ctx->pc = 0x377fb8u;

    // 0x377fb8: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x377fb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x377fbc: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x377FBCu;
    {
        const bool branch_taken_0x377fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377fbc) {
            ctx->pc = 0x377EF0u;
            return;
        }
    }
    ctx->pc = 0x377FC4u;
    // 0x377fc4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x377fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x377fc8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x377FC8u;
    {
        const bool branch_taken_0x377fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377fc8) {
            ctx->pc = 0x377FE4u;
            return;
        }
    }
    ctx->pc = 0x377FD0u;
    // 0x377fd0: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x377fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x377fd4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377fd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377fdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377fe0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x377fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x377fe4u;
}
