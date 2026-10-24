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

// Function: entry_0011eac4
// Address: 0x11eac4 - 0x11eaf8
void entry_0011eac4_0x11eac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eac4_0x11eac4");
#endif

    ctx->pc = 0x11eac4u;

    // 0x11eac4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11eac8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11eacc: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x11eaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x11ead0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x11ead0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11ead4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11EAD4u;
    {
        const bool branch_taken_0x11ead4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAD4u;
        // 0x11ead8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ead4) {
            ctx->pc = 0x11EAF8u;
            return;
        }
    }
    ctx->pc = 0x11EADCu;
    // 0x11eadc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x11eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x11eae0: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x11eae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x11eae4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x11eae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x11eae8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11eae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11eaec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11eaf0: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x11eaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x11eaf4: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x11eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x11eaf8u;
}
