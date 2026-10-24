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

// Function: entry_002e7d24
// Address: 0x2e7d24 - 0x2e7d40
void entry_002e7d24_0x2e7d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7d24_0x2e7d24");
#endif

    ctx->pc = 0x2e7d24u;

    // 0x2e7d24: 0x920300ea  lbu         $v1, 0xEA($s0)
    ctx->pc = 0x2e7d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 234)));
    // 0x2e7d28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e7d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e7d2c: 0xa20300ea  sb          $v1, 0xEA($s0)
    ctx->pc = 0x2e7d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 234), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7d30: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2e7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2e7d34: 0xa60300e8  sh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7d34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7d38: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2E7D38u;
    {
        const bool branch_taken_0x2e7d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d38) {
            ctx->pc = 0x2E7FB8u;
            return;
        }
    }
    ctx->pc = 0x2E7D40u;
}
