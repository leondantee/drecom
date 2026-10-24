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

// Function: Shw_trans_tag
// Address: 0x1e5aa0 - 0x1e63ac
void Shw_trans_tag_0x1e5aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shw_trans_tag_0x1e5aa0");
#endif

    switch (ctx->pc) {
        case 0x1e5b30u: goto label_1e5b30;
        case 0x1e5b44u: goto label_1e5b44;
        case 0x1e5b6cu: goto label_1e5b6c;
        case 0x1e5b7cu: goto label_1e5b7c;
        case 0x1e5b94u: goto label_1e5b94;
        case 0x1e5bb0u: goto label_1e5bb0;
        case 0x1e5bccu: goto label_1e5bcc;
        case 0x1e5bf0u: goto label_1e5bf0;
        case 0x1e5c0cu: goto label_1e5c0c;
        case 0x1e5c50u: goto label_1e5c50;
        case 0x1e5c64u: goto label_1e5c64;
        case 0x1e5cb0u: goto label_1e5cb0;
        case 0x1e5ce4u: goto label_1e5ce4;
        case 0x1e5d64u: goto label_1e5d64;
        case 0x1e5dd0u: goto label_1e5dd0;
        default: break;
    }

    ctx->pc = 0x1e5aa0u;

    // 0x1e5aa0: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x1e5aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
    // 0x1e5aa4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1e5aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1e5aa8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e5aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e5aac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e5aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e5ab0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e5ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e5ab4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e5ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e5ab8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e5ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e5abc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e5abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e5ac0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e5ac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5acc: 0xafa40350  sw          $a0, 0x350($sp)
    ctx->pc = 0x1e5accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 4));
    // 0x1e5ad0: 0xafa50358  sw          $a1, 0x358($sp)
    ctx->pc = 0x1e5ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 856), GPR_U32(ctx, 5));
    // 0x1e5ad4: 0xafa60360  sw          $a2, 0x360($sp)
    ctx->pc = 0x1e5ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 6));
    // 0x1e5ad8: 0xafa70368  sw          $a3, 0x368($sp)
    ctx->pc = 0x1e5ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 872), GPR_U32(ctx, 7));
    // 0x1e5adc: 0xafa80370  sw          $t0, 0x370($sp)
    ctx->pc = 0x1e5adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 8));
    // 0x1e5ae0: 0xe7ac0378  swc1        $f12, 0x378($sp)
    ctx->pc = 0x1e5ae0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
    // 0x1e5ae4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5ae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5ae8: 0x0  nop
    ctx->pc = 0x1e5ae8u;
    // NOP
    // 0x1e5aec: 0xe7a0034c  swc1        $f0, 0x34C($sp)
    ctx->pc = 0x1e5aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 844), bits); }
    // 0x1e5af0: 0x8fa30358  lw          $v1, 0x358($sp)
    ctx->pc = 0x1e5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x1e5af4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e5af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5af8: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e5af8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e5afc: 0x8fb00360  lw          $s0, 0x360($sp)
    ctx->pc = 0x1e5afcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1e5b00: 0x7200be28  paddub      $s7, $s0, $zero
    ctx->pc = 0x1e5b00u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e5b04: 0x8fa30368  lw          $v1, 0x368($sp)
    ctx->pc = 0x1e5b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x1e5b08: 0xafa30348  sw          $v1, 0x348($sp)
    ctx->pc = 0x1e5b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 3));
    // 0x1e5b0c: 0x8fa30368  lw          $v1, 0x368($sp)
    ctx->pc = 0x1e5b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x1e5b10: 0x24700060  addiu       $s0, $v1, 0x60
    ctx->pc = 0x1e5b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1e5b14: 0xafb00368  sw          $s0, 0x368($sp)
    ctx->pc = 0x1e5b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 872), GPR_U32(ctx, 16));
    // 0x1e5b18: 0x8fb30350  lw          $s3, 0x350($sp)
    ctx->pc = 0x1e5b18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1e5b1c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e5b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e5b20: 0x26650120  addiu       $a1, $s3, 0x120
    ctx->pc = 0x1e5b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x1e5b24: 0x8fa60370  lw          $a2, 0x370($sp)
    ctx->pc = 0x1e5b24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1e5b28: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E5B28u;
    SET_GPR_U32(ctx, 31, 0x1E5B30u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E5B30u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E5B30u) { return; }
    ctx->pc = 0x1E5B30u;
