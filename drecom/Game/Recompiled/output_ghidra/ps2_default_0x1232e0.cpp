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

// Function: default
// Address: 0x1232e0 - 0x1233d0
void ps2_default_0x1232e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1232e0");
#endif

    switch (ctx->pc) {
        case 0x12331cu: goto label_12331c;
        case 0x123358u: goto label_123358;
        case 0x123394u: goto label_123394;
        default: break;
    }

    ctx->pc = 0x1232e0u;

    // 0x1232e0: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1232e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1232e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1232e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1232e8: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1232e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1232ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1232ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1232f0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1232f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1232f4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1232f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1232f8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1232f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1232fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1232fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x123300: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x123300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x123304: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x123304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x123308: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x123308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12330c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x12330cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123310: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x123310u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x123314: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x123314u;
    SET_GPR_U32(ctx, 31, 0x12331Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x123314u, 0x12331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12331Cu;
label_12331c:
    // 0x12331c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x12331cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x123320: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x123320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x123324: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x123324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x123328: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x123328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12332c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x12332cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x123330: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x123330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x123334: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x123334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x123338: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x123338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12333c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x12333cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x123340: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x123340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x123344: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x123344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x123348: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x123348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12334c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x12334cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x123350: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x123350u;
    SET_GPR_U32(ctx, 31, 0x123358u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x123350u, 0x123358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123358u;
label_123358:
    // 0x123358: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x123358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x12335c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12335cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x123360: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x123360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x123364: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x123364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x123368: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x123368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x12336c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x12336cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x123370: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x123370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x123374: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x123374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x123378: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x123378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12337c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x12337cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x123380: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x123380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x123384: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x123384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123388: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x123388u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12338c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x12338Cu;
    SET_GPR_U32(ctx, 31, 0x123394u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x12338Cu, 0x123394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123394u;
label_123394:
    // 0x123394: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x123394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x123398: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x123398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x12339c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x12339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1233a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1233a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1233a4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1233a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1233a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1233a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1233ac: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1233acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1233b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1233b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1233b4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1233b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1233b8: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1233b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1233bc: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1233bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1233c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1233c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1233c4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x1233c4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1233c8: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x1233C8u;
    SET_GPR_U32(ctx, 31, 0x1233D0u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x1233C8u, 0x1233D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1233D0u;
}
