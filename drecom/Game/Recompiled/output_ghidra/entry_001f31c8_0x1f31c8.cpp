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

// Function: entry_001f31c8
// Address: 0x1f31c8 - 0x1f3280
void entry_001f31c8_0x1f31c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f31c8_0x1f31c8");
#endif

    switch (ctx->pc) {
        case 0x1f3214u: goto label_1f3214;
        case 0x1f3238u: goto label_1f3238;
        case 0x1f3260u: goto label_1f3260;
        default: break;
    }

    ctx->pc = 0x1f31c8u;

    // 0x1f31c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f31c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f31cc: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f31d0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1f31d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1f31d4: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1F31D4u;
    {
        const bool branch_taken_0x1f31d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f31d4) {
            ctx->pc = 0x1F3280u;
            return;
        }
    }
    ctx->pc = 0x1F31DCu;
    // 0x1f31dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f31dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f31e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f31e4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f31e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f31e8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1f31e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f31ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f31f0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f31f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f31f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f31f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f31f8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f31f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f31fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3200: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f3200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3204: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3208: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f3208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f320c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F320Cu;
    SET_GPR_U32(ctx, 31, 0x1F3214u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F320Cu, 0x1F3214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3214u;
label_1f3214:
    // 0x1f3214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f3214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3218: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f3218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f321c: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1f321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1f3220: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f3220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f3224: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f3224u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f3228: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f322c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f322cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3230: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F3230u;
    SET_GPR_U32(ctx, 31, 0x1F3238u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F3230u, 0x1F3238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3238u;
label_1f3238:
    // 0x1f3238: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f3238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f323c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1f323cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1f3240: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f3240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f3244: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f3244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f3248: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f3248u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f324c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3250: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3254: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f3254u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3258: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F3258u;
    SET_GPR_U32(ctx, 31, 0x1F3260u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F3258u, 0x1F3260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3260u;
label_1f3260:
    // 0x1f3260: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f3260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3264: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1f3264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1f3268: 0x246304b0  addiu       $v1, $v1, 0x4B0
    ctx->pc = 0x1f3268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x1f326c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f326cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f3270: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f3270u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f3274: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3278: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f327c: 0xa4640076  sh          $a0, 0x76($v1)
    ctx->pc = 0x1f327cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 118), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1f3280u;
}
