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

// Function: e2d_id4c_type00
// Address: 0x2b6550 - 0x2b6594
void e2d_id4c_type00_0x2b6550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id4c_type00_0x2b6550");
#endif

    ctx->pc = 0x2b6550u;

    // 0x2b6550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6554: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b6554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b6558: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2b6558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2b655c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b655cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6560: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6564: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6568: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b6568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b656c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6570: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b6570u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6574: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2b6574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2b6578: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2b6578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2b657c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b657cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6580: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6584: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x2b6584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x2b6588: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b6588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b658c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B658Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B658Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6594u;
}
