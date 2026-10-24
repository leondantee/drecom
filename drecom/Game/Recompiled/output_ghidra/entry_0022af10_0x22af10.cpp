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

// Function: entry_0022af10
// Address: 0x22af10 - 0x22afd0
void entry_0022af10_0x22af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022af10_0x22af10");
#endif

    switch (ctx->pc) {
        case 0x22af28u: goto label_22af28;
        case 0x22afacu: goto label_22afac;
        case 0x22afb4u: goto label_22afb4;
        default: break;
    }

    ctx->pc = 0x22af10u;

    // 0x22af10: 0xa3a00046  sb          $zero, 0x46($sp)
    ctx->pc = 0x22af10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x22af14: 0xa3a00047  sb          $zero, 0x47($sp)
    ctx->pc = 0x22af14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x22af18: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22af18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22af1c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22af20: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x22AF20u;
    SET_GPR_U32(ctx, 31, 0x22AF28u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x22AF20u, 0x22AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF28u;
label_22af28:
    // 0x22af28: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x22AF28u;
    {
        const bool branch_taken_0x22af28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af28) {
            ctx->pc = 0x22B080u;
            return;
        }
    }
    ctx->pc = 0x22AF30u;
    // 0x22af30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22af30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22af34: 0x0  nop
    ctx->pc = 0x22af34u;
    // NOP
    // 0x22af38: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x22af38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22af3c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x22af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x22af40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22af40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22af44: 0x0  nop
    ctx->pc = 0x22af44u;
    // NOP
    // 0x22af48: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22af48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22af4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22af4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22af50: 0x0  nop
    ctx->pc = 0x22af50u;
    // NOP
    // 0x22af54: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x22af54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x22af58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22af58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22af5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22af5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22af60: 0x0  nop
    ctx->pc = 0x22af60u;
    // NOP
    // 0x22af64: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x22af64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x22af68: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22af6c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x22af6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22af70: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x22af70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x22af74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22af74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22af78: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x22af78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x22af7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x22af7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22af80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22af80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22af84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x22af84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x22af88: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x22af88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x22af8c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22af90: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22af94: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22af94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22af98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22af98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22af9c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22af9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22afa0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22afa0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22afa4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22AFA4u;
    SET_GPR_U32(ctx, 31, 0x22AFACu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22AFA4u, 0x22AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFACu;
label_22afac:
    // 0x22afac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22AFACu;
    SET_GPR_U32(ctx, 31, 0x22AFB4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22AFACu, 0x22AFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFB4u;
label_22afb4:
    // 0x22afb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22AFB4u;
    {
        const bool branch_taken_0x22afb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22afb4) {
            ctx->pc = 0x22AFD0u;
            return;
        }
    }
    ctx->pc = 0x22AFBCu;
    // 0x22afbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22afbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22afc0: 0x0  nop
    ctx->pc = 0x22afc0u;
    // NOP
    // 0x22afc4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22afc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22afc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22AFC8u;
    {
        const bool branch_taken_0x22afc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22afc8) {
            ctx->pc = 0x22AFECu;
            return;
        }
    }
    ctx->pc = 0x22AFD0u;
}
