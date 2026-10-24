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

// Function: Event_data_mapping
// Address: 0x377e50 - 0x378160
void Event_data_mapping_0x377e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_data_mapping_0x377e50");
#endif

    switch (ctx->pc) {
        case 0x377e80u: goto label_377e80;
        case 0x377ef0u: goto label_377ef0;
        default: break;
    }

    ctx->pc = 0x377e50u;

    // 0x377e50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x377e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x377e54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x377e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x377e58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x377e5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377e60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377e64: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x377e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x377e68: 0x8fb30048  lw          $s3, 0x48($sp)
    ctx->pc = 0x377e68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377e6c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x377e6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x377e70: 0x267203c4  addiu       $s2, $s3, 0x3C4
    ctx->pc = 0x377e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 964));
    // 0x377e74: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x377e74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x377e78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x377E78u;
    {
        const bool branch_taken_0x377e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377e78) {
            ctx->pc = 0x377EC8u;
            goto label_377ec8;
        }
    }
    ctx->pc = 0x377E80u;
label_377e80:
    // 0x377e80: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x377e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x377e84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x377e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x377e88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x377e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x377e8c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x377E8Cu;
    {
        const bool branch_taken_0x377e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377e8c) {
            ctx->pc = 0x377EC0u;
            goto label_377ec0;
        }
    }
    ctx->pc = 0x377E94u;
    // 0x377e94: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x377e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x377e98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x377e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x377e9c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x377e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x377ea0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x377EA0u;
    {
        const bool branch_taken_0x377ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377ea0) {
            ctx->pc = 0x377EC0u;
            goto label_377ec0;
        }
    }
    ctx->pc = 0x377EA8u;
    // 0x377ea8: 0x26450038  addiu       $a1, $s2, 0x38
    ctx->pc = 0x377ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x377eac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377eb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377eb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377eb8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x377eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x377ebc: 0x0  nop
    ctx->pc = 0x377ebcu;
    // NOP
label_377ec0:
    // 0x377ec0: 0x2652003c  addiu       $s2, $s2, 0x3C
    ctx->pc = 0x377ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x377ec4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x377ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_377ec8:
    // 0x377ec8: 0x2e230060  sltiu       $v1, $s1, 0x60
    ctx->pc = 0x377ec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x377ecc: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x377ECCu;
    {
        const bool branch_taken_0x377ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377ecc) {
            ctx->pc = 0x377E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377e80;
        }
    }
    ctx->pc = 0x377ED4u;
    // 0x377ed4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377ed8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x377ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377edc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x377edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377ee0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x377ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x377ee4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x377ee4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x377ee8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x377EE8u;
    {
        const bool branch_taken_0x377ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377ee8) {
            ctx->pc = 0x377FB8u;
            goto label_377fb8;
        }
    }
    ctx->pc = 0x377EF0u;
label_377ef0:
    // 0x377ef0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377ef4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x377ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377ef8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x377ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377efc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x377EFCu;
    {
        const bool branch_taken_0x377efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377efc) {
            ctx->pc = 0x377F20u;
            goto label_377f20;
        }
    }
    ctx->pc = 0x377F04u;
    // 0x377f04: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377f08: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x377f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377f0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377f10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377f14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377f18: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x377f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x377f1c: 0x0  nop
    ctx->pc = 0x377f1cu;
    // NOP
label_377f20:
    // 0x377f20: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377f24: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x377f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377f28: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x377f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x377f2c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x377F2Cu;
    {
        const bool branch_taken_0x377f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377f2c) {
            ctx->pc = 0x377F50u;
            goto label_377f50;
        }
    }
    ctx->pc = 0x377F34u;
    // 0x377f34: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377f38: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x377f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377f3c: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x377f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x377f40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377f44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377f48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377f4c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x377f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_377f50:
    // 0x377f50: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377f54: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x377f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377f58: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x377f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x377f5c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x377F5Cu;
    {
        const bool branch_taken_0x377f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377f5c) {
            ctx->pc = 0x377F80u;
            goto label_377f80;
        }
    }
    ctx->pc = 0x377F64u;
    // 0x377f64: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377f68: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x377f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377f6c: 0x24650084  addiu       $a1, $v1, 0x84
    ctx->pc = 0x377f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
    // 0x377f70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377f74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377f78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377f7c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x377f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_377f80:
    // 0x377f80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377f84: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x377f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377f88: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x377f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x377f8c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x377F8Cu;
    {
        const bool branch_taken_0x377f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377f8c) {
            ctx->pc = 0x377FB0u;
            goto label_377fb0;
        }
    }
    ctx->pc = 0x377F94u;
    // 0x377f94: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377f98: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x377f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377f9c: 0x246500cc  addiu       $a1, $v1, 0xCC
    ctx->pc = 0x377f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 204));
    // 0x377fa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377fa4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377fa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377fac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x377facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_377fb0:
    // 0x377fb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x377fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x377fb4: 0x0  nop
    ctx->pc = 0x377fb4u;
    // NOP
