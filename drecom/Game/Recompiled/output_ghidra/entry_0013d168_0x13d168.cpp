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

// Function: entry_0013d168
// Address: 0x13d168 - 0x13d188
void entry_0013d168_0x13d168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d168_0x13d168");
#endif

    ctx->pc = 0x13d168u;

    // 0x13d168: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x13d168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
    // 0x13d16c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D16Cu;
    {
        const bool branch_taken_0x13d16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d16c) {
            ctx->pc = 0x13D188u;
            return;
        }
    }
    ctx->pc = 0x13D174u;
    // 0x13d174: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d178: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13d178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d17c: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x13d17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x13d180: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d184: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x13d184u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13d188u;
}
