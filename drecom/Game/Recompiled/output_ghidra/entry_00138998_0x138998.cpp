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

// Function: entry_00138998
// Address: 0x138998 - 0x1389b0
void entry_00138998_0x138998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138998_0x138998");
#endif

    ctx->pc = 0x138998u;

    // 0x138998: 0x2a150004  slti        $s5, $s0, 0x4
    ctx->pc = 0x138998u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13899c: 0x16a0fff0  bnez        $s5, . + 4 + (-0x10 << 2)
    ctx->pc = 0x13899Cu;
    {
        const bool branch_taken_0x13899c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13899c) {
            ctx->pc = 0x138960u;
            return;
        }
    }
    ctx->pc = 0x1389A4u;
    // 0x1389a4: 0x9265009a  lbu         $a1, 0x9A($s3)
    ctx->pc = 0x1389a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x1389a8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1389a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1389ac: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x1389acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1389b0u;
}
