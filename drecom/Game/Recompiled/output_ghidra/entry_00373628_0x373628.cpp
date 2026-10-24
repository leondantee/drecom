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

// Function: entry_00373628
// Address: 0x373628 - 0x373654
void entry_00373628_0x373628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373628_0x373628");
#endif

    ctx->pc = 0x373628u;

    // 0x373628: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x373628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37362c: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x37362cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x373630: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373634: 0x906309e4  lbu         $v1, 0x9E4($v1)
    ctx->pc = 0x373634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2532)));
    // 0x373638: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x373638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37363c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x37363cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x373640: 0x1460fe8d  bnez        $v1, . + 4 + (-0x173 << 2)
    ctx->pc = 0x373640u;
    {
        const bool branch_taken_0x373640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373640) {
            ctx->pc = 0x373078u;
            return;
        }
    }
    ctx->pc = 0x373648u;
    // 0x373648: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x373648u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37364c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x37364Cu;
    {
        const bool branch_taken_0x37364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37364c) {
            ctx->pc = 0x373710u;
            return;
        }
    }
    ctx->pc = 0x373654u;
}
