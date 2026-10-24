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

// Function: caseD_2
// Address: 0x161380 - 0x1613bc
void caseD_2_0x161380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x161380");
#endif

    ctx->pc = 0x161380u;

    // 0x161380: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x161380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x161384: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x161384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x161388: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16138c: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x16138Cu;
    {
        const bool branch_taken_0x16138c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16138c) {
            ctx->pc = 0x16140Cu;
            return;
        }
    }
    ctx->pc = 0x161394u;
    // 0x161394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161398: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x161398u;
    {
        const bool branch_taken_0x161398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161398) {
            ctx->pc = 0x16140Cu;
            return;
        }
    }
    ctx->pc = 0x1613A0u;
    // 0x1613a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1613a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1613a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1613A4u;
    {
        const bool branch_taken_0x1613a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1613a4) {
            ctx->pc = 0x1613BCu;
            return;
        }
    }
    ctx->pc = 0x1613ACu;
    // 0x1613ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1613ACu;
    {
        const bool branch_taken_0x1613ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1613ac) {
            ctx->pc = 0x1613BCu;
            return;
        }
    }
    ctx->pc = 0x1613B4u;
    // 0x1613b4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1613B4u;
    {
        const bool branch_taken_0x1613b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1613b4) {
            ctx->pc = 0x1613BCu;
            return;
        }
    }
    ctx->pc = 0x1613BCu;
}
