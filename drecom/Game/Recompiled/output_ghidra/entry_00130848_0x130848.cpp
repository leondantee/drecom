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

// Function: entry_00130848
// Address: 0x130848 - 0x1308dc
void entry_00130848_0x130848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130848_0x130848");
#endif

    switch (ctx->pc) {
        case 0x13086cu: goto label_13086c;
        case 0x130884u: goto label_130884;
        case 0x130898u: goto label_130898;
        case 0x1308a8u: goto label_1308a8;
        case 0x1308b4u: goto label_1308b4;
        default: break;
    }

    ctx->pc = 0x130848u;

    // 0x130848: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x130848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x13084c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130850: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x130850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x130854: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130858: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13085c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x13085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130860: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x130860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130864: 0xc058f50  jal         func_163D40
    ctx->pc = 0x130864u;
    SET_GPR_U32(ctx, 31, 0x13086Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x130864u, 0x13086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13086Cu;
label_13086c:
    // 0x13086c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130870: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x130870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x130874: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130878: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130878u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13087c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13087Cu;
    SET_GPR_U32(ctx, 31, 0x130884u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13087Cu, 0x130884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130884u;
label_130884:
    // 0x130884: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130888: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13088c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x13088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130890: 0xc05cd58  jal         func_173560
    ctx->pc = 0x130890u;
    SET_GPR_U32(ctx, 31, 0x130898u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x130890u, 0x130898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130898u;
label_130898:
    // 0x130898: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13089c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13089cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1308a0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1308A0u;
    SET_GPR_U32(ctx, 31, 0x1308A8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1308A0u, 0x1308A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308A8u;
label_1308a8:
    // 0x1308a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1308a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1308ac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1308ACu;
    SET_GPR_U32(ctx, 31, 0x1308B4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1308ACu, 0x1308B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308B4u;
label_1308b4:
    // 0x1308b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1308b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1308b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1308b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1308bc: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1308BCu;
    {
        const bool branch_taken_0x1308bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1308bc) {
            ctx->pc = 0x1309F4u;
            return;
        }
    }
    ctx->pc = 0x1308C4u;
    // 0x1308c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1308c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1308c8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1308c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1308cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1308ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1308d0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1308d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1308d4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1308D4u;
    {
        const bool branch_taken_0x1308d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1308d4) {
            ctx->pc = 0x1309F4u;
            return;
        }
    }
    ctx->pc = 0x1308DCu;
}
