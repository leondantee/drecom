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

// Function: entry_00160180
// Address: 0x160180 - 0x1601dc
void entry_00160180_0x160180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160180_0x160180");
#endif

    switch (ctx->pc) {
        case 0x16019cu: goto label_16019c;
        default: break;
    }

    ctx->pc = 0x160180u;

    // 0x160180: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x160180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x160184: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x160184u;
    {
        const bool branch_taken_0x160184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160184) {
            ctx->pc = 0x1600D4u;
            return;
        }
    }
    ctx->pc = 0x16018Cu;
    // 0x16018c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160190: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x160190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x160194: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x160194u;
    SET_GPR_U32(ctx, 31, 0x16019Cu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x160194u, 0x16019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16019Cu;
label_16019c:
    // 0x16019c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x16019cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1601a0: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x1601a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1601a4: 0x3c0243e7  lui         $v0, 0x43E7
    ctx->pc = 0x1601a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17383 << 16));
    // 0x1601a8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1601a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1601ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1601acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1601b0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1601b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1601b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1601b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1601b8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1601b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1601bc: 0x0  nop
    ctx->pc = 0x1601bcu;
    // NOP
    // 0x1601c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1601C0u;
    {
        const bool branch_taken_0x1601c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1601c0) {
            ctx->pc = 0x1601DCu;
            return;
        }
    }
    ctx->pc = 0x1601C8u;
    // 0x1601c8: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1601c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1601cc: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1601ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1601d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1601d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1601d4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1601D4u;
    {
        const bool branch_taken_0x1601d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1601d4) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x1601DCu;
}
