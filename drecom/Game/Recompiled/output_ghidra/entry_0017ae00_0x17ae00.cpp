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

// Function: entry_0017ae00
// Address: 0x17ae00 - 0x17b0a8
void entry_0017ae00_0x17ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ae00_0x17ae00");
#endif

    switch (ctx->pc) {
        case 0x17b014u: goto label_17b014;
        case 0x17b020u: goto label_17b020;
        case 0x17b038u: goto label_17b038;
        case 0x17b050u: goto label_17b050;
        case 0x17b074u: goto label_17b074;
        case 0x17b08cu: goto label_17b08c;
        case 0x17b0a4u: goto label_17b0a4;
        default: break;
    }

    ctx->pc = 0x17ae00u;

    // 0x17ae00: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x17ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ae04: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x17ae04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x17ae08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ae0c: 0x93a40051  lbu         $a0, 0x51($sp)
    ctx->pc = 0x17ae0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
    // 0x17ae10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ae10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17ae14: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x17ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x17ae18: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x17ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x17ae1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17ae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17ae20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17ae20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17ae24: 0xa3a20051  sb          $v0, 0x51($sp)
    ctx->pc = 0x17ae24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ae28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ae2c: 0x93a40055  lbu         $a0, 0x55($sp)
    ctx->pc = 0x17ae2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 85)));
    // 0x17ae30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17ae34: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x17ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x17ae38: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x17ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x17ae3c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17ae40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17ae40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17ae44: 0xa3a20055  sb          $v0, 0x55($sp)
    ctx->pc = 0x17ae44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ae48: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x17ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x17ae4c: 0xdfa50050  ld          $a1, 0x50($sp)
    ctx->pc = 0x17ae4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ae50: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x17ae50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x17ae54: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x17ae54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
    // 0x17ae58: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x17ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x17ae5c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x17ae5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x17ae60: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17ae60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17ae64: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17ae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17ae68: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17ae6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17ae6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17ae70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17ae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17ae74: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x17ae74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x17ae78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17ae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17ae7c: 0xffa20050  sd          $v0, 0x50($sp)
    ctx->pc = 0x17ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
    // 0x17ae80: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x17ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17ae84: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x17ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17ae88: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17ae8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17ae90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ae94: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x17ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x17ae98: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17ae9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17aea0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17aea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17aea4: 0x93a40057  lbu         $a0, 0x57($sp)
    ctx->pc = 0x17aea4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 87)));
    // 0x17aea8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x17aea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17aeac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17aeb0: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x17aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17aeb4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17aeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17aeb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17aeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17aebc: 0xa3a20057  sb          $v0, 0x57($sp)
    ctx->pc = 0x17aebcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x17aec0: 0x97a40050  lhu         $a0, 0x50($sp)
    ctx->pc = 0x17aec0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17aec4: 0x30037fff  andi        $v1, $zero, 0x7FFF
    ctx->pc = 0x17aec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x17aec8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x17aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x17aecc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17aeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17aed0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17aed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17aed4: 0xa7a20050  sh          $v0, 0x50($sp)
    ctx->pc = 0x17aed4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x17aed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17aedc: 0x93a40058  lbu         $a0, 0x58($sp)
    ctx->pc = 0x17aedcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17aee0: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x17aee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17aee4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17aee8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17aee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17aeec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17aeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17aef0: 0xa3a20058  sb          $v0, 0x58($sp)
    ctx->pc = 0x17aef0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x17aef4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17aef8: 0x93a40058  lbu         $a0, 0x58($sp)
    ctx->pc = 0x17aef8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17aefc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x17aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17af00: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17af00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17af04: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x17af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17af08: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17af08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17af0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17af0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17af10: 0xa3a20058  sb          $v0, 0x58($sp)
    ctx->pc = 0x17af10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17af18: 0x93a40059  lbu         $a0, 0x59($sp)
    ctx->pc = 0x17af18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 89)));
    // 0x17af1c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x17af1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17af20: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17af20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17af24: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17af24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17af28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17af28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17af2c: 0xa3a20059  sb          $v0, 0x59($sp)
    ctx->pc = 0x17af2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 89), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17af30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17af34: 0x93a40059  lbu         $a0, 0x59($sp)
    ctx->pc = 0x17af34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 89)));
    // 0x17af38: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x17af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17af3c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17af40: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x17af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17af44: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17af48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17af48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17af4c: 0xa3a20059  sb          $v0, 0x59($sp)
    ctx->pc = 0x17af4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 89), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17af50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17af54: 0x93a4005a  lbu         $a0, 0x5A($sp)
    ctx->pc = 0x17af54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 90)));
    // 0x17af58: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x17af58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17af5c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17af60: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17af60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17af64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17af64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17af68: 0xa3a2005a  sb          $v0, 0x5A($sp)
    ctx->pc = 0x17af68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 90), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17af70: 0x93a4005a  lbu         $a0, 0x5A($sp)
    ctx->pc = 0x17af70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 90)));
    // 0x17af74: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x17af74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17af78: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17af78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17af7c: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x17af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17af80: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17af84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17af84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17af88: 0xa3a2005a  sb          $v0, 0x5A($sp)
    ctx->pc = 0x17af88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 90), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17af90: 0x93a4005b  lbu         $a0, 0x5B($sp)
    ctx->pc = 0x17af90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 91)));
    // 0x17af94: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x17af94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17af98: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17af9c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17af9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17afa0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17afa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17afa4: 0xa3a2005b  sb          $v0, 0x5B($sp)
    ctx->pc = 0x17afa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 91), (uint8_t)GPR_U32(ctx, 2));
    // 0x17afa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17afac: 0x93a4005b  lbu         $a0, 0x5B($sp)
    ctx->pc = 0x17afacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 91)));
    // 0x17afb0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x17afb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17afb4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17afb8: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x17afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17afbc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17afc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17afc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17afc4: 0xa3a2005b  sb          $v0, 0x5B($sp)
    ctx->pc = 0x17afc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 91), (uint8_t)GPR_U32(ctx, 2));
    // 0x17afc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17afcc: 0x93a4005c  lbu         $a0, 0x5C($sp)
    ctx->pc = 0x17afccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x17afd0: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x17afd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17afd4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17afd8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17afd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17afdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17afdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17afe0: 0xa3a2005c  sb          $v0, 0x5C($sp)
    ctx->pc = 0x17afe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 2));
    // 0x17afe4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17afe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17afe8: 0x8c23ef00  lw          $v1, -0x1100($at)
    ctx->pc = 0x17afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47EF00u));
    // 0x17afec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17afecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17aff0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17aff4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x17aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17aff8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17affc: 0x2442ed20  addiu       $v0, $v0, -0x12E0
    ctx->pc = 0x17affcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962464));
    // 0x17b000: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17b004: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b008: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17b008u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b00c: 0xc040b66  jal         func_102D98
    ctx->pc = 0x17B00Cu;
    SET_GPR_U32(ctx, 31, 0x17B014u);
    ctx->pc = 0x102D98u;
    {
        ctx->pc = 0x17B014u;
        ps2_stubs::sceGifPkInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B014u) { return; }
    ctx->pc = 0x17B014u;
