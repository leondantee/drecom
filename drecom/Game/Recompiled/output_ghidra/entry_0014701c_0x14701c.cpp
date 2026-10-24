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

// Function: entry_0014701c
// Address: 0x14701c - 0x14706c
void entry_0014701c_0x14701c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014701c_0x14701c");
#endif

    ctx->pc = 0x14701cu;

    // 0x14701c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147020: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x147020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x147024: 0x10600178  beqz        $v1, . + 4 + (0x178 << 2)
    ctx->pc = 0x147024u;
    {
        const bool branch_taken_0x147024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147024) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x14702Cu;
    // 0x14702c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147030: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147034: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x147034u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x147038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14703c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14703cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x147040: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x147040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147044: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x147044u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x147048: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x147048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14704c: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x14704cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x147050: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x147050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x147054: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x147054u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147058: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x147058u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x14705c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147060: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x147060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x147064: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x147064u;
    {
        const bool branch_taken_0x147064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147064) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x14706Cu;
}
