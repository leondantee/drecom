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

// Function: entry_0018cde8
// Address: 0x18cde8 - 0x18ce20
void entry_0018cde8_0x18cde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cde8_0x18cde8");
#endif

    ctx->pc = 0x18cde8u;

    // 0x18cde8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18cdec: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x18cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x18cdf0: 0x8c441214  lw          $a0, 0x1214($v0)
    ctx->pc = 0x18cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4628)));
    // 0x18cdf4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18cdf8: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x18cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x18cdfc: 0x90421218  lbu         $v0, 0x1218($v0)
    ctx->pc = 0x18cdfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4632)));
    // 0x18ce00: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18ce00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ce04: 0x24020b30  addiu       $v0, $zero, 0xB30
    ctx->pc = 0x18ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2864));
    // 0x18ce08: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x18ce08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18ce0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18ce10: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x18ce10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18ce14: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x18CE14u;
    {
        const bool branch_taken_0x18ce14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ce14) {
            ctx->pc = 0x18CDCCu;
            return;
        }
    }
    ctx->pc = 0x18CE1Cu;
    // 0x18ce1c: 0x0  nop
    ctx->pc = 0x18ce1cu;
    // NOP
    ctx->pc = 0x18ce20u;
}
