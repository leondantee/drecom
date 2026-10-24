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

// Function: entry_00187404
// Address: 0x187404 - 0x187428
void entry_00187404_0x187404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187404_0x187404");
#endif

    ctx->pc = 0x187404u;

    // 0x187404: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187408: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187408u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x18740c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x18740cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x187410: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x187410u;
    {
        const bool branch_taken_0x187410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187410) {
            ctx->pc = 0x187428u;
            return;
        }
    }
    ctx->pc = 0x187418u;
    // 0x187418: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18741c: 0xac200358  sw          $zero, 0x358($at)
    ctx->pc = 0x18741cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480358u, _value); } while (0);
    // 0x187420: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187420u;
    {
        const bool branch_taken_0x187420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187420) {
            ctx->pc = 0x187430u;
            return;
        }
    }
    ctx->pc = 0x187428u;
}
