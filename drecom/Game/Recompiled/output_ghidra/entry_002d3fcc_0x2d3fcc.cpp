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

// Function: entry_002d3fcc
// Address: 0x2d3fcc - 0x2d409c
void entry_002d3fcc_0x2d3fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3fcc_0x2d3fcc");
#endif

    switch (ctx->pc) {
        case 0x2d3ff8u: goto label_2d3ff8;
        case 0x2d400cu: goto label_2d400c;
        case 0x2d4034u: goto label_2d4034;
        case 0x2d4040u: goto label_2d4040;
        case 0x2d4050u: goto label_2d4050;
        case 0x2d405cu: goto label_2d405c;
        default: break;
    }

    ctx->pc = 0x2d3fccu;

    // 0x2d3fcc: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x2d3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x2d3fd0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d3fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d3fd4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d3fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d3fd8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3fdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3fe0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3fe4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d3fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d3fe8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d3fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d3fec: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2d3fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2d3ff0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D3FF0u;
    SET_GPR_U32(ctx, 31, 0x2D3FF8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D3FF0u, 0x2D3FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3FF8u;
label_2d3ff8:
    // 0x2d3ff8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ffc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d3ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4000: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d4000u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d4004: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D4004u;
    SET_GPR_U32(ctx, 31, 0x2D400Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D4004u, 0x2D400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D400Cu;
label_2d400c:
    // 0x2d400c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4010: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d4010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d4014: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4018: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d4018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d401c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d401cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4020: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d4020u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d4024: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4028: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4028u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d402c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D402Cu;
    SET_GPR_U32(ctx, 31, 0x2D4034u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D402Cu, 0x2D4034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4034u;
label_2d4034:
    // 0x2d4034: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4038: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D4038u;
    SET_GPR_U32(ctx, 31, 0x2D4040u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4038u, 0x2D4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4040u;
label_2d4040:
    // 0x2d4040: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4044: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4044u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4048: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D4048u;
    SET_GPR_U32(ctx, 31, 0x2D4050u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4048u, 0x2D4050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4050u;
label_2d4050:
    // 0x2d4050: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4054: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D4054u;
    SET_GPR_U32(ctx, 31, 0x2D405Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4054u, 0x2D405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D405Cu;
label_2d405c:
    // 0x2d405c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d405cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4060: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d4064: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D4064u;
    {
        const bool branch_taken_0x2d4064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4064) {
            ctx->pc = 0x2D409Cu;
            return;
        }
    }
    ctx->pc = 0x2D406Cu;
    // 0x2d406c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d406cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4070: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4074: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d4074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4078: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2d4078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d407c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4080: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d4080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4084: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4088: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d4088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d408c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4090: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d4090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4094: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4098: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d4098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d409cu;
}
