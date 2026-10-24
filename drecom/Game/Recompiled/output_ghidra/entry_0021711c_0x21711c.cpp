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

// Function: entry_0021711c
// Address: 0x21711c - 0x217148
void entry_0021711c_0x21711c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021711c_0x21711c");
#endif

    ctx->pc = 0x21711cu;

    // 0x21711c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x21711cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x217120: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x217120u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x217124: 0x24e3cbc0  addiu       $v1, $a3, -0x3440
    ctx->pc = 0x217124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953920));
    // 0x217128: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x217128u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61CBC4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61CBC4u, _value); } while (0);
    // 0x21712c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x21712cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x217130: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x217130u;
    {
        const bool branch_taken_0x217130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217130u;
        // 0x217134: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217130) {
            ctx->pc = 0x217178u;
            return;
        }
    }
    ctx->pc = 0x217138u;
    // 0x217138: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x217138u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x21713c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x21713cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x217140: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x217140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x217144: 0x0  nop
    ctx->pc = 0x217144u;
    // NOP
    ctx->pc = 0x217148u;
}
