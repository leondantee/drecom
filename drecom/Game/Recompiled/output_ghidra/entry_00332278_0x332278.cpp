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

// Function: entry_00332278
// Address: 0x332278 - 0x332288
void entry_00332278_0x332278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332278_0x332278");
#endif

    ctx->pc = 0x332278u;

    // 0x332278: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x332278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x33227c: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x33227cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x332280: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x332280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x332284: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x332284u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x332288u;
}