label_1e5b30:
    // 0x1e5b30: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e5b30u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5b34: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e5b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e5b38: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e5b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e5b3c: 0xc040c24  jal         func_103090
    ctx->pc = 0x1E5B3Cu;
    SET_GPR_U32(ctx, 31, 0x1E5B44u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1E5B44u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E5B44u) { return; }
    ctx->pc = 0x1E5B44u;
label_1e5b44:
    // 0x1e5b44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e5b44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5b48: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5b4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e5b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5b50: 0x0  nop
    ctx->pc = 0x1e5b50u;
    // NOP
    // 0x1e5b54: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1e5b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1e5b58: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e5b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e5b5c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1e5b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e5b60: 0xc7ac0378  lwc1        $f12, 0x378($sp)
    ctx->pc = 0x1e5b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e5b64: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x1E5B64u;
    SET_GPR_U32(ctx, 31, 0x1E5B6Cu);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x1E5B64u, 0x1E5B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5B6Cu;
label_1e5b6c:
    // 0x1e5b6c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e5b6cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5b70: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e5b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e5b74: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E5B74u;
    SET_GPR_U32(ctx, 31, 0x1E5B7Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E5B7Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E5B7Cu) { return; }
    ctx->pc = 0x1E5B7Cu;
label_1e5b7c:
    // 0x1e5b7c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1e5b7cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5b80: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e5b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e5b84: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e5b88: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e5b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e5b8c: 0xc040c92  jal         func_103248
    ctx->pc = 0x1E5B8Cu;
    SET_GPR_U32(ctx, 31, 0x1E5B94u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x1E5B94u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E5B94u) { return; }
    ctx->pc = 0x1E5B94u;
label_1e5b94:
    // 0x1e5b94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e5b94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5b98: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e5b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e5b9c: 0x3c160062  lui         $s6, 0x62
    ctx->pc = 0x1e5b9cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
    // 0x1e5ba0: 0x26c5e510  addiu       $a1, $s6, -0x1AF0
    ctx->pc = 0x1e5ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960400));
    // 0x1e5ba4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e5ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e5ba8: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E5BA8u;
    SET_GPR_U32(ctx, 31, 0x1E5BB0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E5BB0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E5BB0u) { return; }
    ctx->pc = 0x1E5BB0u;
label_1e5bb0:
    // 0x1e5bb0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e5bb0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5bb4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e5bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e5bb8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1e5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1e5bbc: 0x2465e550  addiu       $a1, $v1, -0x1AB0
    ctx->pc = 0x1e5bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960464));
    // 0x1e5bc0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e5bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e5bc4: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E5BC4u;
    SET_GPR_U32(ctx, 31, 0x1E5BCCu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E5BCCu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E5BCCu) { return; }
    ctx->pc = 0x1E5BCCu;
label_1e5bcc:
    // 0x1e5bcc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e5bccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5bd0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1e5bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1e5bd4: 0x2464e510  addiu       $a0, $v1, -0x1AF0
    ctx->pc = 0x1e5bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960400));
    // 0x1e5bd8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e5bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e5bdc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1e5bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1e5be0: 0x2466e550  addiu       $a2, $v1, -0x1AB0
    ctx->pc = 0x1e5be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960464));
    // 0x1e5be4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1e5be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e5be8: 0xc07961c  jal         func_1E5870
    ctx->pc = 0x1E5BE8u;
    SET_GPR_U32(ctx, 31, 0x1E5BF0u);
    ctx->pc = 0x1E5870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5870u, 0x1E5BE8u, 0x1E5BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5BF0u;
label_1e5bf0:
    // 0x1e5bf0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e5bf0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5bf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5bf8: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e5bf8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e5bfc: 0x8fb00358  lw          $s0, 0x358($sp)
    ctx->pc = 0x1e5bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x1e5c00: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1e5c00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e5c04: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5c08: 0xafa30340  sw          $v1, 0x340($sp)
    ctx->pc = 0x1e5c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 3));
