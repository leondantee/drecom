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

// Function: entry_0022f764
// Address: 0x22f764 - 0x22f818
void entry_0022f764_0x22f764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f764_0x22f764");
#endif

    switch (ctx->pc) {
        case 0x22f7d4u: goto label_22f7d4;
        case 0x22f7f8u: goto label_22f7f8;
        default: break;
    }

    ctx->pc = 0x22f764u;

    // 0x22f764: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f768: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22f768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22f76c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x22F76Cu;
    {
        const bool branch_taken_0x22f76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f76c) {
            ctx->pc = 0x22F818u;
            return;
        }
    }
    ctx->pc = 0x22F774u;
    // 0x22f774: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f778: 0x8470127a  lh          $s0, 0x127A($v1)
    ctx->pc = 0x22f778u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x22f77c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x22F77Cu;
    {
        const bool branch_taken_0x22f77c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f77c) {
            ctx->pc = 0x22F818u;
            return;
        }
    }
    ctx->pc = 0x22F784u;
    // 0x22f784: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f788: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f78c: 0x8c710030  lw          $s1, 0x30($v1)
    ctx->pc = 0x22f78cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22f790: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x22f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x22f794: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x22f794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x22f798: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x22f798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x22f79c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f7a0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f7a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22f7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22f7a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22f7ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f7b0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22f7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22f7b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f7b8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22f7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f7bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f7c0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22f7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f7c4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f7c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22f7cc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F7CCu;
    SET_GPR_U32(ctx, 31, 0x22F7D4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F7CCu, 0x22F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7D4u;
label_22f7d4:
    // 0x22f7d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22f7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f7d8: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x22f7d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x22f7dc: 0x248200b4  addiu       $v0, $a0, 0xB4
    ctx->pc = 0x22f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
    // 0x22f7e0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x22f7e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22f7e4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x22f7e4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x22f7e8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f7ec: 0xa4451278  sh          $a1, 0x1278($v0)
    ctx->pc = 0x22f7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x22f7f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F7F0u;
    SET_GPR_U32(ctx, 31, 0x22F7F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F7F0u, 0x22F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7F8u;
label_22f7f8:
    // 0x22f7f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22f7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f7fc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x22f7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x22f800: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x22f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x22f804: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22f804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22f808: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22f808u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22f80c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f810: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22f810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f814: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22f814u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x22f818u;
}
