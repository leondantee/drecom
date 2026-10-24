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

// Function: caseD_1
// Address: 0x149578 - 0x1495d4
void caseD_1_0x149578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x149578");
#endif

    switch (ctx->pc) {
        case 0x149588u: goto label_149588;
        case 0x1495c4u: goto label_1495c4;
        default: break;
    }

    ctx->pc = 0x149578u;

    // 0x149578: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14957c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14957cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149580: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x149580u;
    SET_GPR_U32(ctx, 31, 0x149588u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149580u, 0x149588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149588u;
label_149588:
    // 0x149588: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14958c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14958cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x149590: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x149590u;
    {
        const bool branch_taken_0x149590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149590) {
            ctx->pc = 0x1495D4u;
            return;
        }
    }
    ctx->pc = 0x149598u;
    // 0x149598: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14959c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x14959cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1495a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1495a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1495a4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1495a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1495a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1495a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1495ac: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1495acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1495b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1495b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1495b4: 0xc4401578  lwc1        $f0, 0x1578($v0)
    ctx->pc = 0x1495b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1495b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1495b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1495bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1495BCu;
    SET_GPR_U32(ctx, 31, 0x1495C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1495BCu, 0x1495C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495C4u;
label_1495c4:
    // 0x1495c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1495c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1495c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1495c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1495cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1495CCu;
    {
        const bool branch_taken_0x1495cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1495cc) {
            ctx->pc = 0x1495E4u;
            return;
        }
    }
    ctx->pc = 0x1495D4u;
}
