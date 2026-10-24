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

// Function: caseD_2
// Address: 0x133170 - 0x13322c
void caseD_2_0x133170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x133170");
#endif

    switch (ctx->pc) {
        case 0x133190u: goto label_133190;
        case 0x1331e8u: goto label_1331e8;
        case 0x133210u: goto label_133210;
        case 0x13321cu: goto label_13321c;
        default: break;
    }

    ctx->pc = 0x133170u;

    // 0x133170: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133174: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133178: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x133178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x13317c: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x13317cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x133180: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x133180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133184: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x133184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x133188: 0xc0965d0  jal         func_259740
    ctx->pc = 0x133188u;
    SET_GPR_U32(ctx, 31, 0x133190u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x133188u, 0x133190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133190u;
label_133190:
    // 0x133190: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133194: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133198: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13319c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13319cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1331a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1331a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1331a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1331a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1331a8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1331a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1331ac: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1331acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1331b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1331b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1331b4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1331b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1331b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1331b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1331bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1331bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1331c0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1331c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1331c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1331c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1331c8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1331c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1331cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1331ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1331d0: 0xa202009b  sb          $v0, 0x9B($s0)
    ctx->pc = 0x1331d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 155), (uint8_t)GPR_U32(ctx, 2));
    // 0x1331d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1331d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1331d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1331d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1331dc: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x1331dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1331e0: 0xc048044  jal         func_120110
    ctx->pc = 0x1331E0u;
    SET_GPR_U32(ctx, 31, 0x1331E8u);
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x1331E0u, 0x1331E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331E8u;
label_1331e8:
    // 0x1331e8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1331e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1331ec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1331ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1331f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1331f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1331f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1331f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1331f8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1331f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1331fc: 0x2404050a  addiu       $a0, $zero, 0x50A
    ctx->pc = 0x1331fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x133200: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x133200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x133204: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x133204u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133208: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x133208u;
    SET_GPR_U32(ctx, 31, 0x133210u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x133208u, 0x133210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133210u;
label_133210:
    // 0x133210: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133214: 0xc04da3c  jal         func_1368F0
    ctx->pc = 0x133214u;
    SET_GPR_U32(ctx, 31, 0x13321Cu);
    ctx->pc = 0x1368F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F0u, 0x133214u, 0x13321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13321Cu;
label_13321c:
    // 0x13321c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133220: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133228: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13322cu;
}
