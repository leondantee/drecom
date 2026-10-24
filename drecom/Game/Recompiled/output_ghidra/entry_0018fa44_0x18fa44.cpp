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

// Function: entry_0018fa44
// Address: 0x18fa44 - 0x18fa60
void entry_0018fa44_0x18fa44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fa44_0x18fa44");
#endif

    ctx->pc = 0x18fa44u;

    // 0x18fa44: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18fa44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18fa48: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x18fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x18fa4c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18fa50: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18fa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18fa54: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x18fa54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x18fa58: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18fa58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fa5c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fa5cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18fa60u;
}