label_1e5c0c:
    // 0x1e5c0c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1e5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e5c10: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e5c10u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e5c14: 0x96300000  lhu         $s0, 0x0($s1)
    ctx->pc = 0x1e5c14u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5c18: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1e5c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1e5c1c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5c20: 0x2e32821  addu        $a1, $s7, $v1
    ctx->pc = 0x1e5c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1e5c24: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e5c24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e5c28: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5c2c: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x1e5c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5c30: 0x2f03021  addu        $a2, $s7, $s0
    ctx->pc = 0x1e5c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x1e5c34: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1e5c34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e5c38: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e5c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5c3c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1e5c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1e5c40: 0x2e33821  addu        $a3, $s7, $v1
    ctx->pc = 0x1e5c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1e5c44: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1e5c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e5c48: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x1E5C48u;
    SET_GPR_U32(ctx, 31, 0x1E5C50u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x1E5C48u, 0x1E5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C50u;
label_1e5c50:
    // 0x1e5c50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e5c50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5c54: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e5c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e5c58: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1e5c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e5c5c: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1E5C5Cu;
    SET_GPR_U32(ctx, 31, 0x1E5C64u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x1E5C64u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E5C64u) { return; }
    ctx->pc = 0x1E5C64u;
label_1e5c64:
    // 0x1e5c64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e5c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5c68: 0x0  nop
    ctx->pc = 0x1e5c68u;
    // NOP
    // 0x1e5c6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e5c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5c70: 0x0  nop
    ctx->pc = 0x1e5c70u;
    // NOP
    // 0x1e5c74: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5C74u;
    {
        const bool branch_taken_0x1e5c74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5c74) {
            ctx->pc = 0x1E5C90u;
            goto label_1e5c90;
        }
    }
    ctx->pc = 0x1E5C7Cu;
    // 0x1e5c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5c80: 0x27d9021  addu        $s2, $s3, $sp
    ctx->pc = 0x1e5c80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e5c84: 0xa24301b0  sb          $v1, 0x1B0($s2)
    ctx->pc = 0x1e5c84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 432), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e5c88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5C88u;
    {
        const bool branch_taken_0x1e5c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c88) {
            ctx->pc = 0x1E5CA8u;
            goto label_1e5ca8;
        }
    }
    ctx->pc = 0x1E5C90u;
label_1e5c90:
    // 0x1e5c90: 0x27d2021  addu        $a0, $s3, $sp
    ctx->pc = 0x1e5c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e5c94: 0xa08001b0  sb          $zero, 0x1B0($a0)
    ctx->pc = 0x1e5c94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 432), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e5c98: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e5c9c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e5c9cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e5ca0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E5CA0u;
    {
        const bool branch_taken_0x1e5ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5ca0) {
            ctx->pc = 0x1E5D18u;
            goto label_1e5d18;
        }
    }
    ctx->pc = 0x1E5CA8u;
label_1e5ca8:
    // 0x1e5ca8: 0xc079630  jal         func_1E58C0
    ctx->pc = 0x1E5CA8u;
    SET_GPR_U32(ctx, 31, 0x1E5CB0u);
    ctx->pc = 0x1E58C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E58C0u, 0x1E5CA8u, 0x1E5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CB0u;
label_1e5cb0:
    // 0x1e5cb0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1e5cb0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5cb4: 0x14f3bc  dsll32      $fp, $s4, 14
    ctx->pc = 0x1e5cb4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) << (32 + 14));
    // 0x1e5cb8: 0x1ef3be  dsrl32      $fp, $fp, 14
    ctx->pc = 0x1e5cb8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) >> (32 + 14));
    // 0x1e5cbc: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5CBCu;
    {
        const bool branch_taken_0x1e5cbc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5cbc) {
            ctx->pc = 0x1E5CDCu;
            goto label_1e5cdc;
        }
    }
    ctx->pc = 0x1E5CC4u;
    // 0x1e5cc4: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e5cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e5cc8: 0xa06001b0  sb          $zero, 0x1B0($v1)
    ctx->pc = 0x1e5cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 432), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e5ccc: 0x26350010  addiu       $s5, $s1, 0x10
    ctx->pc = 0x1e5cccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e5cd0: 0x72a08e28  paddub      $s1, $s5, $zero
    ctx->pc = 0x1e5cd0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1e5cd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E5CD4u;
    {
        const bool branch_taken_0x1e5cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5cd4) {
            ctx->pc = 0x1E5D18u;
            goto label_1e5d18;
        }
    }
    ctx->pc = 0x1E5CDCu;
label_1e5cdc:
    // 0x1e5cdc: 0xc079648  jal         func_1E5920
    ctx->pc = 0x1E5CDCu;
    SET_GPR_U32(ctx, 31, 0x1E5CE4u);
    ctx->pc = 0x1E5920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5920u, 0x1E5CDCu, 0x1E5CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CE4u;
