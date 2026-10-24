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

// Function: entry_00377fe4
// Address: 0x377fe4 - 0x378004
void entry_00377fe4_0x377fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377fe4_0x377fe4");
#endif

    ctx->pc = 0x377fe4u;

    // 0x377fe4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x377fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x377fe8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x377FE8u;
    {
        const bool branch_taken_0x377fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377fe8) {
            ctx->pc = 0x378004u;
            return;
        }
    }
    ctx->pc = 0x377FF0u;
    // 0x377ff0: 0x260500c4  addiu       $a1, $s0, 0xC4
    ctx->pc = 0x377ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x377ff4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377ff8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377ffc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378000: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x378004u;
}
