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

// Function: entry_001417f0
// Address: 0x1417f0 - 0x141858
void entry_001417f0_0x1417f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001417f0_0x1417f0");
#endif

    ctx->pc = 0x1417f0u;

    // 0x1417f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1417f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1417f4: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1417f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1417f8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1417f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1417fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1417fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141800: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x141800u;
    {
        const bool branch_taken_0x141800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141800) {
            ctx->pc = 0x141858u;
            return;
        }
    }
    ctx->pc = 0x141808u;
    // 0x141808: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x141808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x14180c: 0x9022c775  lbu         $v0, -0x388B($at)
    ctx->pc = 0x14180cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C775u));
    // 0x141810: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x141810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x141814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141818: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x141818u;
    {
        const bool branch_taken_0x141818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141818) {
            ctx->pc = 0x141858u;
            return;
        }
    }
    ctx->pc = 0x141820u;
    // 0x141820: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x141820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x141824: 0x8c22c778  lw          $v0, -0x3888($at)
    ctx->pc = 0x141824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x62C778u));
    // 0x141828: 0x90420088  lbu         $v0, 0x88($v0)
    ctx->pc = 0x141828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x14182c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14182cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x141830: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141834: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x141834u;
    {
        const bool branch_taken_0x141834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141834) {
            ctx->pc = 0x141858u;
            return;
        }
    }
    ctx->pc = 0x14183Cu;
    // 0x14183c: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x14183cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x141840: 0x8c22c778  lw          $v0, -0x3888($at)
    ctx->pc = 0x141840u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x62C778u));
    // 0x141844: 0x90420089  lbu         $v0, 0x89($v0)
    ctx->pc = 0x141844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 137)));
    // 0x141848: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x141848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14184c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14184cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x141850: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x141850u;
    {
        const bool branch_taken_0x141850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141850) {
            ctx->pc = 0x141870u;
            return;
        }
    }
    ctx->pc = 0x141858u;
}
