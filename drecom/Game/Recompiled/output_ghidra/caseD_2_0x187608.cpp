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

// Function: caseD_2
// Address: 0x187608 - 0x18762c
void caseD_2_0x187608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x187608");
#endif

    ctx->pc = 0x187608u;

    // 0x187608: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18760c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x18760cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x187610: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x187610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x187614: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x187614u;
    {
        const bool branch_taken_0x187614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187614) {
            ctx->pc = 0x18762Cu;
            return;
        }
    }
    ctx->pc = 0x18761Cu;
    // 0x18761c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18761cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187620: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x187620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x187624: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x187624u;
    {
        const bool branch_taken_0x187624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187624) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x18762Cu;
}
