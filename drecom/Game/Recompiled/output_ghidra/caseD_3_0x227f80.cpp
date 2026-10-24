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
// Address: 0x227f80 - 0x227ffc
void caseD_3_0x227f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x227f80");
#endif

    switch (ctx->pc) {
        case 0x227f90u: goto label_227f90;
        case 0x227fb4u: goto label_227fb4;
        case 0x227fd4u: goto label_227fd4;
        default: break;
    }

    ctx->pc = 0x227f80u;

    // 0x227f80: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227f84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x227f84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227f88: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x227F88u;
    SET_GPR_U32(ctx, 31, 0x227F90u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x227F88u, 0x227F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F90u;
label_227f90:
    // 0x227f90: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x227f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227f94: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227f98: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x227f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x227f9c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x227f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x227fa0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x227fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x227fa4: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x227fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x227fa8: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x227fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x227fac: 0xc058f50  jal         func_163D40
    ctx->pc = 0x227FACu;
    SET_GPR_U32(ctx, 31, 0x227FB4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x227FACu, 0x227FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FB4u;
label_227fb4:
    // 0x227fb4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227fb8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x227fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x227fbc: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x227fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
    // 0x227fc0: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x227fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x227fc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x227fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227fc8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227fcc: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x227FCCu;
    SET_GPR_U32(ctx, 31, 0x227FD4u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x227FCCu, 0x227FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FD4u;
label_227fd4:
    // 0x227fd4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227fd8: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x227fd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x227fdc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x227fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x227fe0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x227FE0u;
    {
        const bool branch_taken_0x227fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x227fe0) {
            ctx->pc = 0x227FFCu;
            return;
        }
    }
    ctx->pc = 0x227FE8u;
    // 0x227fe8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227fec: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227ff0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x227ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x227ff4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x227FF4u;
    SET_GPR_U32(ctx, 31, 0x227FFCu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x227FF4u, 0x227FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FFCu;
}
