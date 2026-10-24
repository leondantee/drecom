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

// Function: entry_00116f08
// Address: 0x116f08 - 0x116f38
void entry_00116f08_0x116f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116f08_0x116f08");
#endif

    ctx->pc = 0x116f08u;

    // 0x116f08: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x116f08u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x116f0c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x116f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x116f10: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x116f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x116f14: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x116f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116f1c: 0x8e82490c  lw          $v0, 0x490C($s4)
    ctx->pc = 0x116f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38490Cu));
    // 0x116f20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x116f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x116f24: 0x8c510148  lw          $s1, 0x148($v0)
    ctx->pc = 0x116f24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x116f28: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x116F28u;
    {
        const bool branch_taken_0x116f28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F28u;
        // 0x116f2c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f28) {
            ctx->pc = 0x116F74u;
            return;
        }
    }
    ctx->pc = 0x116F30u;
    // 0x116f30: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x116f30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x116f34: 0x0  nop
    ctx->pc = 0x116f34u;
    // NOP
    ctx->pc = 0x116f38u;
}