label_17b014:
    // 0x17b014: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b018: 0xc040b6a  jal         func_102DA8
    ctx->pc = 0x17B018u;
    SET_GPR_U32(ctx, 31, 0x17B020u);
    ctx->pc = 0x102DA8u;
    {
        ctx->pc = 0x17B020u;
        ps2_stubs::sceGifPkReset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B020u) { return; }
    ctx->pc = 0x17B020u;
label_17b020:
    // 0x17b020: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b024: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x17b024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b028: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x17b028u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b02c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x17b02cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b030: 0xc040b84  jal         func_102E10
    ctx->pc = 0x17B030u;
    SET_GPR_U32(ctx, 31, 0x17B038u);
    ctx->pc = 0x102E10u;
    {
        ctx->pc = 0x17B038u;
        ps2_stubs::sceGifPkCnt(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B038u) { return; }
    ctx->pc = 0x17B038u;
label_17b038:
    // 0x17b038: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x17b038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17b03c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b040: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b044: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x17b044u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b048: 0xc040bc0  jal         func_102F00
    ctx->pc = 0x17B048u;
    SET_GPR_U32(ctx, 31, 0x17B050u);
    ctx->pc = 0x102F00u;
    {
        ctx->pc = 0x17B050u;
        ps2_stubs::sceGifPkOpenGifTag(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B050u) { return; }
    ctx->pc = 0x17B050u;
label_17b050:
    // 0x17b050: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17b050u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b054: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17B054u;
    {
        const bool branch_taken_0x17b054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b054) {
            ctx->pc = 0x17B0A8u;
            return;
        }
    }
    ctx->pc = 0x17B05Cu;
    // 0x17b05c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x17b05cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x17b060: 0x24c258c0  addiu       $v0, $a2, 0x58C0
    ctx->pc = 0x17b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 22720));
    // 0x17b064: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b068: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17b068u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3858C0u));
    // 0x17b06c: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B06Cu;
    SET_GPR_U32(ctx, 31, 0x17B074u);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B06Cu, 0x17B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B074u;
label_17b074:
    // 0x17b074: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17b074u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b078: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x17b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17b07c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b080: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17b080u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b084: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B084u;
    SET_GPR_U32(ctx, 31, 0x17B08Cu);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B084u, 0x17B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B08Cu;
label_17b08c:
    // 0x17b08c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17b08cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b090: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x17b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17b094: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b098: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17b098u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b09c: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B09Cu;
    SET_GPR_U32(ctx, 31, 0x17B0A4u);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B09Cu, 0x17B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0A4u;
label_17b0a4:
    // 0x17b0a4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17b0a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x17b0a8u;
}
