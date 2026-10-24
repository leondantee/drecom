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

// Function: Efm_set_vutype_db
// Address: 0x1dea20 - 0x1dedc8
void Efm_set_vutype_db_0x1dea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_set_vutype_db_0x1dea20");
#endif

    switch (ctx->pc) {
        case 0x1dea6cu: goto label_1dea6c;
        case 0x1debb8u: goto label_1debb8;
        case 0x1dec88u: goto label_1dec88;
        default: break;
    }

    ctx->pc = 0x1dea20u;

    // 0x1dea20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1dea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1dea24: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1dea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1dea28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1dea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1dea2c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1dea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1dea30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dea30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dea34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dea34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dea38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dea3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dea3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dea40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dea40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dea44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dea44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dea48: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1dea48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x1dea4c: 0xa3a500b0  sb          $a1, 0xB0($sp)
    ctx->pc = 0x1dea4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 5));
    // 0x1dea50: 0xa3a600b8  sb          $a2, 0xB8($sp)
    ctx->pc = 0x1dea50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 6));
    // 0x1dea54: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1dea54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dea58: 0x8c750058  lw          $s5, 0x58($v1)
    ctx->pc = 0x1dea58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dea5c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1dea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dea60: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x1dea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1dea64: 0x247e0008  addiu       $fp, $v1, 0x8
    ctx->pc = 0x1dea64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dea68: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1dea68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_1dea6c:
    // 0x1dea6c: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x1dea6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dea70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dea70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dea74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dea74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dea78: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1dea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1dea7c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1dea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1dea80: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x1dea80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x1dea84: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x1dea84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dea88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dea88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dea8c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1dea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dea90: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dea90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dea94: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x1dea94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x1dea98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dea9c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1dea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1deaa0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1deaa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1deaa4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1deaa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1deaa8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1deaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1deaac: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1deaacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1deab0: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x1deab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1deab4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1deab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1deab8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1deab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1deabc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1deabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1deac0: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x1deac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x1deac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1deac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1deac8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1deac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1deacc: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1deaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1dead0: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1dead0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1dead4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1dead4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dead8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1dead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1deadc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1deadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1deae0: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x1deae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1deae4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1deae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1deae8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1deae8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1deaec: 0x8eb40034  lw          $s4, 0x34($s5)
    ctx->pc = 0x1deaecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1deaf0: 0x8eb30030  lw          $s3, 0x30($s5)
    ctx->pc = 0x1deaf0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1deaf4: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x1deaf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1deaf8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1deaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1deafc: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x1deafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1deb00: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1deb00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1deb04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1deb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1deb08: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x1deb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x1deb0c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DEB0Cu;
    {
        const bool branch_taken_0x1deb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deb0c) {
            ctx->pc = 0x1DEB30u;
            goto label_1deb30;
        }
    }
    ctx->pc = 0x1DEB14u;
    // 0x1deb14: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1deb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1deb18: 0xaea30060  sw          $v1, 0x60($s5)
    ctx->pc = 0x1deb18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 3));
    // 0x1deb1c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1deb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1deb20: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x1deb20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
    // 0x1deb24: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1deb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1deb28: 0xaea30068  sw          $v1, 0x68($s5)
    ctx->pc = 0x1deb28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 3));
    // 0x1deb2c: 0x0  nop
    ctx->pc = 0x1deb2cu;
    // NOP
label_1deb30:
    // 0x1deb30: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x1deb30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1deb34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1deb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1deb38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1deb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1deb3c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1deb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1deb40: 0x8c770010  lw          $s7, 0x10($v1)
    ctx->pc = 0x1deb40u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1deb44: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x1deb44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1deb48: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1deb48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1deb4c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1deb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1deb50: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DEB50u;
    {
        const bool branch_taken_0x1deb50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1deb50) {
            ctx->pc = 0x1DEB98u;
            goto label_1deb98;
        }
    }
    ctx->pc = 0x1DEB58u;
    // 0x1deb58: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1deb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1deb5c: 0x2463bd20  addiu       $v1, $v1, -0x42E0
    ctx->pc = 0x1deb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950176));
    // 0x1deb60: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1deb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1deb64: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1deb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1deb68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1deb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1deb6c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1deb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1deb70: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1deb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1deb74: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1deb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1deb78: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1deb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1deb7c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1deb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1deb80: 0xfee30020  sd          $v1, 0x20($s7)
    ctx->pc = 0x1deb80u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 32), GPR_U64(ctx, 3));
    // 0x1deb84: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1deb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1deb88: 0xaee30028  sw          $v1, 0x28($s7)
    ctx->pc = 0x1deb88u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 40), GPR_U32(ctx, 3));
    // 0x1deb8c: 0xaee0002c  sw          $zero, 0x2C($s7)
    ctx->pc = 0x1deb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 0));
    // 0x1deb90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DEB90u;
    {
        const bool branch_taken_0x1deb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deb90) {
            ctx->pc = 0x1DEBB0u;
            goto label_1debb0;
        }
    }
    ctx->pc = 0x1DEB98u;
