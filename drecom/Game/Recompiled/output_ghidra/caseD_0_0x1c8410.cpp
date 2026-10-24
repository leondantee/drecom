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
// Address: 0x1c8410 - 0x1c8458
void caseD_0_0x1c8410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1c8410");
#endif

    ctx->pc = 0x1c8410u;

    // 0x1c8410: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x1c8410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8414: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x1c8414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1c8418: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1c8418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1c841c: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x1c841cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c8420: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1c8420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1c8424: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1c8424u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x1c8428: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c842c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1c842cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c8430: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c8430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8434: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C8434u;
    {
        const bool branch_taken_0x1c8434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c8434) {
            ctx->pc = 0x1C84ACu;
            return;
        }
    }
    ctx->pc = 0x1C843Cu;
    // 0x1c843c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8440: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C8440u;
    {
        const bool branch_taken_0x1c8440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8440) {
            ctx->pc = 0x1C8480u;
            return;
        }
    }
    ctx->pc = 0x1C8448u;
    // 0x1c8448: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8448u;
    {
        const bool branch_taken_0x1c8448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8448) {
            ctx->pc = 0x1C8458u;
            return;
        }
    }
    ctx->pc = 0x1C8450u;
    // 0x1c8450: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1C8450u;
    {
        const bool branch_taken_0x1c8450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8450) {
            ctx->pc = 0x1C84CCu;
            return;
        }
    }
    ctx->pc = 0x1C8458u;
}
