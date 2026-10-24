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

// Function: entry_001f86cc
// Address: 0x1f86cc - 0x1f8794
void entry_001f86cc_0x1f86cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f86cc_0x1f86cc");
#endif

    switch (ctx->pc) {
        case 0x1f86ecu: goto label_1f86ec;
        default: break;
    }

    ctx->pc = 0x1f86ccu;

    // 0x1f86cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f86d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f86d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f86d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f86d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f86d8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f86d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f86dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f86dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f86e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f86e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f86e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F86E4u;
    SET_GPR_U32(ctx, 31, 0x1F86ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F86E4u, 0x1F86ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F86ECu;
label_1f86ec:
    // 0x1f86ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f86f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f86f4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f86f8: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1f86f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1f86fc: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f86fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f8700: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8704: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f8704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f8708: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1f8708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1f870c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f870cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f8710: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8714: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8718: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1f8718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1f871c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f871cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8720: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8724: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f8724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x1f8728: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f872c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8730: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x1f8730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x1f8734: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f8734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f8738: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f873c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f873cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8740: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x1f8740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x1f8744: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1f8744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1f8748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f874c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8754: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f8754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f8758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f875c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8760: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f8760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8768: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f876c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1f876cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1f8770: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1f8770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1f8774: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1f8774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1f8778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f877c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8780: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8784: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f8784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f8788: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f8788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f878c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8790: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1f8790u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f8794u;
}
