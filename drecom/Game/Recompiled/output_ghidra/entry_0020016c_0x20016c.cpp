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

// Function: entry_0020016c
// Address: 0x20016c - 0x20019c
void entry_0020016c_0x20016c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020016c_0x20016c");
#endif

    ctx->pc = 0x20016cu;

    // 0x20016c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x20016cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200170: 0x90c302ab  lbu         $v1, 0x2AB($a2)
    ctx->pc = 0x200170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 683)));
    // 0x200174: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x200174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x200178: 0xa0c402ab  sb          $a0, 0x2AB($a2)
    ctx->pc = 0x200178u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 683), (uint8_t)GPR_U32(ctx, 4));
    // 0x20017c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x20017cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200180: 0x90a302ab  lbu         $v1, 0x2AB($a1)
    ctx->pc = 0x200180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 683)));
    // 0x200184: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x200184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x200188: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200188u;
    {
        const bool branch_taken_0x200188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x200188) {
            ctx->pc = 0x20019Cu;
            return;
        }
    }
    ctx->pc = 0x200190u;
    // 0x200190: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x200190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x200194: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x200194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200198: 0xa08302ab  sb          $v1, 0x2AB($a0)
    ctx->pc = 0x200198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 683), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x20019cu;
}
