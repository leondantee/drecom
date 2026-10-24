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

// Function: entry_00298fdc
// Address: 0x298fdc - 0x298ff8
void entry_00298fdc_0x298fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298fdc_0x298fdc");
#endif

    ctx->pc = 0x298fdcu;

    // 0x298fdc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x298fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x298fe0: 0x34450002  ori         $a1, $v0, 0x2
    ctx->pc = 0x298fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x298fe4: 0x5803c  dsll32      $s0, $a1, 0
    ctx->pc = 0x298fe4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 0));
    // 0x298fe8: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x298fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x298fec: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x298fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x298ff0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x298ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x298ff4: 0xfc430170  sd          $v1, 0x170($v0)
    ctx->pc = 0x298ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 368), GPR_U64(ctx, 3));
    ctx->pc = 0x298ff8u;
}
