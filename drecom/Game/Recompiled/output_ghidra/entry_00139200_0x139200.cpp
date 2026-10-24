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

// Function: entry_00139200
// Address: 0x139200 - 0x139218
void entry_00139200_0x139200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139200_0x139200");
#endif

    ctx->pc = 0x139200u;

    // 0x139200: 0x2a060004  slti        $a2, $s0, 0x4
    ctx->pc = 0x139200u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x139204: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x139204u;
    {
        const bool branch_taken_0x139204 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x139204) {
            ctx->pc = 0x1391C8u;
            return;
        }
    }
    ctx->pc = 0x13920Cu;
    // 0x13920c: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x13920cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x139210: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139214: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x139214u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x139218u;
}