label_1e5ce4:
    // 0x1e5ce4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e5ce4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5ce8: 0x3f3bc  dsll32      $fp, $v1, 14
    ctx->pc = 0x1e5ce8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << (32 + 14));
    // 0x1e5cec: 0x1ef3be  dsrl32      $fp, $fp, 14
    ctx->pc = 0x1e5cecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) >> (32 + 14));
    // 0x1e5cf0: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5CF0u;
    {
        const bool branch_taken_0x1e5cf0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5cf0) {
            ctx->pc = 0x1E5D10u;
            goto label_1e5d10;
        }
    }
    ctx->pc = 0x1E5CF8u;
    // 0x1e5cf8: 0x27db021  addu        $s6, $s3, $sp
    ctx->pc = 0x1e5cf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e5cfc: 0xa2c001b0  sb          $zero, 0x1B0($s6)
    ctx->pc = 0x1e5cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 432), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e5d00: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e5d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e5d04: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x1e5d04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e5d08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5D08u;
    {
        const bool branch_taken_0x1e5d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d08) {
            ctx->pc = 0x1E5D18u;
            goto label_1e5d18;
        }
    }
    ctx->pc = 0x1E5D10u;
label_1e5d10:
    // 0x1e5d10: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e5d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e5d14: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e5d14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e5d18:
    // 0x1e5d18: 0x8fb20340  lw          $s2, 0x340($sp)
    ctx->pc = 0x1e5d18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1e5d1c: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1e5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e5d20: 0xafa30340  sw          $v1, 0x340($sp)
    ctx->pc = 0x1e5d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 3));
    // 0x1e5d24: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1E5D24u;
    {
        const bool branch_taken_0x1e5d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d24) {
            ctx->pc = 0x1E5C0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5c0c;
        }
    }
    ctx->pc = 0x1E5D2Cu;
    // 0x1e5d2c: 0x8fa40368  lw          $a0, 0x368($sp)
    ctx->pc = 0x1e5d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x1e5d30: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e5d30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e5d34: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e5d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5d38: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e5d38u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e5d3c: 0x8fa30358  lw          $v1, 0x358($sp)
    ctx->pc = 0x1e5d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x1e5d40: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e5d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5d44: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e5d44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e5d48: 0x8fa40358  lw          $a0, 0x358($sp)
    ctx->pc = 0x1e5d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x1e5d4c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x1e5d4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1e5d50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5d54: 0xafa30340  sw          $v1, 0x340($sp)
    ctx->pc = 0x1e5d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 3));
    // 0x1e5d58: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e5d58u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e5d5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5d60: 0xafa30344  sw          $v1, 0x344($sp)
    ctx->pc = 0x1e5d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 3));
label_1e5d64:
    // 0x1e5d64: 0x8fa30344  lw          $v1, 0x344($sp)
    ctx->pc = 0x1e5d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
    // 0x1e5d68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5d6c: 0xafa30344  sw          $v1, 0x344($sp)
    ctx->pc = 0x1e5d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 3));
    // 0x1e5d70: 0x8fa30344  lw          $v1, 0x344($sp)
    ctx->pc = 0x1e5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
    // 0x1e5d74: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1e5d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e5d78: 0x906301b0  lbu         $v1, 0x1B0($v1)
    ctx->pc = 0x1e5d78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1e5d7c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5D7Cu;
    {
        const bool branch_taken_0x1e5d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d7c) {
            ctx->pc = 0x1E5D94u;
            goto label_1e5d94;
        }
    }
    ctx->pc = 0x1E5D84u;
    // 0x1e5d84: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e5d88: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e5d88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e5d8c: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x1E5D8Cu;
    {
        const bool branch_taken_0x1e5d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d8c) {
            ctx->pc = 0x1E62D0u;
            goto label_1e62d0;
        }
    }
    ctx->pc = 0x1E5D94u;
label_1e5d94:
    // 0x1e5d94: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e5d94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5d98: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5d9c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e5d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5da0: 0x2e32821  addu        $a1, $s7, $v1
    ctx->pc = 0x1e5da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1e5da4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e5da4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e5da8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5dac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5db0: 0x2e33021  addu        $a2, $s7, $v1
    ctx->pc = 0x1e5db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1e5db4: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1e5db4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e5db8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5dbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5dc0: 0x2e33821  addu        $a3, $s7, $v1
    ctx->pc = 0x1e5dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1e5dc4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e5dc8: 0xc079668  jal         func_1E59A0
    ctx->pc = 0x1E5DC8u;
    SET_GPR_U32(ctx, 31, 0x1E5DD0u);
    ctx->pc = 0x1E59A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E59A0u, 0x1E5DC8u, 0x1E5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DD0u;
