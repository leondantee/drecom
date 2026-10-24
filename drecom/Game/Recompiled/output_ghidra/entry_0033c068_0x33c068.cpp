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

// Function: entry_0033c068
// Address: 0x33c068 - 0x33c09c
void entry_0033c068_0x33c068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c068_0x33c068");
#endif

    ctx->pc = 0x33c068u;

    // 0x33c068: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x33c068u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x33c06c: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x33c06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33c070: 0xa6060006  sh          $a2, 0x6($s0)
    ctx->pc = 0x33c070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x33c074: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x33c074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x33c078: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33c078u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33c07c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33c07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x33c080: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33c080u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33c084: 0x1c600079  bgtz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x33C084u;
    {
        const bool branch_taken_0x33c084 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x33c084) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33C08Cu;
    // 0x33c08c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x33c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33c090: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x33c090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x33c094: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x33C094u;
    {
        const bool branch_taken_0x33c094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c094) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33C09Cu;
}
