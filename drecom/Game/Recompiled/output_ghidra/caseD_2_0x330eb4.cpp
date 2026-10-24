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

// Function: caseD_2
// Address: 0x330eb4 - 0x330f7c
void caseD_2_0x330eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x330eb4");
#endif

    switch (ctx->pc) {
        case 0x330edcu: goto label_330edc;
        case 0x330f14u: goto label_330f14;
        case 0x330f40u: goto label_330f40;
        case 0x330f70u: goto label_330f70;
        default: break;
    }

    ctx->pc = 0x330eb4u;

    // 0x330eb4: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x330eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x330eb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330ebc: 0x0  nop
    ctx->pc = 0x330ebcu;
    // NOP
    // 0x330ec0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x330ec4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x330ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x330ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330ecc: 0x0  nop
    ctx->pc = 0x330eccu;
    // NOP
    // 0x330ed0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x330ed0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x330ed4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x330ED4u;
    SET_GPR_U32(ctx, 31, 0x330EDCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330ED4u, 0x330EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330EDCu;
label_330edc:
    // 0x330edc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330edcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x330ee0: 0xafa30234  sw          $v1, 0x234($sp)
    ctx->pc = 0x330ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 3));
    // 0x330ee4: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x330ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x330ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330eec: 0x0  nop
    ctx->pc = 0x330eecu;
    // NOP
    // 0x330ef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330ef4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x330ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x330ef8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x330ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x330efc: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x330efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x330f00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x330f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x330f04: 0x0  nop
    ctx->pc = 0x330f04u;
    // NOP
    // 0x330f08: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x330f08u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x330f0c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x330F0Cu;
    SET_GPR_U32(ctx, 31, 0x330F14u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330F0Cu, 0x330F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F14u;
label_330f14:
    // 0x330f14: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x330f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
    // 0x330f18: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x330f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x330f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330f20: 0x0  nop
    ctx->pc = 0x330f20u;
    // NOP
    // 0x330f24: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x330f28: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x330f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
    // 0x330f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330f30: 0x0  nop
    ctx->pc = 0x330f30u;
    // NOP
    // 0x330f34: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x330f34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x330f38: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x330F38u;
    SET_GPR_U32(ctx, 31, 0x330F40u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330F38u, 0x330F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F40u;
label_330f40:
    // 0x330f40: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330f40u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x330f44: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x330f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
    // 0x330f48: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x330f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x330f4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330f4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330f50: 0x0  nop
    ctx->pc = 0x330f50u;
    // NOP
    // 0x330f54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x330f58: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x330f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x330f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330f60: 0x0  nop
    ctx->pc = 0x330f60u;
    // NOP
    // 0x330f64: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x330f64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x330f68: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x330F68u;
    SET_GPR_U32(ctx, 31, 0x330F70u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330F68u, 0x330F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F70u;
label_330f70:
    // 0x330f70: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x330f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x330f74: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x330F74u;
    {
        const bool branch_taken_0x330f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330f74) {
            ctx->pc = 0x331278u;
            return;
        }
    }
    ctx->pc = 0x330F7Cu;
}
