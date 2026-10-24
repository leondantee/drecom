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

// Function: entry_00344990
// Address: 0x344990 - 0x3449d8
void entry_00344990_0x344990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00344990_0x344990");
#endif

    switch (ctx->pc) {
        case 0x3449b4u: goto label_3449b4;
        case 0x3449c4u: goto label_3449c4;
        default: break;
    }

    ctx->pc = 0x344990u;

    // 0x344990: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x344990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x344994: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x344994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x344998: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x344998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34499c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34499cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3449a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3449a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3449a4: 0x2444dce0  addiu       $a0, $v0, -0x2320
    ctx->pc = 0x3449a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3449a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3449a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3449ac: 0xc05b560  jal         func_16D580
    ctx->pc = 0x3449ACu;
    SET_GPR_U32(ctx, 31, 0x3449B4u);
    ctx->pc = 0x16D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D580u, 0x3449ACu, 0x3449B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449B4u;
label_3449b4:
    // 0x3449b4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3449b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3449b8: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x3449b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3449bc: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x3449BCu;
    SET_GPR_U32(ctx, 31, 0x3449C4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x3449BCu, 0x3449C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449C4u;
label_3449c4:
    // 0x3449c4: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x3449c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x3449c8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3449c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3449cc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3449ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3449d0: 0x34630a07  ori         $v1, $v1, 0xA07
    ctx->pc = 0x3449d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2567);
    // 0x3449d4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x3449d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->pc = 0x3449d8u;
}
