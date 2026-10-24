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

// Function: caseD_3
// Address: 0x19a038 - 0x19a0e8
void caseD_3_0x19a038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x19a038");
#endif

    switch (ctx->pc) {
        case 0x19a048u: goto label_19a048;
        case 0x19a068u: goto label_19a068;
        case 0x19a074u: goto label_19a074;
        default: break;
    }

    ctx->pc = 0x19a038u;

    // 0x19a038: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a03c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19a03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a040: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19A040u;
    SET_GPR_U32(ctx, 31, 0x19A048u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19A040u, 0x19A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A048u;
label_19a048:
    // 0x19a048: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a04c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a050: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a054: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19a054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19a058: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19a058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19a05c: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a060: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19A060u;
    SET_GPR_U32(ctx, 31, 0x19A068u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19A068u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A068u) { return; }
    ctx->pc = 0x19A068u;
label_19a068:
    // 0x19a068: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a06c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19A06Cu;
    SET_GPR_U32(ctx, 31, 0x19A074u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19A06Cu, 0x19A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A074u;
label_19a074:
    // 0x19a074: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a078: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x19a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a07c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a080: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x19a080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a084: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19a084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19a088: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19a088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19a08c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a090: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a094: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a098: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x19a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a09c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19a09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19a0a0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19a0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x19a0a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a0a8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19a0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a0ac: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x19a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x19a0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a0b4: 0x0  nop
    ctx->pc = 0x19a0b4u;
    // NOP
    // 0x19a0b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19a0b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a0bc: 0x0  nop
    ctx->pc = 0x19a0bcu;
    // NOP
    // 0x19a0c0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x19A0C0u;
    {
        const bool branch_taken_0x19a0c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a0c0) {
            ctx->pc = 0x19A0E8u;
            return;
        }
    }
    ctx->pc = 0x19A0C8u;
    // 0x19a0c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a0cc: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x19a0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a0d0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x19a0d4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19a0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x19a0d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a0dc: 0x0  nop
    ctx->pc = 0x19a0dcu;
    // NOP
    // 0x19a0e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19a0e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19a0e4: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x19a0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    ctx->pc = 0x19a0e8u;
}