label_1e5dd0:
    // 0x1e5dd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e5dd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5dd4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1e5dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e5dd8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1e5dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e5ddc: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e5ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5de0: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x1e5de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x1e5de4: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1e5de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1e5de8: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x1e5de8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5dec: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1e5decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e5df0: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1e5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e5df4: 0x83a823  subu        $s5, $a0, $v1
    ctx->pc = 0x1e5df4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5df8: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x1e5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e5dfc: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1e5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1e5e00: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1e5e00u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5e04: 0x2952018  mult        $a0, $s4, $s5
    ctx->pc = 0x1e5e04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e5e08: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x1e5e08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e5e0c: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e5e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5e10: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5E10u;
    {
        const bool branch_taken_0x1e5e10 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1e5e10) {
            ctx->pc = 0x1E5E34u;
            goto label_1e5e34;
        }
    }
    ctx->pc = 0x1E5E18u;
    // 0x1e5e18: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e5e1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e5e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e5e20: 0x240400a1  addiu       $a0, $zero, 0xA1
    ctx->pc = 0x1e5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e5e24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e5e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e5e28: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e5e28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e5e2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5E2Cu;
    {
        const bool branch_taken_0x1e5e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e2c) {
            ctx->pc = 0x1E5E48u;
            goto label_1e5e48;
        }
    }
    ctx->pc = 0x1E5E34u;
label_1e5e34:
    // 0x1e5e34: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e5e38: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e5e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e5e3c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1e5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e5e40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e5e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e5e44: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e5e44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
label_1e5e48:
    // 0x1e5e48: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e5e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e5e4c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e5e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e5e50: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5e54: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x1e5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e5e58: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5e58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5e5c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5e60: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e5e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5e64: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e5e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e5e68: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5e6c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x1e5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e5e70: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5e70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5e74: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5e74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5e78: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e5e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5e7c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e5e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e5e80: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5e84: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1e5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e5e88: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5e88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5e8c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5e90: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5e94: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1e5e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e5e98: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5e98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5e9c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5ea0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5ea4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e5ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e5ea8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x1e5ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1e5eac: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1e5eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1e5eb0: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e5eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5eb4: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1e5eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1e5eb8: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x1e5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1e5ebc: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x1e5ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5ec0: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1e5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e5ec4: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1e5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1e5ec8: 0x83a823  subu        $s5, $a0, $v1
    ctx->pc = 0x1e5ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5ecc: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x1e5eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1e5ed0: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x1e5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1e5ed4: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1e5ed4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5ed8: 0x2952018  mult        $a0, $s4, $s5
    ctx->pc = 0x1e5ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e5edc: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x1e5edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e5ee0: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e5ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5ee4: 0x6410008  bgez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5EE4u;
    {
        const bool branch_taken_0x1e5ee4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1e5ee4) {
            ctx->pc = 0x1E5F08u;
            goto label_1e5f08;
        }
    }
    ctx->pc = 0x1E5EECu;
    // 0x1e5eec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e5eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e5ef0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e5ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e5ef4: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x1e5ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e5ef8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e5ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e5efc: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e5efcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e5f00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5F00u;
    {
        const bool branch_taken_0x1e5f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5f00) {
            ctx->pc = 0x1E5F20u;
            goto label_1e5f20;
        }
    }
    ctx->pc = 0x1E5F08u;
label_1e5f08:
    // 0x1e5f08: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e5f0c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e5f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e5f10: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1e5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e5f14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e5f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e5f18: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e5f18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e5f1c: 0x0  nop
    ctx->pc = 0x1e5f1cu;
    // NOP
label_1e5f20:
    // 0x1e5f20: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e5f24: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e5f24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e5f28: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5f2c: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x1e5f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e5f30: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5f30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5f34: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5f34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5f38: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e5f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5f3c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e5f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e5f40: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5f44: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1e5f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1e5f48: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5f48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5f4c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5f50: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e5f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5f54: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e5f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e5f58: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5f5c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1e5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e5f60: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5f60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5f64: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5f64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5f68: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5f6c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1e5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e5f70: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5f70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5f74: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5f74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5f78: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5f7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e5f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e5f80: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1e5f80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5f84: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e5f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5f88: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e5f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e5f8c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5F8Cu;
    {
        const bool branch_taken_0x1e5f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e5f8c) {
            ctx->pc = 0x1E5FB0u;
            goto label_1e5fb0;
        }
    }
    ctx->pc = 0x1E5F94u;
    // 0x1e5f94: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1e5f94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5f98: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5f9c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1e5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e5fa0: 0x906301b0  lbu         $v1, 0x1B0($v1)
    ctx->pc = 0x1e5fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1e5fa4: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1E5FA4u;
    {
        const bool branch_taken_0x1e5fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5fa4) {
            ctx->pc = 0x1E6088u;
            goto label_1e6088;
        }
    }
    ctx->pc = 0x1E5FACu;
    // 0x1e5fac: 0x0  nop
    ctx->pc = 0x1e5facu;
    // NOP
