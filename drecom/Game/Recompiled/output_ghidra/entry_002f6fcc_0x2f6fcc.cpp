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

// Function: entry_002f6fcc
// Address: 0x2f6fcc - 0x2f7058
void entry_002f6fcc_0x2f6fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6fcc_0x2f6fcc");
#endif

    switch (ctx->pc) {
        case 0x2f6fd4u: goto label_2f6fd4;
        case 0x2f7034u: goto label_2f7034;
        default: break;
    }

    ctx->pc = 0x2f6fccu;

    // 0x2f6fcc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6FCCu;
    SET_GPR_U32(ctx, 31, 0x2F6FD4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6FCCu, 0x2F6FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6FD4u;
label_2f6fd4:
    // 0x2f6fd4: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f6fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6fd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6fdc: 0x0  nop
    ctx->pc = 0x2f6fdcu;
    // NOP
    // 0x2f6fe0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6fe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6fe4: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x2f6fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6fe8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f6fe8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6fec: 0x0  nop
    ctx->pc = 0x2f6fecu;
    // NOP
    // 0x2f6ff0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6ff0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6ff4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6ff8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f6ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6ffc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7000: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7004: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f7008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f700c: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f700cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f7010: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f7010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f7014: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f7014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7018: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f7018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f701c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2f701cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f7020: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f7020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7024: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7028: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7028u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f702c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F702Cu;
    SET_GPR_U32(ctx, 31, 0x2F7034u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F702Cu, 0x2F7034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7034u;
label_2f7034:
    // 0x2f7034: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f7034u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7038: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f7038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f703c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7040: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f7040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7044: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2f7044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7048: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f704c: 0xa0650101  sb          $a1, 0x101($v1)
    ctx->pc = 0x2f704cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f7050: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7050u;
    {
        const bool branch_taken_0x2f7050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7050) {
            ctx->pc = 0x2F706Cu;
            return;
        }
    }
    ctx->pc = 0x2F7058u;
}
