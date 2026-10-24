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

// Function: entry_00199eb0
// Address: 0x199eb0 - 0x199f30
void entry_00199eb0_0x199eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199eb0_0x199eb0");
#endif

    switch (ctx->pc) {
        case 0x199ebcu: goto label_199ebc;
        default: break;
    }

    ctx->pc = 0x199eb0u;

    // 0x199eb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199eb4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x199EB4u;
    SET_GPR_U32(ctx, 31, 0x199EBCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x199EB4u, 0x199EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199EBCu;
label_199ebc:
    // 0x199ebc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199ec0: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x199ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199ec4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199ec8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199ecc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x199ed0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x199ed4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199ed8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199edc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199ee0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x199ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199ee4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x199ee8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x199ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x199eec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199ef0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199ef4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x199ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x199ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199efc: 0x0  nop
    ctx->pc = 0x199efcu;
    // NOP
    // 0x199f00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199f00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199f04: 0x0  nop
    ctx->pc = 0x199f04u;
    // NOP
    // 0x199f08: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x199F08u;
    {
        const bool branch_taken_0x199f08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199f08) {
            ctx->pc = 0x199F30u;
            return;
        }
    }
    ctx->pc = 0x199F10u;
    // 0x199f10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199f14: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x199f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199f18: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x199f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x199f1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x199f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x199f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199f24: 0x0  nop
    ctx->pc = 0x199f24u;
    // NOP
    // 0x199f28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199f28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x199f2c: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x199f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    ctx->pc = 0x199f30u;
}
