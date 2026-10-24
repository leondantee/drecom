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

// Function: entry_0011e254
// Address: 0x11e254 - 0x11e268
void entry_0011e254_0x11e254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e254_0x11e254");
#endif

    ctx->pc = 0x11e254u;

    // 0x11e254: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x11e254u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11e258: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x11e258u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x11e25c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x11E25Cu;
    {
        const bool branch_taken_0x11e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E25Cu;
        // 0x11e260: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e25c) {
            ctx->pc = 0x11E3E0u;
            return;
        }
    }
    ctx->pc = 0x11E264u;
    // 0x11e264: 0x0  nop
    ctx->pc = 0x11e264u;
    // NOP
    ctx->pc = 0x11e268u;
}
