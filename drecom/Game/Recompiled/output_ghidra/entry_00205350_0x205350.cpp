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

// Function: entry_00205350
// Address: 0x205350 - 0x2053f8
void entry_00205350_0x205350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205350_0x205350");
#endif

    switch (ctx->pc) {
        case 0x2053e4u: goto label_2053e4;
        default: break;
    }

    ctx->pc = 0x205350u;

    // 0x205350: 0x2e020012  sltiu       $v0, $s0, 0x12
    ctx->pc = 0x205350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x205354: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x205354u;
    {
        const bool branch_taken_0x205354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205354) {
            ctx->pc = 0x205330u;
            return;
        }
    }
    ctx->pc = 0x20535Cu;
    // 0x20535c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20535cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x205360: 0x2443a0a0  addiu       $v1, $v0, -0x5F60
    ctx->pc = 0x205360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942880));
    // 0x205364: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205368: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x205368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x20536c: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x20536cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x205370: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205374: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x205374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x205378: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x205378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20537c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205380: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x205380u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x205384: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205388: 0xac401340  sw          $zero, 0x1340($v0)
    ctx->pc = 0x205388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4928), GPR_U32(ctx, 0));
    // 0x20538c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20538cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x205390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205394: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205398: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x205398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x20539c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20539cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2053a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2053a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2053a4: 0xac40134c  sw          $zero, 0x134C($v0)
    ctx->pc = 0x2053a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4940), GPR_U32(ctx, 0));
    // 0x2053a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2053a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2053ac: 0xac401354  sw          $zero, 0x1354($v0)
    ctx->pc = 0x2053acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4948), GPR_U32(ctx, 0));
    // 0x2053b0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2053b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2053b4: 0xac40135c  sw          $zero, 0x135C($v0)
    ctx->pc = 0x2053b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4956), GPR_U32(ctx, 0));
    // 0x2053b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2053b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2053bc: 0xac401360  sw          $zero, 0x1360($v0)
    ctx->pc = 0x2053bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4960), GPR_U32(ctx, 0));
    // 0x2053c0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x2053c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x2053c4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2053c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2053c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2053c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2053cc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2053ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2053d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2053d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2053d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2053d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2053d8: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x2053d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2053dc: 0xc05d190  jal         func_174640
    ctx->pc = 0x2053DCu;
    SET_GPR_U32(ctx, 31, 0x2053E4u);
    ctx->pc = 0x174640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174640u, 0x2053DCu, 0x2053E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2053E4u;
label_2053e4:
    // 0x2053e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2053e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2053e8: 0xac401364  sw          $zero, 0x1364($v0)
    ctx->pc = 0x2053e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4964), GPR_U32(ctx, 0));
    // 0x2053ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2053ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2053f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2053F0u;
    {
        const bool branch_taken_0x2053f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2053f0) {
            ctx->pc = 0x205410u;
            return;
        }
    }
    ctx->pc = 0x2053F8u;
}
