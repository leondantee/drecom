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

// Function: entry_002a8f90
// Address: 0x2a8f90 - 0x2a9024
void entry_002a8f90_0x2a8f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8f90_0x2a8f90");
#endif

    switch (ctx->pc) {
        case 0x2a8fa0u: goto label_2a8fa0;
        case 0x2a8fd0u: goto label_2a8fd0;
        case 0x2a8fe8u: goto label_2a8fe8;
        default: break;
    }

    ctx->pc = 0x2a8f90u;

    // 0x2a8f90: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x2a8f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8f94: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2a8f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a8f98: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2A8F98u;
    SET_GPR_U32(ctx, 31, 0x2A8FA0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2A8F98u, 0x2A8FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FA0u;
label_2a8fa0:
    // 0x2a8fa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8fa4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8fa8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2a8fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2a8fac: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2a8facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8fb0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8fb4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2a8fb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8fb8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2a8fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8fbc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8fc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8fc4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2a8fc4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a8fc8: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2A8FC8u;
    SET_GPR_U32(ctx, 31, 0x2A8FD0u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2A8FC8u, 0x2A8FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FD0u;
label_2a8fd0:
    // 0x2a8fd0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a8fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a8fd4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8fd8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2a8fd8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8fdc: 0xc7ad002c  lwc1        $f13, 0x2C($sp)
    ctx->pc = 0x2a8fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a8fe0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2A8FE0u;
    SET_GPR_U32(ctx, 31, 0x2A8FE8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2A8FE0u, 0x2A8FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FE8u;
label_2a8fe8:
    // 0x2a8fe8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a8fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8fec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a8fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a8ff0: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2a8ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2a8ff4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2a8ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2a8ff8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8ffc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a8ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a9000: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2a9000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9004: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a9004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a9008: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a9008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a900c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2a900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a9010: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a9010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a9014: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a9014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a9018: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2a9018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2a901c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2A901Cu;
    {
        const bool branch_taken_0x2a901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a901c) {
            ctx->pc = 0x2A9110u;
            return;
        }
    }
    ctx->pc = 0x2A9024u;
}
