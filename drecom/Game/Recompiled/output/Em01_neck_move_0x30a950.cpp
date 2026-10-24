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

// Function: Em01_neck_move
// Address: 0x30a950 - 0x30abf4
void Em01_neck_move_0x30a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_neck_move_0x30a950");
#endif

    switch (ctx->pc) {
        case 0x30a9c0u: goto label_30a9c0;
        case 0x30a9f4u: goto label_30a9f4;
        case 0x30aa10u: goto label_30aa10;
        case 0x30aab0u: goto label_30aab0;
        default: break;
    }

    ctx->pc = 0x30a950u;

    // 0x30a950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30a954: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x30a954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x30a958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30a960: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x30a960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x30a964: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30a964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30a968: 0x8c711310  lw          $s1, 0x1310($v1)
    ctx->pc = 0x30a968u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4880)));
    // 0x30a96c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30a970: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x30a970u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x30a974: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30a974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30a978: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30a978u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30a97c: 0x4600097  bltz        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x30A97Cu;
    {
        const bool branch_taken_0x30a97c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x30a97c) {
            ctx->pc = 0x30ABDCu;
            goto label_30abdc;
        }
    }
    ctx->pc = 0x30A984u;
    // 0x30a984: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x30a984u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x30a988: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30a988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30a98c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30a98cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30a990: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x30a990u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30a994: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x30a994u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x30a998: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x30a998u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30a99c: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x30A99Cu;
    {
        const bool branch_taken_0x30a99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a99c) {
            ctx->pc = 0x30AB18u;
            goto label_30ab18;
        }
    }
    ctx->pc = 0x30A9A4u;
    // 0x30a9a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30a9a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30a9ac: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x30a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x30a9b0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x30a9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30a9b4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30a9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30a9b8: 0xc05cc90  jal         func_173240
    ctx->pc = 0x30A9B8u;
    SET_GPR_U32(ctx, 31, 0x30A9C0u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x30A9B8u, 0x30A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9C0u;
label_30a9c0:
    // 0x30a9c0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x30a9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x30a9c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A9C4u;
    {
        const bool branch_taken_0x30a9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a9c4) {
            ctx->pc = 0x30A9E0u;
            goto label_30a9e0;
        }
    }
    ctx->pc = 0x30A9CCu;
    // 0x30a9cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a9ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a9d0: 0x0  nop
    ctx->pc = 0x30a9d0u;
    // NOP
    // 0x30a9d4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x30a9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x30a9d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30A9D8u;
    {
        const bool branch_taken_0x30a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a9d8) {
            ctx->pc = 0x30AA14u;
            goto label_30aa14;
        }
    }
    ctx->pc = 0x30A9E0u;
label_30a9e0:
    // 0x30a9e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30a9e4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x30a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x30a9e8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30a9ec: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x30A9ECu;
    SET_GPR_U32(ctx, 31, 0x30A9F4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x30A9ECu, 0x30A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9F4u;
label_30a9f4:
    // 0x30a9f4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x30a9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x30a9f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30a9fc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30a9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30aa00: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x30aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30aa04: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x30aa04u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30aa08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30AA08u;
    SET_GPR_U32(ctx, 31, 0x30AA10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30AA08u, 0x30AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA10u;
label_30aa10:
    // 0x30aa10: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x30aa10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_30aa14:
    // 0x30aa14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30aa14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30aa18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30aa1c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x30aa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30aa20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30aa20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30aa24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aa28: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aa2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aa30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30aa34: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30aa38: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x30aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x30aa3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aa40: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x30aa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x30aa44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30aa44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30aa48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30aa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30aa4c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x30aa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30aa50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30aa50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30aa54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aa58: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aa5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aa60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30aa64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30aa68: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x30aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x30aa6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aa70: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x30aa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x30aa74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30aa78: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x30aa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30aa7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30aa7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30aa80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aa84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aa88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aa8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30aa90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30aa94: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x30aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x30aa98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aa9c: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x30aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30aaa0: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x30aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30aaa4: 0xc62e0004  lwc1        $f14, 0x4($s1)
    ctx->pc = 0x30aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x30aaa8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x30AAA8u;
    SET_GPR_U32(ctx, 31, 0x30AAB0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x30AAA8u, 0x30AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AAB0u;
label_30aab0:
    // 0x30aab0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30aab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30aab4: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x30aab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30aab8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30aab8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30aabc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30aac0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30aac4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30aac8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30aacc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30aad0: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30aad4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30aad8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x30aad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x30aadc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30aae0: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x30aae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30aae4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30aae4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30aae8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30aaec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30aaf0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30aaf4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30aaf8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30aafc: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30ab00: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ab04: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x30ab04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x30ab08: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x30ab08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x30ab0c: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x30ab0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30ab10: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x30AB10u;
    {
        const bool branch_taken_0x30ab10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ab10) {
            ctx->pc = 0x30ABDCu;
            goto label_30abdc;
        }
    }
    ctx->pc = 0x30AB18u;
label_30ab18:
    // 0x30ab18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30ab18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ab1c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30ab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30ab20: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x30ab20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30ab24: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30ab24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30ab28: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ab2c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ab30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ab34: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30ab38: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30ab3c: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30ab40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ab44: 0xe460011c  swc1        $f0, 0x11C($v1)
    ctx->pc = 0x30ab44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 284), bits); }
    // 0x30ab48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30ab48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ab4c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30ab50: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x30ab50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30ab54: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30ab54u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30ab58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ab5c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ab60: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ab64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30ab68: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30ab6c: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30ab70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ab74: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x30ab74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x30ab78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30ab78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ab7c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30ab80: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x30ab80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30ab84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30ab84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30ab88: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ab8c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ab90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ab94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30ab98: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30ab9c: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30aba0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30aba4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x30aba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x30aba8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30abac: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x30abacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30abb0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30abb0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30abb4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30abb8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30abbc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30abc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30abc4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30abc8: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30abcc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30abccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30abd0: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x30abd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x30abd4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x30abd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x30abd8: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x30abd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
label_30abdc:
    // 0x30abdc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x30abdcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30abe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30abe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30abe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30abe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30abe8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x30abe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30abec: 0x3e00008  jr          $ra
    ctx->pc = 0x30ABECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30ABECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30ABF4u;
}
