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

// Function: Motion_set2_body
// Address: 0x259ef0 - 0x25a3b0
void Motion_set2_body_0x259ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_set2_body_0x259ef0");
#endif

    switch (ctx->pc) {
        case 0x25a04cu: goto label_25a04c;
        case 0x25a088u: goto label_25a088;
        case 0x25a254u: goto label_25a254;
        case 0x25a290u: goto label_25a290;
        default: break;
    }

    ctx->pc = 0x259ef0u;

    // 0x259ef0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x259ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x259ef4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x259ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x259ef8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x259ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x259efc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x259efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x259f00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x259f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x259f04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x259f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x259f08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x259f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x259f0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x259f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x259f10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x259f14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259f1c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x259f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x259f20: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x259f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x259f24: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x259f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x259f28: 0xa7a700c0  sh          $a3, 0xC0($sp)
    ctx->pc = 0x259f28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 7));
    // 0x259f2c: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x259f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
    // 0x259f30: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x259f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x259f34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259f38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259f3c: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x259f3cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259f40: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x259f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x259f44: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x259f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x259f48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259f4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259f50: 0x307700ff  andi        $s7, $v1, 0xFF
    ctx->pc = 0x259f50u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259f54: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x259f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x259f58: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x259f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x259f5c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x259f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x259f60: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x259f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x259f64: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x259f64u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x259f68: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x259f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x259f6c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x259f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x259f70: 0xa4641088  sh          $a0, 0x1088($v1)
    ctx->pc = 0x259f70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4232), (uint16_t)GPR_U32(ctx, 4));
    // 0x259f74: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x259f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x259f78: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x259f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259f7c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x259f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259f80: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x259f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259f84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x259f88: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x259f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259f8c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x259f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x259f90: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x259f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x259f94: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x259f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x259f98: 0xac640a14  sw          $a0, 0xA14($v1)
    ctx->pc = 0x259f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2580), GPR_U32(ctx, 4));
    // 0x259f9c: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x259f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x259fa0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x259fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259fa4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x259fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259fa8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x259fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259fac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x259fb0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x259fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259fb4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x259fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x259fb8: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x259fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x259fbc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x259fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x259fc0: 0xa46010a0  sh          $zero, 0x10A0($v1)
    ctx->pc = 0x259fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4256), (uint16_t)GPR_U32(ctx, 0));
    // 0x259fc4: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x259fc4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x259fc8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x259fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x259fcc: 0xa46410a2  sh          $a0, 0x10A2($v1)
    ctx->pc = 0x259fccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4258), (uint16_t)GPR_U32(ctx, 4));
    // 0x259fd0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x259fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x259fd4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x259fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x259fd8: 0xac640ca0  sw          $a0, 0xCA0($v1)
    ctx->pc = 0x259fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3232), GPR_U32(ctx, 4));
    // 0x259fdc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x259fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x259fe0: 0x8c630a14  lw          $v1, 0xA14($v1)
    ctx->pc = 0x259fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2580)));
    // 0x259fe4: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x259fe4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259fe8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x259fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x259fec: 0xa464108a  sh          $a0, 0x108A($v1)
    ctx->pc = 0x259fecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4234), (uint16_t)GPR_U32(ctx, 4));
    // 0x259ff0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x259ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x259ff4: 0x8c630a14  lw          $v1, 0xA14($v1)
    ctx->pc = 0x259ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2580)));
    // 0x259ff8: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x259ff8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x259ffc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x259ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a000: 0xa0641082  sb          $a0, 0x1082($v1)
    ctx->pc = 0x25a000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4226), (uint8_t)GPR_U32(ctx, 4));
    // 0x25a004: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a008: 0x8c630a14  lw          $v1, 0xA14($v1)
    ctx->pc = 0x25a008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2580)));
    // 0x25a00c: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x25a00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25a010: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a014: 0xac640a10  sw          $a0, 0xA10($v1)
    ctx->pc = 0x25a014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2576), GPR_U32(ctx, 4));
    // 0x25a018: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x25a018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a01c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a020: 0x90631082  lbu         $v1, 0x1082($v1)
    ctx->pc = 0x25a020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4226)));
    // 0x25a024: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25a024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a028: 0x8ca30a10  lw          $v1, 0xA10($a1)
    ctx->pc = 0x25a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2576)));
    // 0x25a02c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x25a02cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a030: 0x26440003  addiu       $a0, $s2, 0x3
    ctx->pc = 0x25a030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x25a034: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x25a034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x25a038: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x25a038u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x25a03c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x25a03cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x25a040: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25a040u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a044: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25A044u;
    {
        const bool branch_taken_0x25a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a044) {
            ctx->pc = 0x25A070u;
            goto label_25a070;
        }
    }
    ctx->pc = 0x25A04Cu;