label_1deb98:
    // 0x1deb98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1deb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1deb9c: 0xfee30020  sd          $v1, 0x20($s7)
    ctx->pc = 0x1deb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 32), GPR_U64(ctx, 3));
    // 0x1deba0: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1deba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1deba4: 0xaee30028  sw          $v1, 0x28($s7)
    ctx->pc = 0x1deba4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 40), GPR_U32(ctx, 3));
    // 0x1deba8: 0xaee0002c  sw          $zero, 0x2C($s7)
    ctx->pc = 0x1deba8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 0));
    // 0x1debac: 0x0  nop
    ctx->pc = 0x1debacu;
    // NOP
label_1debb0:
    // 0x1debb0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1debb0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1debb4: 0x0  nop
    ctx->pc = 0x1debb4u;
    // NOP
label_1debb8:
    // 0x1debb8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1debb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1debbc: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x1debbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1debc0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1debc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1debc4: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x1debc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x1debc8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DEBC8u;
    {
        const bool branch_taken_0x1debc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1debc8) {
            ctx->pc = 0x1DEBF0u;
            goto label_1debf0;
        }
    }
    ctx->pc = 0x1DEBD0u;
    // 0x1debd0: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x1debd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1debd4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1debd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1debd8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1debd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1debdc: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x1debdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x1debe0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1debe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1debe4: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x1debe4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x1debe8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1DEBE8u;
    {
        const bool branch_taken_0x1debe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1debe8) {
            ctx->pc = 0x1DEC50u;
            goto label_1dec50;
        }
    }
    ctx->pc = 0x1DEBF0u;
label_1debf0:
    // 0x1debf0: 0x9643001c  lhu         $v1, 0x1C($s2)
    ctx->pc = 0x1debf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1debf4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEBF4u;
    {
        const bool branch_taken_0x1debf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1debf4) {
            ctx->pc = 0x1DEC08u;
            goto label_1dec08;
        }
    }
    ctx->pc = 0x1DEBFCu;
    // 0x1debfc: 0xfe600010  sd          $zero, 0x10($s3)
    ctx->pc = 0x1debfcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 0));
    // 0x1dec00: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DEC00u;
    {
        const bool branch_taken_0x1dec00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dec00) {
            ctx->pc = 0x1DEC50u;
            goto label_1dec50;
        }
    }
    ctx->pc = 0x1DEC08u;
label_1dec08:
    // 0x1dec08: 0x9643001c  lhu         $v1, 0x1C($s2)
    ctx->pc = 0x1dec08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1dec0c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dec0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dec10: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x1dec10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x1dec14: 0x3464000f  ori         $a0, $v1, 0xF
    ctx->pc = 0x1dec14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x1dec18: 0x9643001e  lhu         $v1, 0x1E($s2)
    ctx->pc = 0x1dec18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x1dec1c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dec1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dec20: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1dec20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1dec24: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1dec24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1dec28: 0x96430020  lhu         $v1, 0x20($s2)
    ctx->pc = 0x1dec28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1dec2c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dec2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dec30: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1dec30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1dec34: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1dec34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dec38: 0x96430022  lhu         $v1, 0x22($s2)
    ctx->pc = 0x1dec38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x1dec3c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dec3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dec40: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1dec40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1dec44: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1dec44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dec48: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x1dec48u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x1dec4c: 0x0  nop
    ctx->pc = 0x1dec4cu;
    // NOP
label_1dec50:
    // 0x1dec50: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1dec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dec54: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x1dec54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dec58: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dec58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dec5c: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x1dec5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x1dec60: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DEC60u;
    {
        const bool branch_taken_0x1dec60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dec60) {
            ctx->pc = 0x1DED48u;
            goto label_1ded48;
        }
    }
    ctx->pc = 0x1DEC68u;
    // 0x1dec68: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x1dec68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dec6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dec70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dec70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dec74: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1dec74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1dec78: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x1dec78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dec7c: 0x8e910010  lw          $s1, 0x10($s4)
    ctx->pc = 0x1dec7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1dec80: 0x0  nop
    ctx->pc = 0x1dec80u;
    // NOP
    // 0x1dec84: 0x0  nop
    ctx->pc = 0x1dec84u;
    // NOP
