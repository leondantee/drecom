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

// Function: Em07_R1_wait
// Address: 0x2d5ef0 - 0x2d5ff8
void Em07_R1_wait_0x2d5ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_wait_0x2d5ef0");
#endif

    switch (ctx->pc) {
        case 0x2d5f54u: goto label_2d5f54;
        case 0x2d5f78u: goto label_2d5f78;
        default: break;
    }

    ctx->pc = 0x2d5ef0u;

    // 0x2d5ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5ef4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2d5ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2d5ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d5efc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2d5efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2d5f00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f04: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d5f08: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2d5f08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5f0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f10: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d5f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d5f14: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d5f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d5f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5f1c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D5F1Cu;
    {
        const bool branch_taken_0x2d5f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d5f1c) {
            ctx->pc = 0x2D5F6Cu;
            goto label_2d5f6c;
        }
    }
    ctx->pc = 0x2D5F24u;
    // 0x2d5f24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5F24u;
    {
        const bool branch_taken_0x2d5f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5f24) {
            ctx->pc = 0x2D5F34u;
            goto label_2d5f34;
        }
    }
    ctx->pc = 0x2D5F2Cu;
    // 0x2d5f2c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D5F2Cu;
    {
        const bool branch_taken_0x2d5f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5f2c) {
            ctx->pc = 0x2D5F88u;
            goto label_2d5f88;
        }
    }
    ctx->pc = 0x2D5F34u;
label_2d5f34:
    // 0x2d5f34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d5f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d5f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d5f40: 0x24063c00  addiu       $a2, $zero, 0x3C00
    ctx->pc = 0x2d5f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    // 0x2d5f44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d5f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5f48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d5f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d5f4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D5F4Cu;
    SET_GPR_U32(ctx, 31, 0x2D5F54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D5F4Cu, 0x2D5F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5F54u;
label_2d5f54:
    // 0x2d5f54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f58: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d5f58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d5f5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f60: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d5f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d5f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d5f68: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d5f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d5f6c:
    // 0x2d5f6c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d5f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f70: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D5F70u;
    SET_GPR_U32(ctx, 31, 0x2D5F78u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D5F70u, 0x2D5F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5F78u;
label_2d5f78:
    // 0x2d5f78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d5f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f7c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2d5f7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2d5f80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5f84: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2d5f84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2d5f88:
    // 0x2d5f88: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x2d5f88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2d5f8c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d5f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d5f90: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D5F90u;
    {
        const bool branch_taken_0x2d5f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5f90) {
            ctx->pc = 0x2D5FE4u;
            goto label_2d5fe4;
        }
    }
    ctx->pc = 0x2D5F98u;
    // 0x2d5f98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f9c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2d5f9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d5fa0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d5fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5fa4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d5fa4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d5fa8: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x2d5fa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x2d5fac: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2D5FACu;
    {
        const bool branch_taken_0x2d5fac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5fac) {
            ctx->pc = 0x2D5FE4u;
            goto label_2d5fe4;
        }
    }
    ctx->pc = 0x2D5FB4u;
    // 0x2d5fb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5fb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5fbc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d5fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5fc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d5fc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5fc8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d5fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5fcc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5fd0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d5fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5fd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5fd8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d5fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5fdc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5fe0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d5fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d5fe4:
    // 0x2d5fe4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d5fe4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5fec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d5fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d5ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5FF8u;
}
