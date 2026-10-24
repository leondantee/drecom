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

// Function: entry_001a4c38
// Address: 0x1a4c38 - 0x1a4c58
void entry_001a4c38_0x1a4c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4c38_0x1a4c38");
#endif

    ctx->pc = 0x1a4c38u;

    // 0x1a4c38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4c3c: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4c3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4c40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4c44: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1a4c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1a4c48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4C48u;
    {
        const bool branch_taken_0x1a4c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c48) {
            ctx->pc = 0x1A4C58u;
            return;
        }
    }
    ctx->pc = 0x1A4C50u;
    // 0x1a4c50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4c54: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1a4c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a4c58u;
}
