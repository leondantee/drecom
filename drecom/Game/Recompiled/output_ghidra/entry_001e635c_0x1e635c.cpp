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

// Function: entry_001e635c
// Address: 0x1e635c - 0x1e6378
void entry_001e635c_0x1e635c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e635c_0x1e635c");
#endif

    ctx->pc = 0x1e635cu;

    // 0x1e635c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1e635cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1e6360: 0x8fa40348  lw          $a0, 0x348($sp)
    ctx->pc = 0x1e6360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1e6364: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1e6364u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1e6368: 0x8fa30348  lw          $v1, 0x348($sp)
    ctx->pc = 0x1e6368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1e636c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e636cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e6370: 0x8fa30348  lw          $v1, 0x348($sp)
    ctx->pc = 0x1e6370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1e6374: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e6374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1e6378u;
}
