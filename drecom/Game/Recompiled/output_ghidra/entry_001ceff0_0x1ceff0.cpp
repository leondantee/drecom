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

// Function: entry_001ceff0
// Address: 0x1ceff0 - 0x1cf020
void entry_001ceff0_0x1ceff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceff0_0x1ceff0");
#endif

    ctx->pc = 0x1ceff0u;

    // 0x1ceff0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceff4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ceff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ceff8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ceff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ceffc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1ceffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cf000: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF000u;
    {
        const bool branch_taken_0x1cf000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf000) {
            ctx->pc = 0x1CF020u;
            return;
        }
    }
    ctx->pc = 0x1CF008u;
    // 0x1cf008: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf00c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1cf00cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1cf010: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cf010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cf014: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cf014u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf018: 0x100003df  b           . + 4 + (0x3DF << 2)
    ctx->pc = 0x1CF018u;
    {
        const bool branch_taken_0x1cf018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf018) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF020u;
}
