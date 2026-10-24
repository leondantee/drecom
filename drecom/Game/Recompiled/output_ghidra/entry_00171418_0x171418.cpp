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

// Function: entry_00171418
// Address: 0x171418 - 0x171428
void entry_00171418_0x171418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171418_0x171418");
#endif

    ctx->pc = 0x171418u;

    // 0x171418: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x171418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17141c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x17141cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x171420: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x171420u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x171424: 0x0  nop
    ctx->pc = 0x171424u;
    // NOP
    ctx->pc = 0x171428u;
}
