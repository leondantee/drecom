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

// Function: entry_0028d550
// Address: 0x28d550 - 0x28d560
void entry_0028d550_0x28d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d550_0x28d550");
#endif

    ctx->pc = 0x28d550u;

    // 0x28d550: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d554: 0xac2020e8  sw          $zero, 0x20E8($at)
    ctx->pc = 0x28d554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E8u, _value); } while (0);
    // 0x28d558: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x28D558u;
    {
        const bool branch_taken_0x28d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d558) {
            ctx->pc = 0x28D8B8u;
            return;
        }
    }
    ctx->pc = 0x28D560u;
}
