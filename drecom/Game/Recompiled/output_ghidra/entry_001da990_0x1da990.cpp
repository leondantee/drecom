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

// Function: entry_001da990
// Address: 0x1da990 - 0x1da9a8
void entry_001da990_0x1da990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da990_0x1da990");
#endif

    ctx->pc = 0x1da990u;

    // 0x1da990: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x1da990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x1da994: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA994u;
    {
        const bool branch_taken_0x1da994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da994) {
            ctx->pc = 0x1DA9A8u;
            return;
        }
    }
    ctx->pc = 0x1DA99Cu;
    // 0x1da99c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1da99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1da9a0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da9a4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1da9a8u;
}
