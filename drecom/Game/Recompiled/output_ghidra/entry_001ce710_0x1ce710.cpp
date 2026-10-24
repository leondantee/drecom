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

// Function: entry_001ce710
// Address: 0x1ce710 - 0x1ce75c
void entry_001ce710_0x1ce710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce710_0x1ce710");
#endif

    ctx->pc = 0x1ce710u;

    // 0x1ce710: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce714: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ce714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ce718: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x1CE718u;
    {
        const bool branch_taken_0x1ce718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce718) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE720u;
    // 0x1ce720: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce724: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ce724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ce728: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ce728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ce72c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1ce72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ce730: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CE730u;
    {
        const bool branch_taken_0x1ce730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce730) {
            ctx->pc = 0x1CE7A4u;
            return;
        }
    }
    ctx->pc = 0x1CE738u;
    // 0x1ce738: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce73c: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1ce73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1ce740: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE740u;
    {
        const bool branch_taken_0x1ce740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce740) {
            ctx->pc = 0x1CE75Cu;
            return;
        }
    }
    ctx->pc = 0x1CE748u;
    // 0x1ce748: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ce748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce74c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce750: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ce750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce754: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1CE754u;
    {
        const bool branch_taken_0x1ce754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce754) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE75Cu;
}
