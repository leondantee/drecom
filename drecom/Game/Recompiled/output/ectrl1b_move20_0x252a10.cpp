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

// Function: ectrl1b_move20
// Address: 0x252a10 - 0x2533f0
void ectrl1b_move20_0x252a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl1b_move20_0x252a10");
#endif

    switch (ctx->pc) {
        case 0x252a68u: goto label_252a68;
        case 0x252b0cu: goto label_252b0c;
        case 0x252d2cu: goto label_252d2c;
        case 0x252dd0u: goto label_252dd0;
        case 0x252fd8u: goto label_252fd8;
        case 0x25307cu: goto label_25307c;
        case 0x25328cu: goto label_25328c;
        case 0x2532e4u: goto label_2532e4;
        default: break;
    }

    ctx->pc = 0x252a10u;

    // 0x252a10: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x252a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x252a14: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x252a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x252a18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x252a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x252a1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x252a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x252a20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x252a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x252a24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252a2c: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x252a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x252a30: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x252a30u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x252a34: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252a38: 0x8c500100  lw          $s0, 0x100($v0)
    ctx->pc = 0x252a38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x252a3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x252a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x252a40: 0x8c320af0  lw          $s2, 0xAF0($at)
    ctx->pc = 0x252a40u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x252a44: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252a48: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x252a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x252a4c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x252a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x252a50: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x252A50u;
    {
        const bool branch_taken_0x252a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252a50) {
            ctx->pc = 0x252D04u;
            goto label_252d04;
        }
    }
    ctx->pc = 0x252A58u;
    // 0x252a58: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x252a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252a5c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x252a5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x252a60: 0xc094d10  jal         func_253440
    ctx->pc = 0x252A60u;
    SET_GPR_U32(ctx, 31, 0x252A68u);
    ctx->pc = 0x253440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253440u, 0x252A60u, 0x252A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A68u;
label_252a68:
    // 0x252a68: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252A68u;
    {
        const bool branch_taken_0x252a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252a68) {
            ctx->pc = 0x252A8Cu;
            goto label_252a8c;
        }
    }
    ctx->pc = 0x252A70u;
    // 0x252a70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252a74: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252a78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252a7c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252a80: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252a84: 0x10000251  b           . + 4 + (0x251 << 2)
    ctx->pc = 0x252A84u;
    {
        const bool branch_taken_0x252a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252a84) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x252A8Cu;
label_252a8c:
    // 0x252a8c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252a90: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x252a90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x252a94: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252a98: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x252a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x252a9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252a9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252aa0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x252aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252aa4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252aa8: 0x26420190  addiu       $v0, $s2, 0x190
    ctx->pc = 0x252aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
    // 0x252aac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252aacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252ab0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x252ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x252ab4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252ab8: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x252ab8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252abc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x252abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x252ac0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252ac4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x252ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x252ac8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252ac8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252acc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x252accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x252ad0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252ad4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x252ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x252ad8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252ad8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252adc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x252adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x252ae0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252ae4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x252ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x252ae8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252ae8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252aec: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x252aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x252af0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252af0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252af4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x252af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x252af8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x252af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252afc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x252afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x252b00: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x252b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x252b04: 0xc059e1c  jal         func_167870
    ctx->pc = 0x252B04u;
    SET_GPR_U32(ctx, 31, 0x252B0Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x252B04u, 0x252B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B0Cu;
label_252b0c:
    // 0x252b0c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x252b0cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x252b10: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x252B10u;
    {
        const bool branch_taken_0x252b10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x252b10) {
            ctx->pc = 0x252B34u;
            goto label_252b34;
        }
    }
    ctx->pc = 0x252B18u;
    // 0x252b18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252b1c: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252b20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252b24: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252b28: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252b2c: 0x10000227  b           . + 4 + (0x227 << 2)
    ctx->pc = 0x252B2Cu;
    {
        const bool branch_taken_0x252b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252b2c) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x252B34u;
