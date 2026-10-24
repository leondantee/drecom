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

// Function: entry_0012183c
// Address: 0x12183c - 0x1218c4
void entry_0012183c_0x12183c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012183c_0x12183c");
#endif

    switch (ctx->pc) {
        case 0x121864u: goto label_121864;
        default: break;
    }

    ctx->pc = 0x12183cu;

    // 0x12183c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x12183cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x121840: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x121840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x121844: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x121844u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x121848: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12184c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x12184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x121850: 0x2404050d  addiu       $a0, $zero, 0x50D
    ctx->pc = 0x121850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1293));
    // 0x121854: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x121854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x121858: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121858u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12185c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12185Cu;
    SET_GPR_U32(ctx, 31, 0x121864u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12185Cu, 0x121864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121864u;
label_121864:
    // 0x121864: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121864u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121868: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x121868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12186c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x12186cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x121870: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x121870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x121874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x121874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121878: 0x0  nop
    ctx->pc = 0x121878u;
    // NOP
    // 0x12187c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12187cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121880: 0x0  nop
    ctx->pc = 0x121880u;
    // NOP
    // 0x121884: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x121884u;
    {
        const bool branch_taken_0x121884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121884) {
            ctx->pc = 0x1218C4u;
            return;
        }
    }
    ctx->pc = 0x12188Cu;
    // 0x12188c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12188cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x121890: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121894: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x121894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x121898: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x121898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12189c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12189cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1218a0: 0xa0720001  sb          $s2, 0x1($v1)
    ctx->pc = 0x1218a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x1218a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1218a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1218a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1218a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1218ac: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1218acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1218b0: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1218b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1218b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1218b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1218b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1218b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1218bc: 0x1000051c  b           . + 4 + (0x51C << 2)
    ctx->pc = 0x1218BCu;
    {
        const bool branch_taken_0x1218bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1218bc) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x1218C4u;
}
