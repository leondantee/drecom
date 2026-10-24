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

// Function: entry_00377240
// Address: 0x377240 - 0x377258
void entry_00377240_0x377240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377240_0x377240");
#endif

    ctx->pc = 0x377240u;

    // 0x377240: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x377240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x377244: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x377244u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x377248: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x377248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x37724c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x37724cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x377250: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x377250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x377254: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x377254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    ctx->pc = 0x377258u;
}
