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

// Function: entry_00135fe4
// Address: 0x135fe4 - 0x136000
void entry_00135fe4_0x135fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135fe4_0x135fe4");
#endif

    ctx->pc = 0x135fe4u;

    // 0x135fe4: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x135fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135fe8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x135fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x135fec: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x135fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x135ff0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x135ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135ff4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x135ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x135ff8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x135ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x135ffc: 0xa2000098  sb          $zero, 0x98($s0)
    ctx->pc = 0x135ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x136000u;
}
