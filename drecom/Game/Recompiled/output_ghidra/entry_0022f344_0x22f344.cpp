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

// Function: entry_0022f344
// Address: 0x22f344 - 0x22f3e0
void entry_0022f344_0x22f344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f344_0x22f344");
#endif

    switch (ctx->pc) {
        case 0x22f394u: goto label_22f394;
        case 0x22f3b8u: goto label_22f3b8;
        default: break;
    }

    ctx->pc = 0x22f344u;

    // 0x22f344: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f348: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22f348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f34c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22f350: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x22f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x22f354: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22f354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22f358: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22f358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22f35c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f360: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f364: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22f364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22f368: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22f368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22f36c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f370: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22f370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22f374: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f378: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22f378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f37c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f380: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22f380u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f384: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f388: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22f388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22f38c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F38Cu;
    SET_GPR_U32(ctx, 31, 0x22F394u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F38Cu, 0x22F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F394u;
label_22f394:
    // 0x22f394: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22f394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f398: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22f39c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x22f3a0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22f3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22f3a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22f3a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22f3a8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f3ac: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22f3acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22f3b0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F3B0u;
    SET_GPR_U32(ctx, 31, 0x22F3B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F3B0u, 0x22F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3B8u;
label_22f3b8:
    // 0x22f3b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22f3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f3bc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x22f3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x22f3c0: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x22f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x22f3c4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22f3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22f3c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22f3c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22f3cc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f3d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f3d4: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22f3d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x22f3d8: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x22F3D8u;
    {
        const bool branch_taken_0x22f3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3d8) {
            ctx->pc = 0x22F818u;
            return;
        }
    }
    ctx->pc = 0x22F3E0u;
}
