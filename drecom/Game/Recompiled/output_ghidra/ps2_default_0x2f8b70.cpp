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

// Function: default
// Address: 0x2f8b70 - 0x2f8b90
void ps2_default_0x2f8b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x2f8b70");
#endif

    ctx->pc = 0x2f8b70u;

    // 0x2f8b70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8b74: 0x906a0101  lbu         $t2, 0x101($v1)
    ctx->pc = 0x2f8b74u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 257)));
    // 0x2f8b78: 0x11400005  beqz        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8B78u;
    {
        const bool branch_taken_0x2f8b78 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b78) {
            ctx->pc = 0x2F8B90u;
            return;
        }
    }
    ctx->pc = 0x2F8B80u;
    // 0x2f8b80: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2f8b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8b84: 0x90a40101  lbu         $a0, 0x101($a1)
    ctx->pc = 0x2f8b84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 257)));
    // 0x2f8b88: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2f8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f8b8c: 0xa0a30101  sb          $v1, 0x101($a1)
    ctx->pc = 0x2f8b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 257), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2f8b90u;
}
