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
// Address: 0x2d2b34 - 0x2d2bc0
void caseD_5_0x2d2b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2d2b34");
#endif

    switch (ctx->pc) {
        case 0x2d2bb8u: goto label_2d2bb8;
        default: break;
    }

    ctx->pc = 0x2d2b34u;

    // 0x2d2b34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2b38: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d2b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d2b3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d2b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d2b40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d2b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d2b44: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D2B44u;
    {
        const bool branch_taken_0x2d2b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b44) {
            ctx->pc = 0x2D2BC0u;
            return;
        }
    }
    ctx->pc = 0x2D2B4Cu;
    // 0x2d2b4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2b50: 0xc4410180  lwc1        $f1, 0x180($v0)
    ctx->pc = 0x2d2b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2b54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2b58: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x2d2b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2b5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2b5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d2b60: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2d2b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2d2b64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2b68: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2d2b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2b6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2b70: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x2d2b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2b74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2b74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d2b78: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x2d2b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x2d2b7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2b80: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d2b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2b84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2b88: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2d2b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2b8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d2b90: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d2b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2d2b94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2b98: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2d2b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2b9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2ba0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2d2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2ba4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d2ba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2ba8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d2ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2d2bac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2bb0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D2BB0u;
    SET_GPR_U32(ctx, 31, 0x2D2BB8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D2BB0u, 0x2D2BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2BB8u;
label_2d2bb8:
    // 0x2d2bb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2BB8u;
    {
        const bool branch_taken_0x2d2bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2bb8) {
            ctx->pc = 0x2D2BE0u;
            return;
        }
    }
    ctx->pc = 0x2D2BC0u;
}
