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

// Function: entry_001a463c
// Address: 0x1a463c - 0x1a4680
void entry_001a463c_0x1a463c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a463c_0x1a463c");
#endif

    ctx->pc = 0x1a463cu;

    // 0x1a463c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a463cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4640: 0x90630317  lbu         $v1, 0x317($v1)
    ctx->pc = 0x1a4640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 791)));
    // 0x1a4644: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4644u;
    {
        const bool branch_taken_0x1a4644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4644) {
            ctx->pc = 0x1A4680u;
            return;
        }
    }
    ctx->pc = 0x1A464Cu;
    // 0x1a464c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4650: 0x80630310  lb          $v1, 0x310($v1)
    ctx->pc = 0x1a4650u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 784)));
    // 0x1a4654: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4658: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4658u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a465c: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x1a465cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a4660: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4660u;
    {
        const bool branch_taken_0x1a4660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4660) {
            ctx->pc = 0x1A4680u;
            return;
        }
    }
    ctx->pc = 0x1A4668u;
    // 0x1a4668: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a466c: 0xa0600310  sb          $zero, 0x310($v1)
    ctx->pc = 0x1a466cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 784), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4670: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4674: 0x808302b0  lb          $v1, 0x2B0($a0)
    ctx->pc = 0x1a4674u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x1a4678: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a467c: 0xa08302b0  sb          $v1, 0x2B0($a0)
    ctx->pc = 0x1a467cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 688), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a4680u;
}
