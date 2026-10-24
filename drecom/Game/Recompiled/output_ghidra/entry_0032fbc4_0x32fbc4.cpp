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

// Function: entry_0032fbc4
// Address: 0x32fbc4 - 0x32fbe0
void entry_0032fbc4_0x32fbc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032fbc4_0x32fbc4");
#endif

    ctx->pc = 0x32fbc4u;

    // 0x32fbc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32fbc8: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x32fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x32fbcc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x32fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32fbd0: 0xac430520  sw          $v1, 0x520($v0)
    ctx->pc = 0x32fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1312), GPR_U32(ctx, 3));
    // 0x32fbd4: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x32fbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32fbd8: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x32fbd8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x32fbdc: 0x0  nop
    ctx->pc = 0x32fbdcu;
    // NOP
    ctx->pc = 0x32fbe0u;
}
