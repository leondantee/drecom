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

// Function: entry_00310f04
// Address: 0x310f04 - 0x310fa0
void entry_00310f04_0x310f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310f04_0x310f04");
#endif

    switch (ctx->pc) {
        case 0x310f14u: goto label_310f14;
        case 0x310f20u: goto label_310f20;
        case 0x310f90u: goto label_310f90;
        default: break;
    }

    ctx->pc = 0x310f04u;

    // 0x310f04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f08: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x310f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x310f0c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x310F0Cu;
    SET_GPR_U32(ctx, 31, 0x310F14u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x310F0Cu, 0x310F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F14u;
label_310f14:
    // 0x310f14: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f18: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x310F18u;
    SET_GPR_U32(ctx, 31, 0x310F20u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x310F18u, 0x310F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F20u;
label_310f20:
    // 0x310f20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f24: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x310f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x310f28: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x310F28u;
    {
        const bool branch_taken_0x310f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310f28) {
            ctx->pc = 0x310FA0u;
            return;
        }
    }
    ctx->pc = 0x310F30u;
    // 0x310f30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f34: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x310f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x310f38: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x310f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x310f3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x310f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x310f40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x310f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x310f44: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x310f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x310f48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310f4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f50: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x310f50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x310f54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310f58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f5c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x310f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x310f60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f64: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x310f64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x310f68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f6c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x310f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x310f70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x310f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x310f78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f80: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x310f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x310f84: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x310f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x310f88: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x310F88u;
    SET_GPR_U32(ctx, 31, 0x310F90u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x310F88u, 0x310F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F90u;
label_310f90:
    // 0x310f90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f94: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x310f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x310f98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310f9c: 0xac601274  sw          $zero, 0x1274($v1)
    ctx->pc = 0x310f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 0));
    ctx->pc = 0x310fa0u;
}
