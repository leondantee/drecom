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

// Function: Pl_r1_dp_fireball
// Address: 0x1d0a40 - 0x1d0bfc
void Pl_r1_dp_fireball_0x1d0a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_dp_fireball_0x1d0a40");
#endif

    switch (ctx->pc) {
        case 0x1d0accu: goto label_1d0acc;
        case 0x1d0b00u: goto label_1d0b00;
        case 0x1d0b58u: goto label_1d0b58;
        case 0x1d0b64u: goto label_1d0b64;
        case 0x1d0b74u: goto label_1d0b74;
        case 0x1d0b80u: goto label_1d0b80;
        case 0x1d0b94u: goto label_1d0b94;
        case 0x1d0ba0u: goto label_1d0ba0;
        default: break;
    }

    ctx->pc = 0x1d0a40u;

    // 0x1d0a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d0a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d0a44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1d0a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d0a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0a4c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1d0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1d0a50: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d0a54: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1d0a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d0a58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d0a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d0a5c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1d0a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1d0a60: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1d0a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1d0a64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0A64u;
    {
        const bool branch_taken_0x1d0a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a64) {
            ctx->pc = 0x1D0A78u;
            goto label_1d0a78;
        }
    }
    ctx->pc = 0x1D0A6Cu;
    // 0x1d0a6c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d0a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d0a70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0a74: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1d0a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
label_1d0a78:
    // 0x1d0a78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0a7c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1d0a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d0a80: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d0a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d0a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0a88: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D0A88u;
    {
        const bool branch_taken_0x1d0a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0a88) {
            ctx->pc = 0x1D0ADCu;
            goto label_1d0adc;
        }
    }
    ctx->pc = 0x1D0A90u;
    // 0x1d0a90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0A90u;
    {
        const bool branch_taken_0x1d0a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a90) {
            ctx->pc = 0x1D0AA0u;
            goto label_1d0aa0;
        }
    }
    ctx->pc = 0x1D0A98u;
    // 0x1d0a98: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1D0A98u;
    {
        const bool branch_taken_0x1d0a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a98) {
            ctx->pc = 0x1D0BE8u;
            goto label_1d0be8;
        }
    }
    ctx->pc = 0x1D0AA0u;
label_1d0aa0:
    // 0x1d0aa0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d0aa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0aa8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1d0aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0aac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0ab4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1d0ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1d0ab8: 0x24061e89  addiu       $a2, $zero, 0x1E89
    ctx->pc = 0x1d0ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7817));
    // 0x1d0abc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ac0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1d0ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d0ac4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1D0AC4u;
    SET_GPR_U32(ctx, 31, 0x1D0ACCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1D0AC4u, 0x1D0ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0ACCu;
label_1d0acc:
    // 0x1d0acc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0ad0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1d0ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d0ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d0ad8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1d0ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1d0adc:
    // 0x1d0adc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0ae0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1d0ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1d0ae4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d0ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0ae8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1d0ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1d0aec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0AECu;
    {
        const bool branch_taken_0x1d0aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0aec) {
            ctx->pc = 0x1D0B64u;
            goto label_1d0b64;
        }
    }
    ctx->pc = 0x1D0AF4u;
    // 0x1d0af4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0af8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1D0AF8u;
    SET_GPR_U32(ctx, 31, 0x1D0B00u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1D0AF8u, 0x1D0B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B00u;
label_1d0b00:
    // 0x1d0b00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0b04: 0x904213a5  lbu         $v0, 0x13A5($v0)
    ctx->pc = 0x1d0b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5029)));
    // 0x1d0b08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d0b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0b0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d0b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0b10: 0x34428200  ori         $v0, $v0, 0x8200
    ctx->pc = 0x1d0b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33280);
    // 0x1d0b14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d0b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d0b18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d0b18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d0b1c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1d0b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d0b20: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d0b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0b24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0b28: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1d0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1d0b2c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1d0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1d0b30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d0b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d0b34: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d0b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d0b38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d0b3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d0b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d0b40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d0b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d0b44: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1d0b44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d0b48: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x1d0b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x1d0b4c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d0b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0b50: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1D0B50u;
    SET_GPR_U32(ctx, 31, 0x1D0B58u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1D0B50u, 0x1D0B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B58u;
label_1d0b58:
    // 0x1d0b58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d0b58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d0b5c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1D0B5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0B64u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1D0B5Cu, 0x1D0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B64u;
label_1d0b64:
    // 0x1d0b64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0b68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0b68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0b6c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1D0B6Cu;
    SET_GPR_U32(ctx, 31, 0x1D0B74u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1D0B6Cu, 0x1D0B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B74u;
label_1d0b74:
    // 0x1d0b74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0b78: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1D0B78u;
    SET_GPR_U32(ctx, 31, 0x1D0B80u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1D0B78u, 0x1D0B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B80u;
label_1d0b80:
    // 0x1d0b80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0b84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0b88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0b88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0b8c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1D0B8Cu;
    SET_GPR_U32(ctx, 31, 0x1D0B94u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1D0B8Cu, 0x1D0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B94u;
label_1d0b94:
    // 0x1d0b94: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d0b94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0b98: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1D0B98u;
    SET_GPR_U32(ctx, 31, 0x1D0BA0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1D0B98u, 0x1D0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BA0u;
label_1d0ba0:
    // 0x1d0ba0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0ba4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1d0ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1d0ba8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D0BA8u;
    {
        const bool branch_taken_0x1d0ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0ba8) {
            ctx->pc = 0x1D0BE8u;
            goto label_1d0be8;
        }
    }
    ctx->pc = 0x1D0BB0u;
    // 0x1d0bb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0bb4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1d0bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0bb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0bbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0bc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1d0bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0bc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0bc8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1d0bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0bcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0bd0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1d0bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0bd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0bd8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d0bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0bdc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1d0bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d0be0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0be4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1d0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1d0be8:
    // 0x1d0be8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d0be8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0bf0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d0bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0BFCu;
}
