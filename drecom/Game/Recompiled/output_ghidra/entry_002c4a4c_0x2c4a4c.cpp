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

// Function: entry_002c4a4c
// Address: 0x2c4a4c - 0x2c4c3c
void entry_002c4a4c_0x2c4a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c4a4c_0x2c4a4c");
#endif

    switch (ctx->pc) {
        case 0x2c4a58u: goto label_2c4a58;
        case 0x2c4a64u: goto label_2c4a64;
        case 0x2c4a78u: goto label_2c4a78;
        case 0x2c4aa0u: goto label_2c4aa0;
        case 0x2c4b08u: goto label_2c4b08;
        case 0x2c4b58u: goto label_2c4b58;
        case 0x2c4be4u: goto label_2c4be4;
        case 0x2c4c10u: goto label_2c4c10;
        default: break;
    }

    ctx->pc = 0x2c4a4cu;

    // 0x2c4a4c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2c4a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4a50: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2C4A50u;
    SET_GPR_U32(ctx, 31, 0x2C4A58u);
    ctx->pc = 0x2CDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDE70u, 0x2C4A50u, 0x2C4A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A58u;
label_2c4a58:
    // 0x2c4a58: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2c4a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4a5c: 0xc0b37f0  jal         func_2CDFC0
    ctx->pc = 0x2C4A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C4A64u);
    ctx->pc = 0x2CDFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDFC0u, 0x2C4A5Cu, 0x2C4A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A64u;
label_2c4a64:
    // 0x2c4a64: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4a68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4a6c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x2c4a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4a70: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2C4A70u;
    SET_GPR_U32(ctx, 31, 0x2C4A78u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C4A70u, 0x2C4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A78u;
label_2c4a78:
    // 0x2c4a78: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x2c4a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2c4a7c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c4a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c4a80: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2c4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2c4a84: 0x34630307  ori         $v1, $v1, 0x307
    ctx->pc = 0x2c4a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)775);
    // 0x2c4a88: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2c4a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c4a8c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2c4a90: 0x246518d0  addiu       $a1, $v1, 0x18D0
    ctx->pc = 0x2c4a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6352));
    // 0x2c4a94: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2c4a94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c4a98: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2C4A98u;
    SET_GPR_U32(ctx, 31, 0x2C4AA0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2C4A98u, 0x2C4AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4AA0u;
label_2c4aa0:
    // 0x2c4aa0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4aa4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2c4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2c4aa8: 0x29840  sll         $s3, $v0, 1
    ctx->pc = 0x2c4aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c4aac: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2c4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2c4ab0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4ab4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2c4ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4ab8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c4abc: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2c4abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x2c4ac0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4ac4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2c4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2c4ac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4acc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2c4accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4ad0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c4ad4: 0x8c520234  lw          $s2, 0x234($v0)
    ctx->pc = 0x2c4ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x2c4ad8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4adc: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2c4adcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2c4ae0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c4ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4ae8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2c4ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4aec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4af0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c4af4: 0x2442021c  addiu       $v0, $v0, 0x21C
    ctx->pc = 0x2c4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x2c4af8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c4af8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c4afc: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x2c4afcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2c4b00: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x2C4B00u;
    SET_GPR_U32(ctx, 31, 0x2C4B08u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2C4B00u, 0x2C4B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B08u;
label_2c4b08:
    // 0x2c4b08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4b0c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2c4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2c4b10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c4b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4b14: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4b18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4b1c: 0x8c500244  lw          $s0, 0x244($v0)
    ctx->pc = 0x2c4b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x2c4b20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4b24: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2c4b24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2c4b28: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c4b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4b30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4b34: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4b3c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c4b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c4b40: 0x2442021c  addiu       $v0, $v0, 0x21C
    ctx->pc = 0x2c4b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x2c4b44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c4b44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c4b48: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2c4b48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2c4b4c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2c4b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c4b50: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2C4B50u;
    SET_GPR_U32(ctx, 31, 0x2C4B58u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2C4B50u, 0x2C4B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B58u;
label_2c4b58:
    // 0x2c4b58: 0x26260070  addiu       $a2, $s1, 0x70
    ctx->pc = 0x2c4b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2c4b5c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2c4b5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c4b60: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2c4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c4b64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2c4b64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2c4b68: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x2c4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2c4b6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c4b6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4b70: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2c4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c4b74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2c4b74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2c4b78: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2c4b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4b7c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2c4b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2c4b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4b84: 0x0  nop
    ctx->pc = 0x2c4b84u;
    // NOP
    // 0x2c4b88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c4b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c4b8c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2c4b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2c4b90: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2c4b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4b94: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c4b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2c4b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4b9c: 0x0  nop
    ctx->pc = 0x2c4b9cu;
    // NOP
    // 0x2c4ba0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c4ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c4ba4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2c4ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2c4ba8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4bac: 0x8c500244  lw          $s0, 0x244($v0)
    ctx->pc = 0x2c4bacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x2c4bb0: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x2c4bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4bb4: 0x8cc30244  lw          $v1, 0x244($a2)
    ctx->pc = 0x2c4bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 580)));
    // 0x2c4bb8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4bbc: 0x8c420248  lw          $v0, 0x248($v0)
    ctx->pc = 0x2c4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x2c4bc0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2c4bc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2c4bc4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2c4bc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c4bc8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2c4bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c4bcc: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2c4bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c4bd0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2c4bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c4bd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4bd8: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x2c4bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2c4bdc: 0xc074efc  jal         func_1D3BF0
    ctx->pc = 0x2C4BDCu;
    SET_GPR_U32(ctx, 31, 0x2C4BE4u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x2C4BDCu, 0x2C4BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BE4u;
label_2c4be4:
    // 0x2c4be4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4be8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2c4be8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2c4bec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c4becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c4bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4bf4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c4bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4bf8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4bfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4c00: 0x2442021c  addiu       $v0, $v0, 0x21C
    ctx->pc = 0x2c4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x2c4c04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c4c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c4c08: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x2C4C08u;
    SET_GPR_U32(ctx, 31, 0x2C4C10u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x2C4C08u, 0x2C4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C10u;
label_2c4c10:
    // 0x2c4c10: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2c4c10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c4c14: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c4c14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4c18: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c4c18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4c1c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c4c1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4c20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c4c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4c24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c4c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4c28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c4c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4c2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c4c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4c30: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2c4c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c4c34: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4C3Cu;
}
