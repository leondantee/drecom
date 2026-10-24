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

// Function: entry_00141fe8
// Address: 0x141fe8 - 0x142024
void entry_00141fe8_0x141fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141fe8_0x141fe8");
#endif

    ctx->pc = 0x141fe8u;

    // 0x141fe8: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x141fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x141fec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x141fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x141ff0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x141ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x141ff4: 0x106200dd  beq         $v1, $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x141FF4u;
    {
        const bool branch_taken_0x141ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141ff4) {
            ctx->pc = 0x14236Cu;
            return;
        }
    }
    ctx->pc = 0x141FFCu;
    // 0x141ffc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142000: 0x106200af  beq         $v1, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x142000u;
    {
        const bool branch_taken_0x142000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142000) {
            ctx->pc = 0x1422C0u;
            return;
        }
    }
    ctx->pc = 0x142008u;
    // 0x142008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14200c: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14200Cu;
    {
        const bool branch_taken_0x14200c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14200c) {
            ctx->pc = 0x1420D0u;
            return;
        }
    }
    ctx->pc = 0x142014u;
    // 0x142014: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x142014u;
    {
        const bool branch_taken_0x142014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142014) {
            ctx->pc = 0x142024u;
            return;
        }
    }
    ctx->pc = 0x14201Cu;
    // 0x14201c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x14201Cu;
    {
        const bool branch_taken_0x14201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14201c) {
            ctx->pc = 0x1422C0u;
            return;
        }
    }
    ctx->pc = 0x142024u;
}
