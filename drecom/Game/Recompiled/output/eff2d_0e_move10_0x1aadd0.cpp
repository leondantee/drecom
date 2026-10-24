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

// Function: eff2d_0e_move10
// Address: 0x1aadd0 - 0x1ab1a8
void eff2d_0e_move10_0x1aadd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0e_move10_0x1aadd0");
#endif

    switch (ctx->pc) {
        case 0x1aae34u: goto label_1aae34;
        case 0x1aaec0u: goto label_1aaec0;
        case 0x1aaf44u: goto label_1aaf44;
        default: break;
    }

    ctx->pc = 0x1aadd0u;

    // 0x1aadd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1aadd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1aadd4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1aadd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1aadd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aadd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aaddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aaddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aade0: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1aade0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1aade4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1aade4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1aade8: 0x246381e0  addiu       $v1, $v1, -0x7E20
    ctx->pc = 0x1aade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935008));
    // 0x1aadec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1aadecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1aadf0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1aadf0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3881E0u));
    // 0x1aadf4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1aadf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1aadf8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aadf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aadfc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1aadfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1aae00: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1aae00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1aae04: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1AAE04u;
    {
        const bool branch_taken_0x1aae04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aae04) {
            ctx->pc = 0x1AAE9Cu;
            goto label_1aae9c;
        }
    }
    ctx->pc = 0x1AAE0Cu;
    // 0x1aae0c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aae10: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x1aae10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1aae14: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aae18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aae1c: 0x8c640110  lw          $a0, 0x110($v1)
    ctx->pc = 0x1aae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x1aae20: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1aae20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1aae24: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1aae24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1aae28: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x1aae28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1aae2c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1AAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1AAE34u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1AAE2Cu, 0x1AAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE34u;
label_1aae34:
    // 0x1aae34: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AAE34u;
    {
        const bool branch_taken_0x1aae34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aae34) {
            ctx->pc = 0x1AAE9Cu;
            goto label_1aae9c;
        }
    }
    ctx->pc = 0x1AAE3Cu;
    // 0x1aae3c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aae40: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1aae40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1aae44: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1aae44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1aae48: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AAE48u;
    {
        const bool branch_taken_0x1aae48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aae48) {
            ctx->pc = 0x1AAE78u;
            goto label_1aae78;
        }
    }
    ctx->pc = 0x1AAE50u;
    // 0x1aae50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1aae50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aae54: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aae58: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x1aae58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
    // 0x1aae5c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1aae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aae60: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x1aae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1aae64: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1aae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1aae68: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1aae68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aae6c: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x1aae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x1aae70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAE70u;
    {
        const bool branch_taken_0x1aae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aae70) {
            ctx->pc = 0x1AAE88u;
            goto label_1aae88;
        }
    }
    ctx->pc = 0x1AAE78u;
label_1aae78:
    // 0x1aae78: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1aae78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aae7c: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x1aae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1aae80: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1aae80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1aae84: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x1aae84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
label_1aae88:
    // 0x1aae88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1aae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aae8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aae90: 0xac64012c  sw          $a0, 0x12C($v1)
    ctx->pc = 0x1aae90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 4));
    // 0x1aae94: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1AAE94u;
    {
        const bool branch_taken_0x1aae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aae94) {
            ctx->pc = 0x1AB190u;
            goto label_1ab190;
        }
    }
    ctx->pc = 0x1AAE9Cu;
label_1aae9c:
    // 0x1aae9c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaea0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1aaea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1aaea4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1aaea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1aaea8: 0x106000b9  beqz        $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1AAEA8u;
    {
        const bool branch_taken_0x1aaea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaea8) {
            ctx->pc = 0x1AB190u;
            goto label_1ab190;
        }
    }
    ctx->pc = 0x1AAEB0u;
    // 0x1aaeb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1aaeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aaeb4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1aaeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aaeb8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1AAEB8u;
    SET_GPR_U32(ctx, 31, 0x1AAEC0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1AAEB8u, 0x1AAEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAEC0u;
label_1aaec0:
    // 0x1aaec0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1aaec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1aaec4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaec8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1aaec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1aaecc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaed0: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x1aaed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaed4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaed8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1aaed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaedc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1aaedcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1aaee0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1aaee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaee4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aaee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aaee8: 0x0  nop
    ctx->pc = 0x1aaee8u;
    // NOP
    // 0x1aaeec: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1AAEECu;
    {
        const bool branch_taken_0x1aaeec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aaeec) {
            ctx->pc = 0x1AAF24u;
            goto label_1aaf24;
        }
    }
    ctx->pc = 0x1AAEF4u;
    // 0x1aaef4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaef8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1aaef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaefc: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1aaefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaf00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aaf00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aaf04: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf08: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x1aaf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x1aaf0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aaf0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aaf10: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf14: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x1aaf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x1aaf18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aaf18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aaf1c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf20: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x1aaf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_1aaf24:
    // 0x1aaf24: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aaf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf28: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1aaf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aaf30: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x1aaf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1aaf34: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x1aaf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1aaf38: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x1aaf38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x1aaf3c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1AAF3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAF44u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1AAF3Cu, 0x1AAF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF44u;
