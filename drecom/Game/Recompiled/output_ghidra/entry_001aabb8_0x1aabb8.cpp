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

// Function: entry_001aabb8
// Address: 0x1aabb8 - 0x1aac1c
void entry_001aabb8_0x1aabb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aabb8_0x1aabb8");
#endif

    switch (ctx->pc) {
        case 0x1aabd0u: goto label_1aabd0;
        default: break;
    }

    ctx->pc = 0x1aabb8u;

    // 0x1aabb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1aabb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aabbc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1aabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aabc0: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1aabc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1aabc4: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x1aabc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1aabc8: 0xc067594  jal         func_19D650
    ctx->pc = 0x1AABC8u;
    SET_GPR_U32(ctx, 31, 0x1AABD0u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x1AABC8u, 0x1AABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AABD0u;
label_1aabd0:
    // 0x1aabd0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1aabd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1aabd4: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1aabd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aabd8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1aabd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1aabdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aabdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aabe0: 0x0  nop
    ctx->pc = 0x1aabe0u;
    // NOP
    // 0x1aabe4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aabe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aabe8: 0x0  nop
    ctx->pc = 0x1aabe8u;
    // NOP
    // 0x1aabec: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1AABECu;
    {
        const bool branch_taken_0x1aabec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aabec) {
            ctx->pc = 0x1AAC1Cu;
            return;
        }
    }
    ctx->pc = 0x1AABF4u;
    // 0x1aabf4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1aabf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aabf8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1aabf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aabfc: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x1aabfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
    // 0x1aac00: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aac00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac04: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x1aac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1aac08: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1aac08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1aac0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1aac0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aac10: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x1aac10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x1aac14: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1AAC14u;
    {
        const bool branch_taken_0x1aac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aac14) {
            ctx->pc = 0x1AACD8u;
            return;
        }
    }
    ctx->pc = 0x1AAC1Cu;
}
