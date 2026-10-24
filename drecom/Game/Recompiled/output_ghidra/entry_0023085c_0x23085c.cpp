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

// Function: entry_0023085c
// Address: 0x23085c - 0x23090c
void entry_0023085c_0x23085c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023085c_0x23085c");
#endif

    switch (ctx->pc) {
        case 0x23087cu: goto label_23087c;
        default: break;
    }

    ctx->pc = 0x23085cu;

    // 0x23085c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230860: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230864: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x230864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x230868: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x230868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x23086c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23086cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230870: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x230870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x230874: 0xc0965d0  jal         func_259740
    ctx->pc = 0x230874u;
    SET_GPR_U32(ctx, 31, 0x23087Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x230874u, 0x23087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23087Cu;
label_23087c:
    // 0x23087c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23087cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230880: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x230880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230884: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x230884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x230888: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x230888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x23088c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x23088cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x230890: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230894: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x230894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x230898: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x230898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23089c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x23089cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2308a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2308a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2308a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308a8: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x2308a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x2308ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2308acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2308b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308b4: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x2308b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x2308b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2308b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2308bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308c0: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x2308c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x2308c4: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2308c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2308c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308cc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2308ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2308d0: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x2308d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x2308d4: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x2308d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x2308d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2308d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2308dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2308e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2308e4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2308e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2308e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2308e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2308ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308f0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2308f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2308f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2308f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2308f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308fc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2308fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x230900: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x230900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x230904: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230908: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x230908u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23090cu;
}
