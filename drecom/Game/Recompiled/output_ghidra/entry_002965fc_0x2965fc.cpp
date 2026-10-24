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

// Function: entry_002965fc
// Address: 0x2965fc - 0x296604
void entry_002965fc_0x2965fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002965fc_0x2965fc");
#endif

    ctx->pc = 0x2965fcu;

    // 0x2965fc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2965fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x296600: 0xa46069ac  sh          $zero, 0x69AC($v1)
    ctx->pc = 0x296600u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 27052), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x296604u;
}