label_1e5fb0:
    // 0x1e5fb0: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1e5fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e5fb4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1e5fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e5fb8: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e5fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5fbc: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x1e5fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x1e5fc0: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1e5fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1e5fc4: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x1e5fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5fc8: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1e5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1e5fcc: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1e5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e5fd0: 0x83a823  subu        $s5, $a0, $v1
    ctx->pc = 0x1e5fd0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5fd4: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x1e5fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1e5fd8: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1e5fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1e5fdc: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1e5fdcu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5fe0: 0x2952018  mult        $a0, $s4, $s5
    ctx->pc = 0x1e5fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e5fe4: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x1e5fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e5fe8: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e5fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5fec: 0x6410008  bgez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5FECu;
    {
        const bool branch_taken_0x1e5fec = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1e5fec) {
            ctx->pc = 0x1E6010u;
            goto label_1e6010;
        }
    }
    ctx->pc = 0x1E5FF4u;
    // 0x1e5ff4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e5ff8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e5ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e5ffc: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x1e5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e6000: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e6000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e6004: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e6004u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e6008: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6008u;
    {
        const bool branch_taken_0x1e6008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6008) {
            ctx->pc = 0x1E6028u;
            goto label_1e6028;
        }
    }
    ctx->pc = 0x1E6010u;
label_1e6010:
    // 0x1e6010: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e6010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6014: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e6014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e6018: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1e6018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e601c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e601cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e6020: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e6020u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e6024: 0x0  nop
    ctx->pc = 0x1e6024u;
    // NOP
label_1e6028:
    // 0x1e6028: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e6028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e602c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e602cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e6030: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6034: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x1e6034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e6038: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e603c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e603cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6040: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e6040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6044: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e6044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e6048: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e604c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x1e604cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e6050: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6054: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6054u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6058: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e6058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e605c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e605cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e6060: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6064: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x1e6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e6068: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6068u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e606c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e606cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6070: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6074: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1e6074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1e6078: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6078u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e607c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e607cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6080: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6084: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e6084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e6088:
    // 0x1e6088: 0x9624000a  lhu         $a0, 0xA($s1)
    ctx->pc = 0x1e6088u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e608c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1e608cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e6090: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1e6090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e6094: 0x10a60008  beq         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6094u;
    {
        const bool branch_taken_0x1e6094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e6094) {
            ctx->pc = 0x1E60B8u;
            goto label_1e60b8;
        }
    }
    ctx->pc = 0x1E609Cu;
    // 0x1e609c: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1e609cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e60a0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e60a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e60a4: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x1e60a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1e60a8: 0x90a301b0  lbu         $v1, 0x1B0($a1)
    ctx->pc = 0x1e60a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x1e60ac: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E60ACu;
    {
        const bool branch_taken_0x1e60ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e60ac) {
            ctx->pc = 0x1E61A8u;
            goto label_1e61a8;
        }
    }
    ctx->pc = 0x1E60B4u;
    // 0x1e60b4: 0x0  nop
    ctx->pc = 0x1e60b4u;
    // NOP
label_1e60b8:
    // 0x1e60b8: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e60bc: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1e60bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e60c0: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x1e60c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e60c4: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x1e60c4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e60c8: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e60cc: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x1e60ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x1e60d0: 0x64a023  subu        $s4, $v1, $a0
    ctx->pc = 0x1e60d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e60d4: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x1e60d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1e60d8: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x1e60d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e60dc: 0x853023  subu        $a2, $a0, $a1
    ctx->pc = 0x1e60dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e60e0: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x1e60e0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e60e4: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x1e60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1e60e8: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x1e60e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x1e60ec: 0x64b023  subu        $s6, $v1, $a0
    ctx->pc = 0x1e60ecu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e60f0: 0x2952818  mult        $a1, $s4, $s5
    ctx->pc = 0x1e60f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e60f4: 0x2563018  mult        $a2, $s2, $s6
    ctx->pc = 0x1e60f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1e60f8: 0xa69023  subu        $s2, $a1, $a2
    ctx->pc = 0x1e60f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e60fc: 0x6410008  bgez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E60FCu;
    {
        const bool branch_taken_0x1e60fc = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1e60fc) {
            ctx->pc = 0x1E6120u;
            goto label_1e6120;
        }
    }
    ctx->pc = 0x1E6104u;
    // 0x1e6104: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e6104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6108: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1e6108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e610c: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x1e610cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e6110: 0xa33025  or          $a2, $a1, $v1
    ctx->pc = 0x1e6110u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1e6114: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x1e6114u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x1e6118: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6118u;
    {
        const bool branch_taken_0x1e6118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6118) {
            ctx->pc = 0x1E6138u;
            goto label_1e6138;
        }
    }
    ctx->pc = 0x1E6120u;
