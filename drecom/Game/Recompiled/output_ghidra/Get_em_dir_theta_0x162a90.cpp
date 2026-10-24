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

// Function: Get_em_dir_theta
// Address: 0x162a90 - 0x162c14
void Get_em_dir_theta_0x162a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_em_dir_theta_0x162a90");
#endif

    switch (ctx->pc) {
        case 0x162a90u: goto label_162a90;
        case 0x162a94u: goto label_162a94;
        case 0x162a98u: goto label_162a98;
        case 0x162a9cu: goto label_162a9c;
        case 0x162aa0u: goto label_162aa0;
        case 0x162aa4u: goto label_162aa4;
        case 0x162aa8u: goto label_162aa8;
        case 0x162aacu: goto label_162aac;
        case 0x162ab0u: goto label_162ab0;
        case 0x162ab4u: goto label_162ab4;
        case 0x162ab8u: goto label_162ab8;
        case 0x162abcu: goto label_162abc;
        case 0x162ac0u: goto label_162ac0;
        case 0x162ac4u: goto label_162ac4;
        case 0x162ac8u: goto label_162ac8;
        case 0x162accu: goto label_162acc;
        case 0x162ad0u: goto label_162ad0;
        case 0x162ad4u: goto label_162ad4;
        case 0x162ad8u: goto label_162ad8;
        case 0x162adcu: goto label_162adc;
        case 0x162ae0u: goto label_162ae0;
        case 0x162ae4u: goto label_162ae4;
        case 0x162ae8u: goto label_162ae8;
        case 0x162aecu: goto label_162aec;
        case 0x162af0u: goto label_162af0;
        case 0x162af4u: goto label_162af4;
        case 0x162af8u: goto label_162af8;
        case 0x162afcu: goto label_162afc;
        case 0x162b00u: goto label_162b00;
        case 0x162b04u: goto label_162b04;
        case 0x162b08u: goto label_162b08;
        case 0x162b0cu: goto label_162b0c;
        case 0x162b10u: goto label_162b10;
        case 0x162b14u: goto label_162b14;
        case 0x162b18u: goto label_162b18;
        case 0x162b1cu: goto label_162b1c;
        case 0x162b20u: goto label_162b20;
        case 0x162b24u: goto label_162b24;
        case 0x162b28u: goto label_162b28;
        case 0x162b2cu: goto label_162b2c;
        case 0x162b30u: goto label_162b30;
        case 0x162b34u: goto label_162b34;
        case 0x162b38u: goto label_162b38;
        case 0x162b3cu: goto label_162b3c;
        case 0x162b40u: goto label_162b40;
        case 0x162b44u: goto label_162b44;
        case 0x162b48u: goto label_162b48;
        case 0x162b4cu: goto label_162b4c;
        case 0x162b50u: goto label_162b50;
        case 0x162b54u: goto label_162b54;
        case 0x162b58u: goto label_162b58;
        case 0x162b5cu: goto label_162b5c;
        case 0x162b60u: goto label_162b60;
        case 0x162b64u: goto label_162b64;
        case 0x162b68u: goto label_162b68;
        case 0x162b6cu: goto label_162b6c;
        case 0x162b70u: goto label_162b70;
        case 0x162b74u: goto label_162b74;
        case 0x162b78u: goto label_162b78;
        case 0x162b7cu: goto label_162b7c;
        case 0x162b80u: goto label_162b80;
        case 0x162b84u: goto label_162b84;
        case 0x162b88u: goto label_162b88;
        case 0x162b8cu: goto label_162b8c;
        case 0x162b90u: goto label_162b90;
        case 0x162b94u: goto label_162b94;
        case 0x162b98u: goto label_162b98;
        case 0x162b9cu: goto label_162b9c;
        case 0x162ba0u: goto label_162ba0;
        case 0x162ba4u: goto label_162ba4;
        case 0x162ba8u: goto label_162ba8;
        case 0x162bacu: goto label_162bac;
        case 0x162bb0u: goto label_162bb0;
        case 0x162bb4u: goto label_162bb4;
        case 0x162bb8u: goto label_162bb8;
        case 0x162bbcu: goto label_162bbc;
        case 0x162bc0u: goto label_162bc0;
        case 0x162bc4u: goto label_162bc4;
        case 0x162bc8u: goto label_162bc8;
        case 0x162bccu: goto label_162bcc;
        case 0x162bd0u: goto label_162bd0;
        case 0x162bd4u: goto label_162bd4;
        case 0x162bd8u: goto label_162bd8;
        case 0x162bdcu: goto label_162bdc;
        case 0x162be0u: goto label_162be0;
        case 0x162be4u: goto label_162be4;
        case 0x162be8u: goto label_162be8;
        case 0x162becu: goto label_162bec;
        case 0x162bf0u: goto label_162bf0;
        case 0x162bf4u: goto label_162bf4;
        case 0x162bf8u: goto label_162bf8;
        case 0x162bfcu: goto label_162bfc;
        case 0x162c00u: goto label_162c00;
        case 0x162c04u: goto label_162c04;
        case 0x162c08u: goto label_162c08;
        case 0x162c0cu: goto label_162c0c;
        case 0x162c10u: goto label_162c10;
        default: break;
    }

    ctx->pc = 0x162a90u;

