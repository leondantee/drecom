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

// Function: entry_001b974c
// Address: 0x1b974c - 0x1b978c
void entry_001b974c_0x1b974c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b974c_0x1b974c");
#endif

    ctx->pc = 0x1b974cu;

    // 0x1b974c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9750: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b9750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1b9754: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9754u;
    {
        const bool branch_taken_0x1b9754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9754) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B975Cu;
    // 0x1b975c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b975cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9760: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9764: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b9764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b9768: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b976c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1b976cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9770: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9774: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1b9774u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9778: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b977c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b977cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9780: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b9780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b9784: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9788: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1b9788u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1b978cu;
}
