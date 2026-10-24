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

// Function: Em00_R1_hit_tail_s
// Address: 0x2d31c0 - 0x2d332c
void Em00_R1_hit_tail_s_0x2d31c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_hit_tail_s_0x2d31c0");
#endif

    switch (ctx->pc) {
        case 0x2d323cu: goto label_2d323c;
        case 0x2d3264u: goto label_2d3264;
        case 0x2d3280u: goto label_2d3280;
        case 0x2d32c0u: goto label_2d32c0;
        case 0x2d32dcu: goto label_2d32dc;
        default: break;
    }

    ctx->pc = 0x2d31c0u;

    // 0x2d31c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d31c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d31c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d31c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d31c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d31cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d31d0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d31d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d31d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d31d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d31d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d31d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d31dc: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2D31DCu;
    {
        const bool branch_taken_0x2d31dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d31dc) {
            ctx->pc = 0x2D32D0u;
            goto label_2d32d0;
        }
    }
    ctx->pc = 0x2D31E4u;
    // 0x2d31e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d31e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d31e8: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D31E8u;
    {
        const bool branch_taken_0x2d31e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d31e8) {
            ctx->pc = 0x2D32A0u;
            goto label_2d32a0;
        }
    }
    ctx->pc = 0x2D31F0u;
    // 0x2d31f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d31f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d31f4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D31F4u;
    {
        const bool branch_taken_0x2d31f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d31f4) {
            ctx->pc = 0x2D3274u;
            goto label_2d3274;
        }
    }
    ctx->pc = 0x2D31FCu;
    // 0x2d31fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D31FCu;
    {
        const bool branch_taken_0x2d31fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d31fc) {
            ctx->pc = 0x2D320Cu;
            goto label_2d320c;
        }
    }
    ctx->pc = 0x2D3204u;
    // 0x2d3204: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2D3204u;
    {
        const bool branch_taken_0x2d3204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3204) {
            ctx->pc = 0x2D331Cu;
            goto label_2d331c;
        }
    }
    ctx->pc = 0x2D320Cu;
label_2d320c:
    // 0x2d320c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3210: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d3210u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d3214: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D3214u;
    {
        const bool branch_taken_0x2d3214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3214) {
            ctx->pc = 0x2D3244u;
            goto label_2d3244;
        }
    }
    ctx->pc = 0x2D321Cu;
    // 0x2d321c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3220: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3224: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3228: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x2d3228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
    // 0x2d322c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d322cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3230: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3234: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3234u;
    SET_GPR_U32(ctx, 31, 0x2D323Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3234u, 0x2D323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D323Cu;
label_2d323c:
    // 0x2d323c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D323Cu;
    {
        const bool branch_taken_0x2d323c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d323c) {
            ctx->pc = 0x2D3264u;
            goto label_2d3264;
        }
    }
    ctx->pc = 0x2D3244u;
label_2d3244:
    // 0x2d3244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3248: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d324c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d324cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3250: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x2d3250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
    // 0x2d3254: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d3254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d3258: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d325c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D325Cu;
    SET_GPR_U32(ctx, 31, 0x2D3264u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D325Cu, 0x2D3264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3264u;
label_2d3264:
    // 0x2d3264: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3268: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d326c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3270: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d3270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d3274:
    // 0x2d3274: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3278: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3278u;
    SET_GPR_U32(ctx, 31, 0x2D3280u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3278u, 0x2D3280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3280u;
label_2d3280:
    // 0x2d3280: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3284: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x2d3284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x2d3288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3288u;
    {
        const bool branch_taken_0x2d3288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3288) {
            ctx->pc = 0x2D32A0u;
            goto label_2d32a0;
        }
    }
    ctx->pc = 0x2D3290u;
    // 0x2d3290: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3294: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d329c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d329cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d32a0:
    // 0x2d32a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d32a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d32a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d32a8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d32a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d32ac: 0x24063c16  addiu       $a2, $zero, 0x3C16
    ctx->pc = 0x2d32acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15382));
    // 0x2d32b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d32b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d32b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d32b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d32b8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D32B8u;
    SET_GPR_U32(ctx, 31, 0x2D32C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D32B8u, 0x2D32C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32C0u;
label_2d32c0:
    // 0x2d32c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d32c4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d32c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d32c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d32cc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d32ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d32d0:
    // 0x2d32d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d32d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d32d4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D32D4u;
    SET_GPR_U32(ctx, 31, 0x2D32DCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D32D4u, 0x2D32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32DCu;
label_2d32dc:
    // 0x2d32dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d32e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d32e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d32e4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D32E4u;
    {
        const bool branch_taken_0x2d32e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d32e4) {
            ctx->pc = 0x2D331Cu;
            goto label_2d331c;
        }
    }
    ctx->pc = 0x2D32ECu;
    // 0x2d32ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d32ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d32f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d32f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d32f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d32f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d32f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d32fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d32fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3300: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d3300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3304: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3308: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d3308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d330c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d330cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3310: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d3310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3314: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3318: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d3318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d331c:
    // 0x2d331c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d331cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3320: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d3320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3324: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D332Cu;
}
