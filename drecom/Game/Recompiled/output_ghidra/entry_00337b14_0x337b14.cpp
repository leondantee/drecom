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

// Function: entry_00337b14
// Address: 0x337b14 - 0x337b44
void entry_00337b14_0x337b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337b14_0x337b14");
#endif

    ctx->pc = 0x337b14u;

    // 0x337b14: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337b18: 0x8c224e50  lw          $v0, 0x4E50($at)
    ctx->pc = 0x337b18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894E50u));
    // 0x337b1c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x337b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x337b20: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x337b20u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x337b24: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337b28: 0x8c224ec0  lw          $v0, 0x4EC0($at)
    ctx->pc = 0x337b28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894EC0u));
    // 0x337b2c: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x337b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x337b30: 0x9212683e  lbu         $s2, 0x683E($s0)
    ctx->pc = 0x337b30u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26686)));
    // 0x337b34: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x337b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x337b38: 0xa202683e  sb          $v0, 0x683E($s0)
    ctx->pc = 0x337b38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26686), (uint8_t)GPR_U32(ctx, 2));
    // 0x337b3c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x337B3Cu;
    {
        const bool branch_taken_0x337b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337b3c) {
            ctx->pc = 0x337B94u;
            return;
        }
    }
    ctx->pc = 0x337B44u;
}
