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

// Function: mist_trans
// Address: 0x294d40 - 0x29543c
void mist_trans_0x294d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mist_trans_0x294d40");
#endif

    switch (ctx->pc) {
        case 0x294ee8u: goto label_294ee8;
        case 0x294ef4u: goto label_294ef4;
        case 0x294f78u: goto label_294f78;
        case 0x294f90u: goto label_294f90;
        case 0x294f9cu: goto label_294f9c;
        case 0x294fd0u: goto label_294fd0;
        case 0x294ff0u: goto label_294ff0;
        case 0x29500cu: goto label_29500c;
        case 0x295040u: goto label_295040;
        case 0x29505cu: goto label_29505c;
        case 0x295090u: goto label_295090;
        case 0x2950acu: goto label_2950ac;
        case 0x2950e0u: goto label_2950e0;
        case 0x2950fcu: goto label_2950fc;
        case 0x29518cu: goto label_29518c;
        case 0x295220u: goto label_295220;
        case 0x29525cu: goto label_29525c;
        case 0x2952b0u: goto label_2952b0;
        case 0x295304u: goto label_295304;
        case 0x295378u: goto label_295378;
        case 0x295388u: goto label_295388;
        case 0x2953d8u: goto label_2953d8;
        case 0x2953e8u: goto label_2953e8;
        case 0x2953f8u: goto label_2953f8;
        case 0x295408u: goto label_295408;
        default: break;
    }

    ctx->pc = 0x294d40u;

    // 0x294d40: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x294d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x294d44: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x294d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x294d48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x294d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x294d4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x294d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x294d50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x294d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x294d54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x294d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x294d58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x294d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x294d5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x294d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x294d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x294d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x294d64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x294d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x294d6c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x294d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x294d70: 0x24825c80  addiu       $v0, $a0, 0x5C80
    ctx->pc = 0x294d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    // 0x294d74: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x294d74u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x294d78: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x294d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x294d7c: 0x24826150  addiu       $v0, $a0, 0x6150
    ctx->pc = 0x294d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
    // 0x294d80: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x294d80u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x294d84: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x294d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x294d88: 0x2442e5f0  addiu       $v0, $v0, -0x1A10
    ctx->pc = 0x294d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960624));
    // 0x294d8c: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x294d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x294d90: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x294d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x294d94: 0x24435bb8  addiu       $v1, $v0, 0x5BB8
    ctx->pc = 0x294d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 23480));
    // 0x294d98: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x294d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x294d9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x294d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x294da0: 0x24425b98  addiu       $v0, $v0, 0x5B98
    ctx->pc = 0x294da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23448));
    // 0x294da4: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x294da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x294da8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x294da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x294dac: 0x24445ba8  addiu       $a0, $v0, 0x5BA8
    ctx->pc = 0x294dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23464));
    // 0x294db0: 0xafa40178  sw          $a0, 0x178($sp)
    ctx->pc = 0x294db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 4));
    // 0x294db4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x294db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x294db8: 0x24a25bc8  addiu       $v0, $a1, 0x5BC8
    ctx->pc = 0x294db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 23496));
    // 0x294dbc: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x294dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x294dc0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x294dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x294dc4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x294dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x294dc8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x294dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x294dcc: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x294dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x294dd0: 0x3482103f  ori         $v0, $a0, 0x103F
    ctx->pc = 0x294dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4159);
    // 0x294dd4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x294dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x294dd8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x294dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x294ddc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x294ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x294de0: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x294de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x294de4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x294de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x294de8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x294de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x294dec: 0x34451048  ori         $a1, $v0, 0x1048
    ctx->pc = 0x294decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x294df0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x294df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x294df4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x294df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x294df8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x294df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x294dfc: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x294dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x294e00: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x294e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x294e04: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x294e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x294e08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x294e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x294e0c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x294e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x294e10: 0x34431015  ori         $v1, $v0, 0x1015
    ctx->pc = 0x294e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x294e14: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x294e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x294e18: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x294e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x294e1c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x294e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x294e20: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x294e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x294e24: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x294e24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x294e28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x294e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x294e2c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x294e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x294e30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x294e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x294e34: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x294e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x294e38: 0x3443103b  ori         $v1, $v0, 0x103B
    ctx->pc = 0x294e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
    // 0x294e3c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x294e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x294e40: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x294e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x294e44: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x294e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x294e48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x294e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x294e4c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x294e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x294e50: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x294e50u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x294e54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294e58: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x294e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x294e5c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x294e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x294e60: 0x90a40004  lbu         $a0, 0x4($a1)
    ctx->pc = 0x294e60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x294e64: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x294e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x294e68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x294e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x294e6c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x294e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x294e70: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x294e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x294e74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x294e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x294e78: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x294e78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x294e7c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x294e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x294e80: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x294e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x294e84: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x294e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x294e88: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x294e88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x294e8c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x294e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x294e90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x294e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x294e94: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x294e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x294e98: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x294e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x294e9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x294e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x294ea0: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x294ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x294ea4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x294ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x294ea8: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x294ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x294eac: 0x24460018  addiu       $a2, $v0, 0x18
    ctx->pc = 0x294eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x294eb0: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x294eb0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x294eb4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x294eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x294eb8: 0x227b8  dsll        $a0, $v0, 30
    ctx->pc = 0x294eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 30);
    // 0x294ebc: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x294ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x294ec0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x294ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x294ec4: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x294ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x294ec8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x294ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x294ecc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x294eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x294ed0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x294ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x294ed4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x294ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x294ed8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x294ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x294edc: 0xafa001ac  sw          $zero, 0x1AC($sp)
    ctx->pc = 0x294edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
    // 0x294ee0: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x294EE0u;
    {
        const bool branch_taken_0x294ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294ee0) {
            ctx->pc = 0x2953A0u;
            goto label_2953a0;
        }
    }
    ctx->pc = 0x294EE8u;
