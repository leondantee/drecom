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

// Function: entry_00203e24
// Address: 0x203e24 - 0x203e84
void entry_00203e24_0x203e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203e24_0x203e24");
#endif

    switch (ctx->pc) {
        case 0x203e54u: goto label_203e54;
        default: break;
    }

    ctx->pc = 0x203e24u;

    // 0x203e24: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x203e24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203e28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x203e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x203e2c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x203e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x203e30: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x203E30u;
    {
        const bool branch_taken_0x203e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203e30) {
            ctx->pc = 0x203E84u;
            return;
        }
    }
    ctx->pc = 0x203E38u;
    // 0x203e38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x203e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203e3c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x203e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x203e40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x203e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203e44: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x203e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x203e48: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x203e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x203e4c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x203E4Cu;
    SET_GPR_U32(ctx, 31, 0x203E54u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x203E4Cu, 0x203E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203E54u;
label_203e54:
    // 0x203e54: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x203e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x203e58: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x203e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x203e5c: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x203e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x203e60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x203e60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x203e64: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x203e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203e68: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x203e68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203e6c: 0x0  nop
    ctx->pc = 0x203e6cu;
    // NOP
    // 0x203e70: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x203E70u;
    {
        const bool branch_taken_0x203e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x203e70) {
            ctx->pc = 0x203E84u;
            return;
        }
    }
    ctx->pc = 0x203E78u;
    // 0x203e78: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x203e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203e7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x203e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203e80: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x203e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x203e84u;
}
