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

// Function: entry_0036aa10
// Address: 0x36aa10 - 0x36aae4
void entry_0036aa10_0x36aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036aa10_0x36aa10");
#endif

    switch (ctx->pc) {
        case 0x36aa20u: goto label_36aa20;
        case 0x36aa34u: goto label_36aa34;
        case 0x36aa48u: goto label_36aa48;
        case 0x36aa5cu: goto label_36aa5c;
        case 0x36aa80u: goto label_36aa80;
        case 0x36aaacu: goto label_36aaac;
        default: break;
    }

    ctx->pc = 0x36aa10u;

    // 0x36aa10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aa14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36aa14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36aa18: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36AA18u;
    SET_GPR_U32(ctx, 31, 0x36AA20u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36AA18u, 0x36AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA20u;
label_36aa20:
    // 0x36aa20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aa24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aa28: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x36aa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36aa2c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x36AA2Cu;
    SET_GPR_U32(ctx, 31, 0x36AA34u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x36AA2Cu, 0x36AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA34u;
label_36aa34:
    // 0x36aa34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aa38: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36aa3c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36aa40: 0xc040c9e  jal         func_103278
    ctx->pc = 0x36AA40u;
    SET_GPR_U32(ctx, 31, 0x36AA48u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36AA48u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36AA48u) { return; }
    ctx->pc = 0x36AA48u;
label_36aa48:
    // 0x36aa48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36aa48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36aa4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aa50: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36aa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36aa54: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36AA54u;
    SET_GPR_U32(ctx, 31, 0x36AA5Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36AA54u, 0x36AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA5Cu;
label_36aa5c:
    // 0x36aa5c: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x36aa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36aa60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aa64: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x36aa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x36aa68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aa6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36aa70: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36aa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36aa74: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36aa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36aa78: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x36AA78u;
    SET_GPR_U32(ctx, 31, 0x36AA80u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36AA78u, 0x36AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA80u;
label_36aa80:
    // 0x36aa80: 0xc60112a0  lwc1        $f1, 0x12A0($s0)
    ctx->pc = 0x36aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36aa84: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36aa88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36aa88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36aa8c: 0xe60012a0  swc1        $f0, 0x12A0($s0)
    ctx->pc = 0x36aa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
    // 0x36aa90: 0xc60112a8  lwc1        $f1, 0x12A8($s0)
    ctx->pc = 0x36aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36aa94: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36aa98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36aa98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36aa9c: 0xe60012a8  swc1        $f0, 0x12A8($s0)
    ctx->pc = 0x36aa9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
    // 0x36aaa0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36aaa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36aaa4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36AAA4u;
    SET_GPR_U32(ctx, 31, 0x36AAACu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36AAA4u, 0x36AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AAACu;
label_36aaac:
    // 0x36aaac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aab0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36aab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36aab4: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x36AAB4u;
    {
        const bool branch_taken_0x36aab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aab4) {
            ctx->pc = 0x36ABD0u;
            return;
        }
    }
    ctx->pc = 0x36AABCu;
    // 0x36aabc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aac0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x36aac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x36aac4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36AAC4u;
    {
        const bool branch_taken_0x36aac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aac4) {
            ctx->pc = 0x36AAE4u;
            return;
        }
    }
    ctx->pc = 0x36AACCu;
    // 0x36aacc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aad0: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x36aad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x36aad4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36aad8: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x36aad8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x36aadc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x36AADCu;
    {
        const bool branch_taken_0x36aadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aadc) {
            ctx->pc = 0x36ABD0u;
            return;
        }
    }
    ctx->pc = 0x36AAE4u;
}
