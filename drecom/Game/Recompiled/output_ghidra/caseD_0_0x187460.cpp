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

// Function: caseD_0
// Address: 0x187460 - 0x187484
void caseD_0_0x187460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x187460");
#endif

    ctx->pc = 0x187460u;

    // 0x187460: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187464: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187464u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x187468: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x187468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x18746c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18746Cu;
    {
        const bool branch_taken_0x18746c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18746c) {
            ctx->pc = 0x187484u;
            return;
        }
    }
    ctx->pc = 0x187474u;
    // 0x187474: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187478: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x187478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x18747c: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x18747Cu;
    {
        const bool branch_taken_0x18747c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18747c) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x187484u;
}
