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

// Function: entry_00336728
// Address: 0x336728 - 0x336794
void entry_00336728_0x336728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336728_0x336728");
#endif

    switch (ctx->pc) {
        case 0x336734u: goto label_336734;
        case 0x33675cu: goto label_33675c;
        default: break;
    }

    ctx->pc = 0x336728u;

    // 0x336728: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x336728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33672c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x33672Cu;
    SET_GPR_U32(ctx, 31, 0x336734u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x33672Cu, 0x336734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336734u;
label_336734:
    // 0x336734: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x336734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x336738: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x336738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33673c: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x33673cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x336740: 0x3464050a  ori         $a0, $v1, 0x50A
    ctx->pc = 0x336740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1290);
    // 0x336744: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x336744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x336748: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x336748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x33674c: 0x24a520c8  addiu       $a1, $a1, 0x20C8
    ctx->pc = 0x33674cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8392));
    // 0x336750: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x336750u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336754: 0xc059b14  jal         func_166C50
    ctx->pc = 0x336754u;
    SET_GPR_U32(ctx, 31, 0x33675Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x336754u, 0x33675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33675Cu;
label_33675c:
    // 0x33675c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x33675cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336760: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x336760u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x336764: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x336764u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x336768: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x336768u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33676c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33676cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x336770: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x336770u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x336774: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x336774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x336778: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x336778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33677c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33677cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336788: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x336788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x33678c: 0x3e00008  jr          $ra
    ctx->pc = 0x33678Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33678Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336794u;
}
