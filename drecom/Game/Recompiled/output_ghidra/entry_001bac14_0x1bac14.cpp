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

// Function: entry_001bac14
// Address: 0x1bac14 - 0x1bac54
void entry_001bac14_0x1bac14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bac14_0x1bac14");
#endif

    ctx->pc = 0x1bac14u;

    // 0x1bac14: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bac14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bac18: 0x906609e7  lbu         $a2, 0x9E7($v1)
    ctx->pc = 0x1bac18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1bac1c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1BAC1Cu;
    {
        const bool branch_taken_0x1bac1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac1c) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BAC24u;
    // 0x1bac24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bac28: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bac28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bac2c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1bac2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bac30: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bac30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bac34: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x1bac34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bac38: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bac38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bac3c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1bac3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bac40: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bac40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bac44: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1bac44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bac48: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1bac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bac4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bac50: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1bac50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1bac54u;
}
