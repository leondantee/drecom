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

// Function: Moji_env_set
// Address: 0x166ca0 - 0x16704c
void Moji_env_set_0x166ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Moji_env_set_0x166ca0");
#endif

    switch (ctx->pc) {
        case 0x166cc0u: goto label_166cc0;
        case 0x166cdcu: goto label_166cdc;
        case 0x166db8u: goto label_166db8;
        case 0x166e30u: goto label_166e30;
        case 0x166e74u: goto label_166e74;
        case 0x166f0cu: goto label_166f0c;
        case 0x166f48u: goto label_166f48;
        case 0x166f8cu: goto label_166f8c;
        case 0x167030u: goto label_167030;
        default: break;
    }

    ctx->pc = 0x166ca0u;

    // 0x166ca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166ca4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x166ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x166ca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x166cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166cb4: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x166cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x166cb8: 0xc05e990  jal         func_17A640
    ctx->pc = 0x166CB8u;
    SET_GPR_U32(ctx, 31, 0x166CC0u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x166CB8u, 0x166CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CC0u;
label_166cc0:
    // 0x166cc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x166cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x166cc4: 0x8c25fdf4  lw          $a1, -0x20C($at)
    ctx->pc = 0x166cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CFDF4u));
    // 0x166cc8: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x166cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x166ccc: 0x24061400  addiu       $a2, $zero, 0x1400
    ctx->pc = 0x166cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x166cd0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x166cd0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x166cd4: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x166CD4u;
    SET_GPR_U32(ctx, 31, 0x166CDCu);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x166CD4u, 0x166CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CDCu;
