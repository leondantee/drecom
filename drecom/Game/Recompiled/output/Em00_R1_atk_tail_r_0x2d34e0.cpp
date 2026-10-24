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

// Function: Em00_R1_atk_tail_r
// Address: 0x2d34e0 - 0x2d3608
void Em00_R1_atk_tail_r_0x2d34e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_atk_tail_r_0x2d34e0");
#endif

    switch (ctx->pc) {
        case 0x2d3534u: goto label_2d3534;
        case 0x2d3578u: goto label_2d3578;
        case 0x2d35a0u: goto label_2d35a0;
        case 0x2d35bcu: goto label_2d35bc;
        default: break;
    }

    ctx->pc = 0x2d34e0u;

    // 0x2d34e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d34e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d34e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d34e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d34e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d34ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d34ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d34f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d34f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d34f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d34f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d34f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d34f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d34fc: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D34FCu;
    {
        const bool branch_taken_0x2d34fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d34fc) {
            ctx->pc = 0x2D35B0u;
            goto label_2d35b0;
        }
    }
    ctx->pc = 0x2D3504u;
    // 0x2d3504: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3504u;
    {
        const bool branch_taken_0x2d3504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3504) {
            ctx->pc = 0x2D3514u;
            goto label_2d3514;
        }
    }
    ctx->pc = 0x2D350Cu;
    // 0x2d350c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2D350Cu;
    {
        const bool branch_taken_0x2d350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d350c) {
            ctx->pc = 0x2D35F8u;
            goto label_2d35f8;
        }
    }
    ctx->pc = 0x2D3514u;
label_2d3514:
    // 0x2d3514: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3518: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d351c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d351cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d3520: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d3520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d3524: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d3524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d3528: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d3528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d352c: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D352Cu;
    SET_GPR_U32(ctx, 31, 0x2D3534u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D352Cu, 0x2D3534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3534u;
label_2d3534:
    // 0x2d3534: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d3534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d3538: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d3538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d353c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d353cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d3540: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3544: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d3544u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d3548: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d354c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d354cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d3550: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D3550u;
    {
        const bool branch_taken_0x2d3550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3550) {
            ctx->pc = 0x2D3580u;
            goto label_2d3580;
        }
    }
    ctx->pc = 0x2D3558u;
    // 0x2d3558: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d355c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d355cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3560: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3564: 0x24063c13  addiu       $a2, $zero, 0x3C13
    ctx->pc = 0x2d3564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15379));
    // 0x2d3568: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d356c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d356cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3570: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3570u;
    SET_GPR_U32(ctx, 31, 0x2D3578u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3570u, 0x2D3578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3578u;
label_2d3578:
    // 0x2d3578: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3578u;
    {
        const bool branch_taken_0x2d3578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3578) {
            ctx->pc = 0x2D35A0u;
            goto label_2d35a0;
        }
    }
    ctx->pc = 0x2D3580u;
label_2d3580:
    // 0x2d3580: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3584: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3588: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d358c: 0x24063c13  addiu       $a2, $zero, 0x3C13
    ctx->pc = 0x2d358cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15379));
    // 0x2d3590: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d3590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d3594: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3598: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3598u;
    SET_GPR_U32(ctx, 31, 0x2D35A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3598u, 0x2D35A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35A0u;
label_2d35a0:
    // 0x2d35a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35a4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d35a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d35a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d35a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d35ac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d35acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d35b0:
    // 0x2d35b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d35b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35b4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D35B4u;
    SET_GPR_U32(ctx, 31, 0x2D35BCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D35B4u, 0x2D35BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35BCu;
label_2d35bc:
    // 0x2d35bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35c0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d35c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d35c4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D35C4u;
    {
        const bool branch_taken_0x2d35c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d35c4) {
            ctx->pc = 0x2D35F8u;
            goto label_2d35f8;
        }
    }
    ctx->pc = 0x2D35CCu;
    // 0x2d35cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d35ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d35d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d35d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d35d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35dc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d35dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d35e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d35e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d35e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d35ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d35f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d35f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d35f8:
    // 0x2d35f8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d35f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d35fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d35fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3600: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3608u;
}
