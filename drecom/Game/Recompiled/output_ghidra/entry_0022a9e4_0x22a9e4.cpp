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

// Function: entry_0022a9e4
// Address: 0x22a9e4 - 0x22a9fc
void entry_0022a9e4_0x22a9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a9e4_0x22a9e4");
#endif

    ctx->pc = 0x22a9e4u;

    // 0x22a9e4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a9e8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22a9e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22a9ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A9ECu;
    {
        const bool branch_taken_0x22a9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a9ec) {
            ctx->pc = 0x22A9FCu;
            return;
        }
    }
    ctx->pc = 0x22A9F4u;
    // 0x22a9f4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a9f8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x22a9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x22a9fcu;
}
