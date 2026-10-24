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

// Function: entry_0030c148
// Address: 0x30c148 - 0x30c164
void entry_0030c148_0x30c148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c148_0x30c148");
#endif

    ctx->pc = 0x30c148u;

    // 0x30c148: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c14c: 0xac601338  sw          $zero, 0x1338($v1)
    ctx->pc = 0x30c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 0));
    // 0x30c150: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c154: 0xac601368  sw          $zero, 0x1368($v1)
    ctx->pc = 0x30c154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4968), GPR_U32(ctx, 0));
    // 0x30c158: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x30c158u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c15c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30C15Cu;
    {
        const bool branch_taken_0x30c15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c15c) {
            ctx->pc = 0x30C1A8u;
            return;
        }
    }
    ctx->pc = 0x30C164u;
}
