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

// Function: entry_00296eb0
// Address: 0x296eb0 - 0x296ed4
void entry_00296eb0_0x296eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296eb0_0x296eb0");
#endif

    ctx->pc = 0x296eb0u;

    // 0x296eb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x296eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x296eb4: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x296eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x296eb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x296eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x296ebc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x296ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x296ec0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296EC0u;
    {
        const bool branch_taken_0x296ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296ec0) {
            ctx->pc = 0x296ED4u;
            return;
        }
    }
    ctx->pc = 0x296EC8u;
    // 0x296ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296ecc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296ed0: 0xac23c9e8  sw          $v1, -0x3618($at)
    ctx->pc = 0x296ed0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80C9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E8u, _value); } while (0);
    ctx->pc = 0x296ed4u;
}
