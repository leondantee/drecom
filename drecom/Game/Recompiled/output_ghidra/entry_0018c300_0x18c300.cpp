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

// Function: entry_0018c300
// Address: 0x18c300 - 0x18c324
void entry_0018c300_0x18c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c300_0x18c300");
#endif

    ctx->pc = 0x18c300u;

    // 0x18c300: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18c300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18c304: 0x8c550120  lw          $s5, 0x120($v0)
    ctx->pc = 0x18c304u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x18c308: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18c308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18c30c: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C30Cu;
    {
        const bool branch_taken_0x18c30c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c30c) {
            ctx->pc = 0x18C324u;
            return;
        }
    }
    ctx->pc = 0x18C314u;
    // 0x18c314: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18c314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18c318: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18c318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18c31c: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x18C31Cu;
    {
        const bool branch_taken_0x18c31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c31c) {
            ctx->pc = 0x18C78Cu;
            return;
        }
    }
    ctx->pc = 0x18C324u;
}
