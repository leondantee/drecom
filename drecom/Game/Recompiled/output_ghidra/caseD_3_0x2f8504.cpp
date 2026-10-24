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

// Function: caseD_3
// Address: 0x2f8504 - 0x2f8544
void caseD_3_0x2f8504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2f8504");
#endif

    ctx->pc = 0x2f8504u;

    // 0x2f8504: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8508: 0x90650100  lbu         $a1, 0x100($v1)
    ctx->pc = 0x2f8508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f850c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2f850cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f8510: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x2f8510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f8514: 0x10830083  beq         $a0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x2F8514u;
    {
        const bool branch_taken_0x2f8514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f8514) {
            ctx->pc = 0x2F8724u;
            return;
        }
    }
    ctx->pc = 0x2F851Cu;
    // 0x2f851c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f8520: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2F8520u;
    {
        const bool branch_taken_0x2f8520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f8520) {
            ctx->pc = 0x2F8688u;
            return;
        }
    }
    ctx->pc = 0x2F8528u;
    // 0x2f8528: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f852c: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F852Cu;
    {
        const bool branch_taken_0x2f852c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f852c) {
            ctx->pc = 0x2F85E0u;
            return;
        }
    }
    ctx->pc = 0x2F8534u;
    // 0x2f8534: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8534u;
    {
        const bool branch_taken_0x2f8534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8534) {
            ctx->pc = 0x2F8544u;
            return;
        }
    }
    ctx->pc = 0x2F853Cu;
    // 0x2f853c: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x2F853Cu;
    {
        const bool branch_taken_0x2f853c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f853c) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8544u;
}
