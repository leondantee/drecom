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

// Function: entry_00158cb0
// Address: 0x158cb0 - 0x158cc4
void entry_00158cb0_0x158cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158cb0_0x158cb0");
#endif

    ctx->pc = 0x158cb0u;

    // 0x158cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158cb4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158cb8: 0xa0234f11  sb          $v1, 0x4F11($at)
    ctx->pc = 0x158cb8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x158cbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x158CBCu;
    {
        const bool branch_taken_0x158cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158cbc) {
            ctx->pc = 0x158CF0u;
            return;
        }
    }
    ctx->pc = 0x158CC4u;
}