label_252b34:
    // 0x252b34: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x252b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252b38: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x252b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x252b3c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x252b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252b40: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x252b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252b44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252b44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252b48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x252b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252b4c: 0x0  nop
    ctx->pc = 0x252b4cu;
    // NOP
    // 0x252b50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252b54: 0x0  nop
    ctx->pc = 0x252b54u;
    // NOP
    // 0x252b58: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252B58u;
    {
        const bool branch_taken_0x252b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252b58) {
            ctx->pc = 0x252B7Cu;
            goto label_252b7c;
        }
    }
    ctx->pc = 0x252B60u;
    // 0x252b60: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x252b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252b64: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x252b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252b68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252b68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252b6c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252b6cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x252b70: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x252b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x252b74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252B74u;
    {
        const bool branch_taken_0x252b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252b74) {
            ctx->pc = 0x252B8Cu;
            goto label_252b8c;
        }
    }
    ctx->pc = 0x252B7Cu;
label_252b7c:
    // 0x252b7c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x252b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252b80: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x252b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252b84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252b84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252b88: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x252b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_252b8c:
    // 0x252b8c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x252b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252b90: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x252b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x252b94: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x252b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252b98: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x252b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252b9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252b9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252ba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x252ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252ba4: 0x0  nop
    ctx->pc = 0x252ba4u;
    // NOP
    // 0x252ba8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252bac: 0x0  nop
    ctx->pc = 0x252bacu;
    // NOP
    // 0x252bb0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252BB0u;
    {
        const bool branch_taken_0x252bb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252bb0) {
            ctx->pc = 0x252BD4u;
            goto label_252bd4;
        }
    }
    ctx->pc = 0x252BB8u;
    // 0x252bb8: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x252bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252bbc: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x252bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252bc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252bc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252bc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x252bc8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x252bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x252bcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252BCCu;
    {
        const bool branch_taken_0x252bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252bcc) {
            ctx->pc = 0x252BE4u;
            goto label_252be4;
        }
    }
    ctx->pc = 0x252BD4u;
label_252bd4:
    // 0x252bd4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x252bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252bd8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x252bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252bdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252be0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x252be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_252be4:
    // 0x252be4: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x252be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252be8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x252be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x252bec: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x252becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252bf0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x252bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252bf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x252bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x252bf8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x252bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x252bfc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x252bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c00: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252c04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252c08: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x252c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x252c0c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x252c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c10: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x252c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252c14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252c18: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x252c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252c1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252c20: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252c28: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x252c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x252c2c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x252c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c30: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x252c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252c34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252c38: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x252c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x252c3c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x252c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c40: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x252c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252c48: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x252c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c4c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252c4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252c50: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x252c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252c58: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x252c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x252c5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x252c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x252c60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x252c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252c64: 0x0  nop
    ctx->pc = 0x252c64u;
    // NOP
    // 0x252c68: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x252c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x252c6c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x252c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c70: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x252c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252c74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252c78: 0x0  nop
    ctx->pc = 0x252c78u;
    // NOP
    // 0x252c7c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x252C7Cu;
    {
        const bool branch_taken_0x252c7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252c7c) {
            ctx->pc = 0x252C9Cu;
            goto label_252c9c;
        }
    }
    ctx->pc = 0x252C84u;
    // 0x252c84: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x252c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c88: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x252c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252c90: 0x0  nop
    ctx->pc = 0x252c90u;
    // NOP
    // 0x252c94: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252C94u;
    {
        const bool branch_taken_0x252c94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252c94) {
            ctx->pc = 0x252CB8u;
            goto label_252cb8;
        }
    }
    ctx->pc = 0x252C9Cu;
label_252c9c:
    // 0x252c9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252ca0: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252ca4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252ca8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252cac: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252cb0: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x252CB0u;
    {
        const bool branch_taken_0x252cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252cb0) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x252CB8u;
