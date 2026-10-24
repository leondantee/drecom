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

// Function: entry_00114d10
// Address: 0x114d10 - 0x114d2c
void entry_00114d10_0x114d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114d10_0x114d10");
#endif

    ctx->pc = 0x114d10u;

    // 0x114d10: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x114D10u;
    {
        const bool branch_taken_0x114d10 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x114D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D10u;
        // 0x114d14: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d10) {
            ctx->pc = 0x114D2Cu;
            return;
        }
    }
    ctx->pc = 0x114D18u;
    // 0x114d18: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x114d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x114d1c: 0xc441d8cc  lwc1        $f1, -0x2734($v0)
    ctx->pc = 0x114d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114d20: 0xc460d8dc  lwc1        $f0, -0x2724($v1)
    ctx->pc = 0x114d20u;
    { uint32_t bits = FAST_READ32(0x3AD8DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114d24: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x114D24u;
    {
        const bool branch_taken_0x114d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D24u;
        // 0x114d28: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d24) {
            ctx->pc = 0x114F54u;
            return;
        }
    }
    ctx->pc = 0x114D2Cu;
}
