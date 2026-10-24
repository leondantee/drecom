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

// Function: entry_0028d528
// Address: 0x28d528 - 0x28d550
void entry_0028d528_0x28d528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d528_0x28d528");
#endif

    ctx->pc = 0x28d528u;

    // 0x28d528: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d52c: 0x8c2620d0  lw          $a2, 0x20D0($at)
    ctx->pc = 0x28d52cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6220D0u));
    // 0x28d530: 0x28c10014  slti        $at, $a2, 0x14
    ctx->pc = 0x28d530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x28d534: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D534u;
    {
        const bool branch_taken_0x28d534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d534) {
            ctx->pc = 0x28D550u;
            return;
        }
    }
    ctx->pc = 0x28D53Cu;
    // 0x28d53c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d540: 0x8c2320d0  lw          $v1, 0x20D0($at)
    ctx->pc = 0x28d540u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220D0u));
    // 0x28d544: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28d548: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d54c: 0xac2320d0  sw          $v1, 0x20D0($at)
    ctx->pc = 0x28d54cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D0u, _value); } while (0);
    ctx->pc = 0x28d550u;
}
