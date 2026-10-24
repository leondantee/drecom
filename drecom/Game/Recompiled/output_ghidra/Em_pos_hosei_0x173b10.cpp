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

// Function: Em_pos_hosei
// Address: 0x173b10 - 0x173d48
void Em_pos_hosei_0x173b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_pos_hosei_0x173b10");
#endif

    switch (ctx->pc) {
        case 0x173b58u: goto label_173b58;
        case 0x173b74u: goto label_173b74;
        case 0x173ba4u: goto label_173ba4;
        case 0x173be4u: goto label_173be4;
        case 0x173c0cu: goto label_173c0c;
        case 0x173c54u: goto label_173c54;
        case 0x173ca4u: goto label_173ca4;
        case 0x173cc0u: goto label_173cc0;
        case 0x173cdcu: goto label_173cdc;
        case 0x173d08u: goto label_173d08;
        default: break;
    }

    ctx->pc = 0x173b10u;

    // 0x173b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x173b14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x173b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x173b18: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x173b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x173b1c: 0xa3a50038  sb          $a1, 0x38($sp)
    ctx->pc = 0x173b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 5));
    // 0x173b20: 0x93a20038  lbu         $v0, 0x38($sp)
    ctx->pc = 0x173b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x173b24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x173b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x173b28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x173b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x173b2c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x173B2Cu;
    {
        const bool branch_taken_0x173b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173b2c) {
            ctx->pc = 0x173C44u;
            goto label_173c44;
        }
    }
    ctx->pc = 0x173B34u;
    // 0x173b34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173b38: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x173b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x173b3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x173b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x173b40: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x173B40u;
    {
        const bool branch_taken_0x173b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173b40) {
            ctx->pc = 0x173C44u;
            goto label_173c44;
        }
    }
    ctx->pc = 0x173B48u;
    // 0x173b48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173b4c: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x173b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x173b50: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x173B50u;
    SET_GPR_U32(ctx, 31, 0x173B58u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x173B50u, 0x173B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B58u;
label_173b58:
    // 0x173b58: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x173b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173b5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173b60: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x173b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173b64: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x173b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x173b68: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x173b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x173b6c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x173B6Cu;
    SET_GPR_U32(ctx, 31, 0x173B74u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x173B6Cu, 0x173B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B74u;
label_173b74:
    // 0x173b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173b78: 0x0  nop
    ctx->pc = 0x173b78u;
    // NOP
    // 0x173b7c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x173b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x173b80: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x173b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173b84: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x173b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173b88: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x173b88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x173b8c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x173b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173b90: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x173b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173b94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x173b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x173b98: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x173b98u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x173b9c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x173B9Cu;
    SET_GPR_U32(ctx, 31, 0x173BA4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x173B9Cu, 0x173BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173BA4u;
label_173ba4:
    // 0x173ba4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x173ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x173ba8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173bac: 0xc44111e0  lwc1        $f1, 0x11E0($v0)
    ctx->pc = 0x173bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173bb0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x173bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x173bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173bb8: 0x0  nop
    ctx->pc = 0x173bb8u;
    // NOP
    // 0x173bbc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x173bbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173bc0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x173bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173bc4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x173bc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173bc8: 0x0  nop
    ctx->pc = 0x173bc8u;
    // NOP
    // 0x173bcc: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x173BCCu;
    {
        const bool branch_taken_0x173bcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173bcc) {
            ctx->pc = 0x173C54u;
            goto label_173c54;
        }
    }
    ctx->pc = 0x173BD4u;
    // 0x173bd4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x173bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173bd8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x173bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173bdc: 0xc040c24  jal         func_103090
    ctx->pc = 0x173BDCu;
    SET_GPR_U32(ctx, 31, 0x173BE4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x173BE4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173BE4u) { return; }
    ctx->pc = 0x173BE4u;
label_173be4:
    // 0x173be4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173be8: 0xc44111e0  lwc1        $f1, 0x11E0($v0)
    ctx->pc = 0x173be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173bec: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x173becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x173bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173bf4: 0x0  nop
    ctx->pc = 0x173bf4u;
    // NOP
    // 0x173bf8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x173bf8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173bfc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x173bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173c00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x173c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173c04: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x173C04u;
    SET_GPR_U32(ctx, 31, 0x173C0Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x173C0Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173C0Cu) { return; }
    ctx->pc = 0x173C0Cu;
label_173c0c:
    // 0x173c0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173c10: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x173c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173c14: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x173c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173c18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x173c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x173c1c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173c20: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x173c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x173c24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173c28: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x173c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173c2c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x173c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173c30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x173c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x173c34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173c38: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x173c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x173c3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x173C3Cu;
    {
        const bool branch_taken_0x173c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173c3c) {
            ctx->pc = 0x173C54u;
            goto label_173c54;
        }
    }
    ctx->pc = 0x173C44u;
label_173c44:
    // 0x173c44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173c48: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x173c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x173c4c: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x173C4Cu;
    SET_GPR_U32(ctx, 31, 0x173C54u);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x173C4Cu, 0x173C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173C54u;
label_173c54:
    // 0x173c54: 0x93a20038  lbu         $v0, 0x38($sp)
    ctx->pc = 0x173c54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x173c58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x173c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x173c5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x173c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x173c60: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x173C60u;
    {
        const bool branch_taken_0x173c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173c60) {
            ctx->pc = 0x173CC8u;
            goto label_173cc8;
        }
    }
    ctx->pc = 0x173C68u;
    // 0x173c68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173c6c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x173c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x173c70: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x173c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x173c74: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x173C74u;
    {
        const bool branch_taken_0x173c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173c74) {
            ctx->pc = 0x173CC8u;
            goto label_173cc8;
        }
    }
    ctx->pc = 0x173C7Cu;
    // 0x173c7c: 0x93a20038  lbu         $v0, 0x38($sp)
    ctx->pc = 0x173c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x173c80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x173c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x173c84: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x173c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x173c88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x173C88u;
    {
        const bool branch_taken_0x173c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173c88) {
            ctx->pc = 0x173CACu;
            goto label_173cac;
        }
    }
    ctx->pc = 0x173C90u;
    // 0x173c90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x173c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173c94: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x173c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x173c98: 0x344501c7  ori         $a1, $v0, 0x1C7
    ctx->pc = 0x173c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x173c9c: 0xc05a400  jal         func_169000
    ctx->pc = 0x173C9Cu;
    SET_GPR_U32(ctx, 31, 0x173CA4u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x173C9Cu, 0x173CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CA4u;
label_173ca4:
    // 0x173ca4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x173CA4u;
    {
        const bool branch_taken_0x173ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ca4) {
            ctx->pc = 0x173CDCu;
            goto label_173cdc;
        }
    }
    ctx->pc = 0x173CACu;
