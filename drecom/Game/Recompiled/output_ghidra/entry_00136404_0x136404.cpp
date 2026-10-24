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

// Function: entry_00136404
// Address: 0x136404 - 0x136464
void entry_00136404_0x136404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136404_0x136404");
#endif

    ctx->pc = 0x136404u;

    // 0x136404: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x136404u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x136408: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x136408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13640c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13640cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136410: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x136410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x136414: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x136414u;
    {
        const bool branch_taken_0x136414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x136414) {
            ctx->pc = 0x136464u;
            return;
        }
    }
    ctx->pc = 0x13641Cu;
    // 0x13641c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x13641cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x136420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x136420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136424: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x136424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x136428: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x136428u;
    {
        const bool branch_taken_0x136428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136428) {
            ctx->pc = 0x136464u;
            return;
        }
    }
    ctx->pc = 0x136430u;
    // 0x136430: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x136430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x136434: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x136434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136438: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x136438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x13643c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13643Cu;
    {
        const bool branch_taken_0x13643c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13643c) {
            ctx->pc = 0x136464u;
            return;
        }
    }
    ctx->pc = 0x136444u;
    // 0x136444: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x136444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x136448: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x136448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13644c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13644cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x136450: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136450u;
    {
        const bool branch_taken_0x136450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136450) {
            ctx->pc = 0x136464u;
            return;
        }
    }
    ctx->pc = 0x136458u;
    // 0x136458: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x136458u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13645c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13645Cu;
    {
        const bool branch_taken_0x13645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13645c) {
            ctx->pc = 0x1364A4u;
            return;
        }
    }
    ctx->pc = 0x136464u;
}
