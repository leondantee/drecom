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

// Function: entry_0018a3a8
// Address: 0x18a3a8 - 0x18a410
void entry_0018a3a8_0x18a3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a3a8_0x18a3a8");
#endif

    ctx->pc = 0x18a3a8u;

    // 0x18a3a8: 0x2e030040  sltiu       $v1, $s0, 0x40
    ctx->pc = 0x18a3a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x18a3ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18A3ACu;
    {
        const bool branch_taken_0x18a3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a3ac) {
            ctx->pc = 0x18A398u;
            return;
        }
    }
    ctx->pc = 0x18A3B4u;
    // 0x18a3b4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a3b8: 0x24634c50  addiu       $v1, $v1, 0x4C50
    ctx->pc = 0x18a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19536));
    // 0x18a3bc: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x18a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x18a3c0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x18a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x18a3c4: 0x2463aa20  addiu       $v1, $v1, -0x55E0
    ctx->pc = 0x18a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945312));
    // 0x18a3c8: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x18a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x18a3cc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a3d0: 0xac204e6c  sw          $zero, 0x4E6C($at)
    ctx->pc = 0x18a3d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x584E6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x584E6Cu, _value); } while (0);
    // 0x18a3d4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a3d8: 0x24634e80  addiu       $v1, $v1, 0x4E80
    ctx->pc = 0x18a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20096));
    // 0x18a3dc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a3e0: 0xac234e70  sw          $v1, 0x4E70($at)
    ctx->pc = 0x18a3e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x584E70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x584E70u, _value); } while (0);
    // 0x18a3e4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x18a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x18a3e8: 0x2463a7f0  addiu       $v1, $v1, -0x5810
    ctx->pc = 0x18a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944752));
    // 0x18a3ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a3f0: 0xac23ac3c  sw          $v1, -0x53C4($at)
    ctx->pc = 0x18a3f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CAC3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC3Cu, _value); } while (0);
    // 0x18a3f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a3f8: 0xac20ac40  sw          $zero, -0x53C0($at)
    ctx->pc = 0x18a3f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CAC40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC40u, _value); } while (0);
    // 0x18a3fc: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a400: 0x24724e80  addiu       $s2, $v1, 0x4E80
    ctx->pc = 0x18a400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 20096));
    // 0x18a404: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18a404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a408: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A408u;
    {
        const bool branch_taken_0x18a408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a408) {
            ctx->pc = 0x18A428u;
            return;
        }
    }
    ctx->pc = 0x18A410u;
}
