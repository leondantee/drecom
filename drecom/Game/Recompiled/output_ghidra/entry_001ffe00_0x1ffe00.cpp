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

// Function: entry_001ffe00
// Address: 0x1ffe00 - 0x1ffe2c
void entry_001ffe00_0x1ffe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffe00_0x1ffe00");
#endif

    ctx->pc = 0x1ffe00u;

    // 0x1ffe00: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe04: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x1ffe04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1ffe08: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1ffe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ffe0c: 0xa0850346  sb          $a1, 0x346($a0)
    ctx->pc = 0x1ffe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ffe10: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe14: 0x90660345  lbu         $a2, 0x345($v1)
    ctx->pc = 0x1ffe14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1ffe18: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1ffe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ffe1c: 0xa0650345  sb          $a1, 0x345($v1)
    ctx->pc = 0x1ffe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ffe20: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ffe20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ffe24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FFE24u;
    {
        const bool branch_taken_0x1ffe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe24) {
            ctx->pc = 0x1FFE68u;
            return;
        }
    }
    ctx->pc = 0x1FFE2Cu;
}
