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

// Function: entry_001f4264
// Address: 0x1f4264 - 0x1f4338
void entry_001f4264_0x1f4264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4264_0x1f4264");
#endif

    switch (ctx->pc) {
        case 0x1f429cu: goto label_1f429c;
        case 0x1f42c0u: goto label_1f42c0;
        default: break;
    }

    ctx->pc = 0x1f4264u;

    // 0x1f4264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4268: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f426c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f426cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4270: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f4270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4274: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4278: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f4278u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f427c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4280: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f4280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4284: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4288: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f4288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f428c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4290: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f4290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f4294: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F4294u;
    SET_GPR_U32(ctx, 31, 0x1F429Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F4294u, 0x1F429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F429Cu;
label_1f429c:
    // 0x1f429c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f42a0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f42a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f42a4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f42a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f42a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f42ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f42acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f42b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f42b4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f42b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f42b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F42B8u;
    SET_GPR_U32(ctx, 31, 0x1F42C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F42B8u, 0x1F42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F42C0u;
label_1f42c0:
    // 0x1f42c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f42c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f42c4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1f42c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1f42c8: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f42c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f42cc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f42ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f42d0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f42d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f42d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f42d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f42d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f42dc: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f42dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f42e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f42e4: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x1f42e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1f42e8: 0x3063f8ff  andi        $v1, $v1, 0xF8FF
    ctx->pc = 0x1f42e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63743);
    // 0x1f42ec: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x1f42ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f42f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f42f4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1f42f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f42f8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f42f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f42fc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f42fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f4300: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1f4300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f4304: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4308: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f4308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f430c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f430cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4310: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4314: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f4314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f4318: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f4318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f431c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4320: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f4320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f4324: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f4324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f4328: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x1f4328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x1f432c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f432cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f4330: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4334: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f4334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x1f4338u;
}
