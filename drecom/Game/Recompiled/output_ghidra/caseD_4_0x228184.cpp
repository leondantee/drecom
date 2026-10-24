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
// Address: 0x228184 - 0x22820c
void caseD_4_0x228184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x228184");
#endif

    switch (ctx->pc) {
        case 0x228194u: goto label_228194;
        case 0x2281bcu: goto label_2281bc;
        case 0x2281e0u: goto label_2281e0;
        default: break;
    }

    ctx->pc = 0x228184u;

    // 0x228184: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228188: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x228188u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22818c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22818Cu;
    SET_GPR_U32(ctx, 31, 0x228194u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22818Cu, 0x228194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228194u;
label_228194:
    // 0x228194: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x228194u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x228198: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x228198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22819c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2281a0: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2281a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2281a4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2281a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2281a8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2281a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2281ac: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x2281acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2281b0: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x2281b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2281b4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2281B4u;
    SET_GPR_U32(ctx, 31, 0x2281BCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2281B4u, 0x2281BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281BCu;
label_2281bc:
    // 0x2281bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2281bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2281c0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2281c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2281c4: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x2281c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
    // 0x2281c8: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x2281c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x2281cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2281ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2281d0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2281d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2281d4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2281d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2281d8: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x2281D8u;
    SET_GPR_U32(ctx, 31, 0x2281E0u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x2281D8u, 0x2281E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281E0u;
label_2281e0:
    // 0x2281e0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2281e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2281e4: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2281e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2281e8: 0x94e80a00  lhu         $t0, 0xA00($a3)
    ctx->pc = 0x2281e8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2560)));
    // 0x2281ec: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x2281ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2281f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2281F0u;
    {
        const bool branch_taken_0x2281f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2281f0) {
            ctx->pc = 0x22820Cu;
            return;
        }
    }
    ctx->pc = 0x2281F8u;
    // 0x2281f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2281f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2281fc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2281fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228200: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x228200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x228204: 0xc05cd58  jal         func_173560
    ctx->pc = 0x228204u;
    SET_GPR_U32(ctx, 31, 0x22820Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x228204u, 0x22820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22820Cu;
}
