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

// Function: entry_00152974
// Address: 0x152974 - 0x152a14
void entry_00152974_0x152974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152974_0x152974");
#endif

    switch (ctx->pc) {
        case 0x152994u: goto label_152994;
        case 0x1529a0u: goto label_1529a0;
        case 0x1529f4u: goto label_1529f4;
        default: break;
    }

    ctx->pc = 0x152974u;

    // 0x152974: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152978: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x152978u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x15297c: 0x3c0347c3  lui         $v1, 0x47C3
    ctx->pc = 0x15297cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18371 << 16));
    // 0x152980: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x152980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x152984: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x152984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152988: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x152988u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15298c: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x15298Cu;
    SET_GPR_U32(ctx, 31, 0x152994u);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x15298Cu, 0x152994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152994u;
label_152994:
    // 0x152994: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x152994u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152998: 0xc054b28  jal         func_152CA0
    ctx->pc = 0x152998u;
    SET_GPR_U32(ctx, 31, 0x1529A0u);
    ctx->pc = 0x152CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152CA0u, 0x152998u, 0x1529A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529A0u;
label_1529a0:
    // 0x1529a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1529a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1529a4: 0x2482a4a0  addiu       $v0, $a0, -0x5B60
    ctx->pc = 0x1529a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943904));
    // 0x1529a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1529a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1529ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1529acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1529b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1529b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1529b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1529b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1529b8: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x1529b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1529bc: 0x681024  and         $v0, $v1, $t0
    ctx->pc = 0x1529bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1529c0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1529c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1529c4: 0x34e40005  ori         $a0, $a3, 0x5
    ctx->pc = 0x1529c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)5);
    // 0x1529c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1529c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1529cc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1529ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1529d0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1529d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1529d4: 0x246200d0  addiu       $v0, $v1, 0xD0
    ctx->pc = 0x1529d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1529d8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1529d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1529dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1529dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1529e0: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x1529e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x1529e4: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x1529e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1529e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1529e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1529ec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1529ECu;
    SET_GPR_U32(ctx, 31, 0x1529F4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1529ECu, 0x1529F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529F4u;
label_1529f4:
    // 0x1529f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1529f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1529f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1529f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1529fc: 0xa040157c  sb          $zero, 0x157C($v0)
    ctx->pc = 0x1529fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x152a00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x152a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x152a04: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x152a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152a08: 0xa082157d  sb          $v0, 0x157D($a0)
    ctx->pc = 0x152a08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5501), (uint8_t)GPR_U32(ctx, 2));
    // 0x152a0c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x152A0Cu;
    {
        const bool branch_taken_0x152a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a0c) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x152A14u;
}
