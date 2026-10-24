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

// Function: entry_002c6c8c
// Address: 0x2c6c8c - 0x2c6d80
void entry_002c6c8c_0x2c6c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6c8c_0x2c6c8c");
#endif

    switch (ctx->pc) {
        case 0x2c6c9cu: goto label_2c6c9c;
        case 0x2c6cc4u: goto label_2c6cc4;
        case 0x2c6cd4u: goto label_2c6cd4;
        case 0x2c6ce0u: goto label_2c6ce0;
        case 0x2c6d04u: goto label_2c6d04;
        case 0x2c6d4cu: goto label_2c6d4c;
        default: break;
    }

    ctx->pc = 0x2c6c8cu;

    // 0x2c6c8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c6c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c6c90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c6c94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C6C94u;
    SET_GPR_U32(ctx, 31, 0x2C6C9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C6C94u, 0x2C6C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C9Cu;
label_2c6c9c:
    // 0x2c6c9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6ca0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6ca4: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c6ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6ca8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6cac: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2c6cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6cb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6cb4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c6cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c6cb8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c6cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6cbc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2C6CBCu;
    SET_GPR_U32(ctx, 31, 0x2C6CC4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2C6CBCu, 0x2C6CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6CC4u;
label_2c6cc4:
    // 0x2c6cc4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c6cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6cc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c6cc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c6ccc: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C6CCCu;
    SET_GPR_U32(ctx, 31, 0x2C6CD4u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C6CCCu, 0x2C6CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6CD4u;
label_2c6cd4:
    // 0x2c6cd4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c6cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6cd8: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C6CD8u;
    SET_GPR_U32(ctx, 31, 0x2C6CE0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C6CD8u, 0x2C6CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6CE0u;
label_2c6ce0:
    // 0x2c6ce0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6ce4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x2c6ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2c6ce8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c6ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c6cec: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2c6cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2c6cf0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C6CF0u;
    {
        const bool branch_taken_0x2c6cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6cf0) {
            ctx->pc = 0x2C6DA8u;
            return;
        }
    }
    ctx->pc = 0x2C6CF8u;
    // 0x2c6cf8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c6cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6cfc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C6CFCu;
    SET_GPR_U32(ctx, 31, 0x2C6D04u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C6CFCu, 0x2C6D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D04u;
label_2c6d04:
    // 0x2c6d04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6d08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c6d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c6d0c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c6d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c6d10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c6d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c6d14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c6d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c6d18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c6d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c6d1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c6d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c6d20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c6d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c6d24: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2c6d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2c6d28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6d2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6d30: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c6d34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c6d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6d38: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x2c6d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2c6d3c: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x2c6d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c6d40: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2c6d40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c6d44: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2C6D44u;
    SET_GPR_U32(ctx, 31, 0x2C6D4Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2C6D44u, 0x2C6D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D4Cu;
label_2c6d4c:
    // 0x2c6d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6d50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6d54: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c6d54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c6d58: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6d5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6d60: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c6d60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c6d64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6D64u;
    {
        const bool branch_taken_0x2c6d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6d64) {
            ctx->pc = 0x2C6D80u;
            return;
        }
    }
    ctx->pc = 0x2C6D6Cu;
    // 0x2c6d6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6d70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c6d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6d74: 0x80620039  lb          $v0, 0x39($v1)
    ctx->pc = 0x2c6d74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c6d78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c6d7c: 0xa0620039  sb          $v0, 0x39($v1)
    ctx->pc = 0x2c6d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 57), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2c6d80u;
}
