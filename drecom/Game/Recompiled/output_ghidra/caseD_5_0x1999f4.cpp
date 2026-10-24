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
// Address: 0x1999f4 - 0x199aa4
void caseD_5_0x1999f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1999f4");
#endif

    switch (ctx->pc) {
        case 0x199a04u: goto label_199a04;
        case 0x199a24u: goto label_199a24;
        case 0x199a30u: goto label_199a30;
        default: break;
    }

    ctx->pc = 0x1999f4u;

    // 0x1999f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1999f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1999f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1999f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1999fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1999FCu;
    SET_GPR_U32(ctx, 31, 0x199A04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1999FCu, 0x199A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A04u;
label_199a04:
    // 0x199a04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199a08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199a0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199a10: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x199a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x199a14: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x199a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x199a18: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x199a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x199a1c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x199A1Cu;
    SET_GPR_U32(ctx, 31, 0x199A24u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x199A24u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x199A24u) { return; }
    ctx->pc = 0x199A24u;
label_199a24:
    // 0x199a24: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199a28: 0xc05cd10  jal         func_173440
    ctx->pc = 0x199A28u;
    SET_GPR_U32(ctx, 31, 0x199A30u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x199A28u, 0x199A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A30u;
label_199a30:
    // 0x199a30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199a34: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x199a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199a38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199a3c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199a40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x199a44: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x199a48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199a4c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199a50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199a54: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x199a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199a58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x199a5c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x199a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x199a60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199a64: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199a68: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x199a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x199a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199a70: 0x0  nop
    ctx->pc = 0x199a70u;
    // NOP
    // 0x199a74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199a74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199a78: 0x0  nop
    ctx->pc = 0x199a78u;
    // NOP
    // 0x199a7c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x199A7Cu;
    {
        const bool branch_taken_0x199a7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199a7c) {
            ctx->pc = 0x199AA4u;
            return;
        }
    }
    ctx->pc = 0x199A84u;
    // 0x199a84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199a88: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x199a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199a8c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x199a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x199a90: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x199a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x199a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199a98: 0x0  nop
    ctx->pc = 0x199a98u;
    // NOP
    // 0x199a9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x199aa0: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x199aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    ctx->pc = 0x199aa4u;
}
