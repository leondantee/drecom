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

// Function: entry_0018738c
// Address: 0x18738c - 0x1873d0
void entry_0018738c_0x18738c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018738c_0x18738c");
#endif

    switch (ctx->pc) {
        case 0x1873a8u: goto label_1873a8;
        default: break;
    }

    ctx->pc = 0x18738cu;

    // 0x18738c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x18738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x187390: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x187390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x187394: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x187394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x187398: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x187398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18739c: 0xa4225920  sh          $v0, 0x5920($at)
    ctx->pc = 0x18739cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x385920u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x385920u, _value); } while (0);
    // 0x1873a0: 0xc0620d8  jal         func_188360
    ctx->pc = 0x1873A0u;
    SET_GPR_U32(ctx, 31, 0x1873A8u);
    ctx->pc = 0x188360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188360u, 0x1873A0u, 0x1873A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873A8u;
label_1873a8:
    // 0x1873a8: 0xa38280ac  sb          $v0, -0x7F54($gp)
    ctx->pc = 0x1873a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934700), (uint8_t)GPR_U32(ctx, 2));
    // 0x1873ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1873acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1873b0: 0x8c240358  lw          $a0, 0x358($at)
    ctx->pc = 0x1873b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x480358u));
    // 0x1873b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1873b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1873b8: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1873B8u;
    {
        const bool branch_taken_0x1873b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1873b8) {
            ctx->pc = 0x187404u;
            return;
        }
    }
    ctx->pc = 0x1873C0u;
    // 0x1873c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1873C0u;
    {
        const bool branch_taken_0x1873c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1873c0) {
            ctx->pc = 0x1873D0u;
            return;
        }
    }
    ctx->pc = 0x1873C8u;
    // 0x1873c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1873C8u;
    {
        const bool branch_taken_0x1873c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1873c8) {
            ctx->pc = 0x187430u;
            return;
        }
    }
    ctx->pc = 0x1873D0u;
}
