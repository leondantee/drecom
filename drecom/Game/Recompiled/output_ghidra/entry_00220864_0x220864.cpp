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

// Function: entry_00220864
// Address: 0x220864 - 0x220870
void entry_00220864_0x220864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220864_0x220864");
#endif

    ctx->pc = 0x220864u;

    // 0x220864: 0x2444cf78  addiu       $a0, $v0, -0x3088
    ctx->pc = 0x220864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954872));
    // 0x220868: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220868u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22086c: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x22086cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->pc = 0x220870u;
}
