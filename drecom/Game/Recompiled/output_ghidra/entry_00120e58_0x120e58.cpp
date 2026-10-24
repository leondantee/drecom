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

// Function: entry_00120e58
// Address: 0x120e58 - 0x120ea8
void entry_00120e58_0x120e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120e58_0x120e58");
#endif

    switch (ctx->pc) {
        case 0x120ea0u: goto label_120ea0;
        default: break;
    }

    ctx->pc = 0x120e58u;

    // 0x120e58: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120e5c: 0x948311f4  lhu         $v1, 0x11F4($a0)
    ctx->pc = 0x120e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4596)));
    // 0x120e60: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x120e60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x120e64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x120e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120e68: 0x14c4000f  bne         $a2, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x120E68u;
    {
        const bool branch_taken_0x120e68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x120e68) {
            ctx->pc = 0x120EA8u;
            return;
        }
    }
    ctx->pc = 0x120E70u;
    // 0x120e70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x120e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x120e74: 0xa2050097  sb          $a1, 0x97($s0)
    ctx->pc = 0x120e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 5));
    // 0x120e78: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120e7c: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x120e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x120e80: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x120e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x120e84: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x120e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x120e88: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x120e88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x120e8c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x120e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x120e90: 0x24c505b0  addiu       $a1, $a2, 0x5B0
    ctx->pc = 0x120e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1456));
    // 0x120e94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x120e94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x120e98: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x120E98u;
    SET_GPR_U32(ctx, 31, 0x120EA0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x120E98u, 0x120EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120EA0u;
label_120ea0:
    // 0x120ea0: 0x100007a3  b           . + 4 + (0x7A3 << 2)
    ctx->pc = 0x120EA0u;
    {
        const bool branch_taken_0x120ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ea0) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x120EA8u;
}