label_25a04c:
    // 0x25a04c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x25a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a050: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a054: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a058: 0xac600a18  sw          $zero, 0xA18($v1)
    ctx->pc = 0x25a058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2584), GPR_U32(ctx, 0));
    // 0x25a05c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x25a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a060: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a064: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a068: 0xac600b58  sw          $zero, 0xB58($v1)
    ctx->pc = 0x25a068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2904), GPR_U32(ctx, 0));
    // 0x25a06c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_25a070:
    // 0x25a070: 0x2a030050  slti        $v1, $s0, 0x50
    ctx->pc = 0x25a070u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x25a074: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x25A074u;
    {
        const bool branch_taken_0x25a074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a074) {
            ctx->pc = 0x25A04Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a04c;
        }
    }
    ctx->pc = 0x25A07Cu;
    // 0x25a07c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25a07cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a080: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x25A080u;
    {
        const bool branch_taken_0x25a080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a080) {
            ctx->pc = 0x25A220u;
            goto label_25a220;
        }
    }
    ctx->pc = 0x25A088u;
label_25a088:
    // 0x25a088: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a08c: 0x8c630a10  lw          $v1, 0xA10($v1)
    ctx->pc = 0x25a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2576)));
    // 0x25a090: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25a090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25a094: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a098: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a09c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x25a09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x25a0a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a0a4: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x25a0a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a0a8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a0ac: 0x8c630a10  lw          $v1, 0xA10($v1)
    ctx->pc = 0x25a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2576)));
    // 0x25a0b0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25a0b4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a0b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a0b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a0bc: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x25a0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x25a0c0: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x25A0C0u;
    {
        const bool branch_taken_0x25a0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a0c0) {
            ctx->pc = 0x25A18Cu;
            goto label_25a18c;
        }
    }
    ctx->pc = 0x25A0C8u;
    // 0x25a0c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a0cc: 0x8c630a10  lw          $v1, 0xA10($v1)
    ctx->pc = 0x25a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2576)));
    // 0x25a0d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25a0d4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a0d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a0d8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25a0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a0dc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x25a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25a0e0: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x25A0E0u;
    {
        const bool branch_taken_0x25a0e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25a0e0) {
            ctx->pc = 0x25A218u;
            goto label_25a218;
        }
    }
    ctx->pc = 0x25A0E8u;
    // 0x25a0e8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25a0ec: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x25A0ECu;
    {
        const bool branch_taken_0x25a0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25a0ec) {
            ctx->pc = 0x25A218u;
            goto label_25a218;
        }
    }
    ctx->pc = 0x25A0F4u;
    // 0x25a0f4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25A0F4u;
    {
        const bool branch_taken_0x25a0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a0f4) {
            ctx->pc = 0x25A0FCu;
            goto label_25a0fc;
        }
    }
    ctx->pc = 0x25A0FCu;
label_25a0fc:
    // 0x25a0fc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a100: 0x8c640a14  lw          $a0, 0xA14($v1)
    ctx->pc = 0x25a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2580)));
    // 0x25a104: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a108: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25a108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a10c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a110: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x25a110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25a114: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a118: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25a118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a11c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a124: 0xac650b58  sw          $a1, 0xB58($v1)
    ctx->pc = 0x25a124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2904), GPR_U32(ctx, 5));
    // 0x25a128: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25a128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a12c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a130: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a134: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25a134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a138: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a13c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a140: 0xa46007ec  sh          $zero, 0x7EC($v1)
    ctx->pc = 0x25a140u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2028), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a144: 0x3005ffff  andi        $a1, $zero, 0xFFFF
    ctx->pc = 0x25a144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x25a148: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25a148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a14c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a150: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a154: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25a154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a158: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a160: 0xa46507ea  sh          $a1, 0x7EA($v1)
    ctx->pc = 0x25a160u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2026), (uint16_t)GPR_U32(ctx, 5));
    // 0x25a164: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x25a164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x25a168: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25a168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a16c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a170: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a174: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25a174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a178: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a17c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a180: 0xa46507e8  sh          $a1, 0x7E8($v1)
    ctx->pc = 0x25a180u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2024), (uint16_t)GPR_U32(ctx, 5));
    // 0x25a184: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25A184u;
    {
        const bool branch_taken_0x25a184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a184) {
            ctx->pc = 0x25A218u;
            goto label_25a218;
        }
    }
    ctx->pc = 0x25A18Cu;
