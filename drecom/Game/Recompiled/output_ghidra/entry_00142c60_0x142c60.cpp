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

// Function: entry_00142c60
// Address: 0x142c60 - 0x142de8
void entry_00142c60_0x142c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142c60_0x142c60");
#endif

    switch (ctx->pc) {
        case 0x142cb0u: goto label_142cb0;
        case 0x142de0u: goto label_142de0;
        default: break;
    }

    ctx->pc = 0x142c60u;

    // 0x142c60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x142c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x142c64: 0x94420018  lhu         $v0, 0x18($v0)
    ctx->pc = 0x142c64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x142c68: 0x30453fff  andi        $a1, $v0, 0x3FFF
    ctx->pc = 0x142c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x142c6c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x142c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x142c70: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x142c70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x142c74: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x142c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x142c78: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x142c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x142c7c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x142c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x142c80: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x142c80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x142c84: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x142c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x142c88: 0x9442001a  lhu         $v0, 0x1A($v0)
    ctx->pc = 0x142c88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x142c8c: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x142c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x142c90: 0x23ebe  dsrl32      $a3, $v0, 26
    ctx->pc = 0x142c90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x142c94: 0x24041b00  addiu       $a0, $zero, 0x1B00
    ctx->pc = 0x142c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    // 0x142c98: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x142c98u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142c9c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x142c9cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142ca0: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x142ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x142ca4: 0x240b00e0  addiu       $t3, $zero, 0xE0
    ctx->pc = 0x142ca4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x142ca8: 0xc05e7d8  jal         func_179F60
    ctx->pc = 0x142CA8u;
    SET_GPR_U32(ctx, 31, 0x142CB0u);
    ctx->pc = 0x179F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179F60u, 0x142CA8u, 0x142CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CB0u;
label_142cb0:
    // 0x142cb0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x142cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x142cb4: 0x2477ccf0  addiu       $s7, $v1, -0x3310
    ctx->pc = 0x142cb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954224));
    // 0x142cb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142cbc: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x142cbcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47CCF0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CCF0u, _value); } while (0);
    // 0x142cc0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x142cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142cc4: 0xa2e20001  sb          $v0, 0x1($s7)
    ctx->pc = 0x142cc4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CCF1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CCF1u, _value); } while (0);
    // 0x142cc8: 0xa2e00002  sb          $zero, 0x2($s7)
    ctx->pc = 0x142cc8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CCF2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CCF2u, _value); } while (0);
    // 0x142ccc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x142cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x142cd0: 0xa6e30004  sh          $v1, 0x4($s7)
    ctx->pc = 0x142cd0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47CCF4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CCF4u, _value); } while (0);
    // 0x142cd4: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x142cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x142cd8: 0xa6e20006  sh          $v0, 0x6($s7)
    ctx->pc = 0x142cd8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CCF6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CCF6u, _value); } while (0);
    // 0x142cdc: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x142cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CCF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CCF8u, _value); } while (0);
    // 0x142ce0: 0x24031b00  addiu       $v1, $zero, 0x1B00
    ctx->pc = 0x142ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    // 0x142ce4: 0x96e20018  lhu         $v0, 0x18($s7)
    ctx->pc = 0x142ce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CD08u));
    // 0x142ce8: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x142ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x142cec: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x142cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x142cf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x142cf4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x142cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x142cf8: 0xa6e20018  sh          $v0, 0x18($s7)
    ctx->pc = 0x142cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x142cfc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x142cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x142d00: 0xdee50018  ld          $a1, 0x18($s7)
    ctx->pc = 0x142d00u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x142d04: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x142d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x142d08: 0x223b8  dsll        $a0, $v0, 14
    ctx->pc = 0x142d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 14);
    // 0x142d0c: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x142d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x142d10: 0x34623fff  ori         $v0, $v1, 0x3FFF
    ctx->pc = 0x142d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x142d14: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x142d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x142d18: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x142d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x142d1c: 0xfee20018  sd          $v0, 0x18($s7)
    ctx->pc = 0x142d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 24), GPR_U64(ctx, 2));
    // 0x142d20: 0x96e5001a  lhu         $a1, 0x1A($s7)
    ctx->pc = 0x142d20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 26)));
    // 0x142d24: 0x3002003f  andi        $v0, $zero, 0x3F
    ctx->pc = 0x142d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)63);
    // 0x142d28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x142d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x142d2c: 0x2404fc0f  addiu       $a0, $zero, -0x3F1
    ctx->pc = 0x142d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x142d30: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x142d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x142d34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142d38: 0xa6e2001a  sh          $v0, 0x1A($s7)
    ctx->pc = 0x142d38u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x142d3c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x142d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x142d40: 0x92f0001b  lbu         $s0, 0x1B($s7)
    ctx->pc = 0x142d40u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 27)));
    // 0x142d44: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x142d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x142d48: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x142d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142d4c: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x142d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x142d50: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x142d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x142d54: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x142d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x142d58: 0xa2e2001b  sb          $v0, 0x1B($s7)
    ctx->pc = 0x142d58u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x142d5c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x142d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x142d60: 0xdee30018  ld          $v1, 0x18($s7)
    ctx->pc = 0x142d60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x142d64: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x142d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x142d68: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x142d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x142d6c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x142d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x142d70: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x142d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x142d74: 0x3c043fff  lui         $a0, 0x3FFF
    ctx->pc = 0x142d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16383 << 16));
    // 0x142d78: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x142d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x142d7c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x142d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x142d80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x142d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x142d84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x142d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142d88: 0xfee20018  sd          $v0, 0x18($s7)
    ctx->pc = 0x142d88u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 24), GPR_U64(ctx, 2));
    // 0x142d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142d90: 0x92e4001c  lbu         $a0, 0x1C($s7)
    ctx->pc = 0x142d90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x142d94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x142d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x142d98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x142d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142d9c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x142d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x142da0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x142da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x142da4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142da8: 0xa2e2001c  sb          $v0, 0x1C($s7)
    ctx->pc = 0x142da8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x142dac: 0x92e4001c  lbu         $a0, 0x1C($s7)
    ctx->pc = 0x142dacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x142db0: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x142db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x142db4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x142db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x142db8: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x142db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x142dbc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x142dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x142dc0: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x142dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x142dc4: 0xa2e2001c  sb          $v0, 0x1C($s7)
    ctx->pc = 0x142dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x142dc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142dcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x142dccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142dd0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x142dd0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142dd4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x142dd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142dd8: 0xc0590ec  jal         func_1643B0
    ctx->pc = 0x142DD8u;
    SET_GPR_U32(ctx, 31, 0x142DE0u);
    ctx->pc = 0x1643B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643B0u, 0x142DD8u, 0x142DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DE0u;
label_142de0:
    // 0x142de0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x142DE0u;
    {
        const bool branch_taken_0x142de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142de0) {
            ctx->pc = 0x142DF8u;
            return;
        }
    }
    ctx->pc = 0x142DE8u;
}
