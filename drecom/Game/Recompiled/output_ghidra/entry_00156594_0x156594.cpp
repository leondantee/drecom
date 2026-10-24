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

// Function: entry_00156594
// Address: 0x156594 - 0x1565b4
void entry_00156594_0x156594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156594_0x156594");
#endif

    ctx->pc = 0x156594u;

    // 0x156594: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x156594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x156598: 0x8c22f748  lw          $v0, -0x8B8($at)
    ctx->pc = 0x156598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF748u));
    // 0x15659c: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x15659cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1565a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1565a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1565a4: 0x8c22f740  lw          $v0, -0x8C0($at)
    ctx->pc = 0x1565a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF740u));
    // 0x1565a8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1565a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1565ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1565acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1565b0: 0xac22f740  sw          $v0, -0x8C0($at)
    ctx->pc = 0x1565b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EF740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF740u, _value); } while (0);
    ctx->pc = 0x1565b4u;
}
