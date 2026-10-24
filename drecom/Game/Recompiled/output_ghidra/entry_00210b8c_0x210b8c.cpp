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

// Function: entry_00210b8c
// Address: 0x210b8c - 0x210bb4
void entry_00210b8c_0x210b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210b8c_0x210b8c");
#endif

    ctx->pc = 0x210b8cu;

    // 0x210b8c: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210b90: 0x847e1278  lh          $fp, 0x1278($v1)
    ctx->pc = 0x210b90u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x210b94: 0x1e843c  dsll32      $s0, $fp, 16
    ctx->pc = 0x210b94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) << (32 + 16));
    // 0x210b98: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x210b98u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x210b9c: 0x2a010028  slti        $at, $s0, 0x28
    ctx->pc = 0x210b9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x210ba0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x210BA0u;
    {
        const bool branch_taken_0x210ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210ba0) {
            ctx->pc = 0x210BB4u;
            return;
        }
    }
    ctx->pc = 0x210BA8u;
    // 0x210ba8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x210ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x210bac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210bb0: 0xac279538  sw          $a3, -0x6AC8($at)
    ctx->pc = 0x210bb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x619538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619538u, _value); } while (0);
    ctx->pc = 0x210bb4u;
}
