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

// Function: entry_001d0de4
// Address: 0x1d0de4 - 0x1d0e2c
void entry_001d0de4_0x1d0de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0de4_0x1d0de4");
#endif

    switch (ctx->pc) {
        case 0x1d0e08u: goto label_1d0e08;
        default: break;
    }

    ctx->pc = 0x1d0de4u;

    // 0x1d0de4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1d0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1d0de8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d0de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d0dec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d0decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0df0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x1d0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1d0df4: 0x2404030d  addiu       $a0, $zero, 0x30D
    ctx->pc = 0x1d0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 781));
    // 0x1d0df8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1d0df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d0dfc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d0dfcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0e00: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1D0E00u;
    SET_GPR_U32(ctx, 31, 0x1D0E08u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1D0E00u, 0x1D0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E08u;
label_1d0e08:
    // 0x1d0e08: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1d0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1d0e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0e10: 0x0  nop
    ctx->pc = 0x1d0e10u;
    // NOP
    // 0x1d0e14: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1d0e18: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x1d0e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d0e1c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d0e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d0e20: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d0e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0e24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D0E24u;
    {
        const bool branch_taken_0x1d0e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0e24) {
            ctx->pc = 0x1D0E50u;
            return;
        }
    }
    ctx->pc = 0x1D0E2Cu;
}