label_1dec88:
    // 0x1dec88: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1dec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dec8c: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x1dec8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dec90: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dec90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dec94: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1dec94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1dec98: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DEC98u;
    {
        const bool branch_taken_0x1dec98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dec98) {
            ctx->pc = 0x1DECECu;
            goto label_1decec;
        }
    }
    ctx->pc = 0x1DECA0u;
    // 0x1deca0: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x1deca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1deca4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1deca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1deca8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DECA8u;
    {
        const bool branch_taken_0x1deca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deca8) {
            ctx->pc = 0x1DECCCu;
            goto label_1deccc;
        }
    }
    ctx->pc = 0x1DECB0u;
    // 0x1decb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1decb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1decb4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1decb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1decb8: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1decb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1decbc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1decbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1decc0: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1decc0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1decc4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1DECC4u;
    {
        const bool branch_taken_0x1decc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1decc4) {
            ctx->pc = 0x1DED38u;
            goto label_1ded38;
        }
    }
    ctx->pc = 0x1DECCCu;
label_1deccc:
    // 0x1deccc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1decccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1decd0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1decd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1decd4: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1decd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1decd8: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x1decd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x1decdc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1decdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dece0: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1dece0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1dece4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DECE4u;
    {
        const bool branch_taken_0x1dece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dece4) {
            ctx->pc = 0x1DED38u;
            goto label_1ded38;
        }
    }
    ctx->pc = 0x1DECECu;
label_1decec:
    // 0x1decec: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x1dececu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1decf0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1decf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1decf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1decf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1decf8: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DECF8u;
    {
        const bool branch_taken_0x1decf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1decf8) {
            ctx->pc = 0x1DED1Cu;
            goto label_1ded1c;
        }
    }
    ctx->pc = 0x1DED00u;
    // 0x1ded00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ded00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ded04: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ded04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ded08: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1ded08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1ded0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ded0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ded10: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1ded10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1ded14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DED14u;
    {
        const bool branch_taken_0x1ded14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ded14) {
            ctx->pc = 0x1DED38u;
            goto label_1ded38;
        }
    }
    ctx->pc = 0x1DED1Cu;
label_1ded1c:
    // 0x1ded1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ded1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ded20: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ded20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ded24: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1ded24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1ded28: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x1ded28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x1ded2c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ded2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ded30: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1ded30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1ded34: 0x0  nop
    ctx->pc = 0x1ded34u;
    // NOP
label_1ded38:
    // 0x1ded38: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1ded38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1ded3c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ded3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ded40: 0x1620ffd1  bnez        $s1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1DED40u;
    {
        const bool branch_taken_0x1ded40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ded40) {
            ctx->pc = 0x1DEC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dec88;
        }
    }
    ctx->pc = 0x1DED48u;
label_1ded48:
    // 0x1ded48: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1ded48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1ded4c: 0x269400c0  addiu       $s4, $s4, 0xC0
    ctx->pc = 0x1ded4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x1ded50: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1ded50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1ded54: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1ded54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1ded58: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x1ded58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x1ded5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ded5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ded60: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x1ded60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ded64: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
    ctx->pc = 0x1DED64u;
    {
        const bool branch_taken_0x1ded64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ded64) {
            ctx->pc = 0x1DEBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1debb8;
        }
    }
    ctx->pc = 0x1DED6Cu;
    // 0x1ded6c: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x1ded6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x1ded70: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x1ded70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x1ded74: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1ded74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1ded78: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1ded78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ded7c: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1ded7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1ded80: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1ded80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1ded84: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1ded84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1ded88: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ded88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ded8c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1ded8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ded90: 0x1460ff36  bnez        $v1, . + 4 + (-0xCA << 2)
    ctx->pc = 0x1DED90u;
    {
        const bool branch_taken_0x1ded90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ded90) {
            ctx->pc = 0x1DEA6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dea6c;
        }
    }
    ctx->pc = 0x1DED98u;
    // 0x1ded98: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ded98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ded9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ded9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1deda0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1deda0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1deda4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1deda4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1deda8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1deda8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dedac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dedacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dedb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dedb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dedb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dedb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dedb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dedb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dedbc: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1dedbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dedc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEDC8u;
}
