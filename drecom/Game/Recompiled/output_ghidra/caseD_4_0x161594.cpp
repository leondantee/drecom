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

// Function: caseD_4
// Address: 0x161594 - 0x1615d0
void caseD_4_0x161594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x161594");
#endif

    ctx->pc = 0x161594u;

    // 0x161594: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x161594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x161598: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x161598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16159c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1615a0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1615A0u;
    {
        const bool branch_taken_0x1615a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1615a0) {
            ctx->pc = 0x1615F4u;
            return;
        }
    }
    ctx->pc = 0x1615A8u;
    // 0x1615a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1615a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1615ac: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1615ACu;
    {
        const bool branch_taken_0x1615ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1615ac) {
            ctx->pc = 0x1615F4u;
            return;
        }
    }
    ctx->pc = 0x1615B4u;
    // 0x1615b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1615b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1615b8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1615B8u;
    {
        const bool branch_taken_0x1615b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1615b8) {
            ctx->pc = 0x1615D0u;
            return;
        }
    }
    ctx->pc = 0x1615C0u;
    // 0x1615c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1615C0u;
    {
        const bool branch_taken_0x1615c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1615c0) {
            ctx->pc = 0x1615D0u;
            return;
        }
    }
    ctx->pc = 0x1615C8u;
    // 0x1615c8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1615C8u;
    {
        const bool branch_taken_0x1615c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1615c8) {
            ctx->pc = 0x161648u;
            return;
        }
    }
    ctx->pc = 0x1615D0u;
}
