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

// Function: entry_00329c3c
// Address: 0x329c3c - 0x329c58
void entry_00329c3c_0x329c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329c3c_0x329c3c");
#endif

    ctx->pc = 0x329c3cu;

    // 0x329c3c: 0x86032910  lh          $v1, 0x2910($s0)
    ctx->pc = 0x329c3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10512)));
    // 0x329c40: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x329c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x329c44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329c44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329c48: 0x2863001c  slti        $v1, $v1, 0x1C
    ctx->pc = 0x329c48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x329c4c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x329C4Cu;
    {
        const bool branch_taken_0x329c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329c4c) {
            ctx->pc = 0x329C58u;
            return;
        }
    }
    ctx->pc = 0x329C54u;
    // 0x329c54: 0xa200290e  sb          $zero, 0x290E($s0)
    ctx->pc = 0x329c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10510), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x329c58u;
}
