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

// Function: caseD_5
// Address: 0x318e9c - 0x318f64
void caseD_5_0x318e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x318e9c");
#endif

    switch (ctx->pc) {
        case 0x318f20u: goto label_318f20;
        case 0x318f2cu: goto label_318f2c;
        case 0x318f40u: goto label_318f40;
        default: break;
    }

    ctx->pc = 0x318e9cu;

    // 0x318e9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318ea0: 0xc44012d0  lwc1        $f0, 0x12D0($v0)
    ctx->pc = 0x318ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318ea4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318ea8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x318ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x318eac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318eb0: 0xc44112d0  lwc1        $f1, 0x12D0($v0)
    ctx->pc = 0x318eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318eb4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x318eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x318eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318ebc: 0x0  nop
    ctx->pc = 0x318ebcu;
    // NOP
    // 0x318ec0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x318ec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318ec4: 0x0  nop
    ctx->pc = 0x318ec4u;
    // NOP
    // 0x318ec8: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x318EC8u;
    {
        const bool branch_taken_0x318ec8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318ec8) {
            ctx->pc = 0x318F64u;
            return;
        }
    }
    ctx->pc = 0x318ED0u;
    // 0x318ed0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x318ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x318ed4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x318ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x318ed8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x318ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x318edc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318ee0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x318ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x318ee4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x318ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x318ee8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x318ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x318eec: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x318eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x318ef0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x318ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x318ef4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x318ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x318ef8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x318ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x318efc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x318efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x318f00: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x318f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x318f04: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x318f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x318f08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x318f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x318f0c: 0x2445dd30  addiu       $a1, $v0, -0x22D0
    ctx->pc = 0x318f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958384));
    // 0x318f10: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x318f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x318f14: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x318f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x318f18: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x318F18u;
    SET_GPR_U32(ctx, 31, 0x318F20u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x318F18u, 0x318F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F20u;
label_318f20:
    // 0x318f20: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x318f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x318f24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x318F24u;
    SET_GPR_U32(ctx, 31, 0x318F2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x318F24u, 0x318F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F2Cu;
label_318f2c:
    // 0x318f2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318f30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x318f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x318f34: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x318f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x318f38: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x318F38u;
    SET_GPR_U32(ctx, 31, 0x318F40u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x318F38u, 0x318F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F40u;
label_318f40:
    // 0x318f40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318f44: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x318f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x318f48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318f4c: 0xc46112d0  lwc1        $f1, 0x12D0($v1)
    ctx->pc = 0x318f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318f50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x318f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x318f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318f58: 0x0  nop
    ctx->pc = 0x318f58u;
    // NOP
    // 0x318f5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318f60: 0xe46012d0  swc1        $f0, 0x12D0($v1)
    ctx->pc = 0x318f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4816), bits); }
    ctx->pc = 0x318f64u;
}
