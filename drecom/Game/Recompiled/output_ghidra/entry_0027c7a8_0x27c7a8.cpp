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

// Function: entry_0027c7a8
// Address: 0x27c7a8 - 0x27c804
void entry_0027c7a8_0x27c7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c7a8_0x27c7a8");
#endif

    switch (ctx->pc) {
        case 0x27c7e4u: goto label_27c7e4;
        case 0x27c7f8u: goto label_27c7f8;
        default: break;
    }

    ctx->pc = 0x27c7a8u;

    // 0x27c7a8: 0x2e220014  sltiu       $v0, $s1, 0x14
    ctx->pc = 0x27c7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x27c7ac: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x27C7ACu;
    {
        const bool branch_taken_0x27c7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c7ac) {
            ctx->pc = 0x27C73Cu;
            return;
        }
    }
    ctx->pc = 0x27C7B4u;
    // 0x27c7b4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c7b8: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27c7b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Cu));
    // 0x27c7bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c7c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c7c4: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27c7c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27c7c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27c7cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27c7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c7d0: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x27c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x27c7d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27c7d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c7d8: 0x24060173  addiu       $a2, $zero, 0x173
    ctx->pc = 0x27c7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 371));
    // 0x27c7dc: 0xc0561d4  jal         func_158750
    ctx->pc = 0x27C7DCu;
    SET_GPR_U32(ctx, 31, 0x27C7E4u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x27C7DCu, 0x27C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7E4u;
label_27c7e4:
    // 0x27c7e4: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x27c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x27c7e8: 0x3444a0a0  ori         $a0, $v0, 0xA0A0
    ctx->pc = 0x27c7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41120);
    // 0x27c7ec: 0x3c050173  lui         $a1, 0x173
    ctx->pc = 0x27c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)371 << 16));
    // 0x27c7f0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C7F0u;
    SET_GPR_U32(ctx, 31, 0x27C7F8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C7F0u, 0x27C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7F8u;
label_27c7f8:
    // 0x27c7f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27c7f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c7fc: 0x0  nop
    ctx->pc = 0x27c7fcu;
    // NOP
    // 0x27c800: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27c800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x27c804u;
}
