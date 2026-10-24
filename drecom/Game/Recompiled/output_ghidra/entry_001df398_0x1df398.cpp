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

// Function: entry_001df398
// Address: 0x1df398 - 0x1df3b0
void entry_001df398_0x1df398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df398_0x1df398");
#endif

    ctx->pc = 0x1df398u;

    // 0x1df398: 0x8eb300b0  lw          $s3, 0xB0($s5)
    ctx->pc = 0x1df398u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x1df39c: 0x8ef00a68  lw          $s0, 0xA68($s7)
    ctx->pc = 0x1df39cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1df3a0: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x1df3a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1df3a4: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1df3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df3a8: 0x0  nop
    ctx->pc = 0x1df3a8u;
    // NOP
    // 0x1df3ac: 0x0  nop
    ctx->pc = 0x1df3acu;
    // NOP
    ctx->pc = 0x1df3b0u;
}
