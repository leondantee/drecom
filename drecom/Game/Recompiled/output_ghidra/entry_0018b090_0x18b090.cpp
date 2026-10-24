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

// Function: entry_0018b090
// Address: 0x18b090 - 0x18b098
void entry_0018b090_0x18b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b090_0x18b090");
#endif

    ctx->pc = 0x18b090u;

    // 0x18b090: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18b090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18b094: 0xa2030031  sb          $v1, 0x31($s0)
    ctx->pc = 0x18b094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x18b098u;
}