label_1e6120:
    // 0x1e6120: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e6120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6124: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e6124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e6128: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1e6128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e612c: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1e612cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e6130: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x1e6130u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x1e6134: 0x0  nop
    ctx->pc = 0x1e6134u;
    // NOP
label_1e6138:
    // 0x1e6138: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e6138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e613c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e613cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e6140: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1e6140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6144: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1e6144u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6148: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x1e6148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e614c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x1e614cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e6150: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6150u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6154: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e6154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6158: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e6158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e615c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e615cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6160: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1e6160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e6164: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6164u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6168: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6168u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e616c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e616cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6170: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e6170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e6174: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6178: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1e6178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1e617c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e617cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6180: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6180u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6184: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e6184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6188: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e6188u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e618c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1e618cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e6190: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6190u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6194: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6194u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6198: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e619c: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x1e619cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e61a0: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x1e61a0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e61a4: 0x0  nop
    ctx->pc = 0x1e61a4u;
    // NOP
label_1e61a8:
    // 0x1e61a8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1e61a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e61ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e61acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e61b0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e61b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e61b4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E61B4u;
    {
        const bool branch_taken_0x1e61b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e61b4) {
            ctx->pc = 0x1E61D8u;
            goto label_1e61d8;
        }
    }
    ctx->pc = 0x1E61BCu;
    // 0x1e61bc: 0x9627000c  lhu         $a3, 0xC($s1)
    ctx->pc = 0x1e61bcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e61c0: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x1e61c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1e61c4: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x1e61c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1e61c8: 0x906401b0  lbu         $a0, 0x1B0($v1)
    ctx->pc = 0x1e61c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1e61cc: 0x1480003e  bnez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E61CCu;
    {
        const bool branch_taken_0x1e61cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e61cc) {
            ctx->pc = 0x1E62C8u;
            goto label_1e62c8;
        }
    }
    ctx->pc = 0x1E61D4u;
    // 0x1e61d4: 0x0  nop
    ctx->pc = 0x1e61d4u;
    // NOP
label_1e61d8:
    // 0x1e61d8: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x1e61d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e61dc: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e61e0: 0xa39023  subu        $s2, $a1, $v1
    ctx->pc = 0x1e61e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e61e4: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x1e61e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1e61e8: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e61ec: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x1e61ecu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e61f0: 0x8fbe01a0  lw          $fp, 0x1A0($sp)
    ctx->pc = 0x1e61f0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e61f4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e61f8: 0x3c3a823  subu        $s5, $fp, $v1
    ctx->pc = 0x1e61f8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1e61fc: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x1e61fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1e6200: 0x8fbe0174  lw          $fp, 0x174($sp)
    ctx->pc = 0x1e6200u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e6204: 0x7eb023  subu        $s6, $v1, $fp
    ctx->pc = 0x1e6204u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1e6208: 0x2952018  mult        $a0, $s4, $s5
    ctx->pc = 0x1e6208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e620c: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x1e620cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e6210: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e6210u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e6214: 0x6410008  bgez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6214u;
    {
        const bool branch_taken_0x1e6214 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1e6214) {
            ctx->pc = 0x1E6238u;
            goto label_1e6238;
        }
    }
    ctx->pc = 0x1E621Cu;
    // 0x1e621c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e621cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6220: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e6220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e6224: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x1e6224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e6228: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e6228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e622c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e622cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e6230: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6230u;
    {
        const bool branch_taken_0x1e6230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6230) {
            ctx->pc = 0x1E6250u;
            goto label_1e6250;
        }
    }
    ctx->pc = 0x1E6238u;
label_1e6238:
    // 0x1e6238: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e6238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e623c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e623cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e6240: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1e6240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e6244: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e6244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e6248: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e6248u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e624c: 0x0  nop
    ctx->pc = 0x1e624cu;
    // NOP
