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
// Address: 0x12c9a8 - 0x12ca20
void caseD_1_0x12c9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x12c9a8");
#endif

    switch (ctx->pc) {
        case 0x12c9b8u: goto label_12c9b8;
        case 0x12c9dcu: goto label_12c9dc;
        case 0x12c9fcu: goto label_12c9fc;
        default: break;
    }

    ctx->pc = 0x12c9a8u;

    // 0x12c9a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c9ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12c9acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12c9b0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12C9B0u;
    SET_GPR_U32(ctx, 31, 0x12C9B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12C9B0u, 0x12C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9B8u;
label_12c9b8:
    // 0x12c9b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c9bc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c9c0: 0x3c043e32  lui         $a0, 0x3E32
    ctx->pc = 0x12c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15922 << 16));
    // 0x12c9c4: 0x3483b8c2  ori         $v1, $a0, 0xB8C2
    ctx->pc = 0x12c9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)47298);
    // 0x12c9c8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x12c9c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12c9cc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12c9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12c9d0: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x12c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12c9d4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12C9D4u;
    SET_GPR_U32(ctx, 31, 0x12C9DCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12C9D4u, 0x12C9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9DCu;
label_12c9dc:
    // 0x12c9dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c9e0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x12c9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x12c9e4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x12c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x12c9e8: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x12c9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x12c9ec: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x12c9ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12c9f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c9f4: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x12C9F4u;
    SET_GPR_U32(ctx, 31, 0x12C9FCu);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x12C9F4u, 0x12C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9FCu;
label_12c9fc:
    // 0x12c9fc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x12c9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ca00: 0x84c7127e  lh          $a3, 0x127E($a2)
    ctx->pc = 0x12ca00u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4734)));
    // 0x12ca04: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CA04u;
    {
        const bool branch_taken_0x12ca04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ca04) {
            ctx->pc = 0x12CA20u;
            return;
        }
    }
    ctx->pc = 0x12CA0Cu;
    // 0x12ca0c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x12ca0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ca10: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ca14: 0xc50c1290  lwc1        $f12, 0x1290($t0)
    ctx->pc = 0x12ca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12ca18: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12CA18u;
    SET_GPR_U32(ctx, 31, 0x12CA20u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12CA18u, 0x12CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA20u;
}
