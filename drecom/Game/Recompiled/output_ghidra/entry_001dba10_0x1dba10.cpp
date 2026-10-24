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

// Function: entry_001dba10
// Address: 0x1dba10 - 0x1dbba8
void entry_001dba10_0x1dba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dba10_0x1dba10");
#endif

    ctx->pc = 0x1dba10u;

    // 0x1dba10: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1dba10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dba14: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1dba14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x1dba18: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba1c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1dba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dba20: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1dba20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1dba24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1dba24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1dba28: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x1dba28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1dba2c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba30: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1dba30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1dba34: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1dba34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1dba38: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba3c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1dba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1dba40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dba44: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1dba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba48: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1dba48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1dba4c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba50: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1dba50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1dba54: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba58: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1dba58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1dba5c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba60: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1dba60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1dba64: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1dba64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1dba68: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba6c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1dba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1dba70: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dba70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dba74: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1dba74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dba78: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x1dba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1dba7c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1dba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dba80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dba80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dba84: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba88: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1dba88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1dba8c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dba8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dba90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dba90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dba94: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1dba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dba98: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1dba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dba9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dbaa0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dbaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dbaa4: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1dbaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1dbaa8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbaac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1dbaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbab0: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x1dbab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1dbab4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1dbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dbab8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1dbab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dbabc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dbac0: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1dbac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1dbac4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbacc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbad0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1dbad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dbad4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dbad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dbad8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dbad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dbadc: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1dbadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1dbae0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dbae4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1dbae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dbae8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dbae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dbaec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbaf0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbaf4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbaf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbaf8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1dbaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbafc: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x1dbafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dbb00: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1dbb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1dbb04: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dbb08: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x1dbb08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x1dbb0c: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1dbb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1dbb10: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dbb14: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x1dbb14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x1dbb18: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1dbb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1dbb1c: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x1dbb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dbb20: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dbb24: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1dbb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x1dbb28: 0x329500ff  andi        $s5, $s4, 0xFF
    ctx->pc = 0x1dbb28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbb2c: 0x15b080  sll         $s6, $s5, 2
    ctx->pc = 0x1dbb2cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1dbb30: 0x276b821  addu        $s7, $s3, $s6
    ctx->pc = 0x1dbb30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x1dbb34: 0x8ee20028  lw          $v0, 0x28($s7)
    ctx->pc = 0x1dbb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
    // 0x1dbb38: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1dbb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x1dbb3c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbb40: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x1dbb40u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbb44: 0x27e9021  addu        $s2, $s3, $fp
    ctx->pc = 0x1dbb44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
    // 0x1dbb48: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x1dbb48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1dbb4c: 0x7200ae28  paddub      $s5, $s0, $zero
    ctx->pc = 0x1dbb4cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dbb50: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbb54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbb58: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbb5c: 0x8c560038  lw          $s6, 0x38($v0)
    ctx->pc = 0x1dbb5cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1dbb60: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbb64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbb68: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbb6c: 0x8c570040  lw          $s7, 0x40($v0)
    ctx->pc = 0x1dbb6cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dbb70: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x1dbb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbb74: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1dbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dbb78: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1dbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbb7c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1dbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1dbb80: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1dbb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1dbb84: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbb88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbb8c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbb90: 0x8c5e0050  lw          $fp, 0x50($v0)
    ctx->pc = 0x1dbb90u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1dbb94: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x1dbb94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dbb98: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x1dbb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1dbb9c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1dbb9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbba0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1dbba0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dbba4: 0x0  nop
    ctx->pc = 0x1dbba4u;
    // NOP
    ctx->pc = 0x1dbba8u;
}