label_162a90:
    // 0x162a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_162a94:
    // 0x162a94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x162a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_162a98:
    // 0x162a98: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x162a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_162a9c:
    // 0x162a9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x162a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_162aa0:
    // 0x162aa0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x162aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_162aa4:
    // 0x162aa4: 0xc46c1568  lwc1        $f12, 0x1568($v1)
    ctx->pc = 0x162aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_162aa8:
    // 0x162aa8: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x162aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_162aac:
    // 0x162aac: 0xc058f20  jal         func_163C80
label_162ab0:
    if (ctx->pc == 0x162AB0u) {
        ctx->pc = 0x162AB4u;
        goto label_162ab4;
    }
    ctx->pc = 0x162AACu;
    SET_GPR_U32(ctx, 31, 0x162AB4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x162AACu, 0x162AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162AB4u;
label_162ab4:
    // 0x162ab4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_162ab8:
    // 0x162ab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x162ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_162abc:
    // 0x162abc: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x162abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_162ac0:
    // 0x162ac0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x162ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_162ac4:
    // 0x162ac4: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x162ac4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_162ac8:
    // 0x162ac8: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_162acc:
    if (ctx->pc == 0x162ACCu) {
        ctx->pc = 0x162AD0u;
        goto label_162ad0;
    }
    ctx->pc = 0x162AC8u;
    {
        const bool branch_taken_0x162ac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x162ac8) {
            ctx->pc = 0x162B90u;
            goto label_162b90;
        }
    }
    ctx->pc = 0x162AD0u;
label_162ad0:
    // 0x162ad0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x162ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_162ad4:
    // 0x162ad4: 0x2443ea70  addiu       $v1, $v0, -0x1590
    ctx->pc = 0x162ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961776));
label_162ad8:
    // 0x162ad8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x162ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_162adc:
    // 0x162adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_162ae0:
    // 0x162ae0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_162ae4:
    // 0x162ae4: 0x400008  jr          $v0
label_162ae8:
    if (ctx->pc == 0x162AE8u) {
        ctx->pc = 0x162AECu;
        goto label_162aec;
    }
    ctx->pc = 0x162AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162AE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x162AECu;
label_162aec:
    // 0x162aec: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162af0:
    // 0x162af0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x162af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_162af4:
    // 0x162af4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162af8:
    // 0x162af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162afc:
    // 0x162afc: 0x0  nop
    ctx->pc = 0x162afcu;
    // NOP
label_162b00:
    // 0x162b00: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x162b00u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_162b04:
    // 0x162b04: 0xc058fec  jal         func_163FB0
label_162b08:
    if (ctx->pc == 0x162B08u) {
        ctx->pc = 0x162B0Cu;
        goto label_162b0c;
    }
    ctx->pc = 0x162B04u;
    SET_GPR_U32(ctx, 31, 0x162B0Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x162B04u, 0x162B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B0Cu;
label_162b0c:
    // 0x162b0c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_162b10:
    // 0x162b10: 0x1000001f  b           . + 4 + (0x1F << 2)
label_162b14:
    if (ctx->pc == 0x162B14u) {
        ctx->pc = 0x162B18u;
        goto label_162b18;
    }
    ctx->pc = 0x162B10u;
    {
        const bool branch_taken_0x162b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162b10) {
            ctx->pc = 0x162B90u;
            goto label_162b90;
        }
    }
    ctx->pc = 0x162B18u;
label_162b18:
    // 0x162b18: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162b1c:
    // 0x162b1c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x162b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_162b20:
    // 0x162b20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162b24:
    // 0x162b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162b28:
    // 0x162b28: 0x0  nop
    ctx->pc = 0x162b28u;
    // NOP
label_162b2c:
    // 0x162b2c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x162b2cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_162b30:
    // 0x162b30: 0xc058fec  jal         func_163FB0
label_162b34:
    if (ctx->pc == 0x162B34u) {
        ctx->pc = 0x162B38u;
        goto label_162b38;
    }
    ctx->pc = 0x162B30u;
    SET_GPR_U32(ctx, 31, 0x162B38u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x162B30u, 0x162B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B38u;
label_162b38:
    // 0x162b38: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_162b3c:
    // 0x162b3c: 0x10000014  b           . + 4 + (0x14 << 2)
label_162b40:
    if (ctx->pc == 0x162B40u) {
        ctx->pc = 0x162B44u;
        goto label_162b44;
    }
    ctx->pc = 0x162B3Cu;
    {
        const bool branch_taken_0x162b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162b3c) {
            ctx->pc = 0x162B90u;
            goto label_162b90;
        }
    }
    ctx->pc = 0x162B44u;
