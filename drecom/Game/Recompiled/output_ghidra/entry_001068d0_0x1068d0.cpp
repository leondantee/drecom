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

// Function: entry_001068d0
// Address: 0x1068d0 - 0x1068fc
void entry_001068d0_0x1068d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001068d0_0x1068d0");
#endif

    ctx->pc = 0x1068d0u;

    // 0x1068d0: 0x8c433db8  lw          $v1, 0x3DB8($v0)
    ctx->pc = 0x1068d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
    // 0x1068d4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1068D4u;
    {
        const bool branch_taken_0x1068d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1068D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068D4u;
        // 0x1068d8: 0x3c070038  lui         $a3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068d4) {
            ctx->pc = 0x106900u;
            return;
        }
    }
    ctx->pc = 0x1068DCu;
    // 0x1068dc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1068dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1068e0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1068e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1068e4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1068e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1068e8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1068e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1068ec: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1068ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1068f0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1068f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1068f4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1068f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1068f8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1068f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1068fcu;
}
