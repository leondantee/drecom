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

// Function: entry_0025abe8
// Address: 0x25abe8 - 0x25acf8
void entry_0025abe8_0x25abe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025abe8_0x25abe8");
#endif

    switch (ctx->pc) {
        case 0x25ac18u: goto label_25ac18;
        case 0x25ac78u: goto label_25ac78;
        case 0x25ac94u: goto label_25ac94;
        case 0x25acc4u: goto label_25acc4;
        default: break;
    }

    ctx->pc = 0x25abe8u;

    // 0x25abe8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x25abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x25abec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25abecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25abf0: 0x0  nop
    ctx->pc = 0x25abf0u;
    // NOP
    // 0x25abf4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25abf4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25abf8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25abf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25abfc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x25abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac00: 0xe46009d0  swc1        $f0, 0x9D0($v1)
    ctx->pc = 0x25ac00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2512), bits); }
    // 0x25ac04: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac08: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25ac08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25ac0c: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x25ac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x25ac10: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25AC10u;
    SET_GPR_U32(ctx, 31, 0x25AC18u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25AC18u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25AC18u) { return; }
    ctx->pc = 0x25AC18u;
label_25ac18:
    // 0x25ac18: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x25ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac1c: 0xc46009d0  lwc1        $f0, 0x9D0($v1)
    ctx->pc = 0x25ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ac20: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x25ac20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x25ac24: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac28: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x25ac28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ac2c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x25ac2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x25ac30: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac34: 0x944309e0  lhu         $v1, 0x9E0($v0)
    ctx->pc = 0x25ac34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25ac38: 0xa7a300a8  sh          $v1, 0xA8($sp)
    ctx->pc = 0x25ac38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 168), (uint16_t)GPR_U32(ctx, 3));
    // 0x25ac3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25ac40: 0xa7a200aa  sh          $v0, 0xAA($sp)
    ctx->pc = 0x25ac40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ac44: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x25ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac48: 0x8c8205f0  lw          $v0, 0x5F0($a0)
    ctx->pc = 0x25ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1520)));
    // 0x25ac4c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x25ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x25ac50: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac54: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x25ac54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x25ac58: 0xa3a300c0  sb          $v1, 0xC0($sp)
    ctx->pc = 0x25ac58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 3));
    // 0x25ac5c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac60: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x25ac60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25ac64: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x25ac64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25ac68: 0x244502e0  addiu       $a1, $v0, 0x2E0
    ctx->pc = 0x25ac68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x25ac6c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x25ac6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25ac70: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25AC70u;
    SET_GPR_U32(ctx, 31, 0x25AC78u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25AC70u, 0x25AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AC78u;
label_25ac78:
    // 0x25ac78: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25ac78u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25ac7c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x25ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac80: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac84: 0x246402f0  addiu       $a0, $v1, 0x2F0
    ctx->pc = 0x25ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x25ac88: 0x244502e0  addiu       $a1, $v0, 0x2E0
    ctx->pc = 0x25ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x25ac8c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25AC8Cu;
    SET_GPR_U32(ctx, 31, 0x25AC94u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25AC94u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25AC94u) { return; }
    ctx->pc = 0x25AC94u;
label_25ac94:
    // 0x25ac94: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25ac94u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25ac98: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac9c: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x25ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aca0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x25aca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x25aca4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25aca8: 0xa7a200aa  sh          $v0, 0xAA($sp)
    ctx->pc = 0x25aca8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x25acac: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25acb0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x25acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25acb4: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x25acb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x25acb8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x25acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25acbc: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25ACBCu;
    SET_GPR_U32(ctx, 31, 0x25ACC4u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25ACBCu, 0x25ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ACC4u;
label_25acc4:
    // 0x25acc4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x25acc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25acc8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25acc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25accc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25acccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25acd0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25acd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25acd4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25acd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25acd8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25acd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25acdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25acdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ace0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25ace0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ace4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ace4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ace8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ace8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25acec: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x25acecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x25acf0: 0x3e00008  jr          $ra
    ctx->pc = 0x25ACF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ACF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ACF8u;
}