label_25a18c:
    // 0x25a18c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a190: 0x8c640a14  lw          $a0, 0xA14($v1)
    ctx->pc = 0x25a190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2580)));
    // 0x25a194: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a198: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25a198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a19c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a1a0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x25a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25a1a4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a1a8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a1ac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a1b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a1b4: 0xac650a18  sw          $a1, 0xA18($v1)
    ctx->pc = 0x25a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2584), GPR_U32(ctx, 5));
    // 0x25a1b8: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25a1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a1bc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a1c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a1c4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a1c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a1cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a1d0: 0xa4600cb4  sh          $zero, 0xCB4($v1)
    ctx->pc = 0x25a1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3252), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a1d4: 0x3005ffff  andi        $a1, $zero, 0xFFFF
    ctx->pc = 0x25a1d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x25a1d8: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25a1d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a1dc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a1e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a1e4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a1e8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a1ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a1f0: 0xa4650cb2  sh          $a1, 0xCB2($v1)
    ctx->pc = 0x25a1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3250), (uint16_t)GPR_U32(ctx, 5));
    // 0x25a1f4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x25a1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x25a1f8: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25a1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a1fc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a204: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25a204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a208: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a20c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a210: 0xa4650cb0  sh          $a1, 0xCB0($v1)
    ctx->pc = 0x25a210u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3248), (uint16_t)GPR_U32(ctx, 5));
    // 0x25a214: 0x0  nop
    ctx->pc = 0x25a214u;
    // NOP
label_25a218:
    // 0x25a218: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25a21c: 0x0  nop
    ctx->pc = 0x25a21cu;
    // NOP
label_25a220:
    // 0x25a220: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a224: 0x906309e4  lbu         $v1, 0x9E4($v1)
    ctx->pc = 0x25a224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2532)));
    // 0x25a228: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a22c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x25a22cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25a230: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x25A230u;
    {
        const bool branch_taken_0x25a230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a230) {
            ctx->pc = 0x25A088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a088;
        }
    }
    ctx->pc = 0x25A238u;
    // 0x25a238: 0x12e0001e  beqz        $s7, . + 4 + (0x1E << 2)
    ctx->pc = 0x25A238u;
    {
        const bool branch_taken_0x25a238 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a238) {
            ctx->pc = 0x25A2B4u;
            goto label_25a2b4;
        }
    }
    ctx->pc = 0x25A240u;
    // 0x25a240: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x25a240u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a244: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a248: 0xa0571083  sb          $s7, 0x1083($v0)
    ctx->pc = 0x25a248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4227), (uint8_t)GPR_U32(ctx, 23));
    // 0x25a24c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a250: 0xa0571084  sb          $s7, 0x1084($v0)
    ctx->pc = 0x25a250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4228), (uint8_t)GPR_U32(ctx, 23));
label_25a254:
    // 0x25a254: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x25a254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25a258: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x25a258u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a25c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a260: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x25a260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x25a264: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25a264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a268: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25a268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a26c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a270: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25a270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a274: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25a274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25a278: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x25a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x25a27c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x25a27cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a280: 0x266400c0  addiu       $a0, $s3, 0xC0
    ctx->pc = 0x25a280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x25a284: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x25a284u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25a288: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25A288u;
    SET_GPR_U32(ctx, 31, 0x25A290u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25A290u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25A290u) { return; }
    ctx->pc = 0x25A290u;
