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

// Function: entry_00121318
// Address: 0x121318 - 0x121358
void entry_00121318_0x121318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121318_0x121318");
#endif

    ctx->pc = 0x121318u;

    // 0x121318: 0x12400067  beqz        $s2, . + 4 + (0x67 << 2)
    ctx->pc = 0x121318u;
    {
        const bool branch_taken_0x121318 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x121318) {
            ctx->pc = 0x1214B8u;
            return;
        }
    }
    ctx->pc = 0x121320u;
    // 0x121320: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121324: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x121324u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x121328: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x121328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12132c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x12132cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x121330: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x121330u;
    {
        const bool branch_taken_0x121330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x121330) {
            ctx->pc = 0x121358u;
            return;
        }
    }
    ctx->pc = 0x121338u;
    // 0x121338: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12133c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12133Cu;
    {
        const bool branch_taken_0x12133c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x12133c) {
            ctx->pc = 0x121358u;
            return;
        }
    }
    ctx->pc = 0x121344u;
    // 0x121344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x121344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121348: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121348u;
    {
        const bool branch_taken_0x121348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x121348) {
            ctx->pc = 0x121358u;
            return;
        }
    }
    ctx->pc = 0x121350u;
    // 0x121350: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x121350u;
    {
        const bool branch_taken_0x121350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121350) {
            ctx->pc = 0x1214B8u;
            return;
        }
    }
    ctx->pc = 0x121358u;
}
