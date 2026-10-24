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

// Function: Technique_menu_init
// Address: 0x379d90 - 0x379fc8
void Technique_menu_init_0x379d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Technique_menu_init_0x379d90");
#endif

    switch (ctx->pc) {
        case 0x379e30u: goto label_379e30;
        case 0x379e60u: goto label_379e60;
        case 0x379f10u: goto label_379f10;
        case 0x379f38u: goto label_379f38;
        default: break;
    }

    ctx->pc = 0x379d90u;

    // 0x379d90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x379d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x379d94: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x379d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x379d98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x379d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x379d9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x379d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x379da0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379da4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379da8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x379da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x379dac: 0x24706150  addiu       $s0, $v1, 0x6150
    ctx->pc = 0x379dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x379db0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379db4: 0x8c2405a8  lw          $a0, 0x5A8($at)
    ctx->pc = 0x379db4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x9A05A8u));
    // 0x379db8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x379db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379dbc: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x379DBCu;
    {
        const bool branch_taken_0x379dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x379dbc) {
            ctx->pc = 0x379E58u;
            goto label_379e58;
        }
    }
    ctx->pc = 0x379DC4u;
    // 0x379dc4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x379DC4u;
    {
        const bool branch_taken_0x379dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x379dc4) {
            ctx->pc = 0x379DD4u;
            goto label_379dd4;
        }
    }
    ctx->pc = 0x379DCCu;
    // 0x379dcc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x379DCCu;
    {
        const bool branch_taken_0x379dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379dcc) {
            ctx->pc = 0x379FA8u;
            goto label_379fa8;
        }
    }
    ctx->pc = 0x379DD4u;
label_379dd4:
    // 0x379dd4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379dd8: 0xac2005a0  sw          $zero, 0x5A0($at)
    ctx->pc = 0x379dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A05A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A0u, _value); } while (0);
    // 0x379ddc: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379de0: 0xac200590  sw          $zero, 0x590($at)
    ctx->pc = 0x379de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0590u, _value); } while (0);
    // 0x379de4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379de8: 0xac200580  sw          $zero, 0x580($at)
    ctx->pc = 0x379de8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0580u, _value); } while (0);
    // 0x379dec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x379decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x379df0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379df4: 0xac220598  sw          $v0, 0x598($at)
    ctx->pc = 0x379df4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0598u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0598u, _value); } while (0);
    // 0x379df8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379dfc: 0xac220588  sw          $v0, 0x588($at)
    ctx->pc = 0x379dfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0588u, _value); } while (0);
    // 0x379e00: 0xae006870  sw          $zero, 0x6870($s0)
    ctx->pc = 0x379e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 0));
    // 0x379e04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x379e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x379e08: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x379e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x379e0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x379e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x379e10: 0xae020520  sw          $v0, 0x520($s0)
    ctx->pc = 0x379e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
    // 0x379e14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x379e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x379e18: 0xae020520  sw          $v0, 0x520($s0)
    ctx->pc = 0x379e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
    // 0x379e1c: 0x8e0565a0  lw          $a1, 0x65A0($s0)
    ctx->pc = 0x379e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x379e20: 0x240400a6  addiu       $a0, $zero, 0xA6
    ctx->pc = 0x379e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x379e24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x379e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379e28: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x379E28u;
    SET_GPR_U32(ctx, 31, 0x379E30u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x379E28u, 0x379E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E30u;
label_379e30:
    // 0x379e30: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x379e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x379e34: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x379e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x379e38: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x379e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x379e3c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379e40: 0x8c2305a8  lw          $v1, 0x5A8($at)
    ctx->pc = 0x379e40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A8u));
    // 0x379e44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x379e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x379e48: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379e4c: 0xac2305a8  sw          $v1, 0x5A8($at)
    ctx->pc = 0x379e4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A05A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A8u, _value); } while (0);
    // 0x379e50: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x379E50u;
    {
        const bool branch_taken_0x379e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379e50) {
            ctx->pc = 0x379FA8u;
            goto label_379fa8;
        }
    }
    ctx->pc = 0x379E58u;
