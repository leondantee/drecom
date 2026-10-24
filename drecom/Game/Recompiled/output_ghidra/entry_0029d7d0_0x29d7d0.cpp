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

// Function: entry_0029d7d0
// Address: 0x29d7d0 - 0x29d820
void entry_0029d7d0_0x29d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d7d0_0x29d7d0");
#endif

    switch (ctx->pc) {
        case 0x29d7dcu: goto label_29d7dc;
        default: break;
    }

    ctx->pc = 0x29d7d0u;

    // 0x29d7d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d7d4: 0xc0b3950  jal         func_2CE540
    ctx->pc = 0x29D7D4u;
    SET_GPR_U32(ctx, 31, 0x29D7DCu);
    ctx->pc = 0x2CE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE540u, 0x29D7D4u, 0x29D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7DCu;
label_29d7dc:
    // 0x29d7dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d7e0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x29d7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d7e4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x29d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x29d7e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d7ec: 0x0  nop
    ctx->pc = 0x29d7ecu;
    // NOP
    // 0x29d7f0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x29d7f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d7f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29d7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29d7f8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x29d7f8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d7fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29d7fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d800: 0x0  nop
    ctx->pc = 0x29d800u;
    // NOP
    // 0x29d804: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29D804u;
    {
        const bool branch_taken_0x29d804 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d804) {
            ctx->pc = 0x29D820u;
            return;
        }
    }
    ctx->pc = 0x29D80Cu;
    // 0x29d80c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d810: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d814: 0x94620048  lhu         $v0, 0x48($v1)
    ctx->pc = 0x29d814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x29d818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29d81c: 0xa4620048  sh          $v0, 0x48($v1)
    ctx->pc = 0x29d81cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x29d820u;
}
