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

// Function: entry_00266320
// Address: 0x266320 - 0x26634c
void entry_00266320_0x266320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266320_0x266320");
#endif

    ctx->pc = 0x266320u;

    // 0x266320: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x266320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x266324: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x266324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x266328: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x266328u;
    {
        const bool branch_taken_0x266328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266328) {
            ctx->pc = 0x26620Cu;
            return;
        }
    }
    ctx->pc = 0x266330u;
    // 0x266330: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266334: 0x8c22fca4  lw          $v0, -0x35C($at)
    ctx->pc = 0x266334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FCA4u));
    // 0x266338: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x266338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26633c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26633cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266340: 0xac22fca4  sw          $v0, -0x35C($at)
    ctx->pc = 0x266340u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FCA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCA4u, _value); } while (0);
    // 0x266344: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x266344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x266348: 0x0  nop
    ctx->pc = 0x266348u;
    // NOP
    ctx->pc = 0x26634cu;
}
