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

// Function: entry_00146aa4
// Address: 0x146aa4 - 0x146ab8
void entry_00146aa4_0x146aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146aa4_0x146aa4");
#endif

    ctx->pc = 0x146aa4u;

    // 0x146aa4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x146aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x146aa8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146aac: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x146aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x146ab0: 0x100002d5  b           . + 4 + (0x2D5 << 2)
    ctx->pc = 0x146AB0u;
    {
        const bool branch_taken_0x146ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146ab0) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146AB8u;
}
