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

// Function: entry_0018b14c
// Address: 0x18b14c - 0x18b17c
void entry_0018b14c_0x18b14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b14c_0x18b14c");
#endif

    ctx->pc = 0x18b14cu;

    // 0x18b14c: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x18b14cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18b150: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x18b150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18b154: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x18b154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18b158: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18b158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18b15c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b160: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18B160u;
    {
        const bool branch_taken_0x18b160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b160) {
            ctx->pc = 0x18B1C8u;
            return;
        }
    }
    ctx->pc = 0x18B168u;
    // 0x18b168: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b16c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B16Cu;
    {
        const bool branch_taken_0x18b16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b16c) {
            ctx->pc = 0x18B17Cu;
            return;
        }
    }
    ctx->pc = 0x18B174u;
    // 0x18b174: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18B174u;
    {
        const bool branch_taken_0x18b174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b174) {
            ctx->pc = 0x18B1C8u;
            return;
        }
    }
    ctx->pc = 0x18B17Cu;
}
