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

// Function: caseD_0
// Address: 0x12964c - 0x12966c
void caseD_0_0x12964c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x12964c");
#endif

    ctx->pc = 0x12964cu;

    // 0x12964c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x129650: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x129650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x129654: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x129654u;
    {
        const bool branch_taken_0x129654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129654) {
            ctx->pc = 0x12966Cu;
            return;
        }
    }
    ctx->pc = 0x12965Cu;
    // 0x12965c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129660: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x129660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x129664: 0x106001c3  beqz        $v1, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x129664u;
    {
        const bool branch_taken_0x129664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129664) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x12966Cu;
}
