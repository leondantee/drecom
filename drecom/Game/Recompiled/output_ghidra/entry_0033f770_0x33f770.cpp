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

// Function: entry_0033f770
// Address: 0x33f770 - 0x33f780
void entry_0033f770_0x33f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f770_0x33f770");
#endif

    ctx->pc = 0x33f770u;

    // 0x33f770: 0x9204006c  lbu         $a0, 0x6C($s0)
    ctx->pc = 0x33f770u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x33f774: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f778: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x33f778u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f77c: 0xa203006c  sb          $v1, 0x6C($s0)
    ctx->pc = 0x33f77cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x33f780u;
}
