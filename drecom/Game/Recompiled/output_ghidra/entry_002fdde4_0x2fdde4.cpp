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

// Function: entry_002fdde4
// Address: 0x2fdde4 - 0x2fde00
void entry_002fdde4_0x2fdde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fdde4_0x2fdde4");
#endif

    ctx->pc = 0x2fdde4u;

    // 0x2fdde4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdde8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2fdde8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2fddec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fddecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fddf0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2fddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2fddf4: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x2fddf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2fddf8: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2fddf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fddfc: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2fddfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2fde00u;
}
