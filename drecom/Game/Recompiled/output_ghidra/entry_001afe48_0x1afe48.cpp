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

// Function: entry_001afe48
// Address: 0x1afe48 - 0x1afe68
void entry_001afe48_0x1afe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afe48_0x1afe48");
#endif

    ctx->pc = 0x1afe48u;

    // 0x1afe48: 0x73c01e28  paddub      $v1, $fp, $zero
    ctx->pc = 0x1afe48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1afe4c: 0x247e0001  addiu       $fp, $v1, 0x1
    ctx->pc = 0x1afe4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1afe50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1afe50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1afe54: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1afe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1afe58: 0xac700090  sw          $s0, 0x90($v1)
    ctx->pc = 0x1afe58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 16));
    // 0x1afe5c: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1afe5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1afe60: 0x0  nop
    ctx->pc = 0x1afe60u;
    // NOP
    // 0x1afe64: 0x0  nop
    ctx->pc = 0x1afe64u;
    // NOP
    ctx->pc = 0x1afe68u;
}
