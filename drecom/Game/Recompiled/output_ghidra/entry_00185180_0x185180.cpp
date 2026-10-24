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

// Function: entry_00185180
// Address: 0x185180 - 0x185198
void entry_00185180_0x185180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185180_0x185180");
#endif

    ctx->pc = 0x185180u;

    // 0x185180: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185184: 0x24630280  addiu       $v1, $v1, 0x280
    ctx->pc = 0x185184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x185188: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185188u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x480280u));
    // 0x18518c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18518cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185190: 0x24630290  addiu       $v1, $v1, 0x290
    ctx->pc = 0x185190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 656));
    // 0x185194: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185194u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x480290u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x480290u, _value); } while (0);
    ctx->pc = 0x185198u;
}
