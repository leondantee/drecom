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

// Function: entry_00356ca8
// Address: 0x356ca8 - 0x356cc0
void entry_00356ca8_0x356ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356ca8_0x356ca8");
#endif

    ctx->pc = 0x356ca8u;

    // 0x356ca8: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x356ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x356cac: 0x24e4a610  addiu       $a0, $a3, -0x59F0
    ctx->pc = 0x356cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944272));
    // 0x356cb0: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x356cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x356cb4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x356cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x356cb8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x356cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x356cbc: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x356cbcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x356cc0u;
}
