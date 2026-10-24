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

// Function: eff2d_0d_move10
// Address: 0x1aab30 - 0x1aacec
void eff2d_0d_move10_0x1aab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0d_move10_0x1aab30");
#endif

    switch (ctx->pc) {
        case 0x1aab7cu: goto label_1aab7c;
        case 0x1aabd0u: goto label_1aabd0;
        case 0x1aac38u: goto label_1aac38;
        case 0x1aac48u: goto label_1aac48;
        case 0x1aac60u: goto label_1aac60;
        case 0x1aac88u: goto label_1aac88;
        case 0x1aaca0u: goto label_1aaca0;
        default: break;
    }

    ctx->pc = 0x1aab30u;

    // 0x1aab30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1aab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1aab34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1aab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1aab38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aab3c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1aab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1aab40: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1aab40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1aab44: 0x244281c0  addiu       $v0, $v0, -0x7E40
    ctx->pc = 0x1aab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934976));
    // 0x1aab48: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1aab48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aab4c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1aab4cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3881C0u));
    // 0x1aab50: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1aab50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1aab54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1aab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aab58: 0x8c50002c  lw          $s0, 0x2C($v0)
    ctx->pc = 0x1aab58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1aab5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1aab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aab60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1aab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aab64: 0x8c640110  lw          $a0, 0x110($v1)
    ctx->pc = 0x1aab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x1aab68: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1aab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1aab6c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1aab6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aab70: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1aab70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1aab74: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1AAB74u;
    SET_GPR_U32(ctx, 31, 0x1AAB7Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1AAB74u, 0x1AAB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB7Cu;
label_1aab7c:
    // 0x1aab7c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AAB7Cu;
    {
        const bool branch_taken_0x1aab7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aab7c) {
            ctx->pc = 0x1AABB8u;
            goto label_1aabb8;
        }
    }
    ctx->pc = 0x1AAB84u;
    // 0x1aab84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1aab84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aab88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1aab88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aab8c: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x1aab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
    // 0x1aab90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1aab90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aab94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1aab94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aab98: 0xac64012c  sw          $a0, 0x12C($v1)
    ctx->pc = 0x1aab98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 4));
    // 0x1aab9c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aaba0: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x1aaba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1aaba4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1aaba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1aaba8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1aaba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aabac: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x1aabacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x1aabb0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1AABB0u;
    {
        const bool branch_taken_0x1aabb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aabb0) {
            ctx->pc = 0x1AACD8u;
            goto label_1aacd8;
        }
    }
    ctx->pc = 0x1AABB8u;
label_1aabb8:
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
            goto label_1aac1c;
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
            goto label_1aacd8;
        }
    }
    ctx->pc = 0x1AAC1Cu;
label_1aac1c:
    // 0x1aac1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1aac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac20: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1aac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1aac24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aac28: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x1aac28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1aac2c: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x1aac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1aac30: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1AAC30u;
    SET_GPR_U32(ctx, 31, 0x1AAC38u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1AAC30u, 0x1AAC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC38u;
label_1aac38:
    // 0x1aac38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1aac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aac3c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1aac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aac40: 0xc040c24  jal         func_103090
    ctx->pc = 0x1AAC40u;
    SET_GPR_U32(ctx, 31, 0x1AAC48u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1AAC48u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AAC48u) { return; }
    ctx->pc = 0x1AAC48u;
label_1aac48:
    // 0x1aac48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1aac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1aac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aac50: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1aac50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aac54: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x1aac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aac58: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1AAC58u;
    SET_GPR_U32(ctx, 31, 0x1AAC60u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1AAC60u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AAC60u) { return; }
    ctx->pc = 0x1AAC60u;
label_1aac60:
    // 0x1aac60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aac60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1aac64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aac64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aac68: 0x0  nop
    ctx->pc = 0x1aac68u;
    // NOP
    // 0x1aac6c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1aac6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1aac70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1aac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac74: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1aac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1aac78: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1aac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aac7c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1aac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac80: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1AAC80u;
    SET_GPR_U32(ctx, 31, 0x1AAC88u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1AAC80u, 0x1AAC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC88u;
label_1aac88:
    // 0x1aac88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1aac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac8c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1aac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac90: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aac90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aac94: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x1aac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aac98: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1AAC98u;
    SET_GPR_U32(ctx, 31, 0x1AACA0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1AACA0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AACA0u) { return; }
    ctx->pc = 0x1AACA0u;
label_1aaca0:
    // 0x1aaca0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1aaca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaca4: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1aaca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1aaca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aaca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aacac: 0x0  nop
    ctx->pc = 0x1aacacu;
    // NOP
    // 0x1aacb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aacb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aacb4: 0x0  nop
    ctx->pc = 0x1aacb4u;
    // NOP
    // 0x1aacb8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1AACB8u;
    {
        const bool branch_taken_0x1aacb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aacb8) {
            ctx->pc = 0x1AACD8u;
            goto label_1aacd8;
        }
    }
    ctx->pc = 0x1AACC0u;
    // 0x1aacc0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1aacc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aacc4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x1aacc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1aacc8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1aacc8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aaccc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1aacccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aacd0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1aacd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1aacd4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1aacd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1aacd8:
    // 0x1aacd8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1aacd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aacdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aacdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aace0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1aace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aace4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AACE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AACE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AACECu;
}
