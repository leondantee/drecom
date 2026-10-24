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

// Function: entry_00137bc4
// Address: 0x137bc4 - 0x137bd8
void entry_00137bc4_0x137bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137bc4_0x137bc4");
#endif

    ctx->pc = 0x137bc4u;

    // 0x137bc4: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x137bc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x137bc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x137bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x137bcc: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x137bccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x137bd0: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x137BD0u;
    {
        const bool branch_taken_0x137bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137bd0) {
            ctx->pc = 0x138110u;
            return;
        }
    }
    ctx->pc = 0x137BD8u;
}
