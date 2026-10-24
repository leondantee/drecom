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

// Function: entry_00217eac
// Address: 0x217eac - 0x217ec8
void entry_00217eac_0x217eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217eac_0x217eac");
#endif

    ctx->pc = 0x217eacu;

    // 0x217eac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217eb0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x217eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x217eb4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217eb8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x217eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x217ebc: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x217ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x217ec0: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x217ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x217ec4: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x217ec4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x217ec8u;
}