label_162b44:
    // 0x162b44: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x162b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_162b48:
    // 0x162b48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162b4c:
    // 0x162b4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162b50:
    // 0x162b50: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x162b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162b54:
    // 0x162b54: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x162b54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_162b58:
    // 0x162b58: 0xc058fec  jal         func_163FB0
label_162b5c:
    if (ctx->pc == 0x162B5Cu) {
        ctx->pc = 0x162B60u;
        goto label_162b60;
    }
    ctx->pc = 0x162B58u;
    SET_GPR_U32(ctx, 31, 0x162B60u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x162B58u, 0x162B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B60u;
label_162b60:
    // 0x162b60: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_162b64:
    // 0x162b64: 0x1000000a  b           . + 4 + (0xA << 2)
label_162b68:
    if (ctx->pc == 0x162B68u) {
        ctx->pc = 0x162B6Cu;
        goto label_162b6c;
    }
    ctx->pc = 0x162B64u;
    {
        const bool branch_taken_0x162b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162b64) {
            ctx->pc = 0x162B90u;
            goto label_162b90;
        }
    }
    ctx->pc = 0x162B6Cu;
label_162b6c:
    // 0x162b6c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162b70:
    // 0x162b70: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x162b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_162b74:
    // 0x162b74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162b78:
    // 0x162b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162b7c:
    // 0x162b7c: 0x0  nop
    ctx->pc = 0x162b7cu;
    // NOP
label_162b80:
    // 0x162b80: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x162b80u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_162b84:
    // 0x162b84: 0xc058fec  jal         func_163FB0
label_162b88:
    if (ctx->pc == 0x162B88u) {
        ctx->pc = 0x162B8Cu;
        goto label_162b8c;
    }
    ctx->pc = 0x162B84u;
    SET_GPR_U32(ctx, 31, 0x162B8Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x162B84u, 0x162B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B8Cu;
label_162b8c:
    // 0x162b8c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_162b90:
    // 0x162b90: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162b94:
    // 0x162b94: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_162b98:
    // 0x162b98: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162b9c:
    // 0x162b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162ba0:
    // 0x162ba0: 0x0  nop
    ctx->pc = 0x162ba0u;
    // NOP
label_162ba4:
    // 0x162ba4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162ba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162ba8:
    // 0x162ba8: 0x0  nop
    ctx->pc = 0x162ba8u;
    // NOP
label_162bac:
    // 0x162bac: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_162bb0:
    if (ctx->pc == 0x162BB0u) {
        ctx->pc = 0x162BB4u;
        goto label_162bb4;
    }
    ctx->pc = 0x162BACu;
    {
        const bool branch_taken_0x162bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162bac) {
            ctx->pc = 0x162BC8u;
            goto label_162bc8;
        }
    }
    ctx->pc = 0x162BB4u;
label_162bb4:
    // 0x162bb4: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_162bb8:
    // 0x162bb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162bbc:
    // 0x162bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162bc0:
    // 0x162bc0: 0x0  nop
    ctx->pc = 0x162bc0u;
    // NOP
label_162bc4:
    // 0x162bc4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_162bc8:
    // 0x162bc8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162bcc:
    // 0x162bcc: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x162bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
label_162bd0:
    // 0x162bd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162bd4:
    // 0x162bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162bd8:
    // 0x162bd8: 0x0  nop
    ctx->pc = 0x162bd8u;
    // NOP
label_162bdc:
    // 0x162bdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_162be0:
    // 0x162be0: 0x0  nop
    ctx->pc = 0x162be0u;
    // NOP
label_162be4:
    // 0x162be4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_162be8:
    if (ctx->pc == 0x162BE8u) {
        ctx->pc = 0x162BECu;
        goto label_162bec;
    }
    ctx->pc = 0x162BE4u;
    {
        const bool branch_taken_0x162be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162be4) {
            ctx->pc = 0x162C00u;
            goto label_162c00;
        }
    }
    ctx->pc = 0x162BECu;
label_162bec:
    // 0x162bec: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x162becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
label_162bf0:
    // 0x162bf0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_162bf4:
    // 0x162bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162bf8:
    // 0x162bf8: 0x0  nop
    ctx->pc = 0x162bf8u;
    // NOP
label_162bfc:
    // 0x162bfc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_162c00:
    // 0x162c00: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x162c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162c04:
    // 0x162c04: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x162c04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_162c08:
    // 0x162c08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x162c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_162c0c:
    // 0x162c0c: 0x3e00008  jr          $ra
label_162c10:
    if (ctx->pc == 0x162C10u) {
        ctx->pc = 0x162C14u;
        goto label_fallthrough_0x162c0c;
    }
    ctx->pc = 0x162C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x162c0c:
    ctx->pc = 0x162C14u;
}
