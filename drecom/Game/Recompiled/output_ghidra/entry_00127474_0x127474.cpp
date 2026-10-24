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

// Function: entry_00127474
// Address: 0x127474 - 0x12749c
void entry_00127474_0x127474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127474_0x127474");
#endif

    ctx->pc = 0x127474u;

    // 0x127474: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x127474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x127478: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x127478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x12747c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12747Cu;
    {
        const bool branch_taken_0x12747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12747c) {
            ctx->pc = 0x12749Cu;
            return;
        }
    }
    ctx->pc = 0x127484u;
    // 0x127484: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x127484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x127488: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x127488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x12748c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12748cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x127490: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x127490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x127494: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x127494u;
    {
        const bool branch_taken_0x127494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127494) {
            ctx->pc = 0x127A58u;
            return;
        }
    }
    ctx->pc = 0x12749Cu;
}
