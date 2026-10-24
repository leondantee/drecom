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

// Function: entry_001952dc
// Address: 0x1952dc - 0x195340
void entry_001952dc_0x1952dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001952dc_0x1952dc");
#endif

    ctx->pc = 0x1952dcu;

    // 0x1952dc: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1952dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1952e0: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1952e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1952e4: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x1952e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1952e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1952e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1952ec: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x1952ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1952f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1952f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1952f4: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1952f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1952f8: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1952f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1952fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1952fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195300: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195304: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x195304u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x195308: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x195308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19530c: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x19530cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x195310: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x195310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x195314: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x195314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x195318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19531c: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x19531cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x195320: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x195320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x195324: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x195324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x195328: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x195328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19532c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19532Cu;
    {
        const bool branch_taken_0x19532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19532c) {
            ctx->pc = 0x195340u;
            return;
        }
    }
    ctx->pc = 0x195334u;
    // 0x195334: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x195334u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195338: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x195338u;
    {
        const bool branch_taken_0x195338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195338) {
            ctx->pc = 0x1953ACu;
            return;
        }
    }
    ctx->pc = 0x195340u;
}
