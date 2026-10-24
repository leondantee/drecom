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

// Function: entry_00133540
// Address: 0x133540 - 0x1335fc
void entry_00133540_0x133540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133540_0x133540");
#endif

    switch (ctx->pc) {
        case 0x1335c8u: goto label_1335c8;
        case 0x1335d4u: goto label_1335d4;
        case 0x1335ecu: goto label_1335ec;
        default: break;
    }

    ctx->pc = 0x133540u;

    // 0x133540: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133544: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133548: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x133548u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x13354c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133550: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x133550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x133554: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x133554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x133558: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x133558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13355c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133560: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x133560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x133564: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133568: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13356c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x13356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x133570: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x133570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x133574: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x133574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x133578: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13357c: 0x946209e0  lhu         $v0, 0x9E0($v1)
    ctx->pc = 0x13357cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x133580: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x133580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x133584: 0xa46209e0  sh          $v0, 0x9E0($v1)
    ctx->pc = 0x133584u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2528), (uint16_t)GPR_U32(ctx, 2));
    // 0x133588: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13358c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13358cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133590: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x133590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x133594: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133598: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x133598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x13359c: 0xa200009b  sb          $zero, 0x9B($s0)
    ctx->pc = 0x13359cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 155), (uint8_t)GPR_U32(ctx, 0));
    // 0x1335a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1335a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1335a4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1335a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1335a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1335a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1335ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1335acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1335b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1335b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1335b4: 0x2404050b  addiu       $a0, $zero, 0x50B
    ctx->pc = 0x1335b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
    // 0x1335b8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1335b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1335bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1335bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1335c0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1335C0u;
    SET_GPR_U32(ctx, 31, 0x1335C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1335C0u, 0x1335C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335C8u;
label_1335c8:
    // 0x1335c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1335c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1335cc: 0xc04da3c  jal         func_1368F0
    ctx->pc = 0x1335CCu;
    SET_GPR_U32(ctx, 31, 0x1335D4u);
    ctx->pc = 0x1368F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F0u, 0x1335CCu, 0x1335D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335D4u;
label_1335d4:
    // 0x1335d4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1335d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1335d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1335d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1335dc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1335dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1335e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1335e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1335e4: 0xc04d994  jal         func_136650
    ctx->pc = 0x1335E4u;
    SET_GPR_U32(ctx, 31, 0x1335ECu);
    ctx->pc = 0x136650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136650u, 0x1335E4u, 0x1335ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335ECu;
label_1335ec:
    // 0x1335ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1335ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1335f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1335f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1335f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1335f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1335f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1335f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1335fcu;
}
