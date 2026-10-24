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

// Function: entry_0012ebac
// Address: 0x12ebac - 0x12ebc8
void entry_0012ebac_0x12ebac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ebac_0x12ebac");
#endif

    ctx->pc = 0x12ebacu;

    // 0x12ebac: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12ebacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12ebb0: 0x84228db2  lh          $v0, -0x724E($at)
    ctx->pc = 0x12ebb0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x388DB2u));
    // 0x12ebb4: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x12ebb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ebb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ebbc: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x12ebbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ebc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12EBC0u;
    {
        const bool branch_taken_0x12ebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ebc0) {
            ctx->pc = 0x12EBE0u;
            return;
        }
    }
    ctx->pc = 0x12EBC8u;
}