label_294ee8:
    // 0x294ee8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x294ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294eec: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x294EECu;
    SET_GPR_U32(ctx, 31, 0x294EF4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x294EF4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x294EF4u) { return; }
    ctx->pc = 0x294EF4u;
label_294ef4:
    // 0x294ef4: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x294ef4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x294ef8: 0x26760058  addiu       $s6, $s3, 0x58
    ctx->pc = 0x294ef8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x294efc: 0x26770068  addiu       $s7, $s3, 0x68
    ctx->pc = 0x294efcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 104));
    // 0x294f00: 0x26620090  addiu       $v0, $s3, 0x90
    ctx->pc = 0x294f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x294f04: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x294f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x294f08: 0x267400e0  addiu       $s4, $s3, 0xE0
    ctx->pc = 0x294f08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    // 0x294f0c: 0x267200a0  addiu       $s2, $s3, 0xA0
    ctx->pc = 0x294f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x294f10: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x294f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x294f14: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x294f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x294f18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x294f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x294f1c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x294f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x294f20: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x294f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x294f24: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x294f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x294f28: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x294f28u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x294f2c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x294f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x294f30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x294f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x294f34: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x294f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x294f38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x294f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x294f3c: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x294f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x294f40: 0xfee20008  sd          $v0, 0x8($s7)
    ctx->pc = 0x294f40u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
    // 0x294f44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x294f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x294f48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x294f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x294f4c: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x294f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x294f50: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x294f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x294f54: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x294f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x294f58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x294f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x294f5c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x294f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x294f60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x294f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x294f64: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x294f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294f68: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x294f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294f6c: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x294f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x294f70: 0xc040c92  jal         func_103248
    ctx->pc = 0x294F70u;
    SET_GPR_U32(ctx, 31, 0x294F78u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x294F78u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x294F78u) { return; }
    ctx->pc = 0x294F78u;
label_294f78:
    // 0x294f78: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x294f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294f7c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x294f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x294f80: 0x24456530  addiu       $a1, $v0, 0x6530
    ctx->pc = 0x294f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25904));
    // 0x294f84: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x294f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294f88: 0xc040c00  jal         func_103000
    ctx->pc = 0x294F88u;
    SET_GPR_U32(ctx, 31, 0x294F90u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x294F90u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x294F90u) { return; }
    ctx->pc = 0x294F90u;
label_294f90:
    // 0x294f90: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x294f90u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x294f94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x294F94u;
    {
        const bool branch_taken_0x294f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294f94) {
            ctx->pc = 0x294FD8u;
            goto label_294fd8;
        }
    }
    ctx->pc = 0x294F9Cu;
