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

// Function: Scr_parts_grp_work_set
// Address: 0x13d8e0 - 0x13dab4
void Scr_parts_grp_work_set_0x13d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_grp_work_set_0x13d8e0");
#endif

    ctx->pc = 0x13d8e0u;

    // 0x13d8e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d8e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d8e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d8ec: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x13d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x13d8f0: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x13d8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x13d8f4: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x13d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x13d8f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x13d8f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13d8fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x13d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13d900: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x13d900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x13d904: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13d904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13d908: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D908u;
    {
        const bool branch_taken_0x13d908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d908) {
            ctx->pc = 0x13D924u;
            goto label_13d924;
        }
    }
    ctx->pc = 0x13D910u;
    // 0x13d910: 0x2404021c  addiu       $a0, $zero, 0x21C
    ctx->pc = 0x13d910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x13d914: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d918: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13d918u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13d91c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13D91Cu;
    {
        const bool branch_taken_0x13d91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d91c) {
            ctx->pc = 0x13D930u;
            goto label_13d930;
        }
    }
    ctx->pc = 0x13D924u;
label_13d924:
    // 0x13d924: 0x2404023c  addiu       $a0, $zero, 0x23C
    ctx->pc = 0x13d924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 572));
    // 0x13d928: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d92c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13d92cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_13d930:
    // 0x13d930: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13d930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d934: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x13d934u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13d938: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d93c: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x13d93cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x13d940: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d944: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x13d944u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d948: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x13d948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d94c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d950: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x13d950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x13d954: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d958: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d95c: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x13d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    // 0x13d960: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d964: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x13d964u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13d968: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13d968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d96c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13d970: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d974: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13d974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d978: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d97c: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x13d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x13d980: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d984: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x13d984u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x13d988: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13d988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d98c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13d990: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d994: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13d994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d998: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d99c: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x13d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
    // 0x13d9a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d9a4: 0x94630008  lhu         $v1, 0x8($v1)
    ctx->pc = 0x13d9a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13d9a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13d9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d9ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13d9acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13d9b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d9b4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13d9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d9b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d9bc: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x13d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x13d9c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d9c4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x13d9c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x13d9c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13d9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d9cc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13d9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13d9d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d9d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d9d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d9dc: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x13d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x13d9e0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d9e4: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x13d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x13d9e8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d9ec: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x13d9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x13d9f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d9f4: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x13d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x13d9f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d9fc: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x13d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
    // 0x13da00: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13da00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da04: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x13da04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x13da08: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13da08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da0c: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x13da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
    // 0x13da10: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da14: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x13da14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x13da18: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13da18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da1c: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x13da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x13da20: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13da20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13da24: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x13da24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13da28: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x13da28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da2c: 0x2002027  not         $a0, $s0
    ctx->pc = 0x13da2cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x13da30: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x13da30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13da34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13da34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13da38: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x13da38u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x13da3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da40: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x13da40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13da44: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x13da44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x13da48: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x13da48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x13da4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13da50: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x13da50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x13da54: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DA54u;
    {
        const bool branch_taken_0x13da54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13da54) {
            ctx->pc = 0x13DA6Cu;
            goto label_13da6c;
        }
    }
    ctx->pc = 0x13DA5Cu;
    // 0x13da5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13da60: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x13da60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x13da64: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x13DA64u;
    {
        const bool branch_taken_0x13da64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13da64) {
            ctx->pc = 0x13DAA4u;
            goto label_13daa4;
        }
    }
    ctx->pc = 0x13DA6Cu;
label_13da6c:
    // 0x13da6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13da70: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x13da70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13da74: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x13da74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da78: 0x2002027  not         $a0, $s0
    ctx->pc = 0x13da78u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x13da7c: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x13da7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13da80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13da80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13da84: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x13da84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x13da88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13da88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da8c: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x13da8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13da90: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x13da90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x13da94: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x13da94u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x13da98: 0x2404027c  addiu       $a0, $zero, 0x27C
    ctx->pc = 0x13da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x13da9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13daa0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_13daa4:
    // 0x13daa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13daa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13daa8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13daa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13daac: 0x3e00008  jr          $ra
    ctx->pc = 0x13DAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DAB4u;
}
