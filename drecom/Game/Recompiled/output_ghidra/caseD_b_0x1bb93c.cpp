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

// Function: caseD_b
// Address: 0x1bb93c - 0x1bb968
void caseD_b_0x1bb93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1bb93c");
#endif

    ctx->pc = 0x1bb93cu;

    // 0x1bb93c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb940: 0x8c821b6c  lw          $v0, 0x1B6C($a0)
    ctx->pc = 0x1bb940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x1bb944: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB944u;
    {
        const bool branch_taken_0x1bb944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb944) {
            ctx->pc = 0x1BB968u;
            return;
        }
    }
    ctx->pc = 0x1BB94Cu;
    // 0x1bb94c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bb950: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1bb950u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bb954: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1bb954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x1bb958: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x1bb958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1bb95c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bb95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bb960: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bb964: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1bb964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1bb968u;
}
