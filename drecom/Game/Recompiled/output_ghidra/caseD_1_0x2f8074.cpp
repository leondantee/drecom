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

// Function: caseD_1
// Address: 0x2f8074 - 0x2f80b4
void caseD_1_0x2f8074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2f8074");
#endif

    ctx->pc = 0x2f8074u;

    // 0x2f8074: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8078: 0x90640100  lbu         $a0, 0x100($v1)
    ctx->pc = 0x2f8078u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f807c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x2f807cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f8080: 0x24080063  addiu       $t0, $zero, 0x63
    ctx->pc = 0x2f8080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f8084: 0x10e8008a  beq         $a3, $t0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2F8084u;
    {
        const bool branch_taken_0x2f8084 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x2f8084) {
            ctx->pc = 0x2F82B0u;
            return;
        }
    }
    ctx->pc = 0x2F808Cu;
    // 0x2f808c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f808cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f8090: 0x10e3005c  beq         $a3, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2F8090u;
    {
        const bool branch_taken_0x2f8090 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f8090) {
            ctx->pc = 0x2F8204u;
            return;
        }
    }
    ctx->pc = 0x2F8098u;
    // 0x2f8098: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f809c: 0x10e3002f  beq         $a3, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2F809Cu;
    {
        const bool branch_taken_0x2f809c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f809c) {
            ctx->pc = 0x2F815Cu;
            return;
        }
    }
    ctx->pc = 0x2F80A4u;
    // 0x2f80a4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F80A4u;
    {
        const bool branch_taken_0x2f80a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f80a4) {
            ctx->pc = 0x2F80B4u;
            return;
        }
    }
    ctx->pc = 0x2F80ACu;
    // 0x2f80ac: 0x100002b0  b           . + 4 + (0x2B0 << 2)
    ctx->pc = 0x2F80ACu;
    {
        const bool branch_taken_0x2f80ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f80ac) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F80B4u;
}