label_252cb8:
    // 0x252cb8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x252cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252cbc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x252cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252cc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252cc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252cc4: 0x0  nop
    ctx->pc = 0x252cc4u;
    // NOP
    // 0x252cc8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x252CC8u;
    {
        const bool branch_taken_0x252cc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252cc8) {
            ctx->pc = 0x252CE8u;
            goto label_252ce8;
        }
    }
    ctx->pc = 0x252CD0u;
    // 0x252cd0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x252cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252cd4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x252cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252cd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252cd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252cdc: 0x0  nop
    ctx->pc = 0x252cdcu;
    // NOP
    // 0x252ce0: 0x45010164  bc1t        . + 4 + (0x164 << 2)
    ctx->pc = 0x252CE0u;
    {
        const bool branch_taken_0x252ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252ce0) {
            ctx->pc = 0x253274u;
            goto label_253274;
        }
    }
    ctx->pc = 0x252CE8u;
label_252ce8:
    // 0x252ce8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252cec: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252cf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252cf4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252cf8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252cfc: 0x100001b3  b           . + 4 + (0x1B3 << 2)
    ctx->pc = 0x252CFCu;
    {
        const bool branch_taken_0x252cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252cfc) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x252D04u;
label_252d04:
    // 0x252d04: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252d08: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x252d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x252d0c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x252d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x252d10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x252d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252d14: 0x146200ac  bne         $v1, $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x252D14u;
    {
        const bool branch_taken_0x252d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252d14) {
            ctx->pc = 0x252FC8u;
            goto label_252fc8;
        }
    }
    ctx->pc = 0x252D1Cu;
    // 0x252d1c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x252d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252d20: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x252d20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x252d24: 0xc094db8  jal         func_2536E0
    ctx->pc = 0x252D24u;
    SET_GPR_U32(ctx, 31, 0x252D2Cu);
    ctx->pc = 0x2536E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536E0u, 0x252D24u, 0x252D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D2Cu;
label_252d2c:
    // 0x252d2c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252D2Cu;
    {
        const bool branch_taken_0x252d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252d2c) {
            ctx->pc = 0x252D50u;
            goto label_252d50;
        }
    }
    ctx->pc = 0x252D34u;
    // 0x252d34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252d38: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252d3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252d40: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252d44: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252d48: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x252D48u;
    {
        const bool branch_taken_0x252d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252d48) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x252D50u;
label_252d50:
    // 0x252d50: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252d54: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x252d54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x252d58: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252d5c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x252d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x252d60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252d60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252d64: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x252d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252d68: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252d68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252d6c: 0x26420190  addiu       $v0, $s2, 0x190
    ctx->pc = 0x252d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
    // 0x252d70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252d70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252d74: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x252d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x252d78: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252d78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252d7c: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x252d7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252d80: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x252d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x252d84: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252d84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252d88: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x252d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x252d8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252d8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252d90: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x252d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x252d94: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252d94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252d98: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x252d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x252d9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252d9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252da0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x252da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x252da4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252da4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252da8: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x252da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x252dac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252dacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252db0: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x252db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x252db4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252db4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252db8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x252db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x252dbc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x252dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252dc0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x252dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x252dc4: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x252dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x252dc8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x252DC8u;
    SET_GPR_U32(ctx, 31, 0x252DD0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x252DC8u, 0x252DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DD0u;
label_252dd0:
    // 0x252dd0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x252dd0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x252dd4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x252DD4u;
    {
        const bool branch_taken_0x252dd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x252dd4) {
            ctx->pc = 0x252DF8u;
            goto label_252df8;
        }
    }
    ctx->pc = 0x252DDCu;
    // 0x252ddc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252de0: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252de4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252de8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252dec: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252df0: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x252DF0u;
    {
        const bool branch_taken_0x252df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252df0) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x252DF8u;
label_252df8:
    // 0x252df8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x252df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252dfc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x252dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x252e00: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x252e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e04: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x252e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252e08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252e0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x252e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252e10: 0x0  nop
    ctx->pc = 0x252e10u;
    // NOP
    // 0x252e14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252e18: 0x0  nop
    ctx->pc = 0x252e18u;
    // NOP
    // 0x252e1c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252E1Cu;
    {
        const bool branch_taken_0x252e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252e1c) {
            ctx->pc = 0x252E40u;
            goto label_252e40;
        }
    }
    ctx->pc = 0x252E24u;
    // 0x252e24: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x252e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e28: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x252e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252e2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252e30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252e30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x252e34: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x252e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x252e38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252E38u;
    {
        const bool branch_taken_0x252e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252e38) {
            ctx->pc = 0x252E50u;
            goto label_252e50;
        }
    }
    ctx->pc = 0x252E40u;
