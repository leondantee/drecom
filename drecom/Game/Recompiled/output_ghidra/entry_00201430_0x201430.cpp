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

// Function: entry_00201430
// Address: 0x201430 - 0x201468
void entry_00201430_0x201430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201430_0x201430");
#endif

    ctx->pc = 0x201430u;

    // 0x201430: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201434: 0x8c229fb0  lw          $v0, -0x6050($at)
    ctx->pc = 0x201434u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x389FB0u));
    // 0x201438: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x201438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20143c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20143cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201440: 0xac239fb0  sw          $v1, -0x6050($at)
    ctx->pc = 0x201440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
    // 0x201444: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x201444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201448: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x201448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20144c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x201450: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
    // 0x201454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201458: 0x9042485f  lbu         $v0, 0x485F($v0)
    ctx->pc = 0x201458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18527)));
    // 0x20145c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201460: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x201460u;
    {
        const bool branch_taken_0x201460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201460) {
            ctx->pc = 0x2013F0u;
            return;
        }
    }
    ctx->pc = 0x201468u;
}