label_1e6250:
    // 0x1e6250: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e6250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e6254: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e6254u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e6258: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e6258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e625c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e625cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6260: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1e6260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e6264: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6264u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6268: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6268u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e626c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e626cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6270: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e6270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e6274: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e6274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6278: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e6278u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e627c: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x1e627cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e6280: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6284: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6284u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6288: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e6288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e628c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e628cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e6290: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e6290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6294: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e6294u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6298: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1e6298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e629c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1e629cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e62a0: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e62a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e62a4: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e62a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e62a8: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e62a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e62ac: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x1e62acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e62b0: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1e62b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e62b4: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x1e62b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
    // 0x1e62b8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e62bc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e62bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e62c0: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1e62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e62c4: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e62c4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e62c8:
    // 0x1e62c8: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e62c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e62cc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e62ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e62d0:
    // 0x1e62d0: 0x8fa70340  lw          $a3, 0x340($sp)
    ctx->pc = 0x1e62d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1e62d4: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x1e62d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1e62d8: 0xafa40340  sw          $a0, 0x340($sp)
    ctx->pc = 0x1e62d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 4));
    // 0x1e62dc: 0x1480fea1  bnez        $a0, . + 4 + (-0x15F << 2)
    ctx->pc = 0x1E62DCu;
    {
        const bool branch_taken_0x1e62dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e62dc) {
            ctx->pc = 0x1E5D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5d64;
        }
    }
    ctx->pc = 0x1E62E4u;
    // 0x1e62e4: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E62E4u;
    {
        const bool branch_taken_0x1e62e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e62e4) {
            ctx->pc = 0x1E635Cu;
            goto label_1e635c;
        }
    }
    ctx->pc = 0x1E62ECu;
    // 0x1e62ec: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1e62ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e62f0: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x1e62f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e62f4: 0x24830006  addiu       $v1, $a0, 0x6
    ctx->pc = 0x1e62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x1e62f8: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x1e62f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e62fc: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x1e62fcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1e6300: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e6300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e6304: 0x2441825  or          $v1, $s2, $a0
    ctx->pc = 0x1e6304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1e6308: 0x8fb40348  lw          $s4, 0x348($sp)
    ctx->pc = 0x1e6308u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1e630c: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e630cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1e6310: 0x8fa40348  lw          $a0, 0x348($sp)
    ctx->pc = 0x1e6310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1e6314: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1e6314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1e6318: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1e6318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e631c: 0x73a821  addu        $s5, $v1, $s3
    ctx->pc = 0x1e631cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e6320: 0x26a40006  addiu       $a0, $s5, 0x6
    ctx->pc = 0x1e6320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
    // 0x1e6324: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1e6324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1e6328: 0x83b025  or          $s6, $a0, $v1
    ctx->pc = 0x1e6328u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e632c: 0x8fa40348  lw          $a0, 0x348($sp)
    ctx->pc = 0x1e632cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1e6330: 0xac96000c  sw          $s6, 0xC($a0)
    ctx->pc = 0x1e6330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 22));
    // 0x1e6334: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1e6334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1e6338: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e6338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e633c: 0x34728000  ori         $s2, $v1, 0x8000
    ctx->pc = 0x1e633cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1e6340: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1e6340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1e6344: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e6344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e6348: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1e6348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1e634c: 0x8fa30368  lw          $v1, 0x368($sp)
    ctx->pc = 0x1e634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x1e6350: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1e6350u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1e6354: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6354u;
    {
        const bool branch_taken_0x1e6354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6354) {
            ctx->pc = 0x1E6378u;
            goto label_1e6378;
        }
    }
    ctx->pc = 0x1E635Cu;
label_1e635c:
    // 0x1e635c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1e635cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1e6360: 0x8fa40348  lw          $a0, 0x348($sp)
    ctx->pc = 0x1e6360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1e6364: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1e6364u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1e6368: 0x8fa30348  lw          $v1, 0x348($sp)
    ctx->pc = 0x1e6368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1e636c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e636cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e6370: 0x8fa30348  lw          $v1, 0x348($sp)
    ctx->pc = 0x1e6370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1e6374: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e6374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1e6378:
    // 0x1e6378: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1e6378u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e637c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e637cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e6380: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e6380u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e6384: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e6384u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6388: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e6388u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e638c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e638cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6390: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e6390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e6394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e639c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e639cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e63a0: 0x27bd0380  addiu       $sp, $sp, 0x380
    ctx->pc = 0x1e63a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x1e63a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E63A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E63A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E63ACu;
}
