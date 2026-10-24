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

// Function: entry_00175624
// Address: 0x175624 - 0x175638
void entry_00175624_0x175624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175624_0x175624");
#endif

    ctx->pc = 0x175624u;

    // 0x175624: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x175624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x175628: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x175628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17562c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17562cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175630: 0xa422cc90  sh          $v0, -0x3370($at)
    ctx->pc = 0x175630u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC90u, _value); } while (0);
    // 0x175634: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x175634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x175638u;
}