label_1aaf44:
    // 0x1aaf44: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1aaf44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1aaf48: 0x12000091  beqz        $s0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1AAF48u;
    {
        const bool branch_taken_0x1aaf48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaf48) {
            ctx->pc = 0x1AB190u;
            goto label_1ab190;
        }
    }
    ctx->pc = 0x1AAF50u;
    // 0x1aaf50: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aaf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf54: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1aaf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1aaf58: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1aaf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1aaf5c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AAF5Cu;
    {
        const bool branch_taken_0x1aaf5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaf5c) {
            ctx->pc = 0x1AAF8Cu;
            goto label_1aaf8c;
        }
    }
    ctx->pc = 0x1AAF64u;
    // 0x1aaf64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1aaf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aaf68: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aaf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf6c: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x1aaf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
    // 0x1aaf70: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1aaf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf74: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x1aaf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1aaf78: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1aaf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1aaf7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1aaf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aaf80: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x1aaf80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x1aaf84: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1AAF84u;
    {
        const bool branch_taken_0x1aaf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaf84) {
            ctx->pc = 0x1AB190u;
            goto label_1ab190;
        }
    }
    ctx->pc = 0x1AAF8Cu;
label_1aaf8c:
    // 0x1aaf8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aaf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf90: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1aaf90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aaf94: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1aaf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1aaf98: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1aaf98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1aaf9c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1aaf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aafa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aafa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aafa4: 0x0  nop
    ctx->pc = 0x1aafa4u;
    // NOP
    // 0x1aafa8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1aafa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aafac: 0x0  nop
    ctx->pc = 0x1aafacu;
    // NOP
    // 0x1aafb0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1AAFB0u;
    {
        const bool branch_taken_0x1aafb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aafb0) {
            ctx->pc = 0x1AAFF0u;
            goto label_1aaff0;
        }
    }
    ctx->pc = 0x1AAFB8u;
    // 0x1aafb8: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1aafb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aafbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aafbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aafc0: 0x0  nop
    ctx->pc = 0x1aafc0u;
    // NOP
    // 0x1aafc4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1aafc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aafc8: 0x0  nop
    ctx->pc = 0x1aafc8u;
    // NOP
    // 0x1aafcc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1AAFCCu;
    {
        const bool branch_taken_0x1aafcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aafcc) {
            ctx->pc = 0x1AAFF0u;
            goto label_1aaff0;
        }
    }
    ctx->pc = 0x1AAFD4u;
    // 0x1aafd4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aafd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aafd8: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1aafd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aafdc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1aafdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aafe0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aafe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aafe4: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1aafe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1aafe8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1AAFE8u;
    {
        const bool branch_taken_0x1aafe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aafe8) {
            ctx->pc = 0x1AB190u;
            goto label_1ab190;
        }
    }
    ctx->pc = 0x1AAFF0u;
label_1aaff0:
    // 0x1aaff0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1aaff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aaff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aaff8: 0x0  nop
    ctx->pc = 0x1aaff8u;
    // NOP
    // 0x1aaffc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1aaffcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab000: 0x0  nop
    ctx->pc = 0x1ab000u;
    // NOP
    // 0x1ab004: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1AB004u;
    {
        const bool branch_taken_0x1ab004 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab004) {
            ctx->pc = 0x1AB044u;
            goto label_1ab044;
        }
    }
    ctx->pc = 0x1AB00Cu;
    // 0x1ab00c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ab00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab010: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab014: 0x0  nop
    ctx->pc = 0x1ab014u;
    // NOP
    // 0x1ab018: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab018u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab01c: 0x0  nop
    ctx->pc = 0x1ab01cu;
    // NOP
    // 0x1ab020: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB020u;
    {
        const bool branch_taken_0x1ab020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab020) {
            ctx->pc = 0x1AB044u;
            goto label_1ab044;
        }
    }
    ctx->pc = 0x1AB028u;
    // 0x1ab028: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab02c: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x1ab02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab030: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ab030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab034: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab038: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1ab038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1ab03c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1AB03Cu;
    {
        const bool branch_taken_0x1ab03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab03c) {
            ctx->pc = 0x1AB190u;
            goto label_1ab190;
        }
    }
    ctx->pc = 0x1AB044u;
