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

// Function: entry_002a9270
// Address: 0x2a9270 - 0x2a92e0
void entry_002a9270_0x2a9270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a9270_0x2a9270");
#endif

    switch (ctx->pc) {
        case 0x2a92a0u: goto label_2a92a0;
        case 0x2a92b8u: goto label_2a92b8;
        default: break;
    }

    ctx->pc = 0x2a9270u;

    // 0x2a9270: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x2a9270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9274: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9278: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2a9278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2a927c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2a927cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2a9280: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a9280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a9284: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2a9284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2a9288: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a928c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9290: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2a9290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9294: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2a9294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a9298: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2A9298u;
    SET_GPR_U32(ctx, 31, 0x2A92A0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2A9298u, 0x2A92A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92A0u;
label_2a92a0:
    // 0x2a92a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92a4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a92a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a92a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a92a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a92acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a92b0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A92B0u;
    SET_GPR_U32(ctx, 31, 0x2A92B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A92B0u, 0x2A92B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92B8u;
label_2a92b8:
    // 0x2a92b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92bc: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x2a92bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x2a92c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2a92c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a92c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A92C4u;
    {
        const bool branch_taken_0x2a92c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a92c4) {
            ctx->pc = 0x2A92E0u;
            return;
        }
    }
    ctx->pc = 0x2A92CCu;
    // 0x2a92cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a92ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92d4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2a92d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a92d8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2A92D8u;
    SET_GPR_U32(ctx, 31, 0x2A92E0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2A92D8u, 0x2A92E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92E0u;
}
