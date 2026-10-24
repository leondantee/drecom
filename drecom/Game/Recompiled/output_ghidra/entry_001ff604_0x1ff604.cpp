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

// Function: entry_001ff604
// Address: 0x1ff604 - 0x1ff618
void entry_001ff604_0x1ff604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff604_0x1ff604");
#endif

    ctx->pc = 0x1ff604u;

    // 0x1ff604: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ff604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ff608: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x1ff608u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ff60c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ff60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff610: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x1ff610u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1ff614: 0x0  nop
    ctx->pc = 0x1ff614u;
    // NOP
    ctx->pc = 0x1ff618u;
}
