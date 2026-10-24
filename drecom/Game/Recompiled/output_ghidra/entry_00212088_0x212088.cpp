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

// Function: entry_00212088
// Address: 0x212088 - 0x212094
void entry_00212088_0x212088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212088_0x212088");
#endif

    ctx->pc = 0x212088u;

    // 0x212088: 0x24441a6c  addiu       $a0, $v0, 0x1A6C
    ctx->pc = 0x212088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6764));
    // 0x21208c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21208cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212090: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x212090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x212094u;
}
