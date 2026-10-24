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

// Function: entry_0018c4b4
// Address: 0x18c4b4 - 0x18c544
void entry_0018c4b4_0x18c4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c4b4_0x18c4b4");
#endif

    ctx->pc = 0x18c4b4u;

    // 0x18c4b4: 0x92020138  lbu         $v0, 0x138($s0)
    ctx->pc = 0x18c4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x18c4b8: 0xa2020210  sb          $v0, 0x210($s0)
    ctx->pc = 0x18c4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 2));
    // 0x18c4bc: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x18c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x18c4c0: 0xa2000212  sb          $zero, 0x212($s0)
    ctx->pc = 0x18c4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 530), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c4c4: 0x9202013a  lbu         $v0, 0x13A($s0)
    ctx->pc = 0x18c4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 314)));
    // 0x18c4c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18c4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c4cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18c4d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c4d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18c4d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18c4dc: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x18c4dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18c4e0: 0xae160204  sw          $s6, 0x204($s0)
    ctx->pc = 0x18c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 22));
    // 0x18c4e4: 0x8ed30010  lw          $s3, 0x10($s6)
    ctx->pc = 0x18c4e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x18c4e8: 0x92020210  lbu         $v0, 0x210($s0)
    ctx->pc = 0x18c4e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x18c4ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c4f0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18c4f4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x18c4f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18c4f8: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x18c4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x18c4fc: 0xa2020211  sb          $v0, 0x211($s0)
    ctx->pc = 0x18c4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 529), (uint8_t)GPR_U32(ctx, 2));
    // 0x18c500: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x18c500u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18c504: 0x260201c0  addiu       $v0, $s0, 0x1C0
    ctx->pc = 0x18c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x18c508: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18c508u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18c50c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c510: 0xfe0201d0  sd          $v0, 0x1D0($s0)
    ctx->pc = 0x18c510u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 464), GPR_U64(ctx, 2));
    // 0x18c514: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18c518: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18c518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18c51c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x18c51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x18c520: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C520u;
    {
        const bool branch_taken_0x18c520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c520) {
            ctx->pc = 0x18C544u;
            return;
        }
    }
    ctx->pc = 0x18C528u;
    // 0x18c528: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x18c528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x18c52c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18c52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c530: 0x24020368  addiu       $v0, $zero, 0x368
    ctx->pc = 0x18c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x18c534: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18c534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18c538: 0xfe0201e8  sd          $v0, 0x1E8($s0)
    ctx->pc = 0x18c538u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 488), GPR_U64(ctx, 2));
    // 0x18c53c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18C53Cu;
    {
        const bool branch_taken_0x18c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c53c) {
            ctx->pc = 0x18C558u;
            return;
        }
    }
    ctx->pc = 0x18C544u;
}
