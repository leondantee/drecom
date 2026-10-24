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

// Function: entry_00220438
// Address: 0x220438 - 0x2204b8
void entry_00220438_0x220438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220438_0x220438");
#endif

    switch (ctx->pc) {
        case 0x220480u: goto label_220480;
        default: break;
    }

    ctx->pc = 0x220438u;

    // 0x220438: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x220438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x22043c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x22043cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220440: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x220440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x220444: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x220444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x220448: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x220448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22044c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x22044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x220450: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x220450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x220454: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x220454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x220458: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x220458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x22045c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x22045cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220460: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220464: 0x24c600b0  addiu       $a2, $a2, 0xB0
    ctx->pc = 0x220464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x220468: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x220468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x22046c: 0x2447ac20  addiu       $a3, $v0, -0x53E0
    ctx->pc = 0x22046cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945824));
    // 0x220470: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x220470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220474: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x220474u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220478: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x220478u;
    SET_GPR_U32(ctx, 31, 0x220480u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x220478u, 0x220480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220480u;
label_220480:
    // 0x220480: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x220480u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220484: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x220484u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x220488: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x220488u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22048c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x22048cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x220490: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x220490u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x220494: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x220494u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x220498: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x220498u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22049c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22049cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2204a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2204a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2204a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2204a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2204a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2204a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2204ac: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2204acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2204b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2204B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2204B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2204B8u;
}
