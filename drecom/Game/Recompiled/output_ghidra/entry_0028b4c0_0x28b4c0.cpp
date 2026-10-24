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

// Function: entry_0028b4c0
// Address: 0x28b4c0 - 0x28b4dc
void entry_0028b4c0_0x28b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b4c0_0x28b4c0");
#endif

    ctx->pc = 0x28b4c0u;

    // 0x28b4c0: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x28b4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x28b4c4: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x28b4c4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b4c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b4cc: 0x8c272048  lw          $a3, 0x2048($at)
    ctx->pc = 0x28b4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x622048u));
    // 0x28b4d0: 0xe4e1009c  swc1        $f1, 0x9C($a3)
    ctx->pc = 0x28b4d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 156), bits); }
    // 0x28b4d4: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x28B4D4u;
    {
        const bool branch_taken_0x28b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b4d4) {
            ctx->pc = 0x28B98Cu;
            return;
        }
    }
    ctx->pc = 0x28B4DCu;
}
