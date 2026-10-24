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

// Function: entry_00288dc8
// Address: 0x288dc8 - 0x2891e8
void entry_00288dc8_0x288dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00288dc8_0x288dc8");
#endif

    switch (ctx->pc) {
        case 0x288ea8u: goto label_288ea8;
        case 0x288f30u: goto label_288f30;
        case 0x288f98u: goto label_288f98;
        case 0x2890d4u: goto label_2890d4;
        case 0x289114u: goto label_289114;
        case 0x289140u: goto label_289140;
        case 0x289170u: goto label_289170;
        default: break;
    }

    ctx->pc = 0x288dc8u;

    // 0x288dc8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x288dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288dcc: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x288dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x288dd0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x288dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288dd4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x288dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x288dd8: 0x43400  sll         $a2, $a0, 16
    ctx->pc = 0x288dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x288ddc: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x288ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x288de0: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x288de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x288de4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x288de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x288de8: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x288de8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288dec: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x288decu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x288df0: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x288df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288df4: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x288df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x288df8: 0x44c00  sll         $t1, $a0, 16
    ctx->pc = 0x288df8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x288dfc: 0xa94025  or          $t0, $a1, $t1
    ctx->pc = 0x288dfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x288e00: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x288e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x288e04: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x288e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x288e08: 0x133900  sll         $a3, $s3, 4
    ctx->pc = 0x288e08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x288e0c: 0x24e57000  addiu       $a1, $a3, 0x7000
    ctx->pc = 0x288e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 28672));
    // 0x288e10: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x288e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x288e14: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x288e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x288e18: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x288e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x288e1c: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x288e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x288e20: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x288e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x288e24: 0x260a0018  addiu       $t2, $s0, 0x18
    ctx->pc = 0x288e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x288e28: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x288e28u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x288e2c: 0x3406fffa  ori         $a2, $zero, 0xFFFA
    ctx->pc = 0x288e2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x288e30: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x288e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x288e34: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x288e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x288e38: 0x155900  sll         $t3, $s5, 4
    ctx->pc = 0x288e38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x288e3c: 0x25657000  addiu       $a1, $t3, 0x7000
    ctx->pc = 0x288e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 28672));
    // 0x288e40: 0x30a9ffff  andi        $t1, $a1, 0xFFFF
    ctx->pc = 0x288e40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x288e44: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x288e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x288e48: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x288e48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x288e4c: 0x24827900  addiu       $v0, $a0, 0x7900
    ctx->pc = 0x288e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x288e50: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x288e50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x288e54: 0x1264025  or          $t0, $t1, $a2
    ctx->pc = 0x288e54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x288e58: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x288e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x288e5c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x288e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x288e60: 0x3405fffa  ori         $a1, $zero, 0xFFFA
    ctx->pc = 0x288e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x288e64: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x288e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x288e68: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x288e68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x288e6c: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x288e6cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x288e70: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x288e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x288e74: 0x246900a6  addiu       $t1, $v1, 0xA6
    ctx->pc = 0x288e74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 166));
    // 0x288e78: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x288e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x288e7c: 0x893021  addu        $a2, $a0, $t1
    ctx->pc = 0x288e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x288e80: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x288e80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x288e84: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x288e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x288e88: 0x24e3cca0  addiu       $v1, $a3, -0x3360
    ctx->pc = 0x288e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954144));
    // 0x288e8c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x288e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x288e90: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x288e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x288e94: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x288e94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x288e98: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x288e98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288e9c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x288e9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x288ea0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x288EA0u;
    SET_GPR_U32(ctx, 31, 0x288EA8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x288EA0u, 0x288EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288EA8u;
label_288ea8:
    // 0x288ea8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x288ea8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288eac: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x288eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x288eb0: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x288eb0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x288eb4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x288eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x288eb8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x288eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x288ebc: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x288ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x288ec0: 0x34c21009  ori         $v0, $a2, 0x1009
    ctx->pc = 0x288ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4105);
    // 0x288ec4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x288ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x288ec8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x288ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288ecc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x288eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x288ed0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x288ed0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x288ed4: 0x35938  dsll        $t3, $v1, 4
    ctx->pc = 0x288ed4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << 4);
    // 0x288ed8: 0x356a000a  ori         $t2, $t3, 0xA
    ctx->pc = 0x288ed8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)10);
    // 0x288edc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x288edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288ee0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x288ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x288ee4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x288ee4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x288ee8: 0x33bb8  dsll        $a3, $v1, 14
    ctx->pc = 0x288ee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 14);
    // 0x288eec: 0x1474025  or          $t0, $t2, $a3
    ctx->pc = 0x288eecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x288ef0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x288ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288ef4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x288ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x288ef8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x288ef8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x288efc: 0x33638  dsll        $a2, $v1, 24
    ctx->pc = 0x288efcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 24);
    // 0x288f00: 0xc84025  or          $t0, $a2, $t0
    ctx->pc = 0x288f00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x288f04: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x288f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288f08: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x288f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x288f0c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x288f0cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x288f10: 0x618bc  dsll32      $v1, $a2, 2
    ctx->pc = 0x288f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 2));
    // 0x288f14: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x288f14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x288f18: 0xfe880008  sd          $t0, 0x8($s4)
    ctx->pc = 0x288f18u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 8));
    // 0x288f1c: 0x2647001c  addiu       $a3, $s2, 0x1C
    ctx->pc = 0x288f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x288f20: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x288f20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x288f24: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x288f24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x288f28: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x288F28u;
    SET_GPR_U32(ctx, 31, 0x288F30u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x288F28u, 0x288F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F30u;
label_288f30:
    // 0x288f30: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x288f30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288f34: 0x26880010  addiu       $t0, $s4, 0x10
    ctx->pc = 0x288f34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x288f38: 0x7100a628  paddub      $s4, $t0, $zero
    ctx->pc = 0x288f38u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288f3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x288f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x288f40: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x288f40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288f44: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x288f44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x288f48: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x288f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x288f4c: 0x34c71043  ori         $a3, $a2, 0x1043
    ctx->pc = 0x288f4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4163);
    // 0x288f50: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x288f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288f54: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x288f54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x288f58: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x288f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x288f5c: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x288f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x288f60: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x288f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x288f64: 0x241e0068  addiu       $fp, $zero, 0x68
    ctx->pc = 0x288f64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x288f68: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x288f68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x288f6c: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x288f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x288f70: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x288f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x288f74: 0x8fb50128  lw          $s5, 0x128($sp)
    ctx->pc = 0x288f74u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288f78: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x288f78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x288f7c: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x288f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x288f80: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x288f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x288f84: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x288f84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x288f88: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x288f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288f8c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x288f8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288f90: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x288F90u;
    SET_GPR_U32(ctx, 31, 0x288F98u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x288F90u, 0x288F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F98u;
label_288f98:
    // 0x288f98: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x288f98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288f9c: 0x8fb60128  lw          $s6, 0x128($sp)
    ctx->pc = 0x288f9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288fa0: 0x26c30010  addiu       $v1, $s6, 0x10
    ctx->pc = 0x288fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x288fa4: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x288fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x288fa8: 0x82485de8  lb          $t0, 0x5DE8($s2)
    ctx->pc = 0x288fa8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24040)));
    // 0x288fac: 0x81e3c  dsll32      $v1, $t0, 24
    ctx->pc = 0x288facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 24));
    // 0x288fb0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x288fb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x288fb4: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x288fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x288fb8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x288fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x288fbc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x288fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x288fc0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x288fc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288fc4: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x288fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x288fc8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x288fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x288fcc: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x288fccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x288fd0: 0x26c75f30  addiu       $a3, $s6, 0x5F30
    ctx->pc = 0x288fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 24368));
    // 0x288fd4: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x288fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x288fd8: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x288fd8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x288fdc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x288fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x288fe0: 0x246661a8  addiu       $a2, $v1, 0x61A8
    ctx->pc = 0x288fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 25000));
    // 0x288fe4: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x288fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x288fe8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x288fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288fec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x288fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288ff0: 0xc33823  subu        $a3, $a2, $v1
    ctx->pc = 0x288ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x288ff4: 0xafa70140  sw          $a3, 0x140($sp)
    ctx->pc = 0x288ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 7));
    // 0x288ff8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x288ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288ffc: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x288ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289000: 0x673023  subu        $a2, $v1, $a3
    ctx->pc = 0x289000u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x289004: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x289004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x289008: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x289008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28900c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289010: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x289010u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289014: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x289014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x289018: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x289018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28901c: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x28901cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289020: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x289020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x289024: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x289024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289028: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x289028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28902c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28902cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289030: 0x70e01e28  paddub      $v1, $a3, $zero
    ctx->pc = 0x289030u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x289034: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x289034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x289038: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x289038u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28903c: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x28903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x289040: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x289040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289044: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x289044u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x289048: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x289048u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28904c: 0x3c83821  addu        $a3, $fp, $t0
    ctx->pc = 0x28904cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x289050: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x289050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
    // 0x289054: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x289054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x289058: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x289058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28905c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x28905cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x289060: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x289060u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289064: 0x2623823  subu        $a3, $s3, $v0
    ctx->pc = 0x289064u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x289068: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x289068u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28906c: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x28906cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x289070: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x289070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289074: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x289074u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x289078: 0x70c03e28  paddub      $a3, $a2, $zero
    ctx->pc = 0x289078u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28907c: 0x3c71023  subu        $v0, $fp, $a3
    ctx->pc = 0x28907cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x289080: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x289080u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289084: 0x151823  negu        $v1, $s5
    ctx->pc = 0x289084u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x289088: 0xafa30134  sw          $v1, 0x134($sp)
    ctx->pc = 0x289088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
    // 0x28908c: 0x134023  negu        $t0, $s3
    ctx->pc = 0x28908cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x289090: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x289090u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x289094: 0x8fa70134  lw          $a3, 0x134($sp)
    ctx->pc = 0x289094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x289098: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x289098u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28909c: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x28909cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x2890a0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2890a0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2890a4: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x2890a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2890a8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2890a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2890ac: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x2890acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x2890b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2890b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2890b4: 0x0  nop
    ctx->pc = 0x2890b4u;
    // NOP
    // 0x2890b8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2890b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2890bc: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2890bcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2890c0: 0x0  nop
    ctx->pc = 0x2890c0u;
    // NOP
    // 0x2890c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2890c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2890c8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2890c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2890cc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2890CCu;
    SET_GPR_U32(ctx, 31, 0x2890D4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2890CCu, 0x2890D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2890D4u;
label_2890d4:
    // 0x2890d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2890d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2890d8: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x2890d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2890dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2890dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2890e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2890e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2890e4: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x2890e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2890e8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2890e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2890ec: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x2890ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x2890f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2890f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2890f4: 0x0  nop
    ctx->pc = 0x2890f4u;
    // NOP
    // 0x2890f8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2890f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2890fc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2890fcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289100: 0x0  nop
    ctx->pc = 0x289100u;
    // NOP
    // 0x289104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x289104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x289108: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x289108u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28910c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28910Cu;
    SET_GPR_U32(ctx, 31, 0x289114u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28910Cu, 0x289114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289114u;
label_289114:
    // 0x289114: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x289114u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289118: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x289118u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28911c: 0x0  nop
    ctx->pc = 0x28911cu;
    // NOP
    // 0x289120: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x289120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x289124: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x289124u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x289128: 0x34e8cccd  ori         $t0, $a3, 0xCCCD
    ctx->pc = 0x289128u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x28912c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x28912cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289130: 0x0  nop
    ctx->pc = 0x289130u;
    // NOP
    // 0x289134: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x289134u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x289138: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289138u;
    SET_GPR_U32(ctx, 31, 0x289140u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289138u, 0x289140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289140u;
label_289140:
    // 0x289140: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x289140u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289144: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x289144u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289148: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x289148u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28914c: 0x0  nop
    ctx->pc = 0x28914cu;
    // NOP
    // 0x289150: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x289150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x289154: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x289154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x289158: 0x34e3cccd  ori         $v1, $a3, 0xCCCD
    ctx->pc = 0x289158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x28915c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28915cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289160: 0x0  nop
    ctx->pc = 0x289160u;
    // NOP
    // 0x289164: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x289164u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x289168: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289168u;
    SET_GPR_U32(ctx, 31, 0x289170u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289168u, 0x289170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289170u;
label_289170:
    // 0x289170: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x289170u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289174: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x289174u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x289178: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x289178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28917c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28917cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x289180: 0x3c096400  lui         $t1, 0x6400
    ctx->pc = 0x289180u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)25600 << 16));
    // 0x289184: 0x35262b16  ori         $a2, $t1, 0x2B16
    ctx->pc = 0x289184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)11030);
    // 0x289188: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x289188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x28918c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28918cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x289190: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x289190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x289194: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x289194u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x289198: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x289198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x28919c: 0x82435dea  lb          $v1, 0x5DEA($s2)
    ctx->pc = 0x28919cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x2891a0: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x2891a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2891a4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2891a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2891a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2891A8u;
    {
        const bool branch_taken_0x2891a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2891a8) {
            ctx->pc = 0x2891E8u;
            return;
        }
    }
    ctx->pc = 0x2891B0u;
    // 0x2891b0: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x2891b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2891b4: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x2891b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2891b8: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x2891b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2891bc: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x2891bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2891c0: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x2891c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2891c4: 0xc35025  or          $t2, $a2, $v1
    ctx->pc = 0x2891c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2891c8: 0x4a3825  or          $a3, $v0, $t2
    ctx->pc = 0x2891c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2891cc: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2891ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2891d0: 0x34e00  sll         $t1, $v1, 24
    ctx->pc = 0x2891d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2891d4: 0x1273025  or          $a2, $t1, $a3
    ctx->pc = 0x2891d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x2891d8: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2891d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2891dc: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x2891dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x2891e0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2891E0u;
    {
        const bool branch_taken_0x2891e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2891e0) {
            ctx->pc = 0x289278u;
            return;
        }
    }
    ctx->pc = 0x2891E8u;
}
