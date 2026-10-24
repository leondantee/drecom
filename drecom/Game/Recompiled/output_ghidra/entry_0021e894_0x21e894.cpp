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

// Function: entry_0021e894
// Address: 0x21e894 - 0x21e900
void entry_0021e894_0x21e894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e894_0x21e894");
#endif

    switch (ctx->pc) {
        case 0x21e89cu: goto label_21e89c;
        case 0x21e8b8u: goto label_21e8b8;
        case 0x21e8d4u: goto label_21e8d4;
        case 0x21e8f8u: goto label_21e8f8;
        default: break;
    }

    ctx->pc = 0x21e894u;

    // 0x21e894: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E894u;
    SET_GPR_U32(ctx, 31, 0x21E89Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E894u, 0x21E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E89Cu;
label_21e89c:
    // 0x21e89c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x21e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x21e8a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e8a4: 0x0  nop
    ctx->pc = 0x21e8a4u;
    // NOP
    // 0x21e8a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e8ac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x21e8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21e8b0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E8B0u;
    SET_GPR_U32(ctx, 31, 0x21E8B8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E8B0u, 0x21E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8B8u;
label_21e8b8:
    // 0x21e8b8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x21e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x21e8bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e8c0: 0x0  nop
    ctx->pc = 0x21e8c0u;
    // NOP
    // 0x21e8c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e8c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e8c8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21e8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21e8cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E8CCu;
    SET_GPR_U32(ctx, 31, 0x21E8D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E8CCu, 0x21E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8D4u;
label_21e8d4:
    // 0x21e8d4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x21e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x21e8d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e8dc: 0x0  nop
    ctx->pc = 0x21e8dcu;
    // NOP
    // 0x21e8e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e8e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e8e4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x21e8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x21e8e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x21e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e8ec: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x21e8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x21e8f0: 0xc0c48b4  jal         func_3122D0
    ctx->pc = 0x21E8F0u;
    SET_GPR_U32(ctx, 31, 0x21E8F8u);
    ctx->pc = 0x3122D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3122D0u, 0x21E8F0u, 0x21E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8F8u;
label_21e8f8:
    // 0x21e8f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21e8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21e8fc: 0x0  nop
    ctx->pc = 0x21e8fcu;
    // NOP
    ctx->pc = 0x21e900u;
}
