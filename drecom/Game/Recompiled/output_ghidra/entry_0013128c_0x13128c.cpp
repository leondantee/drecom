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

// Function: entry_0013128c
// Address: 0x13128c - 0x131350
void entry_0013128c_0x13128c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013128c_0x13128c");
#endif

    switch (ctx->pc) {
        case 0x1312b0u: goto label_1312b0;
        case 0x1312c8u: goto label_1312c8;
        case 0x1312dcu: goto label_1312dc;
        case 0x1312ecu: goto label_1312ec;
        case 0x1312f8u: goto label_1312f8;
        default: break;
    }

    ctx->pc = 0x13128cu;

    // 0x13128c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131290: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131294: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x131294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x131298: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x131298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13129c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x13129cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1312a0: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1312a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1312a4: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1312a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1312a8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1312A8u;
    SET_GPR_U32(ctx, 31, 0x1312B0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1312A8u, 0x1312B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312B0u;
label_1312b0:
    // 0x1312b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1312b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1312b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1312b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1312b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1312bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1312c0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1312C0u;
    SET_GPR_U32(ctx, 31, 0x1312C8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1312C0u, 0x1312C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312C8u;
label_1312c8:
    // 0x1312c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1312c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1312ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312d0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1312d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1312d4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1312D4u;
    SET_GPR_U32(ctx, 31, 0x1312DCu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1312D4u, 0x1312DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312DCu;
label_1312dc:
    // 0x1312dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1312dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1312e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1312e4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1312E4u;
    SET_GPR_U32(ctx, 31, 0x1312ECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1312E4u, 0x1312ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312ECu;
label_1312ec:
    // 0x1312ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1312ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312f0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1312F0u;
    SET_GPR_U32(ctx, 31, 0x1312F8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1312F0u, 0x1312F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312F8u;
label_1312f8:
    // 0x1312f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1312f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312fc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1312fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x131300: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x131300u;
    {
        const bool branch_taken_0x131300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131300) {
            ctx->pc = 0x131350u;
            return;
        }
    }
    ctx->pc = 0x131308u;
    // 0x131308: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13130c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131310: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x131310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x131314: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x131314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131318: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13131c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x13131cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x131320: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131324: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x131324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x131328: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13132c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x13132cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x131330: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131334: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x131334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x131338: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x131338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13133c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x13133cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x131340: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x131340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x131344: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x131344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x131348: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131348u;
    {
        const bool branch_taken_0x131348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131348) {
            ctx->pc = 0x131350u;
            return;
        }
    }
    ctx->pc = 0x131350u;
}
