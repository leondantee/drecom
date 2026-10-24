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

// Function: entry_002ce8a8
// Address: 0x2ce8a8 - 0x2ce8c0
void entry_002ce8a8_0x2ce8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce8a8_0x2ce8a8");
#endif

    ctx->pc = 0x2ce8a8u;

    // 0x2ce8a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce8ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2ce8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ce8b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ce8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ce8b4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ce8b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ce8b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2CE8B8u;
    {
        const bool branch_taken_0x2ce8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce8b8) {
            ctx->pc = 0x2CE938u;
            return;
        }
    }
    ctx->pc = 0x2CE8C0u;
}
