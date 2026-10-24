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

// Function: entry_002e0ab4
// Address: 0x2e0ab4 - 0x2e0adc
void entry_002e0ab4_0x2e0ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0ab4_0x2e0ab4");
#endif

    ctx->pc = 0x2e0ab4u;

    // 0x2e0ab4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0ab8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e0ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e0abc: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2E0ABCu;
    {
        const bool branch_taken_0x2e0abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0abc) {
            ctx->pc = 0x2E0B90u;
            return;
        }
    }
    ctx->pc = 0x2E0AC4u;
    // 0x2e0ac4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0ac8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2e0ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e0acc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e0accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e0ad0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2e0ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0ad4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2E0AD4u;
    {
        const bool branch_taken_0x2e0ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ad4) {
            ctx->pc = 0x2E0B90u;
            return;
        }
    }
    ctx->pc = 0x2E0ADCu;
}
