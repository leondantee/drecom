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

// Function: entry_001655c8
// Address: 0x1655c8 - 0x165668
void entry_001655c8_0x1655c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001655c8_0x1655c8");
#endif

    ctx->pc = 0x1655c8u;

    // 0x1655c8: 0x8e03024c  lw          $v1, 0x24C($s0)
    ctx->pc = 0x1655c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x1655cc: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x1655CCu;
    {
        const bool branch_taken_0x1655cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655cc) {
            ctx->pc = 0x165724u;
            return;
        }
    }
    ctx->pc = 0x1655D4u;
    // 0x1655d4: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1655d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1655d8: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1655d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1655dc: 0x26020208  addiu       $v0, $s0, 0x208
    ctx->pc = 0x1655dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
    // 0x1655e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1655e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1655e4: 0x8e030248  lw          $v1, 0x248($s0)
    ctx->pc = 0x1655e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x1655e8: 0x2602020c  addiu       $v0, $s0, 0x20C
    ctx->pc = 0x1655e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
    // 0x1655ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1655ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1655f0: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x1655f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1655f4: 0x24420790  addiu       $v0, $v0, 0x790
    ctx->pc = 0x1655f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x1655f8: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1655f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1655fc: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x1655fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x165600: 0x26020210  addiu       $v0, $s0, 0x210
    ctx->pc = 0x165600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x165604: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x165608: 0x8e030248  lw          $v1, 0x248($s0)
    ctx->pc = 0x165608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x16560c: 0x26020214  addiu       $v0, $s0, 0x214
    ctx->pc = 0x16560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 532));
    // 0x165610: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x165614: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x165614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x165618: 0x24020870  addiu       $v0, $zero, 0x870
    ctx->pc = 0x165618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2160));
    // 0x16561c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16561cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165620: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x165620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x165624: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x165624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x165628: 0x26020224  addiu       $v0, $s0, 0x224
    ctx->pc = 0x165628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 548));
    // 0x16562c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16562cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x165630: 0x8e030248  lw          $v1, 0x248($s0)
    ctx->pc = 0x165630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x165634: 0x26020228  addiu       $v0, $s0, 0x228
    ctx->pc = 0x165634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x165638: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16563c: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x16563cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x165640: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x165640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x165644: 0x2602022c  addiu       $v0, $s0, 0x22C
    ctx->pc = 0x165644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x165648: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16564c: 0x8e030248  lw          $v1, 0x248($s0)
    ctx->pc = 0x16564cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x165650: 0x26020230  addiu       $v0, $s0, 0x230
    ctx->pc = 0x165650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x165654: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x165658: 0x261101fc  addiu       $s1, $s0, 0x1FC
    ctx->pc = 0x165658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
    // 0x16565c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x16565cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165660: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x165660u;
    {
        const bool branch_taken_0x165660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165660) {
            ctx->pc = 0x1656E8u;
            return;
        }
    }
    ctx->pc = 0x165668u;
}
