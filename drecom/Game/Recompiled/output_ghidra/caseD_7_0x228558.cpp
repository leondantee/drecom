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

// Function: caseD_7
// Address: 0x228558 - 0x2285e4
void caseD_7_0x228558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x228558");
#endif

    switch (ctx->pc) {
        case 0x228568u: goto label_228568;
        case 0x228590u: goto label_228590;
        case 0x2285b0u: goto label_2285b0;
        case 0x2285e0u: goto label_2285e0;
        default: break;
    }

    ctx->pc = 0x228558u;

    // 0x228558: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22855c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x22855cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x228560: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x228560u;
    SET_GPR_U32(ctx, 31, 0x228568u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x228560u, 0x228568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228568u;
label_228568:
    // 0x228568: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x228568u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22856c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22856cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228570: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x228570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228574: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x228574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x228578: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x228578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22857c: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x22857cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x228580: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x228580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x228584: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x228584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x228588: 0xc058f50  jal         func_163D40
    ctx->pc = 0x228588u;
    SET_GPR_U32(ctx, 31, 0x228590u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x228588u, 0x228590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228590u;
label_228590:
    // 0x228590: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228594: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x228594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x228598: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x228598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x22859c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2285a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2285a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2285a4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2285a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2285a8: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x2285A8u;
    SET_GPR_U32(ctx, 31, 0x2285B0u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x2285A8u, 0x2285B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285B0u;
label_2285b0:
    // 0x2285b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2285b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2285b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2285b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2285b8: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x2285b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x2285bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2285bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2285c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2285C0u;
    {
        const bool branch_taken_0x2285c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2285c0) {
            ctx->pc = 0x2285E4u;
            return;
        }
    }
    ctx->pc = 0x2285C8u;
    // 0x2285c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2285c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2285cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2285ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2285d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2285d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2285d4: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2285d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2285d8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2285D8u;
    SET_GPR_U32(ctx, 31, 0x2285E0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2285D8u, 0x2285E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285E0u;
label_2285e0:
    // 0x2285e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2285e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2285e4u;
}
