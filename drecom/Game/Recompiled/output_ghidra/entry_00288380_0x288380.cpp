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

// Function: entry_00288380
// Address: 0x288380 - 0x2883c0
void entry_00288380_0x288380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00288380_0x288380");
#endif

    ctx->pc = 0x288380u;

    // 0x288380: 0x9243683f  lbu         $v1, 0x683F($s2)
    ctx->pc = 0x288380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26687)));
    // 0x288384: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x288384u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x288388: 0x2e8382a  slt         $a3, $s7, $t0
    ctx->pc = 0x288388u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x28838c: 0x14e0febb  bnez        $a3, . + 4 + (-0x145 << 2)
    ctx->pc = 0x28838Cu;
    {
        const bool branch_taken_0x28838c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x28838c) {
            ctx->pc = 0x287E7Cu;
            return;
        }
    }
    ctx->pc = 0x288394u;
    // 0x288394: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x288394u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x288398: 0x24c66760  addiu       $a2, $a2, 0x6760
    ctx->pc = 0x288398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26464));
    // 0x28839c: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x28839cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2883a0: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x2883a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x2883a4: 0x26626208  addiu       $v0, $s3, 0x6208
    ctx->pc = 0x2883a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 25096));
    // 0x2883a8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2883a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2883ac: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2883acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2883b0: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x2883b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x2883b4: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2883b4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2883b8: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2883B8u;
    {
        const bool branch_taken_0x2883b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2883b8) {
            ctx->pc = 0x2886D8u;
            return;
        }
    }
    ctx->pc = 0x2883C0u;
}
