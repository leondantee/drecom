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

// Function: entry_001a55e0
// Address: 0x1a55e0 - 0x1a5600
void entry_001a55e0_0x1a55e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a55e0_0x1a55e0");
#endif

    ctx->pc = 0x1a55e0u;

    // 0x1a55e0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a55e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a55e8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1a55e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a55ec: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a55ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a55f0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1a55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1a55f4: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1a55f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x1a55f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A55F8u;
    {
        const bool branch_taken_0x1a55f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55f8) {
            ctx->pc = 0x1A5620u;
            return;
        }
    }
    ctx->pc = 0x1A5600u;
}
