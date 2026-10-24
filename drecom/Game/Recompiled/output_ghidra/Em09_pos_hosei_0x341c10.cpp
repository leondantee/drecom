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

// Function: Em09_pos_hosei
// Address: 0x341c10 - 0x341ed0
void Em09_pos_hosei_0x341c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_pos_hosei_0x341c10");
#endif

    switch (ctx->pc) {
        case 0x341c48u: goto label_341c48;
        case 0x341c60u: goto label_341c60;
        case 0x341c84u: goto label_341c84;
        case 0x341cb8u: goto label_341cb8;
        case 0x341cccu: goto label_341ccc;
        case 0x341d14u: goto label_341d14;
        case 0x341dbcu: goto label_341dbc;
        case 0x341ddcu: goto label_341ddc;
        case 0x341e3cu: goto label_341e3c;
        case 0x341e5cu: goto label_341e5c;
        default: break;
    }

    ctx->pc = 0x341c10u;

    // 0x341c10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x341c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x341c14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x341c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x341c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x341c1c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x341c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x341c20: 0xa3a50068  sb          $a1, 0x68($sp)
    ctx->pc = 0x341c20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x341c24: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x341c24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x341c28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x341c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x341c2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x341c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x341c30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x341C30u;
    {
        const bool branch_taken_0x341c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341c30) {
            ctx->pc = 0x341C50u;
            goto label_341c50;
        }
    }
    ctx->pc = 0x341C38u;
    // 0x341c38: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341c3c: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x341c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x341c40: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x341C40u;
    SET_GPR_U32(ctx, 31, 0x341C48u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x341C40u, 0x341C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C48u;
label_341c48:
    // 0x341c48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x341C48u;
    {
        const bool branch_taken_0x341c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341c48) {
            ctx->pc = 0x341C60u;
            goto label_341c60;
        }
    }
    ctx->pc = 0x341C50u;
label_341c50:
    // 0x341c50: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341c54: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x341c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x341c58: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x341C58u;
    SET_GPR_U32(ctx, 31, 0x341C60u);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x341C58u, 0x341C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C60u;
label_341c60:
    // 0x341c60: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x341c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x341c64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x341c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x341c68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x341c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x341c6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x341C6Cu;
    {
        const bool branch_taken_0x341c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341c6c) {
            ctx->pc = 0x341C90u;
            goto label_341c90;
        }
    }
    ctx->pc = 0x341C74u;
    // 0x341c74: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x341c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341c78: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x341c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    // 0x341c7c: 0xc05a400  jal         func_169000
    ctx->pc = 0x341C7Cu;
    SET_GPR_U32(ctx, 31, 0x341C84u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x341C7Cu, 0x341C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C84u;
label_341c84:
    // 0x341c84: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341c88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341c8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x341c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_341c90:
    // 0x341c90: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x341c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x341c94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x341c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x341c98: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x341c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x341c9c: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x341C9Cu;
    {
        const bool branch_taken_0x341c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341c9c) {
            ctx->pc = 0x341D6Cu;
            goto label_341d6c;
        }
    }
    ctx->pc = 0x341CA4u;
    // 0x341ca4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341ca8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x341ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341cac: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x341cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x341cb0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x341CB0u;
    SET_GPR_U32(ctx, 31, 0x341CB8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x341CB8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341CB8u) { return; }
    ctx->pc = 0x341CB8u;
label_341cb8:
    // 0x341cb8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341cbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x341cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x341cc0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x341cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x341cc4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x341CC4u;
    SET_GPR_U32(ctx, 31, 0x341CCCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x341CCCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341CCCu) { return; }
    ctx->pc = 0x341CCCu;
label_341ccc:
    // 0x341ccc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x341cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341cd0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x341cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x341cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341cd8: 0x0  nop
    ctx->pc = 0x341cd8u;
    // NOP
    // 0x341cdc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x341cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341ce0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x341ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x341ce4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x341ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341ce8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x341ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x341cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341cf0: 0x0  nop
    ctx->pc = 0x341cf0u;
    // NOP
    // 0x341cf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x341cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341cf8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x341cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x341cfc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x341cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x341d00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x341d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341d04: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x341d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x341d08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341d08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341d0c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x341D0Cu;
    SET_GPR_U32(ctx, 31, 0x341D14u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x341D0Cu, 0x341D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341D14u;
label_341d14:
    // 0x341d14: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x341d14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341d18: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x341d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x341d1c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x341d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x341d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d24: 0x0  nop
    ctx->pc = 0x341d24u;
    // NOP
    // 0x341d28: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x341d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x341d2c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x341D2Cu;
    {
        const bool branch_taken_0x341d2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x341d2c) {
            ctx->pc = 0x341D54u;
            goto label_341d54;
        }
    }
    ctx->pc = 0x341D34u;
    // 0x341d34: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x341d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341d38: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x341d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x341d3c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x341d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341d40: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341d44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x341d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x341d48: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x341d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x341d4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341D4Cu;
    {
        const bool branch_taken_0x341d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341d4c) {
            ctx->pc = 0x341D6Cu;
            goto label_341d6c;
        }
    }
    ctx->pc = 0x341D54u;
