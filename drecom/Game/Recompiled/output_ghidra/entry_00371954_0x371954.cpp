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

// Function: entry_00371954
// Address: 0x371954 - 0x3719b8
void entry_00371954_0x371954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371954_0x371954");
#endif

    switch (ctx->pc) {
        case 0x371978u: goto label_371978;
        case 0x371990u: goto label_371990;
        default: break;
    }

    ctx->pc = 0x371954u;

    // 0x371954: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371958: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37195c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x37195cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x371960: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x371960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x371964: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x371964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x371968: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x371968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37196c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x37196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x371970: 0xc058f50  jal         func_163D40
    ctx->pc = 0x371970u;
    SET_GPR_U32(ctx, 31, 0x371978u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x371970u, 0x371978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371978u;
label_371978:
    // 0x371978: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37197c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x37197cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x371980: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371984: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x371984u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371988: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x371988u;
    SET_GPR_U32(ctx, 31, 0x371990u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x371988u, 0x371990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371990u;
label_371990:
    // 0x371990: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371994: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x371994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x371998: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x371998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37199c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37199Cu;
    {
        const bool branch_taken_0x37199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37199c) {
            ctx->pc = 0x3719B8u;
            return;
        }
    }
    ctx->pc = 0x3719A4u;
    // 0x3719a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3719a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3719a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719ac: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x3719acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3719b0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x3719B0u;
    SET_GPR_U32(ctx, 31, 0x3719B8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x3719B0u, 0x3719B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719B8u;
}
