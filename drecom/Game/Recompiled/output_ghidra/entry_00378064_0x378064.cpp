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

// Function: entry_00378064
// Address: 0x378064 - 0x378084
void entry_00378064_0x378064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378064_0x378064");
#endif

    ctx->pc = 0x378064u;

    // 0x378064: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x378064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x378068: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378068u;
    {
        const bool branch_taken_0x378068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378068) {
            ctx->pc = 0x378084u;
            return;
        }
    }
    ctx->pc = 0x378070u;
    // 0x378070: 0x26050114  addiu       $a1, $s0, 0x114
    ctx->pc = 0x378070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
    // 0x378074: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378078: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37807c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378080: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x378084u;
}
