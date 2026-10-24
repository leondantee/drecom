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

// Function: entry_001968f8
// Address: 0x1968f8 - 0x196960
void entry_001968f8_0x1968f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001968f8_0x1968f8");
#endif

    switch (ctx->pc) {
        case 0x196910u: goto label_196910;
        case 0x196944u: goto label_196944;
        default: break;
    }

    ctx->pc = 0x1968f8u;

    // 0x1968f8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1968f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1968fc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1968fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x196900: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x196900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x196904: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x196904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196908: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196908u;
    SET_GPR_U32(ctx, 31, 0x196910u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196908u, 0x196910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196910u;
label_196910:
    // 0x196910: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x196910u;
    {
        const bool branch_taken_0x196910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196910) {
            ctx->pc = 0x196A80u;
            return;
        }
    }
    ctx->pc = 0x196918u;
    // 0x196918: 0x3c073dcc  lui         $a3, 0x3DCC
    ctx->pc = 0x196918u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15820 << 16));
    // 0x19691c: 0x34e6cccd  ori         $a2, $a3, 0xCCCD
    ctx->pc = 0x19691cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x196920: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x196920u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196924: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196928: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x196928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19692c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19692cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196930: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x196930u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196934: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x196934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196938: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19693c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x19693Cu;
    SET_GPR_U32(ctx, 31, 0x196944u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x19693Cu, 0x196944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196944u;
label_196944:
    // 0x196944: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x196944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x196948: 0x8427d340  lh          $a3, -0x2CC0($at)
    ctx->pc = 0x196948u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x5CD340u));
    // 0x19694c: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x19694cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x196950: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x196950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x196954: 0xa425d340  sh          $a1, -0x2CC0($at)
    ctx->pc = 0x196954u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5CD340u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD340u, _value); } while (0);
    // 0x196958: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x196958u;
    {
        const bool branch_taken_0x196958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196958) {
            ctx->pc = 0x196A80u;
            return;
        }
    }
    ctx->pc = 0x196960u;
}
