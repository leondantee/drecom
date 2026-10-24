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

// Function: entry_0019a0e8
// Address: 0x19a0e8 - 0x19a15c
void entry_0019a0e8_0x19a0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a0e8_0x19a0e8");
#endif

    switch (ctx->pc) {
        case 0x19a118u: goto label_19a118;
        case 0x19a12cu: goto label_19a12c;
        default: break;
    }

    ctx->pc = 0x19a0e8u;

    // 0x19a0e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a0ec: 0x904209de  lbu         $v0, 0x9DE($v0)
    ctx->pc = 0x19a0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2526)));
    // 0x19a0f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19a0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a0f4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x19a0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x19a0f8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19A0F8u;
    {
        const bool branch_taken_0x19a0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a0f8) {
            ctx->pc = 0x19A15Cu;
            return;
        }
    }
    ctx->pc = 0x19A100u;
    // 0x19a100: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a104: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a108: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x19a108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x19a10c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x19a10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x19a110: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19A110u;
    SET_GPR_U32(ctx, 31, 0x19A118u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19A110u, 0x19A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A118u;
label_19a118:
    // 0x19a118: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x19a118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x19a11c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a120: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19a120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19a124: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19A124u;
    SET_GPR_U32(ctx, 31, 0x19A12Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19A124u, 0x19A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A12Cu;
label_19a12c:
    // 0x19a12c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a130: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19a130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a134: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x19a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a138: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a13c: 0x0  nop
    ctx->pc = 0x19a13cu;
    // NOP
    // 0x19a140: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x19A140u;
    {
        const bool branch_taken_0x19a140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a140) {
            ctx->pc = 0x19A180u;
            return;
        }
    }
    ctx->pc = 0x19A148u;
    // 0x19a148: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x19a148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a14c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a150: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19a150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19a154: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19A154u;
    {
        const bool branch_taken_0x19a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a154) {
            ctx->pc = 0x19A180u;
            return;
        }
    }
    ctx->pc = 0x19A15Cu;
}
