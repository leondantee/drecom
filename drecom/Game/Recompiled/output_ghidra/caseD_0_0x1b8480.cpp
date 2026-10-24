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

// Function: caseD_0
// Address: 0x1b8480 - 0x1b84fc
void caseD_0_0x1b8480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1b8480");
#endif

    switch (ctx->pc) {
        case 0x1b84a4u: goto label_1b84a4;
        case 0x1b84e4u: goto label_1b84e4;
        default: break;
    }

    ctx->pc = 0x1b8480u;

    // 0x1b8480: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b8480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b8484: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8488: 0xa08210a8  sb          $v0, 0x10A8($a0)
    ctx->pc = 0x1b8488u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b848c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b848cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8490: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8494: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1b8494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b8498: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1b8498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b849c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B849Cu;
    SET_GPR_U32(ctx, 31, 0x1B84A4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B849Cu, 0x1B84A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84A4u;
label_1b84a4:
    // 0x1b84a4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b84a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b84a8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b84a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b84ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b84acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b84b0: 0x0  nop
    ctx->pc = 0x1b84b0u;
    // NOP
    // 0x1b84b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b84b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b84b8: 0x0  nop
    ctx->pc = 0x1b84b8u;
    // NOP
    // 0x1b84bc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1B84BCu;
    {
        const bool branch_taken_0x1b84bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b84bc) {
            ctx->pc = 0x1B84FCu;
            return;
        }
    }
    ctx->pc = 0x1B84C4u;
    // 0x1b84c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b84c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b84c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b84cc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b84ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b84d0: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1b84d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x1b84d4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b84d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b84d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b84d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b84dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B84DCu;
    SET_GPR_U32(ctx, 31, 0x1B84E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B84DCu, 0x1B84E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84E4u;
label_1b84e4:
    // 0x1b84e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b84e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b84e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b84e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b84ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b84ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b84f0: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1b84f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    // 0x1b84f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B84F4u;
    {
        const bool branch_taken_0x1b84f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b84f4) {
            ctx->pc = 0x1B8528u;
            return;
        }
    }
    ctx->pc = 0x1B84FCu;
}
