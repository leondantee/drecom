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

// Function: entry_001ca004
// Address: 0x1ca004 - 0x1ca04c
void entry_001ca004_0x1ca004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca004_0x1ca004");
#endif

    ctx->pc = 0x1ca004u;

    // 0x1ca004: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1ca004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca008: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1ca008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ca00c: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1ca00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1ca010: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1ca010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ca014: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1ca014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1ca018: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ca018u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1ca01c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca020: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1ca020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ca024: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ca024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca028: 0x10a4001c  beq         $a1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CA028u;
    {
        const bool branch_taken_0x1ca028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ca028) {
            ctx->pc = 0x1CA09Cu;
            return;
        }
    }
    ctx->pc = 0x1CA030u;
    // 0x1ca030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca034: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CA034u;
    {
        const bool branch_taken_0x1ca034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca034) {
            ctx->pc = 0x1CA074u;
            return;
        }
    }
    ctx->pc = 0x1CA03Cu;
    // 0x1ca03c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA03Cu;
    {
        const bool branch_taken_0x1ca03c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca03c) {
            ctx->pc = 0x1CA04Cu;
            return;
        }
    }
    ctx->pc = 0x1CA044u;
    // 0x1ca044: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CA044u;
    {
        const bool branch_taken_0x1ca044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca044) {
            ctx->pc = 0x1CA0BCu;
            return;
        }
    }
    ctx->pc = 0x1CA04Cu;
}