label_252e40:
    // 0x252e40: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x252e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e44: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x252e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252e48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252e4c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x252e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_252e50:
    // 0x252e50: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x252e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e54: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x252e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x252e58: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x252e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e5c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x252e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252e60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x252e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252e68: 0x0  nop
    ctx->pc = 0x252e68u;
    // NOP
    // 0x252e6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252e70: 0x0  nop
    ctx->pc = 0x252e70u;
    // NOP
    // 0x252e74: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252E74u;
    {
        const bool branch_taken_0x252e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252e74) {
            ctx->pc = 0x252E98u;
            goto label_252e98;
        }
    }
    ctx->pc = 0x252E7Cu;
    // 0x252e7c: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x252e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e80: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x252e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252e88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252e88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x252e8c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x252e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x252e90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252E90u;
    {
        const bool branch_taken_0x252e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252e90) {
            ctx->pc = 0x252EA8u;
            goto label_252ea8;
        }
    }
    ctx->pc = 0x252E98u;
label_252e98:
    // 0x252e98: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x252e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e9c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x252e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ea0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252ea4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x252ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_252ea8:
    // 0x252ea8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x252ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252eac: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x252eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x252eb0: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x252eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252eb4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x252eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252eb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x252eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x252ebc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x252ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x252ec0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x252ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252ec4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ec8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252ec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252ecc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x252eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x252ed0: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x252ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252ed4: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x252ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ed8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252edc: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x252edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ee0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252ee0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252ee4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252eec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x252eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x252ef0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x252ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252ef4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x252ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ef8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252ef8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252efc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x252efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x252f00: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x252f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252f04: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x252f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252f0c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x252f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252f10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252f14: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x252f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252f18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252f1c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x252f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x252f20: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x252f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x252f24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x252f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252f28: 0x0  nop
    ctx->pc = 0x252f28u;
    // NOP
    // 0x252f2c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x252f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x252f30: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x252f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252f34: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x252f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252f3c: 0x0  nop
    ctx->pc = 0x252f3cu;
    // NOP
    // 0x252f40: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x252F40u;
    {
        const bool branch_taken_0x252f40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252f40) {
            ctx->pc = 0x252F60u;
            goto label_252f60;
        }
    }
    ctx->pc = 0x252F48u;
    // 0x252f48: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x252f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252f4c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x252f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252f50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252f54: 0x0  nop
    ctx->pc = 0x252f54u;
    // NOP
    // 0x252f58: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x252F58u;
    {
        const bool branch_taken_0x252f58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252f58) {
            ctx->pc = 0x252F7Cu;
            goto label_252f7c;
        }
    }
    ctx->pc = 0x252F60u;
label_252f60:
    // 0x252f60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252f64: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252f68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252f6c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252f70: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252f74: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x252F74u;
    {
        const bool branch_taken_0x252f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252f74) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x252F7Cu;
label_252f7c:
    // 0x252f7c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x252f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252f80: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x252f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252f84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252f88: 0x0  nop
    ctx->pc = 0x252f88u;
    // NOP
    // 0x252f8c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x252F8Cu;
    {
        const bool branch_taken_0x252f8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252f8c) {
            ctx->pc = 0x252FACu;
            goto label_252fac;
        }
    }
    ctx->pc = 0x252F94u;
    // 0x252f94: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x252f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252f98: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x252f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252fa0: 0x0  nop
    ctx->pc = 0x252fa0u;
    // NOP
    // 0x252fa4: 0x450000b3  bc1f        . + 4 + (0xB3 << 2)
    ctx->pc = 0x252FA4u;
    {
        const bool branch_taken_0x252fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252fa4) {
            ctx->pc = 0x253274u;
            goto label_253274;
        }
    }
    ctx->pc = 0x252FACu;
label_252fac:
    // 0x252fac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252fb0: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252fb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252fb8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252fbc: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252fc0: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x252FC0u;
    {
        const bool branch_taken_0x252fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252fc0) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x252FC8u;
