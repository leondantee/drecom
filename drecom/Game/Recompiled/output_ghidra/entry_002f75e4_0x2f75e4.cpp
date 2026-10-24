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

// Function: entry_002f75e4
// Address: 0x2f75e4 - 0x2f767c
void entry_002f75e4_0x2f75e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f75e4_0x2f75e4");
#endif

    switch (ctx->pc) {
        case 0x2f75ecu: goto label_2f75ec;
        case 0x2f7660u: goto label_2f7660;
        default: break;
    }

    ctx->pc = 0x2f75e4u;

    // 0x2f75e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F75E4u;
    SET_GPR_U32(ctx, 31, 0x2F75ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F75E4u, 0x2F75ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75ECu;
label_2f75ec:
    // 0x2f75ec: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f75f0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f75f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f75f4: 0x0  nop
    ctx->pc = 0x2f75f4u;
    // NOP
    // 0x2f75f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f75f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f75fc: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f75fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7600: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f7600u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7604: 0x0  nop
    ctx->pc = 0x2f7604u;
    // NOP
    // 0x2f7608: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7608u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f760c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f760cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7610: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f7610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7614: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7618: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f761c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7620: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x2f7620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7624: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2f7624u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7628: 0x8c8700c4  lw          $a3, 0xC4($a0)
    ctx->pc = 0x2f7628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f762c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2f762cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f7630: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2f7630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2f7634: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2f7634u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f7638: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f7638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f763c: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2f763cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7640: 0x8c6a00c4  lw          $t2, 0xC4($v1)
    ctx->pc = 0x2f7640u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7644: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2f7644u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f7648: 0x24080021  addiu       $t0, $zero, 0x21
    ctx->pc = 0x2f7648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f764c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f764cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7650: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7650u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7654: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7654u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7658: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7658u;
    SET_GPR_U32(ctx, 31, 0x2F7660u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7658u, 0x2F7660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7660u;
label_2f7660:
    // 0x2f7660: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7664: 0xa0800100  sb          $zero, 0x100($a0)
    ctx->pc = 0x2f7664u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7668: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f7668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f766c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7670: 0xa0830101  sb          $v1, 0x101($a0)
    ctx->pc = 0x2f7670u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7674: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7674u;
    {
        const bool branch_taken_0x2f7674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7674) {
            ctx->pc = 0x2F7690u;
            return;
        }
    }
    ctx->pc = 0x2F767Cu;
}
