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

// Function: entry_0011c698
// Address: 0x11c698 - 0x11c6c0
void entry_0011c698_0x11c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c698_0x11c698");
#endif

    ctx->pc = 0x11c698u;

    // 0x11c698: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11c698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11c69c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c6a0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11c6a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c6a8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c6ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c6b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c6b4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11c6b8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x11c6b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c6bc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x11c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x11c6c0u;
}
