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

// Function: entry_001565f4
// Address: 0x1565f4 - 0x15661c
void entry_001565f4_0x1565f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001565f4_0x1565f4");
#endif

    ctx->pc = 0x1565f4u;

    // 0x1565f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1565f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1565f8: 0x8c225520  lw          $v0, 0x5520($at)
    ctx->pc = 0x1565f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385520u));
    // 0x1565fc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1565fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x156600: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156604: 0xac225520  sw          $v0, 0x5520($at)
    ctx->pc = 0x156604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x385520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x385520u, _value); } while (0);
    // 0x156608: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x15660c: 0x8c225528  lw          $v0, 0x5528($at)
    ctx->pc = 0x15660cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385528u));
    // 0x156610: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x156610u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x156614: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156618: 0xac365528  sw          $s6, 0x5528($at)
    ctx->pc = 0x156618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x385528u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x385528u, _value); } while (0);
    ctx->pc = 0x15661cu;
}
