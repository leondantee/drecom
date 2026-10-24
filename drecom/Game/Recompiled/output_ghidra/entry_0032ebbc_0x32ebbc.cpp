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

// Function: entry_0032ebbc
// Address: 0x32ebbc - 0x32ebd4
void entry_0032ebbc_0x32ebbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ebbc_0x32ebbc");
#endif

    ctx->pc = 0x32ebbcu;

    // 0x32ebbc: 0x8e036614  lw          $v1, 0x6614($s0)
    ctx->pc = 0x32ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26132)));
    // 0x32ebc0: 0x2861002c  slti        $at, $v1, 0x2C
    ctx->pc = 0x32ebc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x32ebc4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32EBC4u;
    {
        const bool branch_taken_0x32ebc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ebc4) {
            ctx->pc = 0x32EBD4u;
            return;
        }
    }
    ctx->pc = 0x32EBCCu;
    // 0x32ebcc: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x32ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x32ebd0: 0xae036614  sw          $v1, 0x6614($s0)
    ctx->pc = 0x32ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26132), GPR_U32(ctx, 3));
    ctx->pc = 0x32ebd4u;
}
