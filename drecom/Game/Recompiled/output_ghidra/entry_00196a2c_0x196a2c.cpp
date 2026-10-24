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

// Function: entry_00196a2c
// Address: 0x196a2c - 0x196a80
void entry_00196a2c_0x196a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196a2c_0x196a2c");
#endif

    switch (ctx->pc) {
        case 0x196a44u: goto label_196a44;
        case 0x196a74u: goto label_196a74;
        default: break;
    }

    ctx->pc = 0x196a2cu;

    // 0x196a2c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196a30: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x196a30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x196a34: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x196a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x196a38: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x196a38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196a3c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196A3Cu;
    SET_GPR_U32(ctx, 31, 0x196A44u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196A3Cu, 0x196A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A44u;
label_196a44:
    // 0x196a44: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x196A44u;
    {
        const bool branch_taken_0x196a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a44) {
            ctx->pc = 0x196A80u;
            return;
        }
    }
    ctx->pc = 0x196A4Cu;
    // 0x196a4c: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x196a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
    // 0x196a50: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x196a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x196a54: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x196a54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196a58: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196a5c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x196a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x196a60: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196a60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196a64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196a68: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196a6c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196A6Cu;
    SET_GPR_U32(ctx, 31, 0x196A74u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196A6Cu, 0x196A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A74u;
label_196a74:
    // 0x196a74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196a78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x196a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x196a7c: 0xa425d340  sh          $a1, -0x2CC0($at)
    ctx->pc = 0x196a7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5CD340u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD340u, _value); } while (0);
    ctx->pc = 0x196a80u;
}
