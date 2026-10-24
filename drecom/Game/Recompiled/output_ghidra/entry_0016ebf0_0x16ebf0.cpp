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

// Function: entry_0016ebf0
// Address: 0x16ebf0 - 0x16ec08
void entry_0016ebf0_0x16ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ebf0_0x16ebf0");
#endif

    ctx->pc = 0x16ebf0u;

    // 0x16ebf0: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x16ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x16ebf4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x16ebf4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16ebf8: 0x97a500dc  lhu         $a1, 0xDC($sp)
    ctx->pc = 0x16ebf8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x16ebfc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x16ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16ec00: 0xa7a200dc  sh          $v0, 0xDC($sp)
    ctx->pc = 0x16ec00u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 2));
    // 0x16ec04: 0x0  nop
    ctx->pc = 0x16ec04u;
    // NOP
    ctx->pc = 0x16ec08u;
}
