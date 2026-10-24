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

// Function: entry_00378044
// Address: 0x378044 - 0x378064
void entry_00378044_0x378044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378044_0x378044");
#endif

    ctx->pc = 0x378044u;

    // 0x378044: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x378044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x378048: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378048u;
    {
        const bool branch_taken_0x378048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378048) {
            ctx->pc = 0x378064u;
            return;
        }
    }
    ctx->pc = 0x378050u;
    // 0x378050: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x378050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x378054: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378058: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37805c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378060: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x378064u;
}
