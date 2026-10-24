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

// Function: entry_0026af84
// Address: 0x26af84 - 0x26b1d0
void entry_0026af84_0x26af84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026af84_0x26af84");
#endif

    switch (ctx->pc) {
        case 0x26afb0u: goto label_26afb0;
        case 0x26b01cu: goto label_26b01c;
        case 0x26b05cu: goto label_26b05c;
        case 0x26b09cu: goto label_26b09c;
        case 0x26b0f4u: goto label_26b0f4;
        case 0x26b134u: goto label_26b134;
        case 0x26b174u: goto label_26b174;
        default: break;
    }

    ctx->pc = 0x26af84u;

label_26af84:
    // 0x26af84: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26af84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26af88:
    // 0x26af88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26af8c:
    // 0x26af8c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x26af8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_26af90:
    // 0x26af90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26af90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26af94:
    // 0x26af94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26af94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26af98:
    // 0x26af98: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26af98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_26af9c:
    // 0x26af9c: 0x2442be50  addiu       $v0, $v0, -0x41B0
    ctx->pc = 0x26af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
label_26afa0:
    // 0x26afa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26afa4:
    // 0x26afa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26afa8:
    // 0x26afa8: 0x40f809  jalr        $v0
label_26afac:
    if (ctx->pc == 0x26AFACu) {
        ctx->pc = 0x26AFB0u;
        goto label_26afb0;
    }
    ctx->pc = 0x26AFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AFB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AFA8u, 0x26AFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AFB0u;
label_26afb0:
    // 0x26afb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26afb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26afb4:
    // 0x26afb4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x26afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_26afb8:
    // 0x26afb8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x26afb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_26afbc:
    // 0x26afbc: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
label_26afc0:
    if (ctx->pc == 0x26AFC0u) {
        ctx->pc = 0x26AFC4u;
        goto label_26afc4;
    }
    ctx->pc = 0x26AFBCu;
    {
        const bool branch_taken_0x26afbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26afbc) {
            ctx->pc = 0x26B2C0u;
            return;
        }
    }
    ctx->pc = 0x26AFC4u;
label_26afc4:
    // 0x26afc4: 0x3c02413b  lui         $v0, 0x413B
    ctx->pc = 0x26afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16699 << 16));
label_26afc8:
    // 0x26afc8: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x26afc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
label_26afcc:
    // 0x26afcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26afccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26afd0:
    // 0x26afd0: 0x0  nop
    ctx->pc = 0x26afd0u;
    // NOP
label_26afd4:
    // 0x26afd4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26afd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_26afd8:
    // 0x26afd8: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x26afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
label_26afdc:
    // 0x26afdc: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x26afdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
label_26afe0:
    // 0x26afe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26afe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26afe4:
    // 0x26afe4: 0x0  nop
    ctx->pc = 0x26afe4u;
    // NOP
label_26afe8:
    // 0x26afe8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26afe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_26afec:
    // 0x26afec: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x26afecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_26aff0:
    // 0x26aff0: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x26aff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
label_26aff4:
    // 0x26aff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26aff8:
    // 0x26aff8: 0x0  nop
    ctx->pc = 0x26aff8u;
    // NOP
label_26affc:
    // 0x26affc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x26affcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_26b000:
    // 0x26b000: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26b000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_26b004:
    // 0x26b004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b008:
    // 0x26b008: 0x0  nop
    ctx->pc = 0x26b008u;
    // NOP
label_26b00c:
    // 0x26b00c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_26b010:
    // 0x26b010: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26b010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b014:
    // 0x26b014: 0xc0675a4  jal         func_19D690
