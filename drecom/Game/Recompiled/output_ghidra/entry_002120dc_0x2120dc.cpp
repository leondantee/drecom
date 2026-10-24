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

// Function: entry_002120dc
// Address: 0x2120dc - 0x212118
void entry_002120dc_0x2120dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002120dc_0x2120dc");
#endif

    ctx->pc = 0x2120dcu;

    // 0x2120dc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2120dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2120e0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2120E0u;
    {
        const bool branch_taken_0x2120e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2120e0) {
            ctx->pc = 0x212118u;
            return;
        }
    }
    ctx->pc = 0x2120E8u;
    // 0x2120e8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2120e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2120ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2120ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2120f0: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2120f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2120f4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2120f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2120f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2120f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2120fc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2120FCu;
    {
        const bool branch_taken_0x2120fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2120fc) {
            ctx->pc = 0x212118u;
            return;
        }
    }
    ctx->pc = 0x212104u;
    // 0x212104: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x212104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x212108: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x212108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21210c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21210cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x212110: 0xc0848cc  jal         func_212330
    ctx->pc = 0x212110u;
    SET_GPR_U32(ctx, 31, 0x212118u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x212110u, 0x212118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212118u;
}
