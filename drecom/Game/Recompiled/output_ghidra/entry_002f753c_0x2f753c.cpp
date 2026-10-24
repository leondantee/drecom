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

// Function: entry_002f753c
// Address: 0x2f753c - 0x2f75e4
void entry_002f753c_0x2f753c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f753c_0x2f753c");
#endif

    switch (ctx->pc) {
        case 0x2f7544u: goto label_2f7544;
        case 0x2f75c0u: goto label_2f75c0;
        default: break;
    }

    ctx->pc = 0x2f753cu;

    // 0x2f753c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F753Cu;
    SET_GPR_U32(ctx, 31, 0x2F7544u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F753Cu, 0x2F7544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7544u;
label_2f7544:
    // 0x2f7544: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f7544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7548: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f754c: 0x0  nop
    ctx->pc = 0x2f754cu;
    // NOP
    // 0x2f7550: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7554: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x2f7554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7558: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f7558u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f755c: 0x0  nop
    ctx->pc = 0x2f755cu;
    // NOP
    // 0x2f7560: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7560u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7564: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7568: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f756c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7570: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2f7570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7574: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2f7574u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7578: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x2f7578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x2f757c: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x2f757cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7580: 0x8c6600c4  lw          $a2, 0xC4($v1)
    ctx->pc = 0x2f7580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7584: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2f7584u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f7588: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x2f7588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2f758c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2f758cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f7590: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2f7590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7594: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2f7594u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f7598: 0x8c4900c4  lw          $t1, 0xC4($v0)
    ctx->pc = 0x2f7598u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f759c: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2f759cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f75a0: 0x240a001a  addiu       $t2, $zero, 0x1A
    ctx->pc = 0x2f75a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2f75a4: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x2f75a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f75a8: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2f75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f75ac: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2f75acu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f75b0: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f75b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f75b4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f75b4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f75b8: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F75B8u;
    SET_GPR_U32(ctx, 31, 0x2F75C0u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F75B8u, 0x2F75C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75C0u;
label_2f75c0:
    // 0x2f75c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f75c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f75c4: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f75c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f75c8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f75cc: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f75ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f75d0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f75d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f75d4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f75d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f75d8: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f75d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f75dc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2F75DCu;
    {
        const bool branch_taken_0x2f75dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f75dc) {
            ctx->pc = 0x2F7690u;
            return;
        }
    }
    ctx->pc = 0x2F75E4u;
}
