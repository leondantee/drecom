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

// Function: entry_00289aac
// Address: 0x289aac - 0x289b10
void entry_00289aac_0x289aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289aac_0x289aac");
#endif

    switch (ctx->pc) {
        case 0x289ab8u: goto label_289ab8;
        case 0x289adcu: goto label_289adc;
        case 0x289af0u: goto label_289af0;
        case 0x289b00u: goto label_289b00;
        default: break;
    }

    ctx->pc = 0x289aacu;

    // 0x289aac: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x289aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x289ab0: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x289AB0u;
    SET_GPR_U32(ctx, 31, 0x289AB8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x289AB0u, 0x289AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AB8u;
label_289ab8:
    // 0x289ab8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x289ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x289abc: 0x16f080  sll         $fp, $s6, 2
    ctx->pc = 0x289abcu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x289ac0: 0x3dd1021  addu        $v0, $fp, $sp
    ctx->pc = 0x289ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 29)));
    // 0x289ac4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x289ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x289ac8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x289ac8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x289acc: 0x8c5500d0  lw          $s5, 0xD0($v0)
    ctx->pc = 0x289accu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x289ad0: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x289ad0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x289ad4: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x289AD4u;
    SET_GPR_U32(ctx, 31, 0x289ADCu);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x289AD4u, 0x289ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289ADCu;
label_289adc:
    // 0x289adc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x289adcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289ae0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x289ae0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289ae4: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x289ae4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x289ae8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x289AE8u;
    SET_GPR_U32(ctx, 31, 0x289AF0u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x289AE8u, 0x289AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AF0u;
label_289af0:
    // 0x289af0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x289af0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289af4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x289af4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x289af8: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x289AF8u;
    SET_GPR_U32(ctx, 31, 0x289B00u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x289AF8u, 0x289B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B00u;
label_289b00:
    // 0x289b00: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x289b00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289b04: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x289b04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x289b08: 0xac4600d0  sw          $a2, 0xD0($v0)
    ctx->pc = 0x289b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 6));
    // 0x289b0c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x289b0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x289b10u;
}