label_341d54:
    // 0x341d54: 0x3c02c743  lui         $v0, 0xC743
    ctx->pc = 0x341d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51011 << 16));
    // 0x341d58: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x341d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x341d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d60: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341d64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x341d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x341d68: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x341d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_341d6c:
    // 0x341d6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341d6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d70: 0x0  nop
    ctx->pc = 0x341d70u;
    // NOP
    // 0x341d74: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x341d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x341d78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d7c: 0x0  nop
    ctx->pc = 0x341d7cu;
    // NOP
    // 0x341d80: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x341d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x341d84: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x341d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x341d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d8c: 0x0  nop
    ctx->pc = 0x341d8cu;
    // NOP
    // 0x341d90: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x341d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x341d94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x341d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x341d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d9c: 0x0  nop
    ctx->pc = 0x341d9cu;
    // NOP
    // 0x341da0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x341da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x341da4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341da8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x341da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341dac: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x341dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x341db0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x341db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341db4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x341DB4u;
    SET_GPR_U32(ctx, 31, 0x341DBCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x341DBCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341DBCu) { return; }
    ctx->pc = 0x341DBCu;
label_341dbc:
    // 0x341dbc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341dc0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x341dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x341dc4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x341dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x341dc8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x341dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x341dcc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x341dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341dd0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341dd0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341dd4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x341DD4u;
    SET_GPR_U32(ctx, 31, 0x341DDCu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x341DD4u, 0x341DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341DDCu;
label_341ddc:
    // 0x341ddc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341de0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341de4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x341de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x341de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341dec: 0x0  nop
    ctx->pc = 0x341decu;
    // NOP
    // 0x341df0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x341df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x341df4: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x341df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x341df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341dfc: 0x0  nop
    ctx->pc = 0x341dfcu;
    // NOP
    // 0x341e00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x341e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x341e04: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x341e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x341e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341e0c: 0x0  nop
    ctx->pc = 0x341e0cu;
    // NOP
    // 0x341e10: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x341e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x341e14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x341e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x341e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341e1c: 0x0  nop
    ctx->pc = 0x341e1cu;
    // NOP
    // 0x341e20: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x341e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x341e24: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341e28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x341e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341e2c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x341e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x341e30: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x341e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341e34: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x341E34u;
    SET_GPR_U32(ctx, 31, 0x341E3Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x341E3Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341E3Cu) { return; }
    ctx->pc = 0x341E3Cu;
label_341e3c:
    // 0x341e3c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341e40: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x341e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x341e44: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x341e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x341e48: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x341e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x341e4c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x341e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341e50: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341e50u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341e54: 0xc059e1c  jal         func_167870
    ctx->pc = 0x341E54u;
    SET_GPR_U32(ctx, 31, 0x341E5Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x341E54u, 0x341E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341E5Cu;
label_341e5c:
    // 0x341e5c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341e60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341e64: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x341e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x341e68: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341e6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341e70: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x341e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x341e74: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x341e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x341e78: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x341E78u;
    {
        const bool branch_taken_0x341e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341e78) {
            ctx->pc = 0x341EB0u;
            goto label_341eb0;
        }
    }
    ctx->pc = 0x341E80u;
    // 0x341e80: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341e84: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x341e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341e88: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x341e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341e8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x341e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341e90: 0x0  nop
    ctx->pc = 0x341e90u;
    // NOP
    // 0x341e94: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x341E94u;
    {
        const bool branch_taken_0x341e94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x341e94) {
            ctx->pc = 0x341EBCu;
            goto label_341ebc;
        }
    }
    ctx->pc = 0x341E9Cu;
    // 0x341e9c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x341e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341ea0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341ea4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x341ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x341ea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x341EA8u;
    {
        const bool branch_taken_0x341ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341ea8) {
            ctx->pc = 0x341EBCu;
            goto label_341ebc;
        }
    }
    ctx->pc = 0x341EB0u;
label_341eb0:
    // 0x341eb0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x341eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341eb4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341eb8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x341eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_341ebc:
    // 0x341ebc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x341ebcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341ec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341ec4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x341ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x341ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x341EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341ED0u;
}
