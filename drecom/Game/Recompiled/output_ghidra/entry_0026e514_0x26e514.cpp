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

// Function: entry_0026e514
// Address: 0x26e514 - 0x26e580
void entry_0026e514_0x26e514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026e514_0x26e514");
#endif

    switch (ctx->pc) {
        case 0x26e520u: goto label_26e520;
        case 0x26e568u: goto label_26e568;
        default: break;
    }

    ctx->pc = 0x26e514u;

    // 0x26e514: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26e514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26e518: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26E518u;
    SET_GPR_U32(ctx, 31, 0x26E520u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26E518u, 0x26E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E520u;
label_26e520:
    // 0x26e520: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e524: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26e524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26e528: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x26e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26e52c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e530: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x26e530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x26e534: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e538: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26e538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e53c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e540: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26e540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26e544: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26e544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e548: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x26e548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e54c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x26e54cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e550: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26e550u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e554: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x26e554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e558: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x26e558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26e55c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x26e55cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e560: 0xc0bcaa0  jal         func_2F2A80
    ctx->pc = 0x26E560u;
    SET_GPR_U32(ctx, 31, 0x26E568u);
    ctx->pc = 0x2F2A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2A80u, 0x26E560u, 0x26E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E568u;
label_26e568:
    // 0x26e568: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x26e568u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e56c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26e56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e570: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26e570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e574: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x26e574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26e578: 0x3e00008  jr          $ra
    ctx->pc = 0x26E578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E580u;
}
