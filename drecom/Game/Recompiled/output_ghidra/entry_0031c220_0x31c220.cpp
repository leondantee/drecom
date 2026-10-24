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

// Function: entry_0031c220
// Address: 0x31c220 - 0x31c248
void entry_0031c220_0x31c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c220_0x31c220");
#endif

    ctx->pc = 0x31c220u;

    // 0x31c220: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c224: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x31c224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x31c228: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x31c228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31c22c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c230: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x31C230u;
    {
        const bool branch_taken_0x31c230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31c230) {
            ctx->pc = 0x31C2D0u;
            return;
        }
    }
    ctx->pc = 0x31C238u;
    // 0x31c238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C238u;
    {
        const bool branch_taken_0x31c238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c238) {
            ctx->pc = 0x31C248u;
            return;
        }
    }
    ctx->pc = 0x31C240u;
    // 0x31c240: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x31C240u;
    {
        const bool branch_taken_0x31c240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c240) {
            ctx->pc = 0x31C354u;
            return;
        }
    }
    ctx->pc = 0x31C248u;
}
