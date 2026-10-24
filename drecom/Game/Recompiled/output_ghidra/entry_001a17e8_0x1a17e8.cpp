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

// Function: entry_001a17e8
// Address: 0x1a17e8 - 0x1a181c
void entry_001a17e8_0x1a17e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a17e8_0x1a17e8");
#endif

    ctx->pc = 0x1a17e8u;

    // 0x1a17e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a17ec: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1a17ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1a17f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a17f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a17f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a17f8: 0x10620087  beq         $v1, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1A17F8u;
    {
        const bool branch_taken_0x1a17f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a17f8) {
            ctx->pc = 0x1A1A18u;
            return;
        }
    }
    ctx->pc = 0x1A1800u;
    // 0x1a1800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1804: 0x10620062  beq         $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1A1804u;
    {
        const bool branch_taken_0x1a1804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1804) {
            ctx->pc = 0x1A1990u;
            return;
        }
    }
    ctx->pc = 0x1A180Cu;
    // 0x1a180c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A180Cu;
    {
        const bool branch_taken_0x1a180c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a180c) {
            ctx->pc = 0x1A181Cu;
            return;
        }
    }
    ctx->pc = 0x1A1814u;
    // 0x1a1814: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1A1814u;
    {
        const bool branch_taken_0x1a1814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1814) {
            ctx->pc = 0x1A1A40u;
            return;
        }
    }
    ctx->pc = 0x1A181Cu;
}