label_294f9c:
    // 0x294f9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x294f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x294fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x294fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294fa4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x294fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x294fa8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x294fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x294fac: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x294facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x294fb0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x294fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x294fb4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x294fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x294fb8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x294fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x294fbc: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x294fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x294fc0: 0x24640130  addiu       $a0, $v1, 0x130
    ctx->pc = 0x294fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x294fc4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x294fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294fc8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x294FC8u;
    SET_GPR_U32(ctx, 31, 0x294FD0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x294FD0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x294FD0u) { return; }
    ctx->pc = 0x294FD0u;
label_294fd0:
    // 0x294fd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x294fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x294fd4: 0x0  nop
    ctx->pc = 0x294fd4u;
    // NOP
label_294fd8:
    // 0x294fd8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x294fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x294fdc: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x294FDCu;
    {
        const bool branch_taken_0x294fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294fdc) {
            ctx->pc = 0x294F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294f9c;
        }
    }
    ctx->pc = 0x294FE4u;
    // 0x294fe4: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x294fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x294fe8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x294FE8u;
    SET_GPR_U32(ctx, 31, 0x294FF0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x294FE8u, 0x294FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294FF0u;
label_294ff0:
    // 0x294ff0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x294ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x294ff4: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x294ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x294ff8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x294ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x294ffc: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x294ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x295000: 0xc7ac0134  lwc1        $f12, 0x134($sp)
    ctx->pc = 0x295000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x295004: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x295004u;
    SET_GPR_U32(ctx, 31, 0x29500Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x295004u, 0x29500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29500Cu;
label_29500c:
    // 0x29500c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29500cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x295010: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x295010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x295014: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x295014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x295018: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x295018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29501c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x29501cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295020: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x295020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x295024: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x295024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x295028: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x295028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x29502c: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x29502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x295030: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x295030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x295034: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x295034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x295038: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x295038u;
    SET_GPR_U32(ctx, 31, 0x295040u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x295038u, 0x295040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295040u;
label_295040:
    // 0x295040: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x295040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x295044: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x295044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x295048: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x295048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29504c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x29504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x295050: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x295050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x295054: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x295054u;
    SET_GPR_U32(ctx, 31, 0x29505Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x295054u, 0x29505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29505Cu;
label_29505c:
    // 0x29505c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29505cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x295060: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x295060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x295064: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x295064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x295068: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x295068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29506c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x29506cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295070: 0x2622002c  addiu       $v0, $s1, 0x2C
    ctx->pc = 0x295070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x295074: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x295074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x295078: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x295078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x29507c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x29507cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x295080: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x295080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x295084: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x295084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x295088: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x295088u;
    SET_GPR_U32(ctx, 31, 0x295090u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x295088u, 0x295090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295090u;
label_295090:
    // 0x295090: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x295090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x295094: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x295094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x295098: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x295098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29509c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x29509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2950a0: 0xc7ac0154  lwc1        $f12, 0x154($sp)
    ctx->pc = 0x2950a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2950a4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x2950A4u;
    SET_GPR_U32(ctx, 31, 0x2950ACu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x2950A4u, 0x2950ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2950ACu;
label_2950ac:
    // 0x2950ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2950acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2950b0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x2950b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x2950b4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2950b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2950b8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2950b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2950bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2950bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2950c0: 0x2622003c  addiu       $v0, $s1, 0x3C
    ctx->pc = 0x2950c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x2950c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2950c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2950c8: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x2950c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x2950cc: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x2950ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2950d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2950d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2950d4: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x2950d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2950d8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x2950D8u;
    SET_GPR_U32(ctx, 31, 0x2950E0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x2950D8u, 0x2950E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2950E0u;
label_2950e0:
    // 0x2950e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2950e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2950e4: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x2950e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x2950e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2950e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2950ec: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2950ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2950f0: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x2950f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2950f4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x2950F4u;
    SET_GPR_U32(ctx, 31, 0x2950FCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x2950F4u, 0x2950FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2950FCu;
label_2950fc:
    // 0x2950fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2950fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x295100: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x295100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x295104: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x295104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x295108: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x295108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29510c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x29510cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295110: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x295110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x295114: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x295114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x295118: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x295118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x29511c: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x29511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x295120: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x295120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x295124: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x295124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x295128: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x295128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x29512c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x29512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x295130: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x295130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x295134: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x295134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295138: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x295138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x29513c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x29513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295140: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x295140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x295144: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x295144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295148: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x295148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x29514c: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x29514cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295150: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x295150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x295154: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x295154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295158: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x295158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x29515c: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x29515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295160: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x295160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x295164: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x295164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295168: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x295168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x29516c: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x29516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295170: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x295170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x295174: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x295174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x295178: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x295178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x29517c: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x29517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x295180: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x295180u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x295184: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x295184u;
    SET_GPR_U32(ctx, 31, 0x29518Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x295184u, 0x29518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29518Cu;
label_29518c:
    // 0x29518c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29518cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x295190: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x295190u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x295194: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x295194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x295198: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x295198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x29519c: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x29519cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x2951a0: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x2951a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2951a4: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2951A4u;
    {
        const bool branch_taken_0x2951a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2951a4) {
            ctx->pc = 0x295364u;
            goto label_295364;
        }
    }
    ctx->pc = 0x2951ACu;
    // 0x2951ac: 0x8e750078  lw          $s5, 0x78($s3)
    ctx->pc = 0x2951acu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2951b0: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x2951b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2951b4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2951b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2951b8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2951b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2951bc: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x2951bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x2951c0: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x2951c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x2951c4: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x2951c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x2951c8: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x2951c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2951cc: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2951ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2951d0: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x2951d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2951d4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x2951d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x2951d8: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x2951d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x2951dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2951dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2951e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2951e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2951e4: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2951e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x2951e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2951e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2951ec: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x2951ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x2951f0: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x2951f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2951f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2951f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2951f8: 0x0  nop
    ctx->pc = 0x2951f8u;
    // NOP
    // 0x2951fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2951fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x295200: 0x151940  sll         $v1, $s5, 5
    ctx->pc = 0x295200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x295204: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x295204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x295208: 0x24426580  addiu       $v0, $v0, 0x6580
    ctx->pc = 0x295208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25984));
    // 0x29520c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x295210: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x295210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295214: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x295214u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x295218: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x295218u;
    SET_GPR_U32(ctx, 31, 0x295220u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x295218u, 0x295220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295220u;
label_295220:
    // 0x295220: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x295220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x295224: 0x151940  sll         $v1, $s5, 5
    ctx->pc = 0x295224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x295228: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x295228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x29522c: 0x24426580  addiu       $v0, $v0, 0x6580
    ctx->pc = 0x29522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25984));
    // 0x295230: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x295230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x295234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295238: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x295238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29523c: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x29523cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x295240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295244: 0x0  nop
    ctx->pc = 0x295244u;
    // NOP
    // 0x295248: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x295248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29524c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x29524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295250: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x295250u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x295254: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x295254u;
    SET_GPR_U32(ctx, 31, 0x29525Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x295254u, 0x29525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29525Cu;
label_29525c:
    // 0x29525c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x29525cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x295260: 0x151940  sll         $v1, $s5, 5
    ctx->pc = 0x295260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x295264: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x295264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x295268: 0x24426580  addiu       $v0, $v0, 0x6580
    ctx->pc = 0x295268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25984));
    // 0x29526c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x295270: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x295270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295274: 0x151940  sll         $v1, $s5, 5
    ctx->pc = 0x295274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x295278: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x295278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x29527c: 0x24426580  addiu       $v0, $v0, 0x6580
    ctx->pc = 0x29527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25984));
    // 0x295280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x295280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x295284: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x295284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295288: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295288u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29528c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29528cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295290: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x295290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x295294: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x295294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x295298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29529c: 0x0  nop
    ctx->pc = 0x29529cu;
    // NOP
    // 0x2952a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2952a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2952a4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2952a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2952a8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x2952A8u;
    SET_GPR_U32(ctx, 31, 0x2952B0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x2952A8u, 0x2952B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2952B0u;
label_2952b0:
    // 0x2952b0: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x2952b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x2952b4: 0x151940  sll         $v1, $s5, 5
    ctx->pc = 0x2952b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x2952b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2952b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2952bc: 0x24426580  addiu       $v0, $v0, 0x6580
    ctx->pc = 0x2952bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25984));
    // 0x2952c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2952c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2952c4: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2952c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2952c8: 0x151940  sll         $v1, $s5, 5
    ctx->pc = 0x2952c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x2952cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2952ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2952d0: 0x24426580  addiu       $v0, $v0, 0x6580
    ctx->pc = 0x2952d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25984));
    // 0x2952d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2952d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2952d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2952d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2952dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2952dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2952e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2952e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2952e4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2952e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2952e8: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x2952e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2952ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2952ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2952f0: 0x0  nop
    ctx->pc = 0x2952f0u;
    // NOP
    // 0x2952f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2952f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2952f8: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2952f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2952fc: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x2952FCu;
    SET_GPR_U32(ctx, 31, 0x295304u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x2952FCu, 0x295304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295304u;
label_295304:
    // 0x295304: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x295304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x295308: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x295308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x29530c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295310: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x295310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x295314: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x295314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x295318: 0x3443000f  ori         $v1, $v0, 0xF
    ctx->pc = 0x295318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x29531c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x29531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x295320: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x295320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295324: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x295324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x295328: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x295328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29532c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29532cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x295330: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x295330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x295334: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x295334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295338: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x295338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29533c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x29533cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x295340: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x295340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295344: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x295344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x295348: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x295348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29534c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29534cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x295350: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x295350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x295354: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295358: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x295358u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x29535c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29535Cu;
    {
        const bool branch_taken_0x29535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29535c) {
            ctx->pc = 0x295368u;
            goto label_295368;
        }
    }
    ctx->pc = 0x295364u;
