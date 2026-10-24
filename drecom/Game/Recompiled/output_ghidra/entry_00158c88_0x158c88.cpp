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

// Function: entry_00158c88
// Address: 0x158c88 - 0x158cb0
void entry_00158c88_0x158c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158c88_0x158c88");
#endif

    ctx->pc = 0x158c88u;

    // 0x158c88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158c8c: 0xa0204f11  sb          $zero, 0x4F11($at)
    ctx->pc = 0x158c8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x158c90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158c94: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x158c94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x158c98: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x158c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x158c9c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x158c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x158ca0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158ca4: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x158ca4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x158ca8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x158CA8u;
    {
        const bool branch_taken_0x158ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158ca8) {
            ctx->pc = 0x158CF0u;
            return;
        }
    }
    ctx->pc = 0x158CB0u;
}
