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

// Function: entry_0031fd20
// Address: 0x31fd20 - 0x31fd58
void entry_0031fd20_0x31fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fd20_0x31fd20");
#endif

    ctx->pc = 0x31fd20u;

    // 0x31fd20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd24: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x31fd24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x31fd28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31fd2c: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x31fd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fd30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd34: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x31fd34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x31fd38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31fd3c: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x31fd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fd40: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fd44: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31fd44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fd48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd4c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31fd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31fd50: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x31FD50u;
    {
        const bool branch_taken_0x31fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fd50) {
            ctx->pc = 0x31FED0u;
            return;
        }
    }
    ctx->pc = 0x31FD58u;
}
