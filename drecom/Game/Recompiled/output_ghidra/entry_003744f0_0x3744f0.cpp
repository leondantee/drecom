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

// Function: entry_003744f0
// Address: 0x3744f0 - 0x374500
void entry_003744f0_0x3744f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003744f0_0x3744f0");
#endif

    ctx->pc = 0x3744f0u;

    // 0x3744f0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3744f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3744f4: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x3744f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x3744f8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x3744f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3744fc: 0x0  nop
    ctx->pc = 0x3744fcu;
    // NOP
    ctx->pc = 0x374500u;
}
