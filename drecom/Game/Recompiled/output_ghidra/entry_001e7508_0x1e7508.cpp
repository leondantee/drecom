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

// Function: entry_001e7508
// Address: 0x1e7508 - 0x1e7524
void entry_001e7508_0x1e7508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7508_0x1e7508");
#endif

    ctx->pc = 0x1e7508u;

    // 0x1e7508: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e7508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e750c: 0x8fa50a28  lw          $a1, 0xA28($sp)
    ctx->pc = 0x1e750cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2600)));
    // 0x1e7510: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x1e7510u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x1e7514: 0x8fa30a28  lw          $v1, 0xA28($sp)
    ctx->pc = 0x1e7514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2600)));
    // 0x1e7518: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e7518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e751c: 0x8fa30a28  lw          $v1, 0xA28($sp)
    ctx->pc = 0x1e751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2600)));
    // 0x1e7520: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e7520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1e7524u;
}
