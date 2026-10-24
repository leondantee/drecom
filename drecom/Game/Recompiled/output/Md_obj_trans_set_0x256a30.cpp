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

// Function: Md_obj_trans_set
// Address: 0x256a30 - 0x256ce4
void Md_obj_trans_set_0x256a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_obj_trans_set_0x256a30");
#endif

    switch (ctx->pc) {
        case 0x256a90u: goto label_256a90;
        case 0x256b20u: goto label_256b20;
        default: break;
    }

    ctx->pc = 0x256a30u;

    // 0x256a30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x256a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x256a34: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x256a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x256a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x256a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x256a3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x256a40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256a44: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x256a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x256a48: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x256a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x256a4c: 0xa3a60078  sb          $a2, 0x78($sp)
    ctx->pc = 0x256a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 6));
    // 0x256a50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x256a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x256a54: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x256a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x256a58: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x256a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x256a5c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x256a5cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38B840u));
    // 0x256a60: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x256a60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x256a64: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x256a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x256a68: 0x2442b850  addiu       $v0, $v0, -0x47B0
    ctx->pc = 0x256a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948944));
    // 0x256a6c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x256a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x256a70: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x256a70u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38B850u));
    // 0x256a74: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x256a74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x256a78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x256a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x256a7c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256a80: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x256a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x256a84: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x256a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x256a88: 0xc095bac  jal         func_256EB0
    ctx->pc = 0x256A88u;
    SET_GPR_U32(ctx, 31, 0x256A90u);
    ctx->pc = 0x256EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256EB0u, 0x256A88u, 0x256A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A90u;
label_256a90:
    // 0x256a90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x256a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x256a94: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x256a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x256a98: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x256a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x256a9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256aa0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x256aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256aa4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256aa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256aac: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x256aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x256ab0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256ab4: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x256ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x256ab8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256abc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x256abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x256ac0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x256ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x256ac4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256ac8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x256ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x256acc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x256accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256ad0: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x256ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x256ad4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x256ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256ad8: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x256ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x256adc: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x256adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x256ae0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256ae4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x256ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256ae8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256aec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256af0: 0xac4400e8  sw          $a0, 0xE8($v0)
    ctx->pc = 0x256af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 4));
    // 0x256af4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256af8: 0xac4400e4  sw          $a0, 0xE4($v0)
    ctx->pc = 0x256af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 4));
    // 0x256afc: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x256afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x256b00: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256b04: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x256b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x256b08: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x256b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x256b0c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256b10: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x256b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x256b14: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x256b14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x256b18: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x256B18u;
    {
        const bool branch_taken_0x256b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b18) {
            ctx->pc = 0x256B68u;
            goto label_256b68;
        }
    }
    ctx->pc = 0x256B20u;
label_256b20:
    // 0x256b20: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256b24: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x256b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x256b28: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x256b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x256b2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x256b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256b30: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x256b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x256b34: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x256b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x256b38: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x256b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x256b3c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256b40: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x256b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x256b44: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x256b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256b48: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x256b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x256b4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x256b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256b50: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256b54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256b58: 0xac4400f0  sw          $a0, 0xF0($v0)
    ctx->pc = 0x256b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 4));
    // 0x256b5c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x256b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x256b60: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x256b60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x256b64: 0x0  nop
    ctx->pc = 0x256b64u;
    // NOP
label_256b68:
    // 0x256b68: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x256b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x256b6c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x256b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x256b70: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x256B70u;
    {
        const bool branch_taken_0x256b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256b70) {
            ctx->pc = 0x256B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256b20;
        }
    }
    ctx->pc = 0x256B78u;
    // 0x256b78: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256b7c: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x256b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x256b80: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x256b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x256b84: 0x2442e380  addiu       $v0, $v0, -0x1C80
    ctx->pc = 0x256b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960000));
    // 0x256b88: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x256b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x256b8c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x256b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x256b90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256b94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x256b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x256b98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x256b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256b9c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x256b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x256ba0: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x256ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x256ba4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x256ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256ba8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x256ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x256bac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x256bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x256bb0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x256bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x256bb4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x256bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x256bb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x256bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x256bbc: 0xac20e380  sw          $zero, -0x1C80($at)
    ctx->pc = 0x256bbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E380u, _value); } while (0);
    // 0x256bc0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x256bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x256bc4: 0xac20e384  sw          $zero, -0x1C7C($at)
    ctx->pc = 0x256bc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E384u, _value); } while (0);
    // 0x256bc8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x256bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x256bcc: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x256bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x256bd0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x256bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x256bd4: 0xac22e388  sw          $v0, -0x1C78($at)
    ctx->pc = 0x256bd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E388u, _value); } while (0);
    // 0x256bd8: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x256bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x256bdc: 0x344200b0  ori         $v0, $v0, 0xB0
    ctx->pc = 0x256bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x256be0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x256be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x256be4: 0xac22e38c  sw          $v0, -0x1C74($at)
    ctx->pc = 0x256be4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E38Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E38Cu, _value); } while (0);
    // 0x256be8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x256be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x256bec: 0xac20e200  sw          $zero, -0x1E00($at)
    ctx->pc = 0x256becu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E200u, _value); } while (0);
    // 0x256bf0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x256bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x256bf4: 0xac20e204  sw          $zero, -0x1DFC($at)
    ctx->pc = 0x256bf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E204u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E204u, _value); } while (0);
    // 0x256bf8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x256bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x256bfc: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x256bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x256c00: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x256c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x256c04: 0xac22e208  sw          $v0, -0x1DF8($at)
    ctx->pc = 0x256c04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E208u, _value); } while (0);
    // 0x256c08: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x256c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x256c0c: 0x344200b0  ori         $v0, $v0, 0xB0
    ctx->pc = 0x256c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x256c10: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x256c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x256c14: 0xac22e20c  sw          $v0, -0x1DF4($at)
    ctx->pc = 0x256c14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E20Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E20Cu, _value); } while (0);
    // 0x256c18: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256c1c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x256c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x256c20: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x256c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x256c24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256c28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x256c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256c2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x256c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256c30: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x256c30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x256c34: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x256c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x256c38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x256c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256c3c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256c40: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x256c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x256c44: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x256c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x256c48: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x256c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x256c4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256c50: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x256c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x256c54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256c58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x256c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256c5c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x256c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x256c60: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x256c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x256c64: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256c68: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x256c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x256c6c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x256c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x256c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256c74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x256c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256c78: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x256c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x256c7c: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x256c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x256c80: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x256c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256c84: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x256c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x256c88: 0x12113c  dsll32      $v0, $s2, 4
    ctx->pc = 0x256c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 4));
    // 0x256c8c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x256c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x256c90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256c94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x256c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x256c98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x256c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256c9c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x256c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x256ca0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x256ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x256ca4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x256ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256ca8: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x256ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x256cac: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x256cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x256cb0: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x256cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x256cb4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x256cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x256cb8: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x256cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x256cbc: 0x344200b8  ori         $v0, $v0, 0xB8
    ctx->pc = 0x256cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)184);
    // 0x256cc0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x256cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x256cc4: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x256cc4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x256cc8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x256cc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256ccc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x256cccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256cd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256cd8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x256cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x256cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x256CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256CE4u;
}
