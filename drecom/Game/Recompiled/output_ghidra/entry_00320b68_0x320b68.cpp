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

// Function: entry_00320b68
// Address: 0x320b68 - 0x320b9c
void entry_00320b68_0x320b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320b68_0x320b68");
#endif

    ctx->pc = 0x320b68u;

    // 0x320b68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320b6c: 0x90850abc  lbu         $a1, 0xABC($a0)
    ctx->pc = 0x320b6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2748)));
    // 0x320b70: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x320b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x320b74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x320b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320b78: 0x10c30073  beq         $a2, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x320B78u;
    {
        const bool branch_taken_0x320b78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x320b78) {
            ctx->pc = 0x320D48u;
            return;
        }
    }
    ctx->pc = 0x320B80u;
    // 0x320b80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320b84: 0x10c3003e  beq         $a2, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x320B84u;
    {
        const bool branch_taken_0x320b84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x320b84) {
            ctx->pc = 0x320C80u;
            return;
        }
    }
    ctx->pc = 0x320B8Cu;
    // 0x320b8c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x320B8Cu;
    {
        const bool branch_taken_0x320b8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b8c) {
            ctx->pc = 0x320B9Cu;
            return;
        }
    }
    ctx->pc = 0x320B94u;
    // 0x320b94: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x320B94u;
    {
        const bool branch_taken_0x320b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b94) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x320B9Cu;
}
