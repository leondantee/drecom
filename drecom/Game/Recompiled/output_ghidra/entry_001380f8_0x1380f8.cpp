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

// Function: entry_001380f8
// Address: 0x1380f8 - 0x138110
void entry_001380f8_0x1380f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001380f8_0x1380f8");
#endif

    ctx->pc = 0x1380f8u;

    // 0x1380f8: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x1380f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1380fc: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1380FCu;
    {
        const bool branch_taken_0x1380fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1380fc) {
            ctx->pc = 0x1380BCu;
            return;
        }
    }
    ctx->pc = 0x138104u;
    // 0x138104: 0x9265009a  lbu         $a1, 0x9A($s3)
    ctx->pc = 0x138104u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x138108: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x138108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13810c: 0xa264009a  sb          $a0, 0x9A($s3)
    ctx->pc = 0x13810cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x138110u;
}
