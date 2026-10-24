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

// Function: entry_002e4754
// Address: 0x2e4754 - 0x2e4794
void entry_002e4754_0x2e4754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4754_0x2e4754");
#endif

    ctx->pc = 0x2e4754u;

    // 0x2e4754: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2e4754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2e4758: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2e4758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e475c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e4760: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x2e4760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x2e4764: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2e4764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e4768: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e4768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e476c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e476cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4770: 0x108300a0  beq         $a0, $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2E4770u;
    {
        const bool branch_taken_0x2e4770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e4770) {
            ctx->pc = 0x2E49F4u;
            return;
        }
    }
    ctx->pc = 0x2E4778u;
    // 0x2e4778: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e477c: 0x10830072  beq         $a0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x2E477Cu;
    {
        const bool branch_taken_0x2e477c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e477c) {
            ctx->pc = 0x2E4948u;
            return;
        }
    }
    ctx->pc = 0x2E4784u;
    // 0x2e4784: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4784u;
    {
        const bool branch_taken_0x2e4784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4784) {
            ctx->pc = 0x2E4794u;
            return;
        }
    }
    ctx->pc = 0x2E478Cu;
    // 0x2e478c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x2E478Cu;
    {
        const bool branch_taken_0x2e478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e478c) {
            ctx->pc = 0x2E4C08u;
            return;
        }
    }
    ctx->pc = 0x2E4794u;
}