label_377fb8:
    // 0x377fb8: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x377fb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x377fbc: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x377FBCu;
    {
        const bool branch_taken_0x377fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377fbc) {
            ctx->pc = 0x377EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377ef0;
        }
    }
    ctx->pc = 0x377FC4u;
    // 0x377fc4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x377fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x377fc8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x377FC8u;
    {
        const bool branch_taken_0x377fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377fc8) {
            ctx->pc = 0x377FE4u;
            goto label_377fe4;
        }
    }
    ctx->pc = 0x377FD0u;
    // 0x377fd0: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x377fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x377fd4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377fd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377fdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377fe0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x377fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_377fe4:
    // 0x377fe4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x377fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x377fe8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x377FE8u;
    {
        const bool branch_taken_0x377fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377fe8) {
            ctx->pc = 0x378004u;
            goto label_378004;
        }
    }
    ctx->pc = 0x377FF0u;
    // 0x377ff0: 0x260500c4  addiu       $a1, $s0, 0xC4
    ctx->pc = 0x377ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x377ff4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377ff8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377ffc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378000: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_378004:
    // 0x378004: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x378004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x378008: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378008u;
    {
        const bool branch_taken_0x378008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378008) {
            ctx->pc = 0x378024u;
            goto label_378024;
        }
    }
    ctx->pc = 0x378010u;
    // 0x378010: 0x260500c8  addiu       $a1, $s0, 0xC8
    ctx->pc = 0x378010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x378014: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378018: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37801c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37801cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378020: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_378024:
    // 0x378024: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x378024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x378028: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378028u;
    {
        const bool branch_taken_0x378028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378028) {
            ctx->pc = 0x378044u;
            goto label_378044;
        }
    }
    ctx->pc = 0x378030u;
    // 0x378030: 0x2605010c  addiu       $a1, $s0, 0x10C
    ctx->pc = 0x378030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    // 0x378034: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378038: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37803c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378040: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_378044:
    // 0x378044: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x378044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x378048: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378048u;
    {
        const bool branch_taken_0x378048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378048) {
            ctx->pc = 0x378064u;
            goto label_378064;
        }
    }
    ctx->pc = 0x378050u;
    // 0x378050: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x378050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x378054: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378058: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37805c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378060: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_378064:
    // 0x378064: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x378064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x378068: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378068u;
    {
        const bool branch_taken_0x378068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378068) {
            ctx->pc = 0x378084u;
            goto label_378084;
        }
    }
    ctx->pc = 0x378070u;
    // 0x378070: 0x26050114  addiu       $a1, $s0, 0x114
    ctx->pc = 0x378070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
    // 0x378074: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378078: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37807c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378080: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_378084:
    // 0x378084: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x378084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x378088: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378088u;
    {
        const bool branch_taken_0x378088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378088) {
            ctx->pc = 0x3780A4u;
            goto label_3780a4;
        }
    }
    ctx->pc = 0x378090u;
    // 0x378090: 0x26050118  addiu       $a1, $s0, 0x118
    ctx->pc = 0x378090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x378094: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378098: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37809c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37809cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3780a0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3780a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3780a4:
    // 0x3780a4: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x3780a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x3780a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3780A8u;
    {
        const bool branch_taken_0x3780a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3780a8) {
            ctx->pc = 0x3780C4u;
            goto label_3780c4;
        }
    }
    ctx->pc = 0x3780B0u;
    // 0x3780b0: 0x2605011c  addiu       $a1, $s0, 0x11C
    ctx->pc = 0x3780b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x3780b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3780b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3780b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3780b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3780bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3780bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3780c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3780c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3780c4:
    // 0x3780c4: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x3780c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x3780c8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3780C8u;
    {
        const bool branch_taken_0x3780c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3780c8) {
            ctx->pc = 0x3780E4u;
            goto label_3780e4;
        }
    }
    ctx->pc = 0x3780D0u;
    // 0x3780d0: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x3780d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x3780d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3780d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3780d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3780d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3780dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3780dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3780e0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3780e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3780e4:
    // 0x3780e4: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x3780e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3780e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3780E8u;
    {
        const bool branch_taken_0x3780e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3780e8) {
            ctx->pc = 0x378104u;
            goto label_378104;
        }
    }
    ctx->pc = 0x3780F0u;
    // 0x3780f0: 0x26050124  addiu       $a1, $s0, 0x124
    ctx->pc = 0x3780f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x3780f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3780f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3780f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3780f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3780fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3780fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378100: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_378104:
    // 0x378104: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x378104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x378108: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378108u;
    {
        const bool branch_taken_0x378108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378108) {
            ctx->pc = 0x378124u;
            goto label_378124;
        }
    }
    ctx->pc = 0x378110u;
    // 0x378110: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x378110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x378114: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378118: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37811c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37811cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378120: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_378124:
    // 0x378124: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x378124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x378128: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378128u;
    {
        const bool branch_taken_0x378128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378128) {
            ctx->pc = 0x378144u;
            goto label_378144;
        }
    }
    ctx->pc = 0x378130u;
    // 0x378130: 0x2605012c  addiu       $a1, $s0, 0x12C
    ctx->pc = 0x378130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x378134: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378138: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37813c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378140: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378140u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_378144:
    // 0x378144: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x378144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x378148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37814c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37814cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x378150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378154: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x378154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x378158: 0x3e00008  jr          $ra
    ctx->pc = 0x378158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378160u;
}
