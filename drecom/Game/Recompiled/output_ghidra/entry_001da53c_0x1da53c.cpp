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

// Function: entry_001da53c
// Address: 0x1da53c - 0x1da578
void entry_001da53c_0x1da53c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da53c_0x1da53c");
#endif

    ctx->pc = 0x1da53cu;

    // 0x1da53c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da540: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1da540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da544: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1da544u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da548: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da54c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da550: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da554: 0x3056000f  andi        $s6, $v0, 0xF
    ctx->pc = 0x1da554u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1da558: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA558u;
    {
        const bool branch_taken_0x1da558 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da558) {
            ctx->pc = 0x1DA578u;
            return;
        }
    }
    ctx->pc = 0x1DA560u;
    // 0x1da560: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1da560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1da564: 0x561823  subu        $v1, $v0, $s6
    ctx->pc = 0x1da564u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1da568: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da56c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da570: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da574: 0x0  nop
    ctx->pc = 0x1da574u;
    // NOP
    ctx->pc = 0x1da578u;
}
