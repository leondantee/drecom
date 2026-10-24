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

// Function: caseD_5
// Address: 0x26cdb8 - 0x26ce20
void caseD_5_0x26cdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x26cdb8");
#endif

    switch (ctx->pc) {
        case 0x26cdc0u: goto label_26cdc0;
        case 0x26cddcu: goto label_26cddc;
        default: break;
    }

    ctx->pc = 0x26cdb8u;

    // 0x26cdb8: 0xc057a4c  jal         func_15E930
    ctx->pc = 0x26CDB8u;
    SET_GPR_U32(ctx, 31, 0x26CDC0u);
    ctx->pc = 0x15E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E930u, 0x26CDB8u, 0x26CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDC0u;
label_26cdc0:
    // 0x26cdc0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x26cdc0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26cdc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cdc8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cdcc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x26cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x26cdd0: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x26cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x26cdd4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26CDD4u;
    SET_GPR_U32(ctx, 31, 0x26CDDCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26CDD4u, 0x26CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDDCu;
label_26cddc:
    // 0x26cddc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26cddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x26cde0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cde4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x26cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cde8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x26cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x26cdec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26cdecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cdf0: 0x0  nop
    ctx->pc = 0x26cdf0u;
    // NOP
    // 0x26cdf4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26cdf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26cdf8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cdfc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26cdfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ce00: 0x0  nop
    ctx->pc = 0x26ce00u;
    // NOP
    // 0x26ce04: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x26CE04u;
    {
        const bool branch_taken_0x26ce04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ce04) {
            ctx->pc = 0x26CE20u;
            return;
        }
    }
    ctx->pc = 0x26CE0Cu;
    // 0x26ce0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ce10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ce14: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x26ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x26ce18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26CE18u;
    {
        const bool branch_taken_0x26ce18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ce18) {
            ctx->pc = 0x26CE28u;
            return;
        }
    }
    ctx->pc = 0x26CE20u;
}
