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
// Address: 0x306fd0 - 0x30708c
void caseD_2_0x306fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x306fd0");
#endif

    switch (ctx->pc) {
        case 0x30707cu: goto label_30707c;
        default: break;
    }

    ctx->pc = 0x306fd0u;

    // 0x306fd0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x306fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x306fd4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x306fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x306fd8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x306fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x306fdc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x306fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x306fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306fe4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x306fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x306fe8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x306fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x306fec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x306fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x306ff0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x306ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x306ff4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x306ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x306ff8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x306ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x306ffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x307000: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x307000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x307004: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x307004u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x307008: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x307008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30700c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30700cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x307010: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x307010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x307014: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x307014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x307018: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x307018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30701c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x30701cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x307020: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x307020u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x307024: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307028: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x307028u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30702c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307030: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x307030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x307034: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x307034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x307038: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x307038u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30703c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307040: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x307040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x307044: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x307044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x307048: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x307048u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30704c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307050: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307054: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x307054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x307058: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x307058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30705c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30705cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x307060: 0x34465a00  ori         $a2, $v0, 0x5A00
    ctx->pc = 0x307060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23040);
    // 0x307064: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307068: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x307068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x30706c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30706cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307070: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x307070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x307074: 0xc0965d0  jal         func_259740
    ctx->pc = 0x307074u;
    SET_GPR_U32(ctx, 31, 0x30707Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x307074u, 0x30707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30707Cu;
label_30707c:
    // 0x30707c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307080: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x307080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x307084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x307088: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x307088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30708cu;
}
