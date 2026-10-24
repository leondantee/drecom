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

// Function: entry_0037ab00
// Address: 0x37ab00 - 0x37ac38
void entry_0037ab00_0x37ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037ab00_0x37ab00");
#endif

    switch (ctx->pc) {
        case 0x37aba0u: goto label_37aba0;
        case 0x37ac20u: goto label_37ac20;
        default: break;
    }

    ctx->pc = 0x37ab00u;

    // 0x37ab00: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x37ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x37ab04: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x37ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x37ab08: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x37ab08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ab0c: 0x1530c0  sll         $a2, $s5, 3
    ctx->pc = 0x37ab0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x37ab10: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x37ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x37ab14: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x37ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37ab18: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x37ab18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x37ab1c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x37ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x37ab20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37ab20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37ab24: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x37ab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37ab28: 0x2616001c  addiu       $s6, $s0, 0x1C
    ctx->pc = 0x37ab28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x37ab2c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x37ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x37ab30: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x37ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x37ab34: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x37ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x37ab38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x37ab38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ab3c: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x37ab3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37ab40: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x37ab40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x37ab44: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x37ab44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x37ab48: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x37ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x37ab4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37ab4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37ab50: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x37ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x37ab54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37ab58: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x37ab58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37ab5c: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x37ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x37ab60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37ab64: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x37ab64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37ab68: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x37ab68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ab6c: 0x24c300a5  addiu       $v1, $a2, 0xA5
    ctx->pc = 0x37ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 165));
    // 0x37ab70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x37ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37ab74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37ab78: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x37ab78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37ab7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37ab80: 0x2443cca0  addiu       $v1, $v0, -0x3360
    ctx->pc = 0x37ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x37ab84: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x37ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37ab88: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x37ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x37ab8c: 0x27c3001c  addiu       $v1, $fp, 0x1C
    ctx->pc = 0x37ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37ab90: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x37ab90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37ab94: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37ab94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37ab98: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37AB98u;
    SET_GPR_U32(ctx, 31, 0x37ABA0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37AB98u, 0x37ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ABA0u;
label_37aba0:
    // 0x37aba0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x37aba0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37aba4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37aba8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x37aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x37abac: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37abacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37abb0: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x37abb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x37abb4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x37abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x37abb8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x37abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37abbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37abbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37abc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37abc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37abc4: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x37abc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x37abc8: 0x3446000a  ori         $a2, $v0, 0xA
    ctx->pc = 0x37abc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x37abcc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37abd0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37abd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37abd4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x37abd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x37abd8: 0x313b8  dsll        $v0, $v1, 14
    ctx->pc = 0x37abd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 14);
    // 0x37abdc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x37abdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37abe0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x37abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37abe4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x37abe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37abe8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37abe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37abec: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x37abecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x37abf0: 0x463825  or          $a3, $v0, $a2
    ctx->pc = 0x37abf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x37abf4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x37abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37abf8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x37abf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x37abfc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37abfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37ac00: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x37ac00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x37ac04: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x37ac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x37ac08: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37ac0c: 0x27c6001c  addiu       $a2, $fp, 0x1C
    ctx->pc = 0x37ac0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37ac10: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x37ac10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37ac14: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37ac14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37ac18: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37AC18u;
    SET_GPR_U32(ctx, 31, 0x37AC20u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37AC18u, 0x37AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AC20u;
label_37ac20:
    // 0x37ac20: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x37ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x37ac24: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x37ac24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37ac28: 0x26560010  addiu       $s6, $s2, 0x10
    ctx->pc = 0x37ac28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37ac2c: 0x72c09628  paddub      $s2, $s6, $zero
    ctx->pc = 0x37ac2cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x37ac30: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x37ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37ac34: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x37ac34u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x37ac38u;
}
