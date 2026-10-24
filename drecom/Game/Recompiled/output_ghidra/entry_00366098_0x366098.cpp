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

// Function: entry_00366098
// Address: 0x366098 - 0x366110
void entry_00366098_0x366098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366098_0x366098");
#endif

    switch (ctx->pc) {
        case 0x3660a8u: goto label_3660a8;
        case 0x3660ccu: goto label_3660cc;
        case 0x3660ecu: goto label_3660ec;
        default: break;
    }

    ctx->pc = 0x366098u;

    // 0x366098: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36609c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36609cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3660a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3660A0u;
    SET_GPR_U32(ctx, 31, 0x3660A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3660A0u, 0x3660A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660A8u;
label_3660a8:
    // 0x3660a8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x3660a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x3660ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3660acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3660b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3660b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3660b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3660b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3660b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3660b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3660bc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x3660bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3660c0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x3660c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3660c4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3660C4u;
    SET_GPR_U32(ctx, 31, 0x3660CCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3660C4u, 0x3660CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660CCu;
label_3660cc:
    // 0x3660cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3660ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3660d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3660d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3660d4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x3660d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x3660d8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3660d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3660dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3660dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3660e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3660e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3660e4: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x3660E4u;
    SET_GPR_U32(ctx, 31, 0x3660ECu);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x3660E4u, 0x3660ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660ECu;
label_3660ec:
    // 0x3660ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3660ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3660f0: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x3660f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x3660f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3660F4u;
    {
        const bool branch_taken_0x3660f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3660f4) {
            ctx->pc = 0x366110u;
            return;
        }
    }
    ctx->pc = 0x3660FCu;
    // 0x3660fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3660fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366100: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366104: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x366104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366108: 0xc05cd58  jal         func_173560
    ctx->pc = 0x366108u;
    SET_GPR_U32(ctx, 31, 0x366110u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x366108u, 0x366110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366110u;
}
