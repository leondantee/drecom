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

// Function: entry_0010b054
// Address: 0x10b054 - 0x10b08c
void entry_0010b054_0x10b054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b054_0x10b054");
#endif

    ctx->pc = 0x10b054u;

    // 0x10b054: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10b054u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10b058: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x10b058u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x10b05c: 0x8c823d28  lw          $v0, 0x3D28($a0)
    ctx->pc = 0x10b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15656)));
    // 0x10b060: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x10b060u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x10b064: 0x8ca33d2c  lw          $v1, 0x3D2C($a1)
    ctx->pc = 0x10b064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15660)));
    // 0x10b068: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x10b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x10b06c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x10b06cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10b070: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10b074: 0xaec63d0c  sw          $a2, 0x3D0C($s6)
    ctx->pc = 0x10b074u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 15628), GPR_U32(ctx, 6));
    // 0x10b078: 0x14c40004  bne         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B078u;
    {
        const bool branch_taken_0x10b078 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x10B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B078u;
        // 0x10b07c: 0xaee33d10  sw          $v1, 0x3D10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 15632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b078) {
            ctx->pc = 0x10B08Cu;
            return;
        }
    }
    ctx->pc = 0x10B080u;
    // 0x10b080: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x10b080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x10b084: 0x10620084  beq         $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x10B084u;
    {
        const bool branch_taken_0x10b084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B084u;
        // 0x10b088: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b084) {
            ctx->pc = 0x10B298u;
            return;
        }
    }
    ctx->pc = 0x10B08Cu;
}
