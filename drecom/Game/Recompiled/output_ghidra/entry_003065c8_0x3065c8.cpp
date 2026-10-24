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

// Function: entry_003065c8
// Address: 0x3065c8 - 0x30661c
void entry_003065c8_0x3065c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003065c8_0x3065c8");
#endif

    switch (ctx->pc) {
        case 0x30660cu: goto label_30660c;
        default: break;
    }

    ctx->pc = 0x3065c8u;

    // 0x3065c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3065c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3065cc: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x3065ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x3065d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3065d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3065d4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x3065d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3065d8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3065D8u;
    {
        const bool branch_taken_0x3065d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3065d8) {
            ctx->pc = 0x30661Cu;
            return;
        }
    }
    ctx->pc = 0x3065E0u;
    // 0x3065e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3065e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3065e4: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x3065e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x3065e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3065e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3065ec: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x3065ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3065f0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3065F0u;
    {
        const bool branch_taken_0x3065f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3065f0) {
            ctx->pc = 0x30661Cu;
            return;
        }
    }
    ctx->pc = 0x3065F8u;
    // 0x3065f8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3065f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3065fc: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x3065fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x306600: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306604: 0xc05cd90  jal         func_173640
    ctx->pc = 0x306604u;
    SET_GPR_U32(ctx, 31, 0x30660Cu);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x306604u, 0x30660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30660Cu;
label_30660c:
    // 0x30660c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x30660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x306610: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x306610u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x306614: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x306614u;
    {
        const bool branch_taken_0x306614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306614) {
            ctx->pc = 0x306634u;
            return;
        }
    }
    ctx->pc = 0x30661Cu;
}
