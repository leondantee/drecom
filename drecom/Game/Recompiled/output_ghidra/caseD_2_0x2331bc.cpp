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

// Function: caseD_2
// Address: 0x2331bc - 0x23321c
void caseD_2_0x2331bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x2331bc");
#endif

    switch (ctx->pc) {
        case 0x2331dcu: goto label_2331dc;
        case 0x2331f4u: goto label_2331f4;
        default: break;
    }

    ctx->pc = 0x2331bcu;

    // 0x2331bc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2331bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2331c0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2331c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2331c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2331c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2331c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2331c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2331cc: 0x0  nop
    ctx->pc = 0x2331ccu;
    // NOP
    // 0x2331d0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2331d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2331d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2331D4u;
    SET_GPR_U32(ctx, 31, 0x2331DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2331D4u, 0x2331DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331DCu;
label_2331dc:
    // 0x2331dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2331dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2331e0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2331e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2331e4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2331e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2331e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2331e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2331ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2331ECu;
    SET_GPR_U32(ctx, 31, 0x2331F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2331ECu, 0x2331F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331F4u;
label_2331f4:
    // 0x2331f4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2331f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2331f8: 0x94440a00  lhu         $a0, 0xA00($v0)
    ctx->pc = 0x2331f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x2331fc: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2331fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233200: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x233200u;
    {
        const bool branch_taken_0x233200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x233200) {
            ctx->pc = 0x23321Cu;
            return;
        }
    }
    ctx->pc = 0x233208u;
    // 0x233208: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23320c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x23320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233210: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x233210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x233214: 0xc05cd58  jal         func_173560
    ctx->pc = 0x233214u;
    SET_GPR_U32(ctx, 31, 0x23321Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x233214u, 0x23321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23321Cu;
}
