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

// Function: entry_002f7fac
// Address: 0x2f7fac - 0x2f8058
void entry_002f7fac_0x2f7fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7fac_0x2f7fac");
#endif

    switch (ctx->pc) {
        case 0x2f7fbcu: goto label_2f7fbc;
        case 0x2f8034u: goto label_2f8034;
        default: break;
    }

    ctx->pc = 0x2f7facu;

    // 0x2f7fac: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f7facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f7fb0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2f7fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f7fb4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F7FB4u;
    SET_GPR_U32(ctx, 31, 0x2F7FBCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7FB4u, 0x2F7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7FBCu;
label_2f7fbc:
    // 0x2f7fbc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7fc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7fc4: 0x0  nop
    ctx->pc = 0x2f7fc4u;
    // NOP
    // 0x2f7fc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7fcc: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x2f7fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7fd0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f7fd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7fd4: 0x0  nop
    ctx->pc = 0x2f7fd4u;
    // NOP
    // 0x2f7fd8: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7fd8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7fdc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7fe0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f7fe4: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x2f7fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f7fe8: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f7fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f7fec: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x2f7fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f7ff0: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x2f7ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7ff4: 0x44897000  mtc1        $t1, $f14
    ctx->pc = 0x2f7ff4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7ff8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x2f7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f7ffc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f7ffcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f8000: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2f8000u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f8004: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x2f8004u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
    // 0x2f8008: 0x25461a80  addiu       $a2, $t2, 0x1A80
    ctx->pc = 0x2f8008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 6784));
    // 0x2f800c: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f800cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f8010: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x2f8010u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f8014: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f8018: 0x24691a90  addiu       $t1, $v1, 0x1A90
    ctx->pc = 0x2f8018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6800));
    // 0x2f801c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f801cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f8020: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f8024: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f8024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f8028: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8028u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f802c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F802Cu;
    SET_GPR_U32(ctx, 31, 0x2F8034u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F802Cu, 0x2F8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8034u;
label_2f8034:
    // 0x2f8034: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f8034u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f8038: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f8038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f803c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f803cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8040: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f8040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f8044: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f8044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f8048: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f804c: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f804cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f8050: 0x100002c7  b           . + 4 + (0x2C7 << 2)
    ctx->pc = 0x2F8050u;
    {
        const bool branch_taken_0x2f8050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8050) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8058u;
}
