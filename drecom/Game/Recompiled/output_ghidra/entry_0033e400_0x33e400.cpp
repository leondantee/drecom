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

// Function: entry_0033e400
// Address: 0x33e400 - 0x33e478
void entry_0033e400_0x33e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e400_0x33e400");
#endif

    switch (ctx->pc) {
        case 0x33e44cu: goto label_33e44c;
        default: break;
    }

    ctx->pc = 0x33e400u;

    // 0x33e400: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x33e400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e404: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x33e404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x33e408: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x33e408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33e40c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33e410: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x33e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x33e414: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x33e414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e418: 0x8e930034  lw          $s3, 0x34($s4)
    ctx->pc = 0x33e418u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x33e41c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x33e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x33e420: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x33e420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x33e424: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x33e424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33e428: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x33e428u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x33e42c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x33e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x33e430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e434: 0x0  nop
    ctx->pc = 0x33e434u;
    // NOP
    // 0x33e438: 0xe66000a0  swc1        $f0, 0xA0($s3)
    ctx->pc = 0x33e438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 160), bits); }
    // 0x33e43c: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x33e43cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x33e440: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x33e440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x33e444: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x33E444u;
    SET_GPR_U32(ctx, 31, 0x33E44Cu);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x33E444u, 0x33E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E44Cu;
label_33e44c:
    // 0x33e44c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x33e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x33e450: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x33e450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x33e454: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e458: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x33e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x33e45c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33e460: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x33e460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x33e464: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e468: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x33e468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x33e46c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33e46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33e470: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33e470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33e474: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x33e474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x33e478u;
}
