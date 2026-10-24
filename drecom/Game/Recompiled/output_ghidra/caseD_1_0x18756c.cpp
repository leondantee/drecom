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

// Function: caseD_1
// Address: 0x18756c - 0x187590
void caseD_1_0x18756c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x18756c");
#endif

    ctx->pc = 0x18756cu;

    // 0x18756c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18756cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187570: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187570u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x187574: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x187574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x187578: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x187578u;
    {
        const bool branch_taken_0x187578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187578) {
            ctx->pc = 0x187590u;
            return;
        }
    }
    ctx->pc = 0x187580u;
    // 0x187580: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187584: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x187584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x187588: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x187588u;
    {
        const bool branch_taken_0x187588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187588) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x187590u;
}
