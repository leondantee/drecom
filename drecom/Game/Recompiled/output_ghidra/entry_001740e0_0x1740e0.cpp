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

// Function: entry_001740e0
// Address: 0x1740e0 - 0x174110
void entry_001740e0_0x1740e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001740e0_0x1740e0");
#endif

    ctx->pc = 0x1740e0u;

    // 0x1740e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1740e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1740e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1740e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1740e8: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x1740e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x1740ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1740ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1740f0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1740f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1740f4: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x1740f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x1740f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1740f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1740fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1740fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x174100: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174100u;
    {
        const bool branch_taken_0x174100 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x174100) {
            ctx->pc = 0x174110u;
            return;
        }
    }
    ctx->pc = 0x174108u;
    // 0x174108: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17410c: 0x0  nop
    ctx->pc = 0x17410cu;
    // NOP
    ctx->pc = 0x174110u;
}
