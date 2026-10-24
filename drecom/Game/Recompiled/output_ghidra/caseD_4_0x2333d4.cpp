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

// Function: caseD_4
// Address: 0x2333d4 - 0x233434
void caseD_4_0x2333d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2333d4");
#endif

    switch (ctx->pc) {
        case 0x2333f4u: goto label_2333f4;
        case 0x23340cu: goto label_23340c;
        default: break;
    }

    ctx->pc = 0x2333d4u;

    // 0x2333d4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2333d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2333d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2333d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2333dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2333dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2333e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2333e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2333e4: 0x0  nop
    ctx->pc = 0x2333e4u;
    // NOP
    // 0x2333e8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2333e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2333ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2333ECu;
    SET_GPR_U32(ctx, 31, 0x2333F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2333ECu, 0x2333F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333F4u;
label_2333f4:
    // 0x2333f4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2333f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2333f8: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2333f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2333fc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2333fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233400: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x233400u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x233404: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x233404u;
    SET_GPR_U32(ctx, 31, 0x23340Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x233404u, 0x23340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23340Cu;
label_23340c:
    // 0x23340c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x23340cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233410: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x233410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x233414: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x233414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x233418: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233418u;
    {
        const bool branch_taken_0x233418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233418) {
            ctx->pc = 0x233434u;
            return;
        }
    }
    ctx->pc = 0x233420u;
    // 0x233420: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233424: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x233424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233428: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x233428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23342c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x23342Cu;
    SET_GPR_U32(ctx, 31, 0x233434u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x23342Cu, 0x233434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233434u;
}
