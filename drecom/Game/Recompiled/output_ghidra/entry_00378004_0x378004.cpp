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

// Function: entry_00378004
// Address: 0x378004 - 0x378024
void entry_00378004_0x378004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378004_0x378004");
#endif

    ctx->pc = 0x378004u;

    // 0x378004: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x378004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x378008: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378008u;
    {
        const bool branch_taken_0x378008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378008) {
            ctx->pc = 0x378024u;
            return;
        }
    }
    ctx->pc = 0x378010u;
    // 0x378010: 0x260500c8  addiu       $a1, $s0, 0xC8
    ctx->pc = 0x378010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x378014: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378018: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37801c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37801cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378020: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x378024u;
}
