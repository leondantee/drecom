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

// Function: entry_001930f4
// Address: 0x1930f4 - 0x193158
void entry_001930f4_0x1930f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001930f4_0x1930f4");
#endif

    ctx->pc = 0x1930f4u;

    // 0x1930f4: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1930f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1930f8: 0x8c232580  lw          $v1, 0x2580($at)
    ctx->pc = 0x1930f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x532580u));
    // 0x1930fc: 0x2a38023  subu        $s0, $s5, $v1
    ctx->pc = 0x1930fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x193100: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x193100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193104: 0x101882  srl         $v1, $s0, 2
    ctx->pc = 0x193104u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x193108: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x193108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19310c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x19310cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x193110: 0x8c232580  lw          $v1, 0x2580($at)
    ctx->pc = 0x193110u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x532580u));
    // 0x193114: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x193114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193118: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x193118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19311c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x19311cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x193120: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x193120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x193124: 0x32480  sll         $a0, $v1, 18
    ctx->pc = 0x193124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
    // 0x193128: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x193128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x19312c: 0x24632580  addiu       $v1, $v1, 0x2580
    ctx->pc = 0x19312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x193130: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193134: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x193134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x193138: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x193138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x19313c: 0x611821  addu        $v1, $v1, $at
    ctx->pc = 0x19313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x193140: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x193140u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x193144: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x193144u;
    {
        const bool branch_taken_0x193144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193144) {
            ctx->pc = 0x193158u;
            return;
        }
    }
    ctx->pc = 0x19314Cu;
    // 0x19314c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x19314cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193150: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x193150u;
    {
        const bool branch_taken_0x193150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193150) {
            ctx->pc = 0x1931B4u;
            return;
        }
    }
    ctx->pc = 0x193158u;
}
