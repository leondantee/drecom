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

// Function: Pl_em_dam_em0a_r2_catch_critical
// Address: 0x36a970 - 0x36abe8
void Pl_em_dam_em0a_r2_catch_critical_0x36a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em0a_r2_catch_critical_0x36a970");
#endif

    switch (ctx->pc) {
        case 0x36a9f4u: goto label_36a9f4;
        case 0x36aa20u: goto label_36aa20;
        case 0x36aa34u: goto label_36aa34;
        case 0x36aa48u: goto label_36aa48;
        case 0x36aa5cu: goto label_36aa5c;
        case 0x36aa80u: goto label_36aa80;
        case 0x36aaacu: goto label_36aaac;
        case 0x36ab1cu: goto label_36ab1c;
        case 0x36ab3cu: goto label_36ab3c;
        case 0x36ab50u: goto label_36ab50;
        case 0x36ab64u: goto label_36ab64;
        case 0x36ab7cu: goto label_36ab7c;
        default: break;
    }

    ctx->pc = 0x36a970u;

    // 0x36a970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36a970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36a974: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x36a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x36a978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a97c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a980: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x36a980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x36a984: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x36a984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x36a988: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x36a988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x36a98c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a990: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x36a990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x36a994: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a998: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x36a998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36a99c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36a99cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36a9a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36a9a4: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x36A9A4u;
    {
        const bool branch_taken_0x36a9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36a9a4) {
            ctx->pc = 0x36AB2Cu;
            goto label_36ab2c;
        }
    }
    ctx->pc = 0x36A9ACu;
    // 0x36a9ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36a9b0: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x36A9B0u;
    {
        const bool branch_taken_0x36a9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36a9b0) {
            ctx->pc = 0x36AAFCu;
            goto label_36aafc;
        }
    }
    ctx->pc = 0x36A9B8u;
    // 0x36a9b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a9bc: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36A9BCu;
    {
        const bool branch_taken_0x36a9bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36a9bc) {
            ctx->pc = 0x36AA10u;
            goto label_36aa10;
        }
    }
    ctx->pc = 0x36A9C4u;
    // 0x36a9c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A9C4u;
    {
        const bool branch_taken_0x36a9c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a9c4) {
            ctx->pc = 0x36A9D4u;
            goto label_36a9d4;
        }
    }
    ctx->pc = 0x36A9CCu;
    // 0x36a9cc: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x36A9CCu;
    {
        const bool branch_taken_0x36a9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a9cc) {
            ctx->pc = 0x36ABD0u;
            goto label_36abd0;
        }
    }
    ctx->pc = 0x36A9D4u;
label_36a9d4:
    // 0x36a9d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36a9d8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36a9dc: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36a9e0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x36a9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36a9e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a9e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a9ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36A9ECu;
    SET_GPR_U32(ctx, 31, 0x36A9F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A9ECu, 0x36A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A9F4u;
label_36a9f4:
    // 0x36a9f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36a9f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a9fc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x36a9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x36aa00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aa04: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36aa04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36aa08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36aa0c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36aa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_36aa10:
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
            goto label_36abd0;
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
            goto label_36aae4;
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
            goto label_36abd0;
        }
    }
    ctx->pc = 0x36AAE4u;
label_36aae4:
    // 0x36aae4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aae8: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x36aae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x36aaec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36aaf0: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x36aaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x36aaf4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x36AAF4u;
    {
        const bool branch_taken_0x36aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aaf4) {
            ctx->pc = 0x36ABD0u;
            goto label_36abd0;
        }
    }
    ctx->pc = 0x36AAFCu;
label_36aafc:
    // 0x36aafc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36ab00: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36ab04: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36ab08: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x36ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36ab0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36ab0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ab10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36ab10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36ab14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36AB14u;
    SET_GPR_U32(ctx, 31, 0x36AB1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36AB14u, 0x36AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB1Cu;
label_36ab1c:
    // 0x36ab1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab20: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36ab20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36ab24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36ab28: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36ab28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_36ab2c:
    // 0x36ab2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ab30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ab34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36AB34u;
    SET_GPR_U32(ctx, 31, 0x36AB3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36AB34u, 0x36AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB3Cu;
label_36ab3c:
    // 0x36ab3c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab44: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x36ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36ab48: 0xc05cd58  jal         func_173560
    ctx->pc = 0x36AB48u;
    SET_GPR_U32(ctx, 31, 0x36AB50u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x36AB48u, 0x36AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB50u;
label_36ab50:
    // 0x36ab50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36ab50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36ab54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ab5c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36AB5Cu;
    SET_GPR_U32(ctx, 31, 0x36AB64u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36AB5Cu, 0x36AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB64u;
label_36ab64:
    // 0x36ab64: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x36ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ab68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab6c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x36ab6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x36ab70: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36ab70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ab74: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36AB74u;
    SET_GPR_U32(ctx, 31, 0x36AB7Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36AB74u, 0x36AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB7Cu;
label_36ab7c:
    // 0x36ab7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab80: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36ab80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36ab84: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x36AB84u;
    {
        const bool branch_taken_0x36ab84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ab84) {
            ctx->pc = 0x36ABD0u;
            goto label_36abd0;
        }
    }
    ctx->pc = 0x36AB8Cu;
    // 0x36ab8c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36ab90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab94: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x36ab94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x36ab98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ab9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aba0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36aba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36aba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aba8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36aba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36abac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36abacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36abb0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36abb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36abb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36abb8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36abb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36abbc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36abc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36abc4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x36abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x36abc8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x36ABC8u;
    {
        const bool branch_taken_0x36abc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36abc8) {
            ctx->pc = 0x36ABD0u;
            goto label_36abd0;
        }
    }
    ctx->pc = 0x36ABD0u;
label_36abd0:
    // 0x36abd0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36abd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36abd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36abd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36abd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36abd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36abdc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x36abdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36abe0: 0x3e00008  jr          $ra
    ctx->pc = 0x36ABE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ABE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ABE8u;
}
