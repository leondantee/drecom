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

// Function: entry_00114d2c
// Address: 0x114d2c - 0x114d44
void entry_00114d2c_0x114d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114d2c_0x114d2c");
#endif

    ctx->pc = 0x114d2cu;

    // 0x114d2c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x114d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x114d30: 0xc440d8cc  lwc1        $f0, -0x2734($v0)
    ctx->pc = 0x114d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114d34: 0xc461d8dc  lwc1        $f1, -0x2724($v1)
    ctx->pc = 0x114d34u;
    { uint32_t bits = FAST_READ32(0x3AD8DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114d38: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x114d38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x114d3c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x114D3Cu;
    {
        const bool branch_taken_0x114d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D3Cu;
        // 0x114d40: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d3c) {
            ctx->pc = 0x114F54u;
            return;
        }
    }
    ctx->pc = 0x114D44u;
}
