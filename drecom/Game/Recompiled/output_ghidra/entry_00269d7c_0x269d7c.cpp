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

// Function: entry_00269d7c
// Address: 0x269d7c - 0x269dfc
void entry_00269d7c_0x269d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00269d7c_0x269d7c");
#endif

    switch (ctx->pc) {
        case 0x269dc8u: goto label_269dc8;
        default: break;
    }

    ctx->pc = 0x269d7cu;

    // 0x269d7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269d80: 0x3c023f8b  lui         $v0, 0x3F8B
    ctx->pc = 0x269d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16267 << 16));
    // 0x269d84: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x269d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x269d88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269d8c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x269d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269d90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x269d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269d94: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x269d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x269d98: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x269d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269d9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x269d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269da0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269da4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x269da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269da8: 0xc4ac0028  lwc1        $f12, 0x28($a1)
    ctx->pc = 0x269da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269dac: 0xc48d002c  lwc1        $f13, 0x2C($a0)
    ctx->pc = 0x269dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x269db0: 0xc46e002c  lwc1        $f14, 0x2C($v1)
    ctx->pc = 0x269db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x269db4: 0xc44f002c  lwc1        $f15, 0x2C($v0)
    ctx->pc = 0x269db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x269db8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x269db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269dbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x269dbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269dc0: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x269DC0u;
    SET_GPR_U32(ctx, 31, 0x269DC8u);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x269DC0u, 0x269DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269DC8u;
label_269dc8:
    // 0x269dc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269dcc: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x269dccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x269dd0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x269dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x269dd4: 0x28610015  slti        $at, $v1, 0x15
    ctx->pc = 0x269dd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x269dd8: 0x142000b2  bnez        $at, . + 4 + (0xB2 << 2)
    ctx->pc = 0x269DD8u;
    {
        const bool branch_taken_0x269dd8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x269dd8) {
            ctx->pc = 0x26A0A4u;
            return;
        }
    }
    ctx->pc = 0x269DE0u;
    // 0x269de0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x269de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269de4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269de8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x269de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x269dec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269df0: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x269df0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x269df4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x269DF4u;
    {
        const bool branch_taken_0x269df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269df4) {
            ctx->pc = 0x26A0A4u;
            return;
        }
    }
    ctx->pc = 0x269DFCu;
}
