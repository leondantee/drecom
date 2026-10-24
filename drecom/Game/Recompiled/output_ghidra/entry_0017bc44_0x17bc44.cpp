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

// Function: entry_0017bc44
// Address: 0x17bc44 - 0x17bcc0
void entry_0017bc44_0x17bc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bc44_0x17bc44");
#endif

    switch (ctx->pc) {
        case 0x17bc88u: goto label_17bc88;
        default: break;
    }

    ctx->pc = 0x17bc44u;

    // 0x17bc44: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17bc48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17bc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x17bc4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17bc4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17bc50: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17bc54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17bc54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17bc58: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bc5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17bc5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17bc60: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x17bc60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17bc64: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x17bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x17bc68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bc6c: 0x0  nop
    ctx->pc = 0x17bc6cu;
    // NOP
    // 0x17bc70: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x17bc70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17bc74: 0x0  nop
    ctx->pc = 0x17bc74u;
    // NOP
    // 0x17bc78: 0x0  nop
    ctx->pc = 0x17bc78u;
    // NOP
    // 0x17bc7c: 0x0  nop
    ctx->pc = 0x17bc7cu;
    // NOP
    // 0x17bc80: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x17BC80u;
    SET_GPR_U32(ctx, 31, 0x17BC88u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x17BC80u, 0x17BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC88u;
label_17bc88:
    // 0x17bc88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17bc8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17bc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17bc90: 0x0  nop
    ctx->pc = 0x17bc90u;
    // NOP
    // 0x17bc94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17bc94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17bc98: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bc9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17bc9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17bca0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17bca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17bca4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17bca8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bcac: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17bcb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17bcb4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17bcb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17BCB8u;
    {
        const bool branch_taken_0x17bcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bcb8) {
            ctx->pc = 0x17BCC8u;
            return;
        }
    }
    ctx->pc = 0x17BCC0u;
}
