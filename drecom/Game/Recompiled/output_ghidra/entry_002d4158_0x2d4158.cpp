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

// Function: entry_002d4158
// Address: 0x2d4158 - 0x2d4228
void entry_002d4158_0x2d4158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4158_0x2d4158");
#endif

    switch (ctx->pc) {
        case 0x2d4184u: goto label_2d4184;
        case 0x2d4198u: goto label_2d4198;
        case 0x2d41c0u: goto label_2d41c0;
        case 0x2d41ccu: goto label_2d41cc;
        case 0x2d41dcu: goto label_2d41dc;
        case 0x2d41e8u: goto label_2d41e8;
        default: break;
    }

    ctx->pc = 0x2d4158u;

    // 0x2d4158: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x2d4158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x2d415c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d4160: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d4160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d4164: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4168: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d416c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4170: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d4170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d4174: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d4174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d4178: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2d4178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2d417c: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D417Cu;
    SET_GPR_U32(ctx, 31, 0x2D4184u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D417Cu, 0x2D4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4184u;
label_2d4184:
    // 0x2d4184: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d4184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4188: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d4188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d418c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d418cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d4190: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D4190u;
    SET_GPR_U32(ctx, 31, 0x2D4198u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D4190u, 0x2D4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4198u;
label_2d4198:
    // 0x2d4198: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d4198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d419c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d419cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d41a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41a4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d41a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d41a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d41ac: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d41acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d41b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d41b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d41b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d41b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D41B8u;
    SET_GPR_U32(ctx, 31, 0x2D41C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D41B8u, 0x2D41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41C0u;
label_2d41c0:
    // 0x2d41c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41c4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D41C4u;
    SET_GPR_U32(ctx, 31, 0x2D41CCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D41C4u, 0x2D41CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41CCu;
label_2d41cc:
    // 0x2d41cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d41ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d41d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d41d4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D41D4u;
    SET_GPR_U32(ctx, 31, 0x2D41DCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D41D4u, 0x2D41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41DCu;
label_2d41dc:
    // 0x2d41dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d41dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41e0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D41E0u;
    SET_GPR_U32(ctx, 31, 0x2D41E8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D41E0u, 0x2D41E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41E8u;
label_2d41e8:
    // 0x2d41e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d41e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41ec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d41ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d41f0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D41F0u;
    {
        const bool branch_taken_0x2d41f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d41f0) {
            ctx->pc = 0x2D4228u;
            return;
        }
    }
    ctx->pc = 0x2D41F8u;
    // 0x2d41f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d41f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d41fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4200: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d4200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4204: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d4204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d4208: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d420c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d420cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4210: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4214: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d4214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4218: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d421c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d421cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4220: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4224: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d4224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d4228u;
}
