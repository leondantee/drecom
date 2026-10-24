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

// Function: entry_00121078
// Address: 0x121078 - 0x1210bc
void entry_00121078_0x121078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121078_0x121078");
#endif

    ctx->pc = 0x121078u;

    // 0x121078: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12107c: 0x94a411f4  lhu         $a0, 0x11F4($a1)
    ctx->pc = 0x12107cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4596)));
    // 0x121080: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x121080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x121084: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x121084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x121088: 0x14640041  bne         $v1, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x121088u;
    {
        const bool branch_taken_0x121088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x121088) {
            ctx->pc = 0x121190u;
            return;
        }
    }
    ctx->pc = 0x121090u;
    // 0x121090: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x121090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x121094: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x121094u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x121098: 0x30a30200  andi        $v1, $a1, 0x200
    ctx->pc = 0x121098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x12109c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12109Cu;
    {
        const bool branch_taken_0x12109c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12109c) {
            ctx->pc = 0x1210BCu;
            return;
        }
    }
    ctx->pc = 0x1210A4u;
    // 0x1210a4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1210a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1210a8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1210a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1210ac: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x1210acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x1210b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1210b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1210b4: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1210B4u;
    {
        const bool branch_taken_0x1210b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1210b4) {
            ctx->pc = 0x121190u;
            return;
        }
    }
    ctx->pc = 0x1210BCu;
}
