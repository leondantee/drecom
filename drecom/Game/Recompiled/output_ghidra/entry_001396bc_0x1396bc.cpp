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

// Function: entry_001396bc
// Address: 0x1396bc - 0x139738
void entry_001396bc_0x1396bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001396bc_0x1396bc");
#endif

    switch (ctx->pc) {
        case 0x1396e8u: goto label_1396e8;
        case 0x1396f4u: goto label_1396f4;
        case 0x139704u: goto label_139704;
        case 0x139710u: goto label_139710;
        default: break;
    }

    ctx->pc = 0x1396bcu;

    // 0x1396bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1396bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1396c0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1396c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1396c4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1396c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1396c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1396c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1396cc: 0x0  nop
    ctx->pc = 0x1396ccu;
    // NOP
    // 0x1396d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1396d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1396d4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1396d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1396d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1396d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1396dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1396dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1396e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1396E0u;
    SET_GPR_U32(ctx, 31, 0x1396E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1396E0u, 0x1396E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396E8u;
label_1396e8:
    // 0x1396e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1396e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1396ec: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1396ECu;
    SET_GPR_U32(ctx, 31, 0x1396F4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1396ECu, 0x1396F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396F4u;
label_1396f4:
    // 0x1396f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1396f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1396f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1396f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1396fc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1396FCu;
    SET_GPR_U32(ctx, 31, 0x139704u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1396FCu, 0x139704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139704u;
label_139704:
    // 0x139704: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139708: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x139708u;
    SET_GPR_U32(ctx, 31, 0x139710u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x139708u, 0x139710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139710u;
label_139710:
    // 0x139710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139714: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x139714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x139718: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x139718u;
    {
        const bool branch_taken_0x139718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139718) {
            ctx->pc = 0x139738u;
            return;
        }
    }
    ctx->pc = 0x139720u;
    // 0x139720: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139724: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x139724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x139728: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x139728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13972c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x13972cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x139730: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x139730u;
    {
        const bool branch_taken_0x139730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139730) {
            ctx->pc = 0x139898u;
            return;
        }
    }
    ctx->pc = 0x139738u;
}
