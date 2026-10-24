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

// Function: Eff_hikari_set
// Address: 0x33da70 - 0x33dbec
void Eff_hikari_set_0x33da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_hikari_set_0x33da70");
#endif

    switch (ctx->pc) {
        case 0x33dadcu: goto label_33dadc;
        case 0x33dae8u: goto label_33dae8;
        case 0x33db2cu: goto label_33db2c;
        case 0x33db38u: goto label_33db38;
        case 0x33db7cu: goto label_33db7c;
        case 0x33db88u: goto label_33db88;
        case 0x33dbccu: goto label_33dbcc;
        case 0x33dbd8u: goto label_33dbd8;
        default: break;
    }

    ctx->pc = 0x33da70u;

    // 0x33da70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33da74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33da74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x33da78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33da78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33da7c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33da80: 0x24505450  addiu       $s0, $v0, 0x5450
    ctx->pc = 0x33da80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21584));
    // 0x33da84: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33da84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33da88: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x33da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x33da8c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x33da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33da90: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x33da90u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3A9F50u));
    // 0x33da94: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33da94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x33da98: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x33da98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x33da9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33da9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33daa0: 0x0  nop
    ctx->pc = 0x33daa0u;
    // NOP
    // 0x33daa4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x33daa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33daa8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895580u));
    // 0x33daac: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x33daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x33dab0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x33dab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33dab4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x33dab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x33dab8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33dab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33dabc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33dabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33dac0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33dac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33dac4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x33dac4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33dac8: 0x24041002  addiu       $a0, $zero, 0x1002
    ctx->pc = 0x33dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x33dacc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33daccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33dad0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33dad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33dad4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x33DAD4u;
    SET_GPR_U32(ctx, 31, 0x33DADCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x33DAD4u, 0x33DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DADCu;
label_33dadc:
    // 0x33dadc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33dadcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33dae0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x33DAE0u;
    SET_GPR_U32(ctx, 31, 0x33DAE8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x33DAE0u, 0x33DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DAE8u;
label_33dae8:
    // 0x33dae8: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x33dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x33daec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33daecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33daf0: 0x0  nop
    ctx->pc = 0x33daf0u;
    // NOP
    // 0x33daf4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x33daf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33daf8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33dafc: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x33dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x33db00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x33db00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33db04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x33db04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x33db08: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33db08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33db0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33db0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33db10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33db10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33db14: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x33db14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33db18: 0x24041002  addiu       $a0, $zero, 0x1002
    ctx->pc = 0x33db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x33db1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33db1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33db20: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33db20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33db24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x33DB24u;
    SET_GPR_U32(ctx, 31, 0x33DB2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x33DB24u, 0x33DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DB2Cu;
label_33db2c:
    // 0x33db2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33db2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33db30: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x33DB30u;
    SET_GPR_U32(ctx, 31, 0x33DB38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x33DB30u, 0x33DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DB38u;
label_33db38:
    // 0x33db38: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x33db38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x33db3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33db3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33db40: 0x0  nop
    ctx->pc = 0x33db40u;
    // NOP
    // 0x33db44: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x33db44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x33db48: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33db4c: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x33db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x33db50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x33db50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33db54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x33db54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x33db58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33db58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33db5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33db5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33db60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33db60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33db64: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x33db64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33db68: 0x24041002  addiu       $a0, $zero, 0x1002
    ctx->pc = 0x33db68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x33db6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33db6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33db70: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33db70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33db74: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x33DB74u;
    SET_GPR_U32(ctx, 31, 0x33DB7Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x33DB74u, 0x33DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DB7Cu;
label_33db7c:
    // 0x33db7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33db7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33db80: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x33DB80u;
    SET_GPR_U32(ctx, 31, 0x33DB88u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x33DB80u, 0x33DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DB88u;
label_33db88:
    // 0x33db88: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x33db88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x33db8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33db8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33db90: 0x0  nop
    ctx->pc = 0x33db90u;
    // NOP
    // 0x33db94: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x33db94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x33db98: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33db9c: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x33db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x33dba0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x33dba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33dba4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x33dba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x33dba8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33dba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33dbac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33dbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33dbb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33dbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33dbb4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x33dbb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33dbb8: 0x24041002  addiu       $a0, $zero, 0x1002
    ctx->pc = 0x33dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x33dbbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33dbbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33dbc0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33dbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33dbc4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x33DBC4u;
    SET_GPR_U32(ctx, 31, 0x33DBCCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x33DBC4u, 0x33DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DBCCu;
label_33dbcc:
    // 0x33dbcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33dbccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33dbd0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x33DBD0u;
    SET_GPR_U32(ctx, 31, 0x33DBD8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x33DBD0u, 0x33DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DBD8u;
label_33dbd8:
    // 0x33dbd8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33dbd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33dbdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33dbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33dbe0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33dbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33dbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x33DBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DBECu;
}