label_252fc8:
    // 0x252fc8: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x252fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252fcc: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x252fccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x252fd0: 0xc094d64  jal         func_253590
    ctx->pc = 0x252FD0u;
    SET_GPR_U32(ctx, 31, 0x252FD8u);
    ctx->pc = 0x253590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253590u, 0x252FD0u, 0x252FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252FD8u;
label_252fd8:
    // 0x252fd8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252FD8u;
    {
        const bool branch_taken_0x252fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252fd8) {
            ctx->pc = 0x252FFCu;
            goto label_252ffc;
        }
    }
    ctx->pc = 0x252FE0u;
    // 0x252fe0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252fe4: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252fe8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252fec: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252ff0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252ff4: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x252FF4u;
    {
        const bool branch_taken_0x252ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252ff4) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x252FFCu;
label_252ffc:
    // 0x252ffc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x253000: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x253000u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x253004: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x253004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x253008: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x25300c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25300cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253010: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x253010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253014: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253014u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253018: 0x26420190  addiu       $v0, $s2, 0x190
    ctx->pc = 0x253018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
    // 0x25301c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25301cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253020: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x253020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x253024: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253024u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253028: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x253028u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25302c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x25302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x253030: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253030u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253034: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x253034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x253038: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25303c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x25303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x253040: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253040u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253044: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x253044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x253048: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253048u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25304c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x25304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x253050: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253050u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253054: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x253054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x253058: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253058u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25305c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x25305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x253060: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253060u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253064: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x253064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253068: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x253068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25306c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x25306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x253070: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x253070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x253074: 0xc059e1c  jal         func_167870
    ctx->pc = 0x253074u;
    SET_GPR_U32(ctx, 31, 0x25307Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x253074u, 0x25307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25307Cu;
label_25307c:
    // 0x25307c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x25307cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x253080: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x253080u;
    {
        const bool branch_taken_0x253080 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x253080) {
            ctx->pc = 0x2530A4u;
            goto label_2530a4;
        }
    }
    ctx->pc = 0x253088u;
    // 0x253088: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x253088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25308c: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x25308cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x253090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x253090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253094: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x253094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x253098: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x253098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x25309c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x25309Cu;
    {
        const bool branch_taken_0x25309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25309c) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x2530A4u;
label_2530a4:
    // 0x2530a4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2530a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2530a8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2530a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2530ac: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2530acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2530b0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2530b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2530b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2530b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2530b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2530b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2530bc: 0x0  nop
    ctx->pc = 0x2530bcu;
    // NOP
    // 0x2530c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2530c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2530c4: 0x0  nop
    ctx->pc = 0x2530c4u;
    // NOP
    // 0x2530c8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2530C8u;
    {
        const bool branch_taken_0x2530c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2530c8) {
            ctx->pc = 0x2530ECu;
            goto label_2530ec;
        }
    }
    ctx->pc = 0x2530D0u;
    // 0x2530d0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2530d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2530d4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2530d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2530d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2530d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2530dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2530dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2530e0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2530e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2530e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2530E4u;
    {
        const bool branch_taken_0x2530e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2530e4) {
            ctx->pc = 0x2530FCu;
            goto label_2530fc;
        }
    }
    ctx->pc = 0x2530ECu;
label_2530ec:
    // 0x2530ec: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2530ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2530f0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2530f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2530f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2530f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2530f8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2530f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2530fc:
    // 0x2530fc: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2530fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253100: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x253100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x253104: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x253104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253108: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x253108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25310c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25310cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253114: 0x0  nop
    ctx->pc = 0x253114u;
    // NOP
    // 0x253118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25311c: 0x0  nop
    ctx->pc = 0x25311cu;
    // NOP
    // 0x253120: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x253120u;
    {
        const bool branch_taken_0x253120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253120) {
            ctx->pc = 0x253144u;
            goto label_253144;
        }
    }
    ctx->pc = 0x253128u;
    // 0x253128: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x253128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25312c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x25312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253130: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x253130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253134: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x253134u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x253138: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x253138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x25313c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25313Cu;
    {
        const bool branch_taken_0x25313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25313c) {
            ctx->pc = 0x253154u;
            goto label_253154;
        }
    }
    ctx->pc = 0x253144u;
