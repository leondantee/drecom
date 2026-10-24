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

// Function: entry_002a8778
// Address: 0x2a8778 - 0x2a87b8
void entry_002a8778_0x2a8778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8778_0x2a8778");
#endif

    ctx->pc = 0x2a8778u;

    // 0x2a8778: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2a8778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a877c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2a877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a8780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a8784: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A8784u;
    {
        const bool branch_taken_0x2a8784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8784) {
            ctx->pc = 0x2A8868u;
            return;
        }
    }
    ctx->pc = 0x2A878Cu;
    // 0x2a878c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x2a878cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2a8790: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a8790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a8794: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a8794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a8798: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8798u;
    {
        const bool branch_taken_0x2a8798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a8798) {
            ctx->pc = 0x2A87B8u;
            return;
        }
    }
    ctx->pc = 0x2A87A0u;
    // 0x2a87a0: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x2a87a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2a87a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a87a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a87a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a87ac: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2A87ACu;
    {
        const bool branch_taken_0x2a87ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a87ac) {
            ctx->pc = 0x2A8868u;
            return;
        }
    }
    ctx->pc = 0x2A87B4u;
    // 0x2a87b4: 0x0  nop
    ctx->pc = 0x2a87b4u;
    // NOP
    ctx->pc = 0x2a87b8u;
}