label_25a290:
    // 0x25a290: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x25a290u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x25a294: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a298: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25a298u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25a29c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a2a0: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x25a2a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25a2a4: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x25A2A4u;
    {
        const bool branch_taken_0x25a2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a2a4) {
            ctx->pc = 0x25A254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a254;
        }
    }
    ctx->pc = 0x25A2ACu;
    // 0x25a2ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25A2ACu;
    {
        const bool branch_taken_0x25a2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a2ac) {
            ctx->pc = 0x25A2C8u;
            goto label_25a2c8;
        }
    }
    ctx->pc = 0x25A2B4u;
label_25a2b4:
    // 0x25a2b4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2b8: 0xa0601083  sb          $zero, 0x1083($v1)
    ctx->pc = 0x25a2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4227), (uint8_t)GPR_U32(ctx, 0));
    // 0x25a2bc: 0x300400ff  andi        $a0, $zero, 0xFF
    ctx->pc = 0x25a2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x25a2c0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2c4: 0xa0641084  sb          $a0, 0x1084($v1)
    ctx->pc = 0x25a2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4228), (uint8_t)GPR_U32(ctx, 4));
label_25a2c8:
    // 0x25a2c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2cc: 0xa0601085  sb          $zero, 0x1085($v1)
    ctx->pc = 0x25a2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4229), (uint8_t)GPR_U32(ctx, 0));
    // 0x25a2d0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2d4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2d8: 0x8c840ca0  lw          $a0, 0xCA0($a0)
    ctx->pc = 0x25a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3232)));
    // 0x25a2dc: 0x24631078  addiu       $v1, $v1, 0x1078
    ctx->pc = 0x25a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4216));
    // 0x25a2e0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a2e4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25a2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25a2e8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2ec: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2f0: 0x24841078  addiu       $a0, $a0, 0x1078
    ctx->pc = 0x25a2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4216));
    // 0x25a2f4: 0x2463107c  addiu       $v1, $v1, 0x107C
    ctx->pc = 0x25a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4220));
    // 0x25a2f8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a2fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25a2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25a300: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a304: 0x94631078  lhu         $v1, 0x1078($v1)
    ctx->pc = 0x25a304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4216)));
    // 0x25a308: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a30c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25a30cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a310: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a314: 0xac641098  sw          $a0, 0x1098($v1)
    ctx->pc = 0x25a314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4248), GPR_U32(ctx, 4));
    // 0x25a318: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a31c: 0x9463108a  lhu         $v1, 0x108A($v1)
    ctx->pc = 0x25a31cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4234)));
    // 0x25a320: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a324: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x25a324u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x25a328: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a32c: 0xac64109c  sw          $a0, 0x109C($v1)
    ctx->pc = 0x25a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4252), GPR_U32(ctx, 4));
    // 0x25a330: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a334: 0xa47e108c  sh          $fp, 0x108C($v1)
    ctx->pc = 0x25a334u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4236), (uint16_t)GPR_U32(ctx, 30));
    // 0x25a338: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a33c: 0xa460108e  sh          $zero, 0x108E($v1)
    ctx->pc = 0x25a33cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4238), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a340: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a344: 0x9463108a  lhu         $v1, 0x108A($v1)
    ctx->pc = 0x25a344u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4234)));
    // 0x25a348: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a34c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25a350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25a350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a354: 0x0  nop
    ctx->pc = 0x25a354u;
    // NOP
    // 0x25a358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25a358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25a35c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a360: 0xe4601074  swc1        $f0, 0x1074($v1)
    ctx->pc = 0x25a360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4212), bits); }
    // 0x25a364: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x25a364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x25a368: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a36c: 0xac641094  sw          $a0, 0x1094($v1)
    ctx->pc = 0x25a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4244), GPR_U32(ctx, 4));
    // 0x25a370: 0x97a400c0  lhu         $a0, 0xC0($sp)
    ctx->pc = 0x25a370u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25a374: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a378: 0xa4641080  sh          $a0, 0x1080($v1)
    ctx->pc = 0x25a378u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4224), (uint16_t)GPR_U32(ctx, 4));
    // 0x25a37c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x25a37cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25a380: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25a380u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25a384: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25a384u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25a388: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25a388u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a38c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25a38cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a390: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25a390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a394: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25a394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25a398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a39c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25a39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a3a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a3a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x25a3a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25a3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x25A3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A3B0u;
}
