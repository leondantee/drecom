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

// Function: entry_001df548
// Address: 0x1df548 - 0x1df560
void entry_001df548_0x1df548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df548_0x1df548");
#endif

    ctx->pc = 0x1df548u;

    // 0x1df548: 0x8eb300b4  lw          $s3, 0xB4($s5)
    ctx->pc = 0x1df548u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 180)));
    // 0x1df54c: 0x8ef00a68  lw          $s0, 0xA68($s7)
    ctx->pc = 0x1df54cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1df550: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x1df550u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1df554: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1df554u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df558: 0x0  nop
    ctx->pc = 0x1df558u;
    // NOP
    // 0x1df55c: 0x0  nop
    ctx->pc = 0x1df55cu;
    // NOP
    ctx->pc = 0x1df560u;
}
