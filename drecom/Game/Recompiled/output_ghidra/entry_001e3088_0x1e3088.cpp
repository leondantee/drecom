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

// Function: entry_001e3088
// Address: 0x1e3088 - 0x1e30b0
void entry_001e3088_0x1e3088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3088_0x1e3088");
#endif

    ctx->pc = 0x1e3088u;

    // 0x1e3088: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e308c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x1e308cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x1e3090: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3094: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x1e3094u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x1e3098: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x1e3098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x1e309c: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e309cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
    // 0x1e30a0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e30a4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1e30a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e30a8: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1e30a8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e30ac: 0x0  nop
    ctx->pc = 0x1e30acu;
    // NOP
    ctx->pc = 0x1e30b0u;
}