label_253144:
    // 0x253144: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x253144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253148: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x253148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25314c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25314cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253150: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x253150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_253154:
    // 0x253154: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x253154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253158: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x253158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x25315c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x25315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253160: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x253160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253164: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x253164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x253168: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x253168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x25316c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x25316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253170: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x253170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253174: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x253174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253178: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x253178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x25317c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x25317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253180: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x253180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253184: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253188: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x253188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25318c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x25318cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x253190: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x253190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253194: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253198: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x253198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25319c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x25319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2531a0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2531a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2531a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2531a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2531a8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2531a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2531ac: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x2531acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2531b0: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x2531b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2531b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2531b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2531b8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2531b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2531bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2531bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2531c0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2531c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2531c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2531c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2531c8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2531c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2531cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2531ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2531d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2531d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2531d4: 0x0  nop
    ctx->pc = 0x2531d4u;
    // NOP
    // 0x2531d8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2531d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2531dc: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2531dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2531e0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2531e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2531e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2531e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2531e8: 0x0  nop
    ctx->pc = 0x2531e8u;
    // NOP
    // 0x2531ec: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2531ECu;
    {
        const bool branch_taken_0x2531ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2531ec) {
            ctx->pc = 0x25320Cu;
            goto label_25320c;
        }
    }
    ctx->pc = 0x2531F4u;
    // 0x2531f4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2531f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2531f8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2531f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2531fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2531fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253200: 0x0  nop
    ctx->pc = 0x253200u;
    // NOP
    // 0x253204: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x253204u;
    {
        const bool branch_taken_0x253204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253204) {
            ctx->pc = 0x253228u;
            goto label_253228;
        }
    }
    ctx->pc = 0x25320Cu;
label_25320c:
    // 0x25320c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25320cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x253210: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x253210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x253214: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x253214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253218: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x253218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25321c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x25321cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x253220: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x253220u;
    {
        const bool branch_taken_0x253220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253220) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x253228u;
label_253228:
    // 0x253228: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x253228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25322c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x25322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253234: 0x0  nop
    ctx->pc = 0x253234u;
    // NOP
    // 0x253238: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x253238u;
    {
        const bool branch_taken_0x253238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253238) {
            ctx->pc = 0x253258u;
            goto label_253258;
        }
    }
    ctx->pc = 0x253240u;
    // 0x253240: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x253240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253244: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x253244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253248: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x253248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25324c: 0x0  nop
    ctx->pc = 0x25324cu;
    // NOP
    // 0x253250: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x253250u;
    {
        const bool branch_taken_0x253250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253250) {
            ctx->pc = 0x253274u;
            goto label_253274;
        }
    }
    ctx->pc = 0x253258u;
label_253258:
    // 0x253258: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x253258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25325c: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x25325cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x253260: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x253260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253264: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x253264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x253268: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x253268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x25326c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x25326Cu;
    {
        const bool branch_taken_0x25326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25326c) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x253274u;
label_253274:
    // 0x253274: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x253274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253278: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x253278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x25327c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x25327cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x253280: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x253280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253284: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x253284u;
    SET_GPR_U32(ctx, 31, 0x25328Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x25328Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25328Cu) { return; }
    ctx->pc = 0x25328Cu;
label_25328c:
    // 0x25328c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x25328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253290: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x253290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x253294: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x253294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x253298: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25329c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x25329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2532a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2532a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2532a4: 0x0  nop
    ctx->pc = 0x2532a4u;
    // NOP
    // 0x2532a8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2532A8u;
    {
        const bool branch_taken_0x2532a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2532a8) {
            ctx->pc = 0x2532CCu;
            goto label_2532cc;
        }
    }
    ctx->pc = 0x2532B0u;
    // 0x2532b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2532b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2532b4: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x2532b4u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2532b8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2532b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2532bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2532bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2532c0: 0x0  nop
    ctx->pc = 0x2532c0u;
    // NOP
    // 0x2532c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2532C4u;
    {
        const bool branch_taken_0x2532c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2532c4) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x2532CCu;
