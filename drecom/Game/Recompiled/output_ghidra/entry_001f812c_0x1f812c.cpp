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

// Function: entry_001f812c
// Address: 0x1f812c - 0x1f81f4
void entry_001f812c_0x1f812c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f812c_0x1f812c");
#endif

    switch (ctx->pc) {
        case 0x1f814cu: goto label_1f814c;
        default: break;
    }

    ctx->pc = 0x1f812cu;

    // 0x1f812c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8130: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8134: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f8134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f8138: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f8138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f813c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f813cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8140: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f8140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f8144: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F8144u;
    SET_GPR_U32(ctx, 31, 0x1F814Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F8144u, 0x1F814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F814Cu;
label_1f814c:
    // 0x1f814c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8150: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f8150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8154: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f8154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f8158: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1f8158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1f815c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f815cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f8160: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8164: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f8164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f8168: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1f8168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1f816c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f816cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f8170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8174: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8178: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1f8178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1f817c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f817cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8180: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8184: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f8184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x1f8188: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f818c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8190: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x1f8190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x1f8194: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f8194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f8198: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f819c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f819cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f81a0: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x1f81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x1f81a4: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1f81a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1f81a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f81a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f81ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f81acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f81b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f81b4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f81b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f81b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f81b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f81bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f81c0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f81c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f81c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f81c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f81c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f81c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f81cc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1f81ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1f81d0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1f81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1f81d4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1f81d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1f81d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f81d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f81dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f81e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f81e4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f81e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f81e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f81e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f81ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f81f0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1f81f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f81f4u;
}
