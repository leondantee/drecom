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

// Function: entry_0017b298
// Address: 0x17b298 - 0x17b2ac
void entry_0017b298_0x17b298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b298_0x17b298");
#endif

    ctx->pc = 0x17b298u;

    // 0x17b298: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x17b298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x17b29c: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x17b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x17b2a0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x17b2a0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3EDCE0u));
    // 0x17b2a4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b2a8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x17b2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x17b2acu;
}
