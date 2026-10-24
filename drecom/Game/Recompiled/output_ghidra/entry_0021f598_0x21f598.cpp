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

// Function: entry_0021f598
// Address: 0x21f598 - 0x21f5bc
void entry_0021f598_0x21f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f598_0x21f598");
#endif

    ctx->pc = 0x21f598u;

    // 0x21f598: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f59c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f5a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f5a4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f5a8: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x21f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21f5ac: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x21f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x21f5b0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x21f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x21f5b4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x21f5b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f5b8: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x21f5b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x21f5bcu;
}