label_295364:
    // 0x295364: 0xfec00008  sd          $zero, 0x8($s6)
    ctx->pc = 0x295364u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 0));
label_295368:
    // 0x295368: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x295368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x29536c: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x29536cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x295370: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x295370u;
    SET_GPR_U32(ctx, 31, 0x295378u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x295370u, 0x295378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295378u;
label_295378:
    // 0x295378: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x295378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x29537c: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x29537cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x295380: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x295380u;
    SET_GPR_U32(ctx, 31, 0x295388u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x295380u, 0x295388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295388u;
label_295388:
    // 0x295388: 0x26620130  addiu       $v0, $s3, 0x130
    ctx->pc = 0x295388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    // 0x29538c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x29538cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x295390: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x295390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x295394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x295394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x295398: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x295398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x29539c: 0x0  nop
    ctx->pc = 0x29539cu;
    // NOP
label_2953a0:
    // 0x2953a0: 0x8fa301ac  lw          $v1, 0x1AC($sp)
    ctx->pc = 0x2953a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2953a4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2953a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2953a8: 0x8c226880  lw          $v0, 0x6880($at)
    ctx->pc = 0x2953a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396880u));
    // 0x2953ac: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2953acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2953b0: 0x1440fecd  bnez        $v0, . + 4 + (-0x133 << 2)
    ctx->pc = 0x2953B0u;
    {
        const bool branch_taken_0x2953b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2953b0) {
            ctx->pc = 0x294EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294ee8;
        }
    }
    ctx->pc = 0x2953B8u;
    // 0x2953b8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2953b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2953bc: 0x8c226570  lw          $v0, 0x6570($at)
    ctx->pc = 0x2953bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396570u));
    // 0x2953c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2953C0u;
    {
        const bool branch_taken_0x2953c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2953c0) {
            ctx->pc = 0x2953D8u;
            goto label_2953d8;
        }
    }
    ctx->pc = 0x2953C8u;
    // 0x2953c8: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x2953c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2953cc: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x2953ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2953d0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2953D0u;
    SET_GPR_U32(ctx, 31, 0x2953D8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2953D0u, 0x2953D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953D8u;
label_2953d8:
    // 0x2953d8: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x2953d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2953dc: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x2953dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2953e0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2953E0u;
    SET_GPR_U32(ctx, 31, 0x2953E8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2953E0u, 0x2953E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953E8u;
label_2953e8:
    // 0x2953e8: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x2953e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2953ec: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2953ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2953f0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2953F0u;
    SET_GPR_U32(ctx, 31, 0x2953F8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2953F0u, 0x2953F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953F8u;
label_2953f8:
    // 0x2953f8: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x2953f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2953fc: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x2953fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x295400: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x295400u;
    SET_GPR_U32(ctx, 31, 0x295408u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x295400u, 0x295408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295408u;
label_295408:
    // 0x295408: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x295408u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29540c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29540cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x295410: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x295410u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295414: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x295414u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295418: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x295418u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29541c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29541cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295420: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x295420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x295424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29542c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29542cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295430: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x295430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x295434: 0x3e00008  jr          $ra
    ctx->pc = 0x295434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29543Cu;
}