label_1ab044:
    // 0x1ab044: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ab044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab04c: 0x0  nop
    ctx->pc = 0x1ab04cu;
    // NOP
    // 0x1ab050: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab050u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab054: 0x0  nop
    ctx->pc = 0x1ab054u;
    // NOP
    // 0x1ab058: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1AB058u;
    {
        const bool branch_taken_0x1ab058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab058) {
            ctx->pc = 0x1AB098u;
            goto label_1ab098;
        }
    }
    ctx->pc = 0x1AB060u;
    // 0x1ab060: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ab060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab068: 0x0  nop
    ctx->pc = 0x1ab068u;
    // NOP
    // 0x1ab06c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab06cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab070: 0x0  nop
    ctx->pc = 0x1ab070u;
    // NOP
    // 0x1ab074: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB074u;
    {
        const bool branch_taken_0x1ab074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab074) {
            ctx->pc = 0x1AB098u;
            goto label_1ab098;
        }
    }
    ctx->pc = 0x1AB07Cu;
    // 0x1ab07c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab080: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1ab080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab084: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ab084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab088: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab08c: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1ab08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1ab090: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1AB090u;
    {
        const bool branch_taken_0x1ab090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab090) {
            ctx->pc = 0x1AB190u;
            goto label_1ab190;
        }
    }
    ctx->pc = 0x1AB098u;
label_1ab098:
    // 0x1ab098: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ab098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab09c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab09cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab0a0: 0x0  nop
    ctx->pc = 0x1ab0a0u;
    // NOP
    // 0x1ab0a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab0a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab0a8: 0x0  nop
    ctx->pc = 0x1ab0a8u;
    // NOP
    // 0x1ab0ac: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1AB0ACu;
    {
        const bool branch_taken_0x1ab0ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab0ac) {
            ctx->pc = 0x1AB0E4u;
            goto label_1ab0e4;
        }
    }
    ctx->pc = 0x1AB0B4u;
    // 0x1ab0b4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab0b8: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1ab0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab0bc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ab0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab0c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab0c4: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1ab0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1ab0c8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab0cc: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x1ab0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab0d0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ab0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab0d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab0d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab0d8: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1ab0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1ab0dc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1AB0DCu;
    {
        const bool branch_taken_0x1ab0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab0dc) {
            ctx->pc = 0x1AB190u;
            goto label_1ab190;
        }
    }
    ctx->pc = 0x1AB0E4u;
label_1ab0e4:
    // 0x1ab0e4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1ab0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab0e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab0e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab0ec: 0x0  nop
    ctx->pc = 0x1ab0ecu;
    // NOP
    // 0x1ab0f0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab0f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab0f4: 0x0  nop
    ctx->pc = 0x1ab0f4u;
    // NOP
    // 0x1ab0f8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1AB0F8u;
    {
        const bool branch_taken_0x1ab0f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab0f8) {
            ctx->pc = 0x1AB130u;
            goto label_1ab130;
        }
    }
    ctx->pc = 0x1AB100u;
    // 0x1ab100: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab104: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1ab104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab108: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ab108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab10c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab110: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1ab110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1ab114: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab118: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x1ab118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab11c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ab11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab120: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab124: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1ab124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1ab128: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1AB128u;
    {
        const bool branch_taken_0x1ab128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab128) {
            ctx->pc = 0x1AB190u;
            goto label_1ab190;
        }
    }
    ctx->pc = 0x1AB130u;
label_1ab130:
    // 0x1ab130: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ab130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab138: 0x0  nop
    ctx->pc = 0x1ab138u;
    // NOP
    // 0x1ab13c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab13cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab140: 0x0  nop
    ctx->pc = 0x1ab140u;
    // NOP
    // 0x1ab144: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1AB144u;
    {
        const bool branch_taken_0x1ab144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab144) {
            ctx->pc = 0x1AB17Cu;
            goto label_1ab17c;
        }
    }
    ctx->pc = 0x1AB14Cu;
    // 0x1ab14c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab150: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1ab150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab154: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ab154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab158: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab15c: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1ab15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1ab160: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab164: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1ab164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab168: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ab168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab16c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab170: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1ab170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1ab174: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB174u;
    {
        const bool branch_taken_0x1ab174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab174) {
            ctx->pc = 0x1AB190u;
            goto label_1ab190;
        }
    }
    ctx->pc = 0x1AB17Cu;
label_1ab17c:
    // 0x1ab17c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab180: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1ab180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab184: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ab184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab188: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab18c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1ab18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
label_1ab190:
    // 0x1ab190: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1ab190u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ab194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab19c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1ab19cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ab1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB1A8u;
}
