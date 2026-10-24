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

// Function: entry_002dd3c4
// Address: 0x2dd3c4 - 0x2dd464
void entry_002dd3c4_0x2dd3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd3c4_0x2dd3c4");
#endif

    switch (ctx->pc) {
        case 0x2dd3fcu: goto label_2dd3fc;
        case 0x2dd440u: goto label_2dd440;
        case 0x2dd45cu: goto label_2dd45c;
        default: break;
    }

    ctx->pc = 0x2dd3c4u;

    // 0x2dd3c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd3c8: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dd3c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dd3cc: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2dd3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2dd3d0: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dd3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd3d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd3d8: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x2dd3d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dd3dc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2dd3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2dd3e0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dd3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dd3e4: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2DD3E4u;
    {
        const bool branch_taken_0x2dd3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd3e4) {
            ctx->pc = 0x2DD4D4u;
            return;
        }
    }
    ctx->pc = 0x2DD3ECu;
    // 0x2dd3ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2dd3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd3f0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2dd3f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2dd3f4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DD3F4u;
    SET_GPR_U32(ctx, 31, 0x2DD3FCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DD3F4u, 0x2DD3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD3FCu;
label_2dd3fc:
    // 0x2dd3fc: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2dd3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2dd400: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dd400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd404: 0x0  nop
    ctx->pc = 0x2dd404u;
    // NOP
    // 0x2dd408: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dd408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dd40c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2dd40cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd410: 0x84e3127e  lh          $v1, 0x127E($a3)
    ctx->pc = 0x2dd410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4734)));
    // 0x2dd414: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DD414u;
    {
        const bool branch_taken_0x2dd414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd414) {
            ctx->pc = 0x2DD464u;
            return;
        }
    }
    ctx->pc = 0x2DD41Cu;
    // 0x2dd41c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd420: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd424: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dd424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dd428: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2dd428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2dd42c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dd42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd430: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2dd430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2dd434: 0x24678de8  addiu       $a3, $v1, -0x7218
    ctx->pc = 0x2dd434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938088));
    // 0x2dd438: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DD438u;
    SET_GPR_U32(ctx, 31, 0x2DD440u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DD438u, 0x2DD440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD440u;
label_2dd440:
    // 0x2dd440: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD440u;
    {
        const bool branch_taken_0x2dd440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd440) {
            ctx->pc = 0x2DD464u;
            return;
        }
    }
    ctx->pc = 0x2DD448u;
    // 0x2dd448: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2dd448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dd44c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd450: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2dd450u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2dd454: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DD454u;
    SET_GPR_U32(ctx, 31, 0x2DD45Cu);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DD454u, 0x2DD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD45Cu;
label_2dd45c:
    // 0x2dd45c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2dd45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd460: 0xa4c0127e  sh          $zero, 0x127E($a2)
    ctx->pc = 0x2dd460u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2dd464u;
}
