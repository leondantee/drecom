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

// Function: entry_002143b8
// Address: 0x2143b8 - 0x2143d8
void entry_002143b8_0x2143b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002143b8_0x2143b8");
#endif

    ctx->pc = 0x2143b8u;

    // 0x2143b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2143B8u;
    {
        const bool branch_taken_0x2143b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143B8u;
        // 0x2143bc: 0x64a303ff  daddiu      $v1, $a1, 0x3FF (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143b8) {
            ctx->pc = 0x2143D8u;
            return;
        }
    }
    ctx->pc = 0x2143C0u;
    // 0x2143c0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2143c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2143c4: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x2143c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x2143c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2143c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2143cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2143ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2143d0: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x2143d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2143d4: 0x4233b  dsra        $a0, $a0, 12
    ctx->pc = 0x2143d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 12);
    ctx->pc = 0x2143d8u;
}
