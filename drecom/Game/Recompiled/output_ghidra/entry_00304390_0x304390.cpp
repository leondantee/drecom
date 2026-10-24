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

// Function: entry_00304390
// Address: 0x304390 - 0x304414
void entry_00304390_0x304390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304390_0x304390");
#endif

    switch (ctx->pc) {
        case 0x3043a0u: goto label_3043a0;
        case 0x3043acu: goto label_3043ac;
        case 0x304404u: goto label_304404;
        default: break;
    }

    ctx->pc = 0x304390u;

    // 0x304390: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304394: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x304394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x304398: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x304398u;
    SET_GPR_U32(ctx, 31, 0x3043A0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x304398u, 0x3043A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043A0u;
label_3043a0:
    // 0x3043a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3043a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043a4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3043A4u;
    SET_GPR_U32(ctx, 31, 0x3043ACu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3043A4u, 0x3043ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043ACu;
label_3043ac:
    // 0x3043ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3043acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043b0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3043b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3043b4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3043B4u;
    {
        const bool branch_taken_0x3043b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3043b4) {
            ctx->pc = 0x304414u;
            return;
        }
    }
    ctx->pc = 0x3043BCu;
    // 0x3043bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3043bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3043c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3043c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043c4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3043c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3043c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3043c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3043cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3043ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043d0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3043d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3043d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3043d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043d8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x3043d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3043dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3043dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043e0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x3043e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3043e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3043e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3043e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3043ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3043ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3043f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3043f4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3043f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3043f8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x3043f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x3043fc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x3043FCu;
    SET_GPR_U32(ctx, 31, 0x304404u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x3043FCu, 0x304404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304404u;
label_304404:
    // 0x304404: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304408: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x304408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x30440c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304410: 0xac601274  sw          $zero, 0x1274($v1)
    ctx->pc = 0x304410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 0));
    ctx->pc = 0x304414u;
}
