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

// Function: entry_0028dfa0
// Address: 0x28dfa0 - 0x28dffc
void entry_0028dfa0_0x28dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028dfa0_0x28dfa0");
#endif

    ctx->pc = 0x28dfa0u;

    // 0x28dfa0: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28dfa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dfa4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28dfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28dfa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dfac: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28DFACu;
    {
        const bool branch_taken_0x28dfac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28dfac) {
            ctx->pc = 0x28E020u;
            return;
        }
    }
    ctx->pc = 0x28DFB4u;
    // 0x28dfb4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28dfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28dfb8: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x28dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x28dfbc: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x28dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28dfc0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x28dfc0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x28dfc4: 0x0  nop
    ctx->pc = 0x28dfc4u;
    // NOP
    // 0x28dfc8: 0x0  nop
    ctx->pc = 0x28dfc8u;
    // NOP
    // 0x28dfcc: 0x1010  mfhi        $v0
    ctx->pc = 0x28dfccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x28dfd0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28DFD0u;
    {
        const bool branch_taken_0x28dfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dfd0) {
            ctx->pc = 0x28E020u;
            return;
        }
    }
    ctx->pc = 0x28DFD8u;
    // 0x28dfd8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dfdc: 0x8c2327c8  lw          $v1, 0x27C8($at)
    ctx->pc = 0x28dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6227C8u));
    // 0x28dfe0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x28dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28dfe4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dfe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dfe8: 0xac2227c8  sw          $v0, 0x27C8($at)
    ctx->pc = 0x28dfe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6227C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C8u, _value); } while (0);
    // 0x28dfec: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DFECu;
    {
        const bool branch_taken_0x28dfec = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x28dfec) {
            ctx->pc = 0x28DFFCu;
            return;
        }
    }
    ctx->pc = 0x28DFF4u;
    // 0x28dff4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dff8: 0xac2027c8  sw          $zero, 0x27C8($at)
    ctx->pc = 0x28dff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6227C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C8u, _value); } while (0);
    ctx->pc = 0x28dffcu;
}
