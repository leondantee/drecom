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

// Function: entry_001218c4
// Address: 0x1218c4 - 0x121928
void entry_001218c4_0x1218c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001218c4_0x1218c4");
#endif

    switch (ctx->pc) {
        case 0x1218e8u: goto label_1218e8;
        default: break;
    }

    ctx->pc = 0x1218c4u;

    // 0x1218c4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1218c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1218c8: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x1218c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1218cc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1218ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1218d0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1218d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1218d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1218d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1218d8: 0x0  nop
    ctx->pc = 0x1218d8u;
    // NOP
    // 0x1218dc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1218dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1218e0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1218E0u;
    SET_GPR_U32(ctx, 31, 0x1218E8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1218E0u, 0x1218E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218E8u;
label_1218e8:
    // 0x1218e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1218e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1218ec: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x1218ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x1218f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1218f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1218f4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1218f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1218f8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1218f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1218fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1218fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x121900: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121904: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x121904u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x121908: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12190c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12190cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x121910: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121914: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x121914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x121918: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12191c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x12191cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x121920: 0x10000503  b           . + 4 + (0x503 << 2)
    ctx->pc = 0x121920u;
    {
        const bool branch_taken_0x121920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121920) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121928u;
}