label_26b018:
    if (ctx->pc == 0x26B018u) {
        ctx->pc = 0x26B01Cu;
        goto label_26b01c;
    }
    ctx->pc = 0x26B014u;
    SET_GPR_U32(ctx, 31, 0x26B01Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B014u, 0x26B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B01Cu;
label_26b01c:
    // 0x26b01c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b020:
    // 0x26b020: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x26b020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_26b024:
    // 0x26b024: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b028:
    // 0x26b028: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b02c:
    // 0x26b02c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b030:
    // 0x26b030: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b034:
    // 0x26b034: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26b034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26b038:
    // 0x26b038: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26b038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26b03c:
    // 0x26b03c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x26b03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_26b040:
    // 0x26b040: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26b040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26b044:
    // 0x26b044: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x26b044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26b048:
    // 0x26b048: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x26b048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b04c:
    // 0x26b04c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26b04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b050:
    // 0x26b050: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x26b050u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b054:
    // 0x26b054: 0xc0862f8  jal         func_218BE0
label_26b058:
    if (ctx->pc == 0x26B058u) {
        ctx->pc = 0x26B05Cu;
        goto label_26b05c;
    }
    ctx->pc = 0x26B054u;
    SET_GPR_U32(ctx, 31, 0x26B05Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x26B054u, 0x26B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B05Cu;
label_26b05c:
    // 0x26b05c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b060:
    // 0x26b060: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x26b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_26b064:
    // 0x26b064: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b068:
    // 0x26b068: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b06c:
    // 0x26b06c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b070:
    // 0x26b070: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b074:
    // 0x26b074: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26b074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26b078:
    // 0x26b078: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26b078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26b07c:
    // 0x26b07c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x26b07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_26b080:
    // 0x26b080: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26b080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26b084:
    // 0x26b084: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x26b084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26b088:
    // 0x26b088: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x26b088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b08c:
    // 0x26b08c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26b08cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b090:
    // 0x26b090: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x26b090u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b094:
    // 0x26b094: 0xc0862f8  jal         func_218BE0
label_26b098:
    if (ctx->pc == 0x26B098u) {
        ctx->pc = 0x26B09Cu;
        goto label_26b09c;
    }
    ctx->pc = 0x26B094u;
    SET_GPR_U32(ctx, 31, 0x26B09Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x26B094u, 0x26B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B09Cu;
label_26b09c:
    // 0x26b09c: 0x3c02c13b  lui         $v0, 0xC13B
    ctx->pc = 0x26b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49467 << 16));
label_26b0a0:
    // 0x26b0a0: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x26b0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
label_26b0a4:
    // 0x26b0a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b0a8:
    // 0x26b0a8: 0x0  nop
    ctx->pc = 0x26b0a8u;
    // NOP
label_26b0ac:
    // 0x26b0ac: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26b0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_26b0b0:
    // 0x26b0b0: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x26b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
label_26b0b4:
    // 0x26b0b4: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x26b0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
label_26b0b8:
    // 0x26b0b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b0bc:
    // 0x26b0bc: 0x0  nop
    ctx->pc = 0x26b0bcu;
    // NOP
label_26b0c0:
    // 0x26b0c0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26b0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_26b0c4:
    // 0x26b0c4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x26b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_26b0c8:
    // 0x26b0c8: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x26b0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
label_26b0cc:
    // 0x26b0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b0d0:
    // 0x26b0d0: 0x0  nop
    ctx->pc = 0x26b0d0u;
    // NOP
label_26b0d4:
    // 0x26b0d4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x26b0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_26b0d8:
    // 0x26b0d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_26b0dc:
    // 0x26b0dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b0e0:
    // 0x26b0e0: 0x0  nop
    ctx->pc = 0x26b0e0u;
    // NOP
label_26b0e4:
    // 0x26b0e4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_26b0e8:
    // 0x26b0e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b0ec:
    // 0x26b0ec: 0xc0675a4  jal         func_19D690
label_26b0f0:
    if (ctx->pc == 0x26B0F0u) {
        ctx->pc = 0x26B0F4u;
        goto label_26b0f4;
    }
    ctx->pc = 0x26B0ECu;
    SET_GPR_U32(ctx, 31, 0x26B0F4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B0ECu, 0x26B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0F4u;
label_26b0f4:
    // 0x26b0f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b0f8:
    // 0x26b0f8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x26b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_26b0fc:
    // 0x26b0fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b100:
    // 0x26b100: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b104:
    // 0x26b104: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b108:
    // 0x26b108: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b10c:
    // 0x26b10c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26b10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26b110:
    // 0x26b110: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26b110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26b114:
    // 0x26b114: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x26b114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_26b118:
    // 0x26b118: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26b118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26b11c:
    // 0x26b11c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x26b11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26b120:
    // 0x26b120: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x26b120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b124:
    // 0x26b124: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26b124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b128:
    // 0x26b128: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x26b128u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b12c:
    // 0x26b12c: 0xc0862f8  jal         func_218BE0
label_26b130:
    if (ctx->pc == 0x26B130u) {
        ctx->pc = 0x26B134u;
        goto label_26b134;
    }
    ctx->pc = 0x26B12Cu;
    SET_GPR_U32(ctx, 31, 0x26B134u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x26B12Cu, 0x26B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B134u;
label_26b134:
    // 0x26b134: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26b134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b138:
    // 0x26b138: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x26b138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_26b13c:
    // 0x26b13c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b140:
    // 0x26b140: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b144:
    // 0x26b144: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b148:
    // 0x26b148: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x26b148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_26b14c:
    // 0x26b14c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26b14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26b150:
    // 0x26b150: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26b150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26b154:
    // 0x26b154: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x26b154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_26b158:
    // 0x26b158: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26b15c:
    // 0x26b15c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x26b15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26b160:
    // 0x26b160: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x26b160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b164:
    // 0x26b164: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26b164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b168:
    // 0x26b168: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x26b168u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b16c:
    // 0x26b16c: 0xc0862f8  jal         func_218BE0
label_26b170:
    if (ctx->pc == 0x26B170u) {
        ctx->pc = 0x26B174u;
        goto label_26b174;
    }
    ctx->pc = 0x26B16Cu;
    SET_GPR_U32(ctx, 31, 0x26B174u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x26B16Cu, 0x26B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B174u;
label_26b174:
    // 0x26b174: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26b174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b178:
    // 0x26b178: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x26b178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
label_26b17c:
    // 0x26b17c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26b17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_26b180:
    // 0x26b180: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26b180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_26b184:
    // 0x26b184: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x26b184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_26b188:
    // 0x26b188: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_26b18c:
    if (ctx->pc == 0x26B18Cu) {
        ctx->pc = 0x26B190u;
        goto label_26b190;
    }
    ctx->pc = 0x26B188u;
    {
        const bool branch_taken_0x26b188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b188) {
            ctx->pc = 0x26B1D0u;
            return;
        }
    }
    ctx->pc = 0x26B190u;
label_26b190:
    // 0x26b190: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26b190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26b194:
    // 0x26b194: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x26b194u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
label_26b198:
    // 0x26b198: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26b198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_26b19c:
    // 0x26b19c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26b19cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_26b1a0:
    // 0x26b1a0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26b1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_26b1a4:
    // 0x26b1a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b1a8:
    // 0x26b1a8: 0x0  nop
    ctx->pc = 0x26b1a8u;
    // NOP
label_26b1ac:
    // 0x26b1ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x26b1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_26b1b0:
    // 0x26b1b0: 0x3c023fcb  lui         $v0, 0x3FCB
    ctx->pc = 0x26b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16331 << 16));
label_26b1b4:
    // 0x26b1b4: 0x34422cb4  ori         $v0, $v0, 0x2CB4
    ctx->pc = 0x26b1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11444);
label_26b1b8:
    // 0x26b1b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b1bc:
    // 0x26b1bc: 0x0  nop
    ctx->pc = 0x26b1bcu;
    // NOP
label_26b1c0:
    // 0x26b1c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26b1c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_26b1c4:
    // 0x26b1c4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26b1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26b1c8:
    // 0x26b1c8: 0x10000011  b           . + 4 + (0x11 << 2)
label_26b1cc:
    if (ctx->pc == 0x26B1CCu) {
        ctx->pc = 0x26B1D0u;
        goto label_fallthrough_0x26b1c8;
    }
    ctx->pc = 0x26B1C8u;
    {
        const bool branch_taken_0x26b1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b1c8) {
            ctx->pc = 0x26B210u;
            return;
        }
    }
label_fallthrough_0x26b1c8:
    ctx->pc = 0x26B1D0u;
}
