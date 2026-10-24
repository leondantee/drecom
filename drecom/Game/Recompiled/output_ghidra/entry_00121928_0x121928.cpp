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

// Function: entry_00121928
// Address: 0x121928 - 0x1219b0
void entry_00121928_0x121928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121928_0x121928");
#endif

    switch (ctx->pc) {
        case 0x121950u: goto label_121950;
        default: break;
    }

    ctx->pc = 0x121928u;

    // 0x121928: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x121928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12192c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x121930: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x121930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x121934: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x121934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x121938: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x121938u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12193c: 0x24040524  addiu       $a0, $zero, 0x524
    ctx->pc = 0x12193cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
    // 0x121940: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x121940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x121944: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121944u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121948: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x121948u;
    SET_GPR_U32(ctx, 31, 0x121950u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121948u, 0x121950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121950u;
label_121950:
    // 0x121950: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121954: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x121954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121958: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x121958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x12195c: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x12195cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x121960: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x121960u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121964: 0x0  nop
    ctx->pc = 0x121964u;
    // NOP
    // 0x121968: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x121968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12196c: 0x0  nop
    ctx->pc = 0x12196cu;
    // NOP
    // 0x121970: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x121970u;
    {
        const bool branch_taken_0x121970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121970) {
            ctx->pc = 0x1219B0u;
            return;
        }
    }
    ctx->pc = 0x121978u;
    // 0x121978: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x121978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12197c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12197cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121980: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x121980u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x121984: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x121984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x121988: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12198c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x12198cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x121990: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121994: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x121994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x121998: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12199c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12199cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1219a0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1219a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1219a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1219a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1219a8: 0x100004e1  b           . + 4 + (0x4E1 << 2)
    ctx->pc = 0x1219A8u;
    {
        const bool branch_taken_0x1219a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1219a8) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x1219B0u;
}
