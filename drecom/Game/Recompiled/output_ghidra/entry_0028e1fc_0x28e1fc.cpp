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

// Function: entry_0028e1fc
// Address: 0x28e1fc - 0x28e258
void entry_0028e1fc_0x28e1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e1fc_0x28e1fc");
#endif

    ctx->pc = 0x28e1fcu;

    // 0x28e1fc: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e1fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e200: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28e200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28e204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e208: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x28E208u;
    {
        const bool branch_taken_0x28e208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28e208) {
            ctx->pc = 0x28E280u;
            return;
        }
    }
    ctx->pc = 0x28E210u;
    // 0x28e210: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28e210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28e214: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x28e214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x28e218: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x28e218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28e21c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x28e21cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x28e220: 0x0  nop
    ctx->pc = 0x28e220u;
    // NOP
    // 0x28e224: 0x0  nop
    ctx->pc = 0x28e224u;
    // NOP
    // 0x28e228: 0x1010  mfhi        $v0
    ctx->pc = 0x28e228u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x28e22c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28E22Cu;
    {
        const bool branch_taken_0x28e22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e22c) {
            ctx->pc = 0x28E280u;
            return;
        }
    }
    ctx->pc = 0x28E234u;
    // 0x28e234: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e238: 0x8c2227c8  lw          $v0, 0x27C8($at)
    ctx->pc = 0x28e238u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6227C8u));
    // 0x28e23c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x28e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28e240: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e244: 0xac2327c8  sw          $v1, 0x27C8($at)
    ctx->pc = 0x28e244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6227C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C8u, _value); } while (0);
    // 0x28e248: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E248u;
    {
        const bool branch_taken_0x28e248 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x28e248) {
            ctx->pc = 0x28E258u;
            return;
        }
    }
    ctx->pc = 0x28E250u;
    // 0x28e250: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e254: 0xac2027c8  sw          $zero, 0x27C8($at)
    ctx->pc = 0x28e254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6227C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C8u, _value); } while (0);
    ctx->pc = 0x28e258u;
}
