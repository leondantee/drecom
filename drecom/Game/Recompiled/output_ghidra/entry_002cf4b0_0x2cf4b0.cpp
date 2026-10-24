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

// Function: entry_002cf4b0
// Address: 0x2cf4b0 - 0x2cf4f4
void entry_002cf4b0_0x2cf4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf4b0_0x2cf4b0");
#endif

    ctx->pc = 0x2cf4b0u;

    // 0x2cf4b0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf4b4: 0x2470134c  addiu       $s0, $v1, 0x134C
    ctx->pc = 0x2cf4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf4b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cf4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf4bc: 0x8c6501c8  lw          $a1, 0x1C8($v1)
    ctx->pc = 0x2cf4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x2cf4c0: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2cf4c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf4c4: 0x10b4008a  beq         $a1, $s4, . + 4 + (0x8A << 2)
    ctx->pc = 0x2CF4C4u;
    {
        const bool branch_taken_0x2cf4c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cf4c4) {
            ctx->pc = 0x2CF6F0u;
            return;
        }
    }
    ctx->pc = 0x2CF4CCu;
    // 0x2cf4cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cf4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cf4d0: 0x10a4000f  beq         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CF4D0u;
    {
        const bool branch_taken_0x2cf4d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2cf4d0) {
            ctx->pc = 0x2CF510u;
            return;
        }
    }
    ctx->pc = 0x2CF4D8u;
    // 0x2cf4d8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF4D8u;
    {
        const bool branch_taken_0x2cf4d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf4d8) {
            ctx->pc = 0x2CF4F4u;
            return;
        }
    }
    ctx->pc = 0x2CF4E0u;
    // 0x2cf4e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf4e4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF4E4u;
    {
        const bool branch_taken_0x2cf4e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cf4e4) {
            ctx->pc = 0x2CF4F4u;
            return;
        }
    }
    ctx->pc = 0x2CF4ECu;
    // 0x2cf4ec: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x2CF4ECu;
    {
        const bool branch_taken_0x2cf4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf4ec) {
            ctx->pc = 0x2CF8C8u;
            return;
        }
    }
    ctx->pc = 0x2CF4F4u;
}
