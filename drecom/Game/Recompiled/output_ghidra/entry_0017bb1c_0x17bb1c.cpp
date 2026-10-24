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

// Function: entry_0017bb1c
// Address: 0x17bb1c - 0x17bb88
void entry_0017bb1c_0x17bb1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bb1c_0x17bb1c");
#endif

    switch (ctx->pc) {
        case 0x17bb60u: goto label_17bb60;
        default: break;
    }

    ctx->pc = 0x17bb1cu;

    // 0x17bb1c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17bb20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17bb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x17bb24: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17bb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17bb28: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17bb2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17bb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17bb30: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bb34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17bb34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17bb38: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x17bb38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17bb3c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x17bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x17bb40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bb44: 0x0  nop
    ctx->pc = 0x17bb44u;
    // NOP
    // 0x17bb48: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x17bb48u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17bb4c: 0x0  nop
    ctx->pc = 0x17bb4cu;
    // NOP
    // 0x17bb50: 0x0  nop
    ctx->pc = 0x17bb50u;
    // NOP
    // 0x17bb54: 0x0  nop
    ctx->pc = 0x17bb54u;
    // NOP
    // 0x17bb58: 0xc0454c4  jal         func_115310
    ctx->pc = 0x17BB58u;
    SET_GPR_U32(ctx, 31, 0x17BB60u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x17BB58u, 0x17BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB60u;
label_17bb60:
    // 0x17bb60: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17bb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bb64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17bb64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17bb68: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17bb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17bb6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17bb70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bb74: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17bb78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17bb7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17bb80: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x17BB80u;
    {
        const bool branch_taken_0x17bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bb80) {
            ctx->pc = 0x17BCC8u;
            return;
        }
    }
    ctx->pc = 0x17BB88u;
}
