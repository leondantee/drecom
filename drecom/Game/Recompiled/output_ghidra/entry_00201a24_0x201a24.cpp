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

// Function: entry_00201a24
// Address: 0x201a24 - 0x201a68
void entry_00201a24_0x201a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201a24_0x201a24");
#endif

    ctx->pc = 0x201a24u;

    // 0x201a24: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x201a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201a28: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x201a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x201a2c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x201a30: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
    // 0x201a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201a38: 0x9042485f  lbu         $v0, 0x485F($v0)
    ctx->pc = 0x201a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18527)));
    // 0x201a3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x201A3Cu;
    {
        const bool branch_taken_0x201a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a3c) {
            ctx->pc = 0x201A68u;
            return;
        }
    }
    ctx->pc = 0x201A44u;
    // 0x201a44: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x201a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201a48: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x201a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x201a4c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x201a50: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
    // 0x201a54: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x201a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201a58: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x201a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201a5c: 0xc7ad006c  lwc1        $f13, 0x6C($sp)
    ctx->pc = 0x201a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x201a60: 0xc0807f0  jal         func_201FC0
    ctx->pc = 0x201A60u;
    SET_GPR_U32(ctx, 31, 0x201A68u);
    ctx->pc = 0x201FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201FC0u, 0x201A60u, 0x201A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A68u;
}
