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

// Function: entry_001ce528
// Address: 0x1ce528 - 0x1ce584
void entry_001ce528_0x1ce528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce528_0x1ce528");
#endif

    ctx->pc = 0x1ce528u;

    // 0x1ce528: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce52c: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1ce52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1ce530: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CE530u;
    {
        const bool branch_taken_0x1ce530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce530) {
            ctx->pc = 0x1CE584u;
            return;
        }
    }
    ctx->pc = 0x1CE538u;
    // 0x1ce538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce53c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce540: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1ce540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
    // 0x1ce544: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce548: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1ce548u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1ce54c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE54Cu;
    {
        const bool branch_taken_0x1ce54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce54c) {
            ctx->pc = 0x1CE584u;
            return;
        }
    }
    ctx->pc = 0x1CE554u;
    // 0x1ce554: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce558: 0x84a315ec  lh          $v1, 0x15EC($a1)
    ctx->pc = 0x1ce558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x1ce55c: 0x2464fed4  addiu       $a0, $v1, -0x12C
    ctx->pc = 0x1ce55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966996));
    // 0x1ce560: 0xa4a415ec  sh          $a0, 0x15EC($a1)
    ctx->pc = 0x1ce560u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ce564: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce568: 0x846515ec  lh          $a1, 0x15EC($v1)
    ctx->pc = 0x1ce568u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1ce56c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1ce56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1ce570: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ce570u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ce574: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE574u;
    {
        const bool branch_taken_0x1ce574 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ce574) {
            ctx->pc = 0x1CE584u;
            return;
        }
    }
    ctx->pc = 0x1CE57Cu;
    // 0x1ce57c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce580: 0xa4a015ec  sh          $zero, 0x15EC($a1)
    ctx->pc = 0x1ce580u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ce584u;
}
