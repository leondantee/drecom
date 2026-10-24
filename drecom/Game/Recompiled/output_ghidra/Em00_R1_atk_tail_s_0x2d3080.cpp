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

// Function: Em00_R1_atk_tail_s
// Address: 0x2d3080 - 0x2d31a8
void Em00_R1_atk_tail_s_0x2d3080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_atk_tail_s_0x2d3080");
#endif

    switch (ctx->pc) {
        case 0x2d30d4u: goto label_2d30d4;
        case 0x2d3118u: goto label_2d3118;
        case 0x2d3140u: goto label_2d3140;
        case 0x2d315cu: goto label_2d315c;
        default: break;
    }

    ctx->pc = 0x2d3080u;

    // 0x2d3080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3084: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d3084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d3088: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d3088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d308c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d308cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3090: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d3090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3094: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d3094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d3098: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d309c: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D309Cu;
    {
        const bool branch_taken_0x2d309c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d309c) {
            ctx->pc = 0x2D3150u;
            goto label_2d3150;
        }
    }
    ctx->pc = 0x2D30A4u;
    // 0x2d30a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D30A4u;
    {
        const bool branch_taken_0x2d30a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d30a4) {
            ctx->pc = 0x2D30B4u;
            goto label_2d30b4;
        }
    }
    ctx->pc = 0x2D30ACu;
    // 0x2d30ac: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2D30ACu;
    {
        const bool branch_taken_0x2d30ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d30ac) {
            ctx->pc = 0x2D3198u;
            goto label_2d3198;
        }
    }
    ctx->pc = 0x2D30B4u;
label_2d30b4:
    // 0x2d30b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d30b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d30bc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d30bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d30c0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d30c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d30c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d30c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d30c8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d30c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d30cc: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D30CCu;
    SET_GPR_U32(ctx, 31, 0x2D30D4u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D30CCu, 0x2D30D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30D4u;
label_2d30d4:
    // 0x2d30d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d30d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d30d8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d30d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d30dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d30dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d30e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d30e4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d30e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d30e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d30ec: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d30ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d30f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D30F0u;
    {
        const bool branch_taken_0x2d30f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d30f0) {
            ctx->pc = 0x2D3120u;
            goto label_2d3120;
        }
    }
    ctx->pc = 0x2D30F8u;
    // 0x2d30f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d30fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d30fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3100: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3104: 0x24063c14  addiu       $a2, $zero, 0x3C14
    ctx->pc = 0x2d3104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15380));
    // 0x2d3108: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d310c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d310cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3110: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3110u;
    SET_GPR_U32(ctx, 31, 0x2D3118u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3110u, 0x2D3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3118u;
label_2d3118:
    // 0x2d3118: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3118u;
    {
        const bool branch_taken_0x2d3118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3118) {
            ctx->pc = 0x2D3140u;
            goto label_2d3140;
        }
    }
    ctx->pc = 0x2D3120u;
label_2d3120:
    // 0x2d3120: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3124: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3128: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d312c: 0x24063c14  addiu       $a2, $zero, 0x3C14
    ctx->pc = 0x2d312cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15380));
    // 0x2d3130: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d3130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d3134: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3138: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3138u;
    SET_GPR_U32(ctx, 31, 0x2D3140u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3138u, 0x2D3140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3140u;
label_2d3140:
    // 0x2d3140: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3144: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3148: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d314c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d314cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d3150:
    // 0x2d3150: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3154: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3154u;
    SET_GPR_U32(ctx, 31, 0x2D315Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3154u, 0x2D315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D315Cu;
label_2d315c:
    // 0x2d315c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d315cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3160: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d3164: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D3164u;
    {
        const bool branch_taken_0x2d3164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3164) {
            ctx->pc = 0x2D3198u;
            goto label_2d3198;
        }
    }
    ctx->pc = 0x2D316Cu;
    // 0x2d316c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d316cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3170: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3174: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d3174u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3178: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d317c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d317cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3180: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3184: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d3184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3188: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d318c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d318cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3190: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3194: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d3194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d3198:
    // 0x2d3198: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d3198u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d319c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d319cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d31a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D31A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D31A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D31A8u;
}
