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

// Function: entry_00293ac8
// Address: 0x293ac8 - 0x293cc8
void entry_00293ac8_0x293ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00293ac8_0x293ac8");
#endif

    switch (ctx->pc) {
        case 0x293b90u: goto label_293b90;
        case 0x293c18u: goto label_293c18;
        case 0x293c94u: goto label_293c94;
        default: break;
    }

    ctx->pc = 0x293ac8u;

    // 0x293ac8: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x293ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x293acc: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x293accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x293ad0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x293ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x293ad4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x293ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x293ad8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x293ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x293adc: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x293adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x293ae0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x293ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x293ae4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x293ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293ae8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x293ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x293aec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x293aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x293af0: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x293af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x293af4: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x293af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x293af8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x293af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x293afc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x293afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x293b00: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x293b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x293b04: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x293b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x293b08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x293b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x293b0c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x293b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x293b10: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x293b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x293b14: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x293b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x293b18: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x293b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x293b1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x293b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x293b20: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x293b20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x293b24: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x293b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293b28: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x293b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x293b2c: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x293b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x293b30: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x293b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x293b34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x293b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x293b38: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x293b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x293b3c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x293b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x293b40: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x293b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x293b44: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x293b44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293b48: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x293b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x293b4c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x293b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x293b50: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x293b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x293b54: 0x244400a3  addiu       $a0, $v0, 0xA3
    ctx->pc = 0x293b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 163));
    // 0x293b58: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x293b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x293b5c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x293b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x293b60: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x293b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x293b64: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x293b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x293b68: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x293b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x293b6c: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x293b6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x293b70: 0x2464cca0  addiu       $a0, $v1, -0x3360
    ctx->pc = 0x293b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x293b74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x293b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x293b78: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x293b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x293b7c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x293b7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293b80: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x293b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x293b84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x293b84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293b88: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x293B88u;
    SET_GPR_U32(ctx, 31, 0x293B90u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x293B90u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x293B90u) { return; }
    ctx->pc = 0x293B90u;
label_293b90:
    // 0x293b90: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x293b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x293b94: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x293b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x293b98: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x293b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x293b9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x293b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x293ba0: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x293ba0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x293ba4: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x293ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x293ba8: 0xdc430018  ld          $v1, 0x18($v0)
    ctx->pc = 0x293ba8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x293bac: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x293bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x293bb0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x293bb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293bb4: 0x32378  dsll        $a0, $v1, 13
    ctx->pc = 0x293bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 13);
    // 0x293bb8: 0x424be  dsrl32      $a0, $a0, 18
    ctx->pc = 0x293bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 18));
    // 0x293bbc: 0x86202d  daddu       $a0, $a0, $a2
    ctx->pc = 0x293bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 6));
    // 0x293bc0: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x293bc0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x293bc4: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x293bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x293bc8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x293bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x293bcc: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x293bccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293bd0: 0x3217c  dsll32      $a0, $v1, 5
    ctx->pc = 0x293bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 5));
    // 0x293bd4: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x293bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x293bd8: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x293bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x293bdc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x293bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x293be0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x293be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x293be4: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x293be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x293be8: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x293be8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x293bec: 0x53c38  dsll        $a3, $a1, 16
    ctx->pc = 0x293becu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << 16);
    // 0x293bf0: 0x34e5ffff  ori         $a1, $a3, 0xFFFF
    ctx->pc = 0x293bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x293bf4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x293bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x293bf8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x293bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x293bfc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x293bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x293c00: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x293c00u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x293c04: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x293c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x293c08: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x293c08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x293c0c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x293c0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x293c10: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x293C10u;
    SET_GPR_U32(ctx, 31, 0x293C18u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293C10u, 0x293C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C18u;
label_293c18:
    // 0x293c18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x293c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x293c1c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x293c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x293c20: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x293c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x293c24: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x293c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x293c28: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x293c28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x293c2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293c30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x293c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x293c34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x293c38: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x293c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x293c3c: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x293c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x293c40: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x293c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x293c44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x293c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x293c48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293c48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x293c4c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x293c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x293c50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293c54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x293c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x293c58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x293c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x293c5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293c5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x293c60: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x293c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x293c64: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x293c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x293c68: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x293c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x293c6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x293c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x293c70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293c70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x293c74: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x293c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x293c78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x293c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x293c7c: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x293c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x293c80: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x293c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x293c84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x293c84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293c88: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x293c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x293c8c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x293C8Cu;
    SET_GPR_U32(ctx, 31, 0x293C94u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293C8Cu, 0x293C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C94u;
label_293c94:
    // 0x293c94: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x293c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x293c98: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x293c98u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293c9c: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x293c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x293ca0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x293ca0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293ca4: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x293ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x293ca8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x293ca8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293cac: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x293cacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x293cb0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x293cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x293cb4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x293cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x293cb8: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x293cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x293cbc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x293cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x293cc0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x293cc0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293cc4: 0x0  nop
    ctx->pc = 0x293cc4u;
    // NOP
    ctx->pc = 0x293cc8u;
}
