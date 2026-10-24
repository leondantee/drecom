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

// Function: entry_00318f64
// Address: 0x318f64 - 0x319010
void entry_00318f64_0x318f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318f64_0x318f64");
#endif

    switch (ctx->pc) {
        case 0x318f70u: goto label_318f70;
        default: break;
    }

    ctx->pc = 0x318f64u;

    // 0x318f64: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318f68: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x318F68u;
    SET_GPR_U32(ctx, 31, 0x318F70u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x318F68u, 0x318F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F70u;
label_318f70:
    // 0x318f70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318f74: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x318f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x318f78: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x318f78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318f7c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318f80: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x318f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x318f84: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x318f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x318f88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x318f88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x318f8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318f90: 0x0  nop
    ctx->pc = 0x318f90u;
    // NOP
    // 0x318f94: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x318f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x318f98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318f9c: 0x0  nop
    ctx->pc = 0x318f9cu;
    // NOP
    // 0x318fa0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x318fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x318fa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318fa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318fa8: 0x0  nop
    ctx->pc = 0x318fa8u;
    // NOP
    // 0x318fac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x318facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x318fb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x318fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x318fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318fb8: 0x0  nop
    ctx->pc = 0x318fb8u;
    // NOP
    // 0x318fbc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x318fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x318fc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x318fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x318fc4: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x318fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x318fc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x318fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x318fcc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x318FCCu;
    {
        const bool branch_taken_0x318fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318fcc) {
            ctx->pc = 0x319010u;
            return;
        }
    }
    ctx->pc = 0x318FD4u;
    // 0x318fd4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x318fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x318fd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x318fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x318fdc: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x318fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x318fe0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x318fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x318fe4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x318fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x318fe8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318fec: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x318fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x318ff0: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x318ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x318ff4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x318ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x318ff8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x318ff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x318ffc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x318ffcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319000: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x319000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x319004: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x319004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x319008: 0xc086488  jal         func_219220
    ctx->pc = 0x319008u;
    SET_GPR_U32(ctx, 31, 0x319010u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x319008u, 0x319010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319010u;
}
