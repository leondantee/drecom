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

// Function: entry_001eb460
// Address: 0x1eb460 - 0x1eb534
void entry_001eb460_0x1eb460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb460_0x1eb460");
#endif

    switch (ctx->pc) {
        case 0x1eb4c8u: goto label_1eb4c8;
        case 0x1eb530u: goto label_1eb530;
        default: break;
    }

    ctx->pc = 0x1eb460u;

    // 0x1eb460: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1eb460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1eb464: 0x24620ae8  addiu       $v0, $v1, 0xAE8
    ctx->pc = 0x1eb464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1eb468: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eb468u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1eb46c: 0x2485000f  addiu       $a1, $a0, 0xF
    ctx->pc = 0x1eb46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1eb470: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1eb470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1eb474: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1eb474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1eb478: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x1eb478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1eb47c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1eb47cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1eb480: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1eb480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1eb484: 0xa29824  and         $s3, $a1, $v0
    ctx->pc = 0x1eb484u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1eb488: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x1eb488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x1eb48c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1eb48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1eb490: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x1eb490u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1eb494: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x1eb494u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb498: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb49c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x1eb49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1eb4a0: 0x247002d0  addiu       $s0, $v1, 0x2D0
    ctx->pc = 0x1eb4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x1eb4a4: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x1eb4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1eb4a8: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1eb4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1eb4ac: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1eb4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1eb4b0: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1eb4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1eb4b4: 0xae650024  sw          $a1, 0x24($s3)
    ctx->pc = 0x1eb4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 5));
    // 0x1eb4b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1eb4b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb4bc: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1eb4bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1eb4c0: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x1EB4C0u;
    SET_GPR_U32(ctx, 31, 0x1EB4C8u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1EB4C0u, 0x1EB4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB4C8u;
label_1eb4c8:
    // 0x1eb4c8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1eb4c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb4cc: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x1eb4ccu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1eb4d0: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x1eb4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x1eb4d4: 0x25020ae8  addiu       $v0, $t0, 0xAE8
    ctx->pc = 0x1eb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 2792));
    // 0x1eb4d8: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x1eb4d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1eb4dc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1eb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1eb4e0: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x1eb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1eb4e4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1eb4e8: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x1eb4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1eb4ec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1eb4ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1eb4f0: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1eb4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1eb4f4: 0x24b60ae8  addiu       $s6, $a1, 0xAE8
    ctx->pc = 0x1eb4f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x1eb4f8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1eb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1eb4fc: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x1eb4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1eb500: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1eb500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1eb504: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1eb504u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1eb508: 0x32e8ffff  andi        $t0, $s7, 0xFFFF
    ctx->pc = 0x1eb508u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eb50c: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x1eb50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1eb510: 0x15040008  bne         $t0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB510u;
    {
        const bool branch_taken_0x1eb510 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x1eb510) {
            ctx->pc = 0x1EB534u;
            return;
        }
    }
    ctx->pc = 0x1EB518u;
    // 0x1eb518: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb51c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eb51cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb520: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1eb520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eb524: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1eb524u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1eb528: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EB528u;
    SET_GPR_U32(ctx, 31, 0x1EB530u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EB528u, 0x1EB530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB530u;
label_1eb530:
    // 0x1eb530: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1eb530u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1eb534u;
}
