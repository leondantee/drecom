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

// Function: entry_00289ef0
// Address: 0x289ef0 - 0x28a020
void entry_00289ef0_0x289ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289ef0_0x289ef0");
#endif

    switch (ctx->pc) {
        case 0x289f74u: goto label_289f74;
        case 0x289fecu: goto label_289fec;
        default: break;
    }

    ctx->pc = 0x289ef0u;

    // 0x289ef0: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x289ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x289ef4: 0x24867000  addiu       $a2, $a0, 0x7000
    ctx->pc = 0x289ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x289ef8: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x289ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x289efc: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x289efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x289f00: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x289f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x289f04: 0x43400  sll         $a2, $a0, 16
    ctx->pc = 0x289f04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x289f08: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x289f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x289f0c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x289f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x289f10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x289f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x289f14: 0x3407fff9  ori         $a3, $zero, 0xFFF9
    ctx->pc = 0x289f14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x289f18: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x289f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x289f1c: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x289f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x289f20: 0x153100  sll         $a2, $s5, 4
    ctx->pc = 0x289f20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x289f24: 0x24c47000  addiu       $a0, $a2, 0x7000
    ctx->pc = 0x289f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x289f28: 0x3089ffff  andi        $t1, $a0, 0xFFFF
    ctx->pc = 0x289f28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x289f2c: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x289f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x289f30: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x289f30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x289f34: 0x24877900  addiu       $a3, $a0, 0x7900
    ctx->pc = 0x289f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x289f38: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x289f38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x289f3c: 0x1253025  or          $a2, $t1, $a1
    ctx->pc = 0x289f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x289f40: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x289f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x289f44: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x289f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x289f48: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x289f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x289f4c: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x289f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x289f50: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x289f50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x289f54: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x289f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x289f58: 0x246ae690  addiu       $t2, $v1, -0x1970
    ctx->pc = 0x289f58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960784));
    // 0x289f5c: 0xae0a0008  sw          $t2, 0x8($s0)
    ctx->pc = 0x289f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 10));
    // 0x289f60: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x289f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x289f64: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x289f64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289f68: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x289f68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x289f6c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x289F6Cu;
    SET_GPR_U32(ctx, 31, 0x289F74u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x289F6Cu, 0x289F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F74u;
label_289f74:
    // 0x289f74: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x289f74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x289f78: 0xae8b0000  sw          $t3, 0x0($s4)
    ctx->pc = 0x289f78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 11));
    // 0x289f7c: 0x3c090400  lui         $t1, 0x400
    ctx->pc = 0x289f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1024 << 16));
    // 0x289f80: 0x35251009  ori         $a1, $t1, 0x1009
    ctx->pc = 0x289f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4105);
    // 0x289f84: 0xae850004  sw          $a1, 0x4($s4)
    ctx->pc = 0x289f84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 5));
    // 0x289f88: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x289f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289f8c: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x289f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x289f90: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x289f90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x289f94: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x289f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
    // 0x289f98: 0x3446000a  ori         $a2, $v0, 0xA
    ctx->pc = 0x289f98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x289f9c: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x289f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x289fa0: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x289fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x289fa4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x289fa4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x289fa8: 0x32bb8  dsll        $a1, $v1, 14
    ctx->pc = 0x289fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 14);
    // 0x289fac: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x289facu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x289fb0: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x289fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289fb4: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x289fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x289fb8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x289fb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x289fbc: 0x34e38  dsll        $t1, $v1, 24
    ctx->pc = 0x289fbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << 24);
    // 0x289fc0: 0x1262025  or          $a0, $t1, $a2
    ctx->pc = 0x289fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x289fc4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x289fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x289fc8: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x289fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x289fcc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x289fccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x289fd0: 0x538bc  dsll32      $a3, $a1, 2
    ctx->pc = 0x289fd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 2));
    // 0x289fd4: 0xe41825  or          $v1, $a3, $a0
    ctx->pc = 0x289fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x289fd8: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x289fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x289fdc: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x289fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x289fe0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x289fe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x289fe4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x289FE4u;
    SET_GPR_U32(ctx, 31, 0x289FECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x289FE4u, 0x289FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FECu;
label_289fec:
    // 0x289fec: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x289fecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289ff0: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x289ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x289ff4: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x289ff4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x289ff8: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x289ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x289ffc: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x289ffcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a000: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x28a000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x28a004: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x28a004u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a008: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x28a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a00c: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x28a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x28a010: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x28a010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x28a014: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x28a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28a018: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x28a018u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a01c: 0x0  nop
    ctx->pc = 0x28a01cu;
    // NOP
    ctx->pc = 0x28a020u;
}