label_166cdc:
    // 0x166cdc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x166cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x166ce0: 0x24505a20  addiu       $s0, $v0, 0x5A20
    ctx->pc = 0x166ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23072));
    // 0x166ce4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x166ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x166ce8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x166ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A20u, _value); } while (0);
    // 0x166cec: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x166cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x166cf0: 0x34421007  ori         $v0, $v0, 0x1007
    ctx->pc = 0x166cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4103);
    // 0x166cf4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x166cf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A24u, _value); } while (0);
    // 0x166cf8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x166cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x166cfc: 0x2451eab8  addiu       $s1, $v0, -0x1548
    ctx->pc = 0x166cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961848));
    // 0x166d00: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x166d00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x47EABFu));
    // 0x166d04: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x166d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x166d08: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x166d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x166d0c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166d10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166d14: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x166d14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x166d18: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x166d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x166d1c: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x166d1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x166d20: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x166d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x166d24: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x166d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x166d28: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x166d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x166d2c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166d30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166d34: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x166d34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x166d38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x166d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x166d3c: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x166d3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x166d40: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x166d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x166d44: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x166d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x166d48: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x166d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x166d4c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166d50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166d54: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x166d54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x166d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166d5c: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x166d5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x166d60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x166d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x166d64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x166d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166d68: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x166d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x166d6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166d70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166d74: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x166d74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x166d78: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x166d78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x166d7c: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x166d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x166d80: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x166d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x166d84: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x166d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x166d88: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166d8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166d90: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x166d90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x166d94: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x166d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x166d98: 0x2442eab8  addiu       $v0, $v0, -0x1548
    ctx->pc = 0x166d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961848));
    // 0x166d9c: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x166d9cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EAB8u));
    // 0x166da0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x166da0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x166da4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x166da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x166da8: 0x24441a38  addiu       $a0, $v0, 0x1A38
    ctx->pc = 0x166da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6712));
    // 0x166dac: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x166dacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x166db0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x166DB0u;
    SET_GPR_U32(ctx, 31, 0x166DB8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x166DB0u, 0x166DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DB8u;
label_166db8:
    // 0x166db8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x166db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x166dbc: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x166dbcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x166dc0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x166dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x166dc4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x166dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x166dc8: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x166dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x166dcc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166dd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166dd4: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x166dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x166dd8: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x166dd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x166ddc: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x166ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x166de0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x166de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x166de4: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x166de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x166de8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166dec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166df0: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x166df0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x166df4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x166df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x166df8: 0x24505a70  addiu       $s0, $v0, 0x5A70
    ctx->pc = 0x166df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23152));
    // 0x166dfc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x166dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x166e00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x166e00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A70u, _value); } while (0);
    // 0x166e04: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x166e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x166e08: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x166e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x166e0c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x166e0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A74u, _value); } while (0);
    // 0x166e10: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x166e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x166e14: 0x3442080b  ori         $v0, $v0, 0x80B
    ctx->pc = 0x166e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2059);
    // 0x166e18: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x166e18u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A78u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3F5A78u, _value); } while (0);
    // 0x166e1c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x166e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x166e20: 0x24441a34  addiu       $a0, $v0, 0x1A34
    ctx->pc = 0x166e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6708));
    // 0x166e24: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x166e24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x166e28: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x166E28u;
    SET_GPR_U32(ctx, 31, 0x166E30u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x166E28u, 0x166E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E30u;
label_166e30:
    // 0x166e30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x166e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x166e34: 0x24505a90  addiu       $s0, $v0, 0x5A90
    ctx->pc = 0x166e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23184));
    // 0x166e38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x166e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x166e3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x166e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A90u, _value); } while (0);
    // 0x166e40: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x166e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x166e44: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x166e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x166e48: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x166e48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A94u, _value); } while (0);
    // 0x166e4c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x166e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166e50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x166e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x166e54: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x166e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x166e58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166e5c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x166e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x166e60: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x166e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x166e64: 0x24441a34  addiu       $a0, $v0, 0x1A34
    ctx->pc = 0x166e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6708));
    // 0x166e68: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x166e68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x166e6c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x166E6Cu;
    SET_GPR_U32(ctx, 31, 0x166E74u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x166E6Cu, 0x166E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E74u;
label_166e74:
    // 0x166e74: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x166e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x166e78: 0x24505a50  addiu       $s0, $v0, 0x5A50
    ctx->pc = 0x166e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x166e7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x166e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x166e80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x166e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A50u, _value); } while (0);
    // 0x166e84: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x166e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x166e88: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x166e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x166e8c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x166e8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A54u, _value); } while (0);
    // 0x166e90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x166e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x166e94: 0x2452eac0  addiu       $s2, $v0, -0x1540
    ctx->pc = 0x166e94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961856));
    // 0x166e98: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x166e98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x47EAC0u));
    // 0x166e9c: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x166e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x166ea0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x166ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x166ea4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166ea8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166eac: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x166eacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x166eb0: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x166eb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x166eb4: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x166eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x166eb8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x166eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x166ebc: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x166ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x166ec0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166ec4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166ec8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x166ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x166ecc: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x166eccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x166ed0: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x166ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x166ed4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x166ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x166ed8: 0x2402fe3f  addiu       $v0, $zero, -0x1C1
    ctx->pc = 0x166ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x166edc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166ee0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166ee4: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x166ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x166ee8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x166ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x166eec: 0x2442eac0  addiu       $v0, $v0, -0x1540
    ctx->pc = 0x166eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961856));
    // 0x166ef0: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x166ef0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EAC0u));
    // 0x166ef4: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x166ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x166ef8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x166ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x166efc: 0x24441a34  addiu       $a0, $v0, 0x1A34
    ctx->pc = 0x166efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6708));
    // 0x166f00: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x166f00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x166f04: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x166F04u;
    SET_GPR_U32(ctx, 31, 0x166F0Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x166F04u, 0x166F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F0Cu;
label_166f0c:
    // 0x166f0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x166f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x166f10: 0x24505a80  addiu       $s0, $v0, 0x5A80
    ctx->pc = 0x166f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23168));
    // 0x166f14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x166f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x166f18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x166f18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A80u, _value); } while (0);
    // 0x166f1c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x166f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x166f20: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x166f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x166f24: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x166f24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A84u, _value); } while (0);
    // 0x166f28: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x166f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x166f2c: 0x3442080a  ori         $v0, $v0, 0x80A
    ctx->pc = 0x166f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2058);
    // 0x166f30: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x166f30u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A88u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3F5A88u, _value); } while (0);
    // 0x166f34: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x166f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x166f38: 0x24441a38  addiu       $a0, $v0, 0x1A38
    ctx->pc = 0x166f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6712));
    // 0x166f3c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x166f3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x166f40: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x166F40u;
    SET_GPR_U32(ctx, 31, 0x166F48u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x166F40u, 0x166F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F48u;
label_166f48:
    // 0x166f48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x166f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x166f4c: 0x24505aa0  addiu       $s0, $v0, 0x5AA0
    ctx->pc = 0x166f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23200));
    // 0x166f50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x166f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x166f54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x166f54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5AA0u, _value); } while (0);
    // 0x166f58: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x166f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x166f5c: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x166f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x166f60: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x166f60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5AA4u, _value); } while (0);
    // 0x166f64: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x166f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166f68: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x166f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x166f6c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x166f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x166f70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166f74: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x166f74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x166f78: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x166f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x166f7c: 0x24441a38  addiu       $a0, $v0, 0x1A38
    ctx->pc = 0x166f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6712));
    // 0x166f80: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x166f80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x166f84: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x166F84u;
    SET_GPR_U32(ctx, 31, 0x166F8Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x166F84u, 0x166F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F8Cu;
label_166f8c:
    // 0x166f8c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x166f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x166f90: 0x24505a60  addiu       $s0, $v0, 0x5A60
    ctx->pc = 0x166f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23136));
    // 0x166f94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x166f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x166f98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x166f98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A60u, _value); } while (0);
    // 0x166f9c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x166f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x166fa0: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x166fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x166fa4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x166fa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A64u, _value); } while (0);
    // 0x166fa8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x166fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x166fac: 0x2452eac0  addiu       $s2, $v0, -0x1540
    ctx->pc = 0x166facu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961856));
    // 0x166fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166fb4: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x166fb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x47EAC0u));
    // 0x166fb8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x166fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x166fbc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x166fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x166fc0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166fc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166fc8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x166fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x166fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166fd0: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x166fd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x166fd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x166fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x166fd8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x166fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x166fdc: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x166fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x166fe0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166fe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166fe8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x166fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x166fec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166ff0: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x166ff0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x166ff4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x166ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x166ff8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x166ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x166ffc: 0x2402fe3f  addiu       $v0, $zero, -0x1C1
    ctx->pc = 0x166ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x167000: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x167000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x167004: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x167008: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x167008u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16700c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16700cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x167010: 0x2442eac0  addiu       $v0, $v0, -0x1540
    ctx->pc = 0x167010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961856));
    // 0x167014: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x167014u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EAC0u));
    // 0x167018: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x167018u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x16701c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16701cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x167020: 0x24441a38  addiu       $a0, $v0, 0x1A38
    ctx->pc = 0x167020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6712));
    // 0x167024: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x167024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x167028: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x167028u;
    SET_GPR_U32(ctx, 31, 0x167030u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x167028u, 0x167030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167030u;
label_167030:
    // 0x167030: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x167030u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16703c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16703cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167040: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x167040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x167044: 0x3e00008  jr          $ra
    ctx->pc = 0x167044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16704Cu;
}