label_173cac:
    // 0x173cac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x173cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173cb0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x173cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x173cb4: 0x34450007  ori         $a1, $v0, 0x7
    ctx->pc = 0x173cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x173cb8: 0xc05a400  jal         func_169000
    ctx->pc = 0x173CB8u;
    SET_GPR_U32(ctx, 31, 0x173CC0u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x173CB8u, 0x173CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CC0u;
label_173cc0:
    // 0x173cc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x173CC0u;
    {
        const bool branch_taken_0x173cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173cc0) {
            ctx->pc = 0x173CDCu;
            goto label_173cdc;
        }
    }
    ctx->pc = 0x173CC8u;
label_173cc8:
    // 0x173cc8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x173cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173ccc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x173cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x173cd0: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x173cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x173cd4: 0xc05a400  jal         func_169000
    ctx->pc = 0x173CD4u;
    SET_GPR_U32(ctx, 31, 0x173CDCu);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x173CD4u, 0x173CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CDCu;
label_173cdc:
    // 0x173cdc: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x173cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x173ce0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x173ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x173ce4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x173ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x173ce8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x173CE8u;
    {
        const bool branch_taken_0x173ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173ce8) {
            ctx->pc = 0x173D38u;
            goto label_173d38;
        }
    }
    ctx->pc = 0x173CF0u;
    // 0x173cf0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x173cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173cf4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173cf8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x173cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x173cfc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x173cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x173d00: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x173D00u;
    SET_GPR_U32(ctx, 31, 0x173D08u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x173D00u, 0x173D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D08u;
label_173d08:
    // 0x173d08: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x173d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x173d0c: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x173d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x173d10: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x173d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x173d14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x173d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173d18: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x173d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173d1c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x173d1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d20: 0x0  nop
    ctx->pc = 0x173d20u;
    // NOP
    // 0x173d24: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x173D24u;
    {
        const bool branch_taken_0x173d24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173d24) {
            ctx->pc = 0x173D38u;
            goto label_173d38;
        }
    }
    ctx->pc = 0x173D2Cu;
    // 0x173d2c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x173d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173d30: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x173d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173d34: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x173d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_173d38:
    // 0x173d38: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x173d38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173d3c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x173d3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173d40: 0x3e00008  jr          $ra
    ctx->pc = 0x173D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173D48u;
}
