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

// Function: entry_001f0848
// Address: 0x1f0848 - 0x1f08fc
void entry_001f0848_0x1f0848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0848_0x1f0848");
#endif

    switch (ctx->pc) {
        case 0x1f0880u: goto label_1f0880;
        case 0x1f08a4u: goto label_1f08a4;
        default: break;
    }

    ctx->pc = 0x1f0848u;

    // 0x1f0848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f084c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0850: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f0850u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0854: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f0854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f0858: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f085c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f085cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0860: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0864: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f0864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0868: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f086c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f086cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0870: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0874: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f0874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f0878: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0878u;
    SET_GPR_U32(ctx, 31, 0x1F0880u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0878u, 0x1F0880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0880u;
label_1f0880:
    // 0x1f0880: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f0880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0884: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x1f0884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f0888: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f0888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f088c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f088cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f0890: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f0890u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f0894: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0898: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f0898u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f089c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F089Cu;
    SET_GPR_U32(ctx, 31, 0x1F08A4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F089Cu, 0x1F08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08A4u;
label_1f08a4:
    // 0x1f08a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f08a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f08a8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1f08a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1f08ac: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f08acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f08b0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f08b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f08b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f08b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f08b8: 0x8fb100f8  lw          $s1, 0xF8($sp)
    ctx->pc = 0x1f08b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f08bc: 0x26231330  addiu       $v1, $s1, 0x1330
    ctx->pc = 0x1f08bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    // 0x1f08c0: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f08c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f08c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f08c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f08c8: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1f08c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f08cc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x1f08ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x1f08d0: 0x36237fff  ori         $v1, $s1, 0x7FFF
    ctx->pc = 0x1f08d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32767);
    // 0x1f08d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f08d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f08d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f08d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f08dc: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1f08dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1f08e0: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x1f08e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f08e4: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x1f08e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x1f08e8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1f08e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f08ec: 0x3c08fffb  lui         $t0, 0xFFFB
    ctx->pc = 0x1f08ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65531 << 16));
    // 0x1f08f0: 0x3507ffff  ori         $a3, $t0, 0xFFFF
    ctx->pc = 0x1f08f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x1f08f4: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x1f08f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x1f08f8: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1f08f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x1f08fcu;
}
