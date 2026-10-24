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

// Function: entry_00165b84
// Address: 0x165b84 - 0x165b90
void entry_00165b84_0x165b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165b84_0x165b84");
#endif

    ctx->pc = 0x165b84u;

    // 0x165b84: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x165b84u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x165b88: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x165b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x165b8c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x165b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x165b90u;
}
