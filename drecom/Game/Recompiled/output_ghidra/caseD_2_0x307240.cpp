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
// Address: 0x307240 - 0x3072fc
void caseD_2_0x307240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x307240");
#endif

    switch (ctx->pc) {
        case 0x3072ecu: goto label_3072ec;
        default: break;
    }

    ctx->pc = 0x307240u;

    // 0x307240: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x307240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x307244: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x307244u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x307248: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x307248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30724c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30724cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x307250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x307250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x307254: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x307254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x307258: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x307258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x30725c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30725cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x307260: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x307260u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x307264: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x307264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x307268: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x307268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30726c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x307270: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x307270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x307274: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x307274u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x307278: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x307278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30727c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30727cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x307280: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x307280u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x307284: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x307284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x307288: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x307288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30728c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x30728cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x307290: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x307290u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x307294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307298: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x307298u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30729c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3072a0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x3072a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3072a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3072a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3072a8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x3072a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x3072ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3072acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3072b0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x3072b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3072b4: 0x2442001a  addiu       $v0, $v0, 0x1A
    ctx->pc = 0x3072b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26));
    // 0x3072b8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x3072b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x3072bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3072bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3072c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3072c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3072c4: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3072c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x3072c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3072c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3072cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3072ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3072d0: 0x34465a00  ori         $a2, $v0, 0x5A00
    ctx->pc = 0x3072d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23040);
    // 0x3072d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3072d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3072d8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3072d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3072dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3072dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3072e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3072e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3072e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3072E4u;
    SET_GPR_U32(ctx, 31, 0x3072ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3072E4u, 0x3072ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072ECu;
label_3072ec:
    // 0x3072ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3072ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3072f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3072f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3072f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3072f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3072f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3072f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3072fcu;
}
