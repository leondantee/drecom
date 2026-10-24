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

// Function: Em01s_R1_up
// Address: 0x308a90 - 0x308c28
void Em01s_R1_up_0x308a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R1_up_0x308a90");
#endif

    switch (ctx->pc) {
        case 0x308ae4u: goto label_308ae4;
        case 0x308b28u: goto label_308b28;
        case 0x308b34u: goto label_308b34;
        case 0x308bccu: goto label_308bcc;
        case 0x308bd8u: goto label_308bd8;
        default: break;
    }

    ctx->pc = 0x308a90u;

    // 0x308a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308a94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x308a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x308a98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x308a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x308a9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308aa0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x308aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x308aa4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x308aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x308aa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308aac: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x308AACu;
    {
        const bool branch_taken_0x308aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x308aac) {
            ctx->pc = 0x308B08u;
            goto label_308b08;
        }
    }
    ctx->pc = 0x308AB4u;
    // 0x308ab4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308AB4u;
    {
        const bool branch_taken_0x308ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308ab4) {
            ctx->pc = 0x308AC4u;
            goto label_308ac4;
        }
    }
    ctx->pc = 0x308ABCu;
    // 0x308abc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x308ABCu;
    {
        const bool branch_taken_0x308abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308abc) {
            ctx->pc = 0x308C18u;
            goto label_308c18;
        }
    }
    ctx->pc = 0x308AC4u;
label_308ac4:
    // 0x308ac4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ac8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308acc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x308accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x308ad0: 0x24062835  addiu       $a2, $zero, 0x2835
    ctx->pc = 0x308ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10293));
    // 0x308ad4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x308ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308ad8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x308ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x308adc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x308ADCu;
    SET_GPR_U32(ctx, 31, 0x308AE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x308ADCu, 0x308AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308AE4u;
label_308ae4:
    // 0x308ae4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ae8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x308ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x308aec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x308aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308af0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308af4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x308af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x308af8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308afc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x308afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x308b00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x308b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x308b04: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x308b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_308b08:
    // 0x308b08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b0c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x308b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x308b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x308b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x308b14: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x308b14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x308b18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x308b1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x308b20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x308B20u;
    SET_GPR_U32(ctx, 31, 0x308B28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x308B20u, 0x308B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B28u;
label_308b28:
    // 0x308b28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b2c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x308B2Cu;
    SET_GPR_U32(ctx, 31, 0x308B34u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x308B2Cu, 0x308B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B34u;
label_308b34:
    // 0x308b34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b38: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x308b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x308b3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x308b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x308b40: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x308b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x308b44: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x308B44u;
    {
        const bool branch_taken_0x308b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308b44) {
            ctx->pc = 0x308BBCu;
            goto label_308bbc;
        }
    }
    ctx->pc = 0x308B4Cu;
    // 0x308b4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b50: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x308b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308b54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b58: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x308b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308b5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x308b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x308b60: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x308b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x308b64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b68: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x308b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x308b6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x308b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x308b70: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x308b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x308b74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x308B74u;
    {
        const bool branch_taken_0x308b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308b74) {
            ctx->pc = 0x308BA0u;
            goto label_308ba0;
        }
    }
    ctx->pc = 0x308B7Cu;
    // 0x308b7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b80: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x308b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308b84: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x308b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x308b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308b8c: 0x0  nop
    ctx->pc = 0x308b8cu;
    // NOP
    // 0x308b90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x308b90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x308b94: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x308b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x308b98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x308B98u;
    {
        const bool branch_taken_0x308b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308b98) {
            ctx->pc = 0x308BBCu;
            goto label_308bbc;
        }
    }
    ctx->pc = 0x308BA0u;
label_308ba0:
    // 0x308ba0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ba4: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x308ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308ba8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x308ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x308bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308bb0: 0x0  nop
    ctx->pc = 0x308bb0u;
    // NOP
    // 0x308bb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x308bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x308bb8: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x308bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_308bbc:
    // 0x308bbc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308bc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x308bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x308bc4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x308BC4u;
    SET_GPR_U32(ctx, 31, 0x308BCCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x308BC4u, 0x308BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BCCu;
label_308bcc:
    // 0x308bcc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308bd0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x308BD0u;
    SET_GPR_U32(ctx, 31, 0x308BD8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x308BD0u, 0x308BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BD8u;
label_308bd8:
    // 0x308bd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308bdc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x308bdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x308be0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x308BE0u;
    {
        const bool branch_taken_0x308be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308be0) {
            ctx->pc = 0x308C18u;
            goto label_308c18;
        }
    }
    ctx->pc = 0x308BE8u;
    // 0x308be8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308bec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308bf0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308bf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308bf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308bfc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x308c00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c04: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308c04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308c08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308c10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_308c18:
    // 0x308c18: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x308c18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308c1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x308c1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x308c20: 0x3e00008  jr          $ra
    ctx->pc = 0x308C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308C28u;
}
