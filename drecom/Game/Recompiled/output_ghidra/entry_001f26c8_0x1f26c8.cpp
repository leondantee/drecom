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

// Function: entry_001f26c8
// Address: 0x1f26c8 - 0x1f2790
void entry_001f26c8_0x1f26c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f26c8_0x1f26c8");
#endif

    switch (ctx->pc) {
        case 0x1f274cu: goto label_1f274c;
        default: break;
    }

    ctx->pc = 0x1f26c8u;

    // 0x1f26c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f26cc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f26d0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f26d4: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1f26d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1f26d8: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f26d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f26dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f26e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f26e4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1f26e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1f26e8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f26e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f26ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f26ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f26f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f26f4: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1f26f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1f26f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f26f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f26fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2700: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f2700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x1f2704: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2708: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f270c: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x1f270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x1f2710: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f2710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f2714: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2718: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f2718u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f271c: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x1f271cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x1f2720: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1f2720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1f2724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2728: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f272c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2730: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f2730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f2734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2738: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f273c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f273cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2740: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f2740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2744: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F2744u;
    SET_GPR_U32(ctx, 31, 0x1F274Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F2744u, 0x1F274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F274Cu;
label_1f274c:
    // 0x1f274c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f274cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2750: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2754: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f2754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1f2758: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f2758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f275c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2760: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1f2760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f2764: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f2764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2768: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f2768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f276c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1f276cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1f2770: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f2770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f2774: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1f2774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2778: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f2778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f277c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1f277cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f2780: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f2780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f2784: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f2784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f2788: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1F2788u;
    {
        const bool branch_taken_0x1f2788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2788) {
            ctx->pc = 0x1F2B4Cu;
            return;
        }
    }
    ctx->pc = 0x1F2790u;
}
