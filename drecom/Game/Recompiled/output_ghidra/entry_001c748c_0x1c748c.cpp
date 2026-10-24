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

// Function: entry_001c748c
// Address: 0x1c748c - 0x1c74c4
void entry_001c748c_0x1c748c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c748c_0x1c748c");
#endif

    ctx->pc = 0x1c748cu;

    // 0x1c748c: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1c748cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1c7490: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c7490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c7494: 0x106003b3  beqz        $v1, . + 4 + (0x3B3 << 2)
    ctx->pc = 0x1C7494u;
    {
        const bool branch_taken_0x1c7494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7494) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C749Cu;
    // 0x1c749c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c749cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c74a0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c74a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c74a4: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x1c74a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x1c74a8: 0x106003ae  beqz        $v1, . + 4 + (0x3AE << 2)
    ctx->pc = 0x1C74A8u;
    {
        const bool branch_taken_0x1c74a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c74a8) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C74B0u;
    // 0x1c74b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c74b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c74b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c74b8: 0xac651b60  sw          $a1, 0x1B60($v1)
    ctx->pc = 0x1c74b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 5));
    // 0x1c74bc: 0x100003a9  b           . + 4 + (0x3A9 << 2)
    ctx->pc = 0x1C74BCu;
    {
        const bool branch_taken_0x1c74bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c74bc) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C74C4u;
}
