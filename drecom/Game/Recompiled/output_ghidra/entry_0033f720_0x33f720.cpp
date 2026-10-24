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

// Function: entry_0033f720
// Address: 0x33f720 - 0x33f738
void entry_0033f720_0x33f720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f720_0x33f720");
#endif

    ctx->pc = 0x33f720u;

    // 0x33f720: 0x9204006c  lbu         $a0, 0x6C($s0)
    ctx->pc = 0x33f720u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x33f724: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f728: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33f728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f72c: 0xa203006c  sb          $v1, 0x6C($s0)
    ctx->pc = 0x33f72cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f730: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33F730u;
    {
        const bool branch_taken_0x33f730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f730) {
            ctx->pc = 0x33F780u;
            return;
        }
    }
    ctx->pc = 0x33F738u;
}
