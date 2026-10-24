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

// Function: entry_00190514
// Address: 0x190514 - 0x19057c
void entry_00190514_0x190514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190514_0x190514");
#endif

    ctx->pc = 0x190514u;

    // 0x190514: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x190514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190518: 0x8c232580  lw          $v1, 0x2580($at)
    ctx->pc = 0x190518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x532580u));
    // 0x19051c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x19051cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x190520: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x190520u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190524: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x190524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x190528: 0x131082  srl         $v0, $s3, 2
    ctx->pc = 0x190528u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 2));
    // 0x19052c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19052cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190530: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x190530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190534: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x190534u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x190538: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x190538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19053c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19053cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x190540: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x190540u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x190544: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x190544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x190548: 0x28480  sll         $s0, $v0, 18
    ctx->pc = 0x190548u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x19054c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x19054cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x190550: 0x24622580  addiu       $v0, $v1, 0x2580
    ctx->pc = 0x190550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x190554: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x190554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x190558: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x190558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x19055c: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x19055cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x190560: 0x2011021  addu        $v0, $s0, $at
    ctx->pc = 0x190560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x190564: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x190564u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x190568: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x190568u;
    {
        const bool branch_taken_0x190568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x190568) {
            ctx->pc = 0x19057Cu;
            return;
        }
    }
    ctx->pc = 0x190570u;
    // 0x190570: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x190570u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190574: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x190574u;
    {
        const bool branch_taken_0x190574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190574) {
            ctx->pc = 0x190628u;
            return;
        }
    }
    ctx->pc = 0x19057Cu;
}
