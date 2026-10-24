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
// Address: 0x14a280 - 0x14a2f8
void caseD_5_0x14a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x14a280");
#endif

    switch (ctx->pc) {
        case 0x14a290u: goto label_14a290;
        case 0x14a29cu: goto label_14a29c;
        case 0x14a2b0u: goto label_14a2b0;
        case 0x14a2c8u: goto label_14a2c8;
        default: break;
    }

    ctx->pc = 0x14a280u;

    // 0x14a280: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a284: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a284u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14a288: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14A288u;
    SET_GPR_U32(ctx, 31, 0x14A290u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14A288u, 0x14A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A290u;
label_14a290:
    // 0x14a290: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a294: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14A294u;
    SET_GPR_U32(ctx, 31, 0x14A29Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14A294u, 0x14A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A29Cu;
label_14a29c:
    // 0x14a29c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14a29cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14a2a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a2a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14a2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14a2a8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14A2A8u;
    SET_GPR_U32(ctx, 31, 0x14A2B0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14A2A8u, 0x14A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2B0u;
label_14a2b0:
    // 0x14a2b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a2b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a2b8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14a2bc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14a2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14a2c0: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x14A2C0u;
    SET_GPR_U32(ctx, 31, 0x14A2C8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14A2C0u, 0x14A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2C8u;
label_14a2c8:
    // 0x14a2c8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14a2cc: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x14a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x14a2d0: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x14a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x14a2d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14a2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a2d8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a2dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x14a2dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a2e0: 0x0  nop
    ctx->pc = 0x14a2e0u;
    // NOP
    // 0x14a2e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x14A2E4u;
    {
        const bool branch_taken_0x14a2e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a2e4) {
            ctx->pc = 0x14A2F8u;
            return;
        }
    }
    ctx->pc = 0x14A2ECu;
    // 0x14a2ec: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a2f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a2f4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14a2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x14a2f8u;
}
