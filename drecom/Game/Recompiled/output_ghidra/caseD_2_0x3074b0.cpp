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
// Address: 0x3074b0 - 0x30756c
void caseD_2_0x3074b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x3074b0");
#endif

    switch (ctx->pc) {
        case 0x30755cu: goto label_30755c;
        default: break;
    }

    ctx->pc = 0x3074b0u;

    // 0x3074b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3074b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3074b4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3074b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3074b8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3074b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3074bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3074bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3074c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3074c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3074c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3074c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3074c8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3074c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3074cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3074ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3074d0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3074d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3074d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3074d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3074d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3074d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3074dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3074dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3074e0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3074e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3074e4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3074e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3074e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3074e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3074ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3074ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3074f0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3074f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3074f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3074f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3074f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3074f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3074fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3074fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x307500: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x307500u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x307504: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307508: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x307508u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30750c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307510: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x307510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x307514: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x307514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x307518: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x307518u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30751c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307520: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x307520u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x307524: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x307524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x307528: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x307528u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30752c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307530: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307534: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x307534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x307538: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x307538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30753c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30753cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x307540: 0x34465a00  ori         $a2, $v0, 0x5A00
    ctx->pc = 0x307540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23040);
    // 0x307544: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307548: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x307548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x30754c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30754cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307550: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x307550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x307554: 0xc0965d0  jal         func_259740
    ctx->pc = 0x307554u;
    SET_GPR_U32(ctx, 31, 0x30755Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x307554u, 0x30755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30755Cu;
label_30755c:
    // 0x30755c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307560: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x307560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x307564: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x307568: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x307568u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30756cu;
}
