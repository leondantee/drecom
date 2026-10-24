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

// Function: entry_001a233c
// Address: 0x1a233c - 0x1a2364
void entry_001a233c_0x1a233c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a233c_0x1a233c");
#endif

    ctx->pc = 0x1a233cu;

    // 0x1a233c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2340: 0x9042000a  lbu         $v0, 0xA($v0)
    ctx->pc = 0x1a2340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1a2344: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a2344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a2348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a234c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A234Cu;
    {
        const bool branch_taken_0x1a234c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a234c) {
            ctx->pc = 0x1A23BCu;
            return;
        }
    }
    ctx->pc = 0x1A2354u;
    // 0x1a2354: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2354u;
    {
        const bool branch_taken_0x1a2354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2354) {
            ctx->pc = 0x1A2364u;
            return;
        }
    }
    ctx->pc = 0x1A235Cu;
    // 0x1a235c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1A235Cu;
    {
        const bool branch_taken_0x1a235c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a235c) {
            ctx->pc = 0x1A2460u;
            return;
        }
    }
    ctx->pc = 0x1A2364u;
}
