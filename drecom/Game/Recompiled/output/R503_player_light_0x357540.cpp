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

// Function: R503_player_light
// Address: 0x357540 - 0x3575e8
void R503_player_light_0x357540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R503_player_light_0x357540");
#endif

    switch (ctx->pc) {
        case 0x357570u: goto label_357570;
        case 0x3575a0u: goto label_3575a0;
        case 0x3575a8u: goto label_3575a8;
        case 0x3575bcu: goto label_3575bc;
        case 0x3575d4u: goto label_3575d4;
        case 0x3575e0u: goto label_3575e0;
        default: break;
    }

    ctx->pc = 0x357540u;

    // 0x357540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x357544: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x357544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x357548: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x357548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x35754c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x35754cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x357550: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x357550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x357554: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x357554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x357558: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x357558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x35755c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x35755cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x357560: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x357560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x357564: 0xc42fa6c8  lwc1        $f15, -0x5938($at)
    ctx->pc = 0x357564u;
    { uint32_t bits = FAST_READ32(0x3AA6C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x357568: 0xc0d5da4  jal         func_357690
    ctx->pc = 0x357568u;
    SET_GPR_U32(ctx, 31, 0x357570u);
    ctx->pc = 0x357690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357690u, 0x357568u, 0x357570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357570u;
label_357570:
    // 0x357570: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x357570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x357574: 0xac225e50  sw          $v0, 0x5E50($at)
    ctx->pc = 0x357574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895E50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895E50u, _value); } while (0);
    // 0x357578: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x357578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x35757c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x35757cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x357580: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x357580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x357584: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x357584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x357588: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x357588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x35758c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35758cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x357590: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x357590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x357594: 0xc42fa6d0  lwc1        $f15, -0x5930($at)
    ctx->pc = 0x357594u;
    { uint32_t bits = FAST_READ32(0x3AA6D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x357598: 0xc0d5da4  jal         func_357690
    ctx->pc = 0x357598u;
    SET_GPR_U32(ctx, 31, 0x3575A0u);
    ctx->pc = 0x357690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357690u, 0x357598u, 0x3575A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575A0u;
label_3575a0:
    // 0x3575a0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3575a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3575a4: 0xac225e58  sw          $v0, 0x5E58($at)
    ctx->pc = 0x3575a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895E58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895E58u, _value); } while (0);
label_3575a8:
    // 0x3575a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3575a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3575ac: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3575acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3575b0: 0x8c245e50  lw          $a0, 0x5E50($at)
    ctx->pc = 0x3575b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x895E50u));
    // 0x3575b4: 0xc0d5d7c  jal         func_3575F0
    ctx->pc = 0x3575B4u;
    SET_GPR_U32(ctx, 31, 0x3575BCu);
    ctx->pc = 0x3575F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3575F0u, 0x3575B4u, 0x3575BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575BCu;
label_3575bc:
    // 0x3575bc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3575bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3575c0: 0x8c245e58  lw          $a0, 0x5E58($at)
    ctx->pc = 0x3575c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x895E58u));
    // 0x3575c4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x3575c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x3575c8: 0xc42ca6c0  lwc1        $f12, -0x5940($at)
    ctx->pc = 0x3575c8u;
    { uint32_t bits = FAST_READ32(0x3AA6C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3575cc: 0xc0d5d7c  jal         func_3575F0
    ctx->pc = 0x3575CCu;
    SET_GPR_U32(ctx, 31, 0x3575D4u);
    ctx->pc = 0x3575F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3575F0u, 0x3575CCu, 0x3575D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575D4u;
label_3575d4:
    // 0x3575d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3575d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3575d8: 0xc084964  jal         func_212590
    ctx->pc = 0x3575D8u;
    SET_GPR_U32(ctx, 31, 0x3575E0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x3575D8u, 0x3575E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575E0u;
label_3575e0:
    // 0x3575e0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x3575E0u;
    {
        const bool branch_taken_0x3575e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575e0) {
            ctx->pc = 0x3575A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3575a8;
        }
    }
    ctx->pc = 0x3575E8u;
}
