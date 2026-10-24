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

// Function: entry_0013eb3c
// Address: 0x13eb3c - 0x13ec80
void entry_0013eb3c_0x13eb3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eb3c_0x13eb3c");
#endif

    ctx->pc = 0x13eb3cu;

    // 0x13eb3c: 0x8fa51668  lw          $a1, 0x1668($sp)
    ctx->pc = 0x13eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13eb40: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x13eb40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13eb44: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13eb44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13eb48: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x13eb48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x13eb4c: 0xafa41694  sw          $a0, 0x1694($sp)
    ctx->pc = 0x13eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5780), GPR_U32(ctx, 4));
    // 0x13eb50: 0x8fa51694  lw          $a1, 0x1694($sp)
    ctx->pc = 0x13eb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5780)));
    // 0x13eb54: 0x2406fdd8  addiu       $a2, $zero, -0x228
    ctx->pc = 0x13eb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966744));
    // 0x13eb58: 0xa63824  and         $a3, $a1, $a2
    ctx->pc = 0x13eb58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x13eb5c: 0xafa71694  sw          $a3, 0x1694($sp)
    ctx->pc = 0x13eb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5780), GPR_U32(ctx, 7));
    // 0x13eb60: 0x8fa41694  lw          $a0, 0x1694($sp)
    ctx->pc = 0x13eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5780)));
    // 0x13eb64: 0x34850005  ori         $a1, $a0, 0x5
    ctx->pc = 0x13eb64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
    // 0x13eb68: 0xafa51694  sw          $a1, 0x1694($sp)
    ctx->pc = 0x13eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5780), GPR_U32(ctx, 5));
    // 0x13eb6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13eb70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13eb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13eb74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13eb78: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x13eb78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13eb7c: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13eb80: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x13eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x13eb84: 0x3406eeee  ori         $a2, $zero, 0xEEEE
    ctx->pc = 0x13eb84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61166);
    // 0x13eb88: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13eb88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13eb8c: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x13eb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x13eb90: 0x8fa2169c  lw          $v0, 0x169C($sp)
    ctx->pc = 0x13eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13eb94: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x13eb94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13eb98: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13eb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13eb9c: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x13eb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x13eba0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13eba4: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13eba8: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x13eba8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x13ebac: 0x8fa2169c  lw          $v0, 0x169C($sp)
    ctx->pc = 0x13ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13ebb0: 0xdc440020  ld          $a0, 0x20($v0)
    ctx->pc = 0x13ebb0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13ebb4: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13ebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ebb8: 0xfca40020  sd          $a0, 0x20($a1)
    ctx->pc = 0x13ebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 4));
    // 0x13ebbc: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x13ebbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x13ebc0: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13ebc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ebc4: 0xfce60028  sd          $a2, 0x28($a3)
    ctx->pc = 0x13ebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 40), GPR_U64(ctx, 6));
    // 0x13ebc8: 0x8fa2169c  lw          $v0, 0x169C($sp)
    ctx->pc = 0x13ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13ebcc: 0xdc440030  ld          $a0, 0x30($v0)
    ctx->pc = 0x13ebccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13ebd0: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13ebd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ebd4: 0xfca40030  sd          $a0, 0x30($a1)
    ctx->pc = 0x13ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 4));
    // 0x13ebd8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x13ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13ebdc: 0x8fa816a8  lw          $t0, 0x16A8($sp)
    ctx->pc = 0x13ebdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ebe0: 0xfd020038  sd          $v0, 0x38($t0)
    ctx->pc = 0x13ebe0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 2));
    // 0x13ebe4: 0x8fa21668  lw          $v0, 0x1668($sp)
    ctx->pc = 0x13ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ebe8: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x13ebe8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13ebec: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ebf0: 0xfca40040  sd          $a0, 0x40($a1)
    ctx->pc = 0x13ebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 4));
    // 0x13ebf4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x13ebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13ebf8: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13ebf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ebfc: 0xfce60048  sd          $a2, 0x48($a3)
    ctx->pc = 0x13ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 72), GPR_U64(ctx, 6));
    // 0x13ec00: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ec04: 0x24480050  addiu       $t0, $v0, 0x50
    ctx->pc = 0x13ec04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x13ec08: 0xafa816a8  sw          $t0, 0x16A8($sp)
    ctx->pc = 0x13ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 8));
    // 0x13ec0c: 0x8fa516b0  lw          $a1, 0x16B0($sp)
    ctx->pc = 0x13ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13ec10: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13ec14: 0x8fa51668  lw          $a1, 0x1668($sp)
    ctx->pc = 0x13ec14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ec18: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x13ec18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13ec1c: 0x8ce40050  lw          $a0, 0x50($a3)
    ctx->pc = 0x13ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x13ec20: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x13ec20u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13ec24: 0x8fa516b0  lw          $a1, 0x16B0($sp)
    ctx->pc = 0x13ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13ec28: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x13ec28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13ec2c: 0x8fa31668  lw          $v1, 0x1668($sp)
    ctx->pc = 0x13ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ec30: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x13ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13ec34: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x13ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x13ec38: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x13ec38u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ec3c: 0x8fa616b0  lw          $a2, 0x16B0($sp)
    ctx->pc = 0x13ec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13ec40: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x13ec40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13ec44: 0x8fa81668  lw          $t0, 0x1668($sp)
    ctx->pc = 0x13ec44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ec48: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x13ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x13ec4c: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x13ec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13ec50: 0x70a0be28  paddub      $s7, $a1, $zero
    ctx->pc = 0x13ec50u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ec54: 0x8fa616b0  lw          $a2, 0x16B0($sp)
    ctx->pc = 0x13ec54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13ec58: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x13ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13ec5c: 0x8fa31668  lw          $v1, 0x1668($sp)
    ctx->pc = 0x13ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ec60: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x13ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ec64: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x13ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x13ec68: 0xafa2166c  sw          $v0, 0x166C($sp)
    ctx->pc = 0x13ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5740), GPR_U32(ctx, 2));
    // 0x13ec6c: 0x8fa61668  lw          $a2, 0x1668($sp)
    ctx->pc = 0x13ec6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ec70: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x13ec70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x13ec74: 0xafa8167c  sw          $t0, 0x167C($sp)
    ctx->pc = 0x13ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5756), GPR_U32(ctx, 8));
    // 0x13ec78: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x13ec78u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13ec7c: 0xafa01680  sw          $zero, 0x1680($sp)
    ctx->pc = 0x13ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5760), GPR_U32(ctx, 0));
    ctx->pc = 0x13ec80u;
}
