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

// Function: entry_0013ca38
// Address: 0x13ca38 - 0x13cb88
void entry_0013ca38_0x13ca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ca38_0x13ca38");
#endif

    ctx->pc = 0x13ca38u;

    // 0x13ca38: 0x8fb400e8  lw          $s4, 0xE8($sp)
    ctx->pc = 0x13ca38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13ca3c: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x13ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x13ca40: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13ca44: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13ca48: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13ca48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13ca4c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x13ca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x13ca50: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x13ca54: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x13ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x13ca58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13ca5c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x13ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x13ca60: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x13ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
    // 0x13ca64: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x13ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x13ca68: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x13ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x13ca6c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13ca70: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x13ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
    // 0x13ca74: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x13ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    // 0x13ca78: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x13ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x13ca7c: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x13ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x13ca80: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x13ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x13ca84: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x13ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x13ca88: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13ca88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13ca8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13ca8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ca90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ca94: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13ca98: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x13ca98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x13ca9c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x13ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x13caa0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x13caa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13caa4: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13caa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13caa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13caa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13caac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13caacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13cab0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13cab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cab4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13cab8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x13cab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x13cabc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13cabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13cac0: 0xfe820030  sd          $v0, 0x30($s4)
    ctx->pc = 0x13cac0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 2));
    // 0x13cac4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13cac8: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x13cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
    // 0x13cacc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13caccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13cad0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x13cad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x13cad4: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x13cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x13cad8: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cadc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13cadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cae0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13cae4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cae8: 0x8c550028  lw          $s5, 0x28($v0)
    ctx->pc = 0x13cae8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x13caec: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13caecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13caf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13caf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13caf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13caf8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cafc: 0x8c560030  lw          $s6, 0x30($v0)
    ctx->pc = 0x13cafcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13cb00: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cb00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cb04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13cb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cb08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13cb0c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cb10: 0x8c570038  lw          $s7, 0x38($v0)
    ctx->pc = 0x13cb10u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x13cb14: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cb14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cb18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13cb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cb1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13cb20: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cb24: 0x8c5e0050  lw          $fp, 0x50($v0)
    ctx->pc = 0x13cb24u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x13cb28: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x13cb28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13cb2c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x13cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x13cb30: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x13cb30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cb34: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x13cb34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13cb38: 0x26440043  addiu       $a0, $s2, 0x43
    ctx->pc = 0x13cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 67));
    // 0x13cb3c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x13cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x13cb40: 0x3c027878  lui         $v0, 0x7878
    ctx->pc = 0x13cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30840 << 16));
    // 0x13cb44: 0x34427879  ori         $v0, $v0, 0x7879
    ctx->pc = 0x13cb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30841);
    // 0x13cb48: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x13cb48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13cb4c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x13cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x13cb50: 0x0  nop
    ctx->pc = 0x13cb50u;
    // NOP
    // 0x13cb54: 0x1010  mfhi        $v0
    ctx->pc = 0x13cb54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13cb58: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x13cb58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
    // 0x13cb5c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x13cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13cb60: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x13cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x13cb64: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cb64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cb68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13cb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cb6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13cb70: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cb74: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x13cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
    // 0x13cb78: 0xae700014  sw          $s0, 0x14($s3)
    ctx->pc = 0x13cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
    // 0x13cb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cb80: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x13cb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x13cb84: 0x0  nop
    ctx->pc = 0x13cb84u;
    // NOP
    ctx->pc = 0x13cb88u;
}
