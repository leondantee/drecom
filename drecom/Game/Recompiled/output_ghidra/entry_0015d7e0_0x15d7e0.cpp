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

// Function: entry_0015d7e0
// Address: 0x15d7e0 - 0x15d838
void entry_0015d7e0_0x15d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d7e0_0x15d7e0");
#endif

    switch (ctx->pc) {
        case 0x15d80cu: goto label_15d80c;
        default: break;
    }

    ctx->pc = 0x15d7e0u;

    // 0x15d7e0: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x15d7e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d7e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d7e8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15d7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15d7ec: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x15D7ECu;
    {
        const bool branch_taken_0x15d7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d7ec) {
            ctx->pc = 0x15D8B0u;
            return;
        }
    }
    ctx->pc = 0x15D7F4u;
    // 0x15d7f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d7f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d7fc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x15d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x15d800: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x15d800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x15d804: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x15D804u;
    SET_GPR_U32(ctx, 31, 0x15D80Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x15D804u, 0x15D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D80Cu;
label_15d80c:
    // 0x15d80c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15d810: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d814: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x15d814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d818: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d81c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15d81cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d820: 0x0  nop
    ctx->pc = 0x15d820u;
    // NOP
    // 0x15d824: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15D824u;
    {
        const bool branch_taken_0x15d824 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d824) {
            ctx->pc = 0x15D838u;
            return;
        }
    }
    ctx->pc = 0x15D82Cu;
    // 0x15d82c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d830: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d834: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x15d834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x15d838u;
}
