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

// Function: entry_003084b4
// Address: 0x3084b4 - 0x30858c
void entry_003084b4_0x3084b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003084b4_0x3084b4");
#endif

    switch (ctx->pc) {
        case 0x3084e0u: goto label_3084e0;
        case 0x3084f4u: goto label_3084f4;
        case 0x30850cu: goto label_30850c;
        case 0x308518u: goto label_308518;
        case 0x308528u: goto label_308528;
        case 0x308534u: goto label_308534;
        default: break;
    }

    ctx->pc = 0x3084b4u;

    // 0x3084b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3084b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3084b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3084b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3084bc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x3084bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x3084c0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3084c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3084c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3084c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3084c8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3084c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3084cc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3084ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3084d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3084d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3084d4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3084d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3084d8: 0xc05c848  jal         func_172120
    ctx->pc = 0x3084D8u;
    SET_GPR_U32(ctx, 31, 0x3084E0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3084D8u, 0x3084E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3084E0u;
label_3084e0:
    // 0x3084e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3084e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3084e4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3084e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3084e8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3084e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3084ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3084ECu;
    SET_GPR_U32(ctx, 31, 0x3084F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3084ECu, 0x3084F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3084F4u;
label_3084f4:
    // 0x3084f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3084f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3084f8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3084f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3084fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3084fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308500: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x308500u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x308504: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x308504u;
    SET_GPR_U32(ctx, 31, 0x30850Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x308504u, 0x30850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30850Cu;
label_30850c:
    // 0x30850c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30850cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308510: 0xc05cd10  jal         func_173440
    ctx->pc = 0x308510u;
    SET_GPR_U32(ctx, 31, 0x308518u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x308510u, 0x308518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308518u;
label_308518:
    // 0x308518: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30851c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30851cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x308520: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x308520u;
    SET_GPR_U32(ctx, 31, 0x308528u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x308520u, 0x308528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308528u;
label_308528:
    // 0x308528: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30852c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30852Cu;
    SET_GPR_U32(ctx, 31, 0x308534u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30852Cu, 0x308534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308534u;
label_308534:
    // 0x308534: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308538: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x308538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30853c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30853Cu;
    {
        const bool branch_taken_0x30853c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30853c) {
            ctx->pc = 0x30858Cu;
            return;
        }
    }
    ctx->pc = 0x308544u;
    // 0x308544: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x308544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308548: 0x8ca411a0  lw          $a0, 0x11A0($a1)
    ctx->pc = 0x308548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4512)));
    // 0x30854c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x30854cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x308550: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x308550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x308554: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x308554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x308558: 0xaca311a0  sw          $v1, 0x11A0($a1)
    ctx->pc = 0x308558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4512), GPR_U32(ctx, 3));
    // 0x30855c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30855cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308560: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308564: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308568: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30856c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30856cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308570: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308570u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x308574: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308578: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30857c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308580: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308580u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308584: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308588: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30858cu;
}
