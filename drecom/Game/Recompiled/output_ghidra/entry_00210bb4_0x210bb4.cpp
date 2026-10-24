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

// Function: entry_00210bb4
// Address: 0x210bb4 - 0x210bdc
void entry_00210bb4_0x210bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210bb4_0x210bb4");
#endif

    ctx->pc = 0x210bb4u;

    // 0x210bb4: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x210bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210bb8: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x210bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x210bbc: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x210bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x210bc0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x210bc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x210bc4: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x210bc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x210bc8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x210BC8u;
    {
        const bool branch_taken_0x210bc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210bc8) {
            ctx->pc = 0x210BDCu;
            return;
        }
    }
    ctx->pc = 0x210BD0u;
    // 0x210bd0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x210bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x210bd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210bd8: 0xac249538  sw          $a0, -0x6AC8($at)
    ctx->pc = 0x210bd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x619538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619538u, _value); } while (0);
    ctx->pc = 0x210bdcu;
}
