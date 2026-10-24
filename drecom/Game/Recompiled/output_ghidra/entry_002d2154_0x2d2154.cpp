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

// Function: entry_002d2154
// Address: 0x2d2154 - 0x2d21c4
void entry_002d2154_0x2d2154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2154_0x2d2154");
#endif

    switch (ctx->pc) {
        case 0x2d2184u: goto label_2d2184;
        default: break;
    }

    ctx->pc = 0x2d2154u;

    // 0x2d2154: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2158: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d2158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d215c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2160: 0x3c023e65  lui         $v0, 0x3E65
    ctx->pc = 0x2d2160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15973 << 16));
    // 0x2d2164: 0x3442c8fa  ori         $v0, $v0, 0xC8FA
    ctx->pc = 0x2d2164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51450);
    // 0x2d2168: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d2168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d216c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d2170: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d2170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d2174: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d2174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d2178: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d2178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d217c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D217Cu;
    SET_GPR_U32(ctx, 31, 0x2D2184u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D217Cu, 0x2D2184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2184u;
label_2d2184:
    // 0x2d2184: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D2184u;
    {
        const bool branch_taken_0x2d2184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2184) {
            ctx->pc = 0x2D21C4u;
            return;
        }
    }
    ctx->pc = 0x2D218Cu;
    // 0x2d218c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d218cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2190: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2194: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d2194u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2198: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2d2198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2d219c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21a0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d21a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d21a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21a8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d21a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d21ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21b0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d21b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d21b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d21b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d21bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D21BCu;
    {
        const bool branch_taken_0x2d21bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d21bc) {
            ctx->pc = 0x2D21F4u;
            return;
        }
    }
    ctx->pc = 0x2D21C4u;
}
