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

// Function: entry_001be738
// Address: 0x1be738 - 0x1be790
void entry_001be738_0x1be738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be738_0x1be738");
#endif

    ctx->pc = 0x1be738u;

    // 0x1be738: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be73c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1be73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1be740: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1be740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1be744: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1be744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1be748: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BE748u;
    {
        const bool branch_taken_0x1be748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be748) {
            ctx->pc = 0x1BE79Cu;
            return;
        }
    }
    ctx->pc = 0x1BE750u;
    // 0x1be750: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be754: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1be754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1be758: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1be758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1be75c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1be75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be760: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE760u;
    {
        const bool branch_taken_0x1be760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be760) {
            ctx->pc = 0x1BE790u;
            return;
        }
    }
    ctx->pc = 0x1BE768u;
    // 0x1be768: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1be768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be76c: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE76Cu;
    {
        const bool branch_taken_0x1be76c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1be76c) {
            ctx->pc = 0x1BE790u;
            return;
        }
    }
    ctx->pc = 0x1BE774u;
    // 0x1be774: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1be774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be778: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE778u;
    {
        const bool branch_taken_0x1be778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be778) {
            ctx->pc = 0x1BE79Cu;
            return;
        }
    }
    ctx->pc = 0x1BE780u;
    // 0x1be780: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE780u;
    {
        const bool branch_taken_0x1be780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be780) {
            ctx->pc = 0x1BE79Cu;
            return;
        }
    }
    ctx->pc = 0x1BE788u;
    // 0x1be788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE788u;
    {
        const bool branch_taken_0x1be788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be788) {
            ctx->pc = 0x1BE79Cu;
            return;
        }
    }
    ctx->pc = 0x1BE790u;
}
