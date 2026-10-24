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

// Function: caseD_6
// Address: 0x187714 - 0x18773c
void caseD_6_0x187714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x187714");
#endif

    ctx->pc = 0x187714u;

    // 0x187714: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187718: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187718u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x18771c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x18771cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x187720: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x187720u;
    {
        const bool branch_taken_0x187720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187720) {
            ctx->pc = 0x18773Cu;
            return;
        }
    }
    ctx->pc = 0x187728u;
    // 0x187728: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x187728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18772c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18772cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187730: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x187730u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x187734: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x187734u;
    {
        const bool branch_taken_0x187734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187734) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x18773Cu;
}
