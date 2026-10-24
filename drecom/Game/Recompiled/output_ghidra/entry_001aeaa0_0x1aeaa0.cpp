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

// Function: entry_001aeaa0
// Address: 0x1aeaa0 - 0x1aeac8
void entry_001aeaa0_0x1aeaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aeaa0_0x1aeaa0");
#endif

    ctx->pc = 0x1aeaa0u;

    // 0x1aeaa0: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x1aeaa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aeaa4: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1AEAA4u;
    {
        const bool branch_taken_0x1aeaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeaa4) {
            ctx->pc = 0x1AEA54u;
            return;
        }
    }
    ctx->pc = 0x1AEAACu;
    // 0x1aeaac: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1aeab0: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x1aeab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1aeab4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1aeab4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1aeab8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1aeab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x1aeabc: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1aeabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x1aeac0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1aeac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aeac4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1aeac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    ctx->pc = 0x1aeac8u;
}
