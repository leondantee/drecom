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

// Function: entry_002ea8fc
// Address: 0x2ea8fc - 0x2ea920
void entry_002ea8fc_0x2ea8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea8fc_0x2ea8fc");
#endif

    ctx->pc = 0x2ea8fcu;

    // 0x2ea8fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea900: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ea900u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea904: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea908: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ea908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea90c: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2ea90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ea910: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x2ea910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x2ea914: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x2ea914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2ea918: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2ea918u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ea91c: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x2ea91cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2ea920u;
}
