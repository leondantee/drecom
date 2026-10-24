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

// Function: entry_00351e24
// Address: 0x351e24 - 0x351e88
void entry_00351e24_0x351e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00351e24_0x351e24");
#endif

    switch (ctx->pc) {
        case 0x351e48u: goto label_351e48;
        case 0x351e60u: goto label_351e60;
        default: break;
    }

    ctx->pc = 0x351e24u;

    // 0x351e24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e2c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x351e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x351e30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x351e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x351e34: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x351e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x351e38: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x351e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x351e3c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x351e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x351e40: 0xc058f50  jal         func_163D40
    ctx->pc = 0x351E40u;
    SET_GPR_U32(ctx, 31, 0x351E48u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x351E40u, 0x351E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E48u;
label_351e48:
    // 0x351e48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e4c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x351e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x351e50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x351e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x351e58: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x351E58u;
    SET_GPR_U32(ctx, 31, 0x351E60u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x351E58u, 0x351E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E60u;
label_351e60:
    // 0x351e60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e64: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x351e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x351e68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x351e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x351e6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x351E6Cu;
    {
        const bool branch_taken_0x351e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e6c) {
            ctx->pc = 0x351E88u;
            return;
        }
    }
    ctx->pc = 0x351E74u;
    // 0x351e74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e7c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x351e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x351e80: 0xc05cd58  jal         func_173560
    ctx->pc = 0x351E80u;
    SET_GPR_U32(ctx, 31, 0x351E88u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x351E80u, 0x351E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E88u;
}
