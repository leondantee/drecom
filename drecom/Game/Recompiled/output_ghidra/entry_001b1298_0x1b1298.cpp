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

// Function: entry_001b1298
// Address: 0x1b1298 - 0x1b12c0
void entry_001b1298_0x1b1298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1298_0x1b1298");
#endif

    ctx->pc = 0x1b1298u;

    // 0x1b1298: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b1298u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b129c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b129cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b12a0: 0x17c30007  bne         $fp, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B12A0u;
    {
        const bool branch_taken_0x1b12a0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b12a0) {
            ctx->pc = 0x1B12C0u;
            return;
        }
    }
    ctx->pc = 0x1B12A8u;
    // 0x1b12a8: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b12a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1b12ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b12acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b12b0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1b12b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1b12b4: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x1b12b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1b12b8: 0xaec30008  sw          $v1, 0x8($s6)
    ctx->pc = 0x1b12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
    // 0x1b12bc: 0x0  nop
    ctx->pc = 0x1b12bcu;
    // NOP
    ctx->pc = 0x1b12c0u;
}
