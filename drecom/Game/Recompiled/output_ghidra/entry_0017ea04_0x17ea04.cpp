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

// Function: entry_0017ea04
// Address: 0x17ea04 - 0x17ea68
void entry_0017ea04_0x17ea04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ea04_0x17ea04");
#endif

    switch (ctx->pc) {
        case 0x17ea28u: goto label_17ea28;
        default: break;
    }

    ctx->pc = 0x17ea04u;

    // 0x17ea04: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x17ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ea08: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x17ea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ea0c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17ea0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17ea10: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x17ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ea14: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x17ea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ea18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17ea18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17ea1c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x17ea1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17ea20: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x17EA20u;
    SET_GPR_U32(ctx, 31, 0x17EA28u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x17EA20u, 0x17EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA28u;
label_17ea28:
    // 0x17ea28: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x17ea28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17ea2c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ea30: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x17ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x17ea34: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x17ea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17ea38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ea38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ea3c: 0x0  nop
    ctx->pc = 0x17ea3cu;
    // NOP
    // 0x17ea40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17ea40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ea44: 0x0  nop
    ctx->pc = 0x17ea44u;
    // NOP
    // 0x17ea48: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x17EA48u;
    {
        const bool branch_taken_0x17ea48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ea48) {
            ctx->pc = 0x17EA68u;
            return;
        }
    }
    ctx->pc = 0x17EA50u;
    // 0x17ea50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17ea54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ea54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ea58: 0x0  nop
    ctx->pc = 0x17ea58u;
    // NOP
    // 0x17ea5c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17ea5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17ea60: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x17EA60u;
    {
        const bool branch_taken_0x17ea60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ea60) {
            ctx->pc = 0x17EABCu;
            return;
        }
    }
    ctx->pc = 0x17EA68u;
}
