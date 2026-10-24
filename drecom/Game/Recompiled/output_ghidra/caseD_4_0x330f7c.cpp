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

// Function: caseD_4
// Address: 0x330f7c - 0x331040
void caseD_4_0x330f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x330f7c");
#endif

    switch (ctx->pc) {
        case 0x330fa4u: goto label_330fa4;
        case 0x330fd0u: goto label_330fd0;
        case 0x331004u: goto label_331004;
        case 0x331034u: goto label_331034;
        default: break;
    }

    ctx->pc = 0x330f7cu;

    // 0x330f7c: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x330f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x330f80: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330f80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330f84: 0x0  nop
    ctx->pc = 0x330f84u;
    // NOP
    // 0x330f88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x330f8c: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x330f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x330f90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330f94: 0x0  nop
    ctx->pc = 0x330f94u;
    // NOP
    // 0x330f98: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x330f98u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x330f9c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x330F9Cu;
    SET_GPR_U32(ctx, 31, 0x330FA4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330F9Cu, 0x330FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330FA4u;
label_330fa4:
    // 0x330fa4: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x330fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    // 0x330fa8: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x330fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x330fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330fb0: 0x0  nop
    ctx->pc = 0x330fb0u;
    // NOP
    // 0x330fb4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x330fb8: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x330fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x330fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330fc0: 0x0  nop
    ctx->pc = 0x330fc0u;
    // NOP
    // 0x330fc4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x330fc4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x330fc8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x330FC8u;
    SET_GPR_U32(ctx, 31, 0x330FD0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330FC8u, 0x330FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330FD0u;
label_330fd0:
    // 0x330fd0: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x330fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
    // 0x330fd4: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x330fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x330fd8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x330fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x330fdc: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x330fdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x330fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330fe4: 0x0  nop
    ctx->pc = 0x330fe4u;
    // NOP
    // 0x330fe8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x330fec: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x330fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x330ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330ff4: 0x0  nop
    ctx->pc = 0x330ff4u;
    // NOP
    // 0x330ff8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x330ff8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x330ffc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x330FFCu;
    SET_GPR_U32(ctx, 31, 0x331004u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330FFCu, 0x331004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331004u;
label_331004:
    // 0x331004: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x331004u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331008: 0xafa60244  sw          $a2, 0x244($sp)
    ctx->pc = 0x331008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 6));
    // 0x33100c: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x33100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x331010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331014: 0x0  nop
    ctx->pc = 0x331014u;
    // NOP
    // 0x331018: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33101c: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x33101cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x331020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331024: 0x0  nop
    ctx->pc = 0x331024u;
    // NOP
    // 0x331028: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x331028u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33102c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x33102Cu;
    SET_GPR_U32(ctx, 31, 0x331034u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x33102Cu, 0x331034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331034u;
label_331034:
    // 0x331034: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x331034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x331038: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x331038u;
    {
        const bool branch_taken_0x331038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331038) {
            ctx->pc = 0x331278u;
            return;
        }
    }
    ctx->pc = 0x331040u;
}
