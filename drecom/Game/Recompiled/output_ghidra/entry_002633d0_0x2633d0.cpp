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

// Function: entry_002633d0
// Address: 0x2633d0 - 0x2633e0
void entry_002633d0_0x2633d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002633d0_0x2633d0");
#endif

    ctx->pc = 0x2633d0u;

    // 0x2633d0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2633d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2633d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2633d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2633d8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2633d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2633dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2633dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x2633e0u;
}
