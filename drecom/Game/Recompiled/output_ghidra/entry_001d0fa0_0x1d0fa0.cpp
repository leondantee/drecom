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

// Function: entry_001d0fa0
// Address: 0x1d0fa0 - 0x1d0fe8
void entry_001d0fa0_0x1d0fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0fa0_0x1d0fa0");
#endif

    switch (ctx->pc) {
        case 0x1d0fc4u: goto label_1d0fc4;
        default: break;
    }

    ctx->pc = 0x1d0fa0u;

    // 0x1d0fa0: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x1d0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1d0fa4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1d0fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1d0fa8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d0fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d0fac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d0facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0fb0: 0x2404030d  addiu       $a0, $zero, 0x30D
    ctx->pc = 0x1d0fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 781));
    // 0x1d0fb4: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1d0fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1d0fb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d0fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0fbc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1D0FBCu;
    SET_GPR_U32(ctx, 31, 0x1D0FC4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1D0FBCu, 0x1D0FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FC4u;
label_1d0fc4:
    // 0x1d0fc4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1d0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1d0fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0fcc: 0x0  nop
    ctx->pc = 0x1d0fccu;
    // NOP
    // 0x1d0fd0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1d0fd4: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x1d0fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d0fd8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d0fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d0fdc: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d0fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0fe0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D0FE0u;
    {
        const bool branch_taken_0x1d0fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0fe0) {
            ctx->pc = 0x1D1010u;
            return;
        }
    }
    ctx->pc = 0x1D0FE8u;
}