label_2532cc:
    // 0x2532cc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2532ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2532d0:
    // 0x2532d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2532d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2532d4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2532d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2532d8: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x2532d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2532dc: 0xc040c60  jal         func_103180
    ctx->pc = 0x2532DCu;
    SET_GPR_U32(ctx, 31, 0x2532E4u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x2532E4u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2532E4u) { return; }
    ctx->pc = 0x2532E4u;
label_2532e4:
    // 0x2532e4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2532e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2532e8: 0x3c0344c7  lui         $v1, 0x44C7
    ctx->pc = 0x2532e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17607 << 16));
    // 0x2532ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2532ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2532f0: 0x0  nop
    ctx->pc = 0x2532f0u;
    // NOP
    // 0x2532f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2532f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2532f8: 0x0  nop
    ctx->pc = 0x2532f8u;
    // NOP
    // 0x2532fc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2532FCu;
    {
        const bool branch_taken_0x2532fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2532fc) {
            ctx->pc = 0x253328u;
            goto label_253328;
        }
    }
    ctx->pc = 0x253304u;
    // 0x253304: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x253304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253308: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x253308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x25330c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x25330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x253310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253314: 0x0  nop
    ctx->pc = 0x253314u;
    // NOP
    // 0x253318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25331c: 0x0  nop
    ctx->pc = 0x25331cu;
    // NOP
    // 0x253320: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x253320u;
    {
        const bool branch_taken_0x253320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253320) {
            ctx->pc = 0x25332Cu;
            goto label_25332c;
        }
    }
    ctx->pc = 0x253328u;
label_253328:
    // 0x253328: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x253328u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25332c:
    // 0x25332c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x25332cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253330: 0x3c0344d9  lui         $v1, 0x44D9
    ctx->pc = 0x253330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17625 << 16));
    // 0x253334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253338: 0x0  nop
    ctx->pc = 0x253338u;
    // NOP
    // 0x25333c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25333cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253340: 0x0  nop
    ctx->pc = 0x253340u;
    // NOP
    // 0x253344: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x253344u;
    {
        const bool branch_taken_0x253344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253344) {
            ctx->pc = 0x253370u;
            goto label_253370;
        }
    }
    ctx->pc = 0x25334Cu;
    // 0x25334c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x25334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253350: 0x3c034513  lui         $v1, 0x4513
    ctx->pc = 0x253350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17683 << 16));
    // 0x253354: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x253354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x253358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25335c: 0x0  nop
    ctx->pc = 0x25335cu;
    // NOP
    // 0x253360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253364: 0x0  nop
    ctx->pc = 0x253364u;
    // NOP
    // 0x253368: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x253368u;
    {
        const bool branch_taken_0x253368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253368) {
            ctx->pc = 0x253374u;
            goto label_253374;
        }
    }
    ctx->pc = 0x253370u;
label_253370:
    // 0x253370: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x253370u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253374:
    // 0x253374: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x253374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x253378: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x253378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x25337c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25337cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253380: 0x0  nop
    ctx->pc = 0x253380u;
    // NOP
    // 0x253384: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x253384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x253388: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x253388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25338c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25338cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253390: 0x0  nop
    ctx->pc = 0x253390u;
    // NOP
    // 0x253394: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x253394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x253398: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x253398u;
    {
        const bool branch_taken_0x253398 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x253398) {
            ctx->pc = 0x2533BCu;
            goto label_2533bc;
        }
    }
    ctx->pc = 0x2533A0u;
    // 0x2533a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2533a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2533a4: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x2533a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x2533a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2533a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2533ac: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2533acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2533b0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2533b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2533b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2533B4u;
    {
        const bool branch_taken_0x2533b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2533b4) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x2533BCu;
label_2533bc:
    // 0x2533bc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2533bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2533c0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2533c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2533c4: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x2533c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2533c8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2533c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2533cc:
    // 0x2533cc: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2533ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2533d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2533d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2533d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2533d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2533d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2533d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2533dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2533dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2533e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2533e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2533e4: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x2533e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2533e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2533E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2533E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2533F0u;
}
