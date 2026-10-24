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

// Function: entry_003083a4
// Address: 0x3083a4 - 0x308440
void entry_003083a4_0x3083a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003083a4_0x3083a4");
#endif

    switch (ctx->pc) {
        case 0x3083b4u: goto label_3083b4;
        case 0x3083c0u: goto label_3083c0;
        case 0x308430u: goto label_308430;
        default: break;
    }

    ctx->pc = 0x3083a4u;

    // 0x3083a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3083a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083a8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3083a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3083ac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3083ACu;
    SET_GPR_U32(ctx, 31, 0x3083B4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3083ACu, 0x3083B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083B4u;
label_3083b4:
    // 0x3083b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3083b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083b8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3083B8u;
    SET_GPR_U32(ctx, 31, 0x3083C0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3083B8u, 0x3083C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083C0u;
label_3083c0:
    // 0x3083c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3083c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3083c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3083c8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3083C8u;
    {
        const bool branch_taken_0x3083c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3083c8) {
            ctx->pc = 0x308440u;
            return;
        }
    }
    ctx->pc = 0x3083D0u;
    // 0x3083d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3083d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083d4: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x3083d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x3083d8: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3083d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x3083dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3083dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3083e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3083e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3083e4: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x3083e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x3083e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3083e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3083ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3083ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083f0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3083f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3083f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3083f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3083f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3083f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083fc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3083fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x308400: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308404: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x308404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308408: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30840c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x30840cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308410: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308414: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x308414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x308418: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30841c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308420: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x308420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x308424: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x308424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x308428: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x308428u;
    SET_GPR_U32(ctx, 31, 0x308430u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x308428u, 0x308430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308430u;
label_308430:
    // 0x308430: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308434: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x308434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x308438: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30843c: 0xac601274  sw          $zero, 0x1274($v1)
    ctx->pc = 0x30843cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 0));
    ctx->pc = 0x308440u;
}