label_379e58:
    // 0x379e58: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x379E58u;
    SET_GPR_U32(ctx, 31, 0x379E60u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x379E58u, 0x379E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E60u;
label_379e60:
    // 0x379e60: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x379E60u;
    {
        const bool branch_taken_0x379e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379e60) {
            ctx->pc = 0x379FA8u;
            goto label_379fa8;
        }
    }
    ctx->pc = 0x379E68u;
    // 0x379e68: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x379e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x379e6c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x379e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x379e70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x379e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x379e74: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x379e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x379e78: 0x8e1265a0  lw          $s2, 0x65A0($s0)
    ctx->pc = 0x379e78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x379e7c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x379e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x379e80: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x379e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x379e84: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x379e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x379e88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x379e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x379e8c: 0xae020620  sw          $v0, 0x620($s0)
    ctx->pc = 0x379e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 2));
    // 0x379e90: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x379e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x379e94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x379e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x379e98: 0xae020628  sw          $v0, 0x628($s0)
    ctx->pc = 0x379e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    // 0x379e9c: 0x96020624  lhu         $v0, 0x624($s0)
    ctx->pc = 0x379e9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x379ea0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x379ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x379ea4: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x379ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x379ea8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x379ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x379eac: 0xa602062c  sh          $v0, 0x62C($s0)
    ctx->pc = 0x379eacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1580), (uint16_t)GPR_U32(ctx, 2));
    // 0x379eb0: 0x96020626  lhu         $v0, 0x626($s0)
    ctx->pc = 0x379eb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1574)));
    // 0x379eb4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x379eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x379eb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x379eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x379ebc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x379ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x379ec0: 0xa602062e  sh          $v0, 0x62E($s0)
    ctx->pc = 0x379ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1582), (uint16_t)GPR_U32(ctx, 2));
    // 0x379ec4: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x379ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x379ec8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x379ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x379ecc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x379eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x379ed0: 0xae020628  sw          $v0, 0x628($s0)
    ctx->pc = 0x379ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    // 0x379ed4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x379ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x379ed8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x379ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x379edc: 0xae020630  sw          $v0, 0x630($s0)
    ctx->pc = 0x379edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 2));
    // 0x379ee0: 0x9602062c  lhu         $v0, 0x62C($s0)
    ctx->pc = 0x379ee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1580)));
    // 0x379ee4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x379ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x379ee8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x379ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x379eec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x379eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x379ef0: 0xa6020634  sh          $v0, 0x634($s0)
    ctx->pc = 0x379ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1588), (uint16_t)GPR_U32(ctx, 2));
    // 0x379ef4: 0x9602062e  lhu         $v0, 0x62E($s0)
    ctx->pc = 0x379ef4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1582)));
    // 0x379ef8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x379ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x379efc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x379efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x379f00: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x379f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x379f04: 0xa6020636  sh          $v0, 0x636($s0)
    ctx->pc = 0x379f04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1590), (uint16_t)GPR_U32(ctx, 2));
    // 0x379f08: 0xc076530  jal         func_1D94C0
    ctx->pc = 0x379F08u;
    SET_GPR_U32(ctx, 31, 0x379F10u);
    ctx->pc = 0x1D94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94C0u, 0x379F08u, 0x379F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379F10u;
label_379f10:
    // 0x379f10: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x379f10u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x379f14: 0x8e0265a0  lw          $v0, 0x65A0($s0)
    ctx->pc = 0x379f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x379f18: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x379f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x379f1c: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x379f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x379f20: 0x26110520  addiu       $s1, $s0, 0x520
    ctx->pc = 0x379f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x379f24: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x379f24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x379f28: 0x26050720  addiu       $a1, $s0, 0x720
    ctx->pc = 0x379f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
    // 0x379f2c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x379f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x379f30: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x379F30u;
    SET_GPR_U32(ctx, 31, 0x379F38u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x379F38u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x379F38u) { return; }
    ctx->pc = 0x379F38u;
label_379f38:
    // 0x379f38: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x379f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x379f3c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x379f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x379f40: 0x8e0465a0  lw          $a0, 0x65A0($s0)
    ctx->pc = 0x379f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x379f44: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x379f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x379f48: 0x34635800  ori         $v1, $v1, 0x5800
    ctx->pc = 0x379f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22528);
    // 0x379f4c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x379f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x379f50: 0xae0365a0  sw          $v1, 0x65A0($s0)
    ctx->pc = 0x379f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 3));
    // 0x379f54: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x379f54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x379f58: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x379f5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x379f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x379f60: 0x9623fffc  lhu         $v1, -0x4($s1)
    ctx->pc = 0x379f60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x379f64: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x379f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x379f68: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x379f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x379f6c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x379f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x379f70: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x379f70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x379f74: 0x9623fffe  lhu         $v1, -0x2($s1)
    ctx->pc = 0x379f74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967294)));
    // 0x379f78: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x379f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x379f7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x379f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x379f80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x379f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x379f84: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x379f84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x379f88: 0x8e036870  lw          $v1, 0x6870($s0)
    ctx->pc = 0x379f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x379f8c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x379f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x379f90: 0xae036870  sw          $v1, 0x6870($s0)
    ctx->pc = 0x379f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 3));
    // 0x379f94: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x379f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x379f98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x379f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x379f9c: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x379f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x379fa0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379fa4: 0xac2005a8  sw          $zero, 0x5A8($at)
    ctx->pc = 0x379fa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A05A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A8u, _value); } while (0);
label_379fa8:
    // 0x379fa8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x379fa8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x379fac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x379facu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379fb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x379fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379fb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379fbc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x379fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x379fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x379FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379FC8u;
}
