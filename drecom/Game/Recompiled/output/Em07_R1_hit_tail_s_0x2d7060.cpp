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

// Function: Em07_R1_hit_tail_s
// Address: 0x2d7060 - 0x2d73cc
void Em07_R1_hit_tail_s_0x2d7060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_hit_tail_s_0x2d7060");
#endif

    switch (ctx->pc) {
        case 0x2d70e0u: goto label_2d70e0;
        case 0x2d7114u: goto label_2d7114;
        case 0x2d7134u: goto label_2d7134;
        case 0x2d718cu: goto label_2d718c;
        case 0x2d71c0u: goto label_2d71c0;
        case 0x2d71e0u: goto label_2d71e0;
        case 0x2d72c8u: goto label_2d72c8;
        case 0x2d7320u: goto label_2d7320;
        case 0x2d735cu: goto label_2d735c;
        default: break;
    }

    ctx->pc = 0x2d7060u;

    // 0x2d7060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d7064: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2d7064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2d7068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d7068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d706c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2d706cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2d7070: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7074: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d7074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d7078: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d7078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d707c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d707cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7080: 0x108300ab  beq         $a0, $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x2D7080u;
    {
        const bool branch_taken_0x2d7080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d7080) {
            ctx->pc = 0x2D7330u;
            goto label_2d7330;
        }
    }
    ctx->pc = 0x2D7088u;
    // 0x2d7088: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d7088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d708c: 0x1083009c  beq         $a0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x2D708Cu;
    {
        const bool branch_taken_0x2d708c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d708c) {
            ctx->pc = 0x2D7300u;
            goto label_2d7300;
        }
    }
    ctx->pc = 0x2D7094u;
    // 0x2d7094: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7098: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2D7098u;
    {
        const bool branch_taken_0x2d7098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d7098) {
            ctx->pc = 0x2D7218u;
            goto label_2d7218;
        }
    }
    ctx->pc = 0x2D70A0u;
    // 0x2d70a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D70A0u;
    {
        const bool branch_taken_0x2d70a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d70a0) {
            ctx->pc = 0x2D70B0u;
            goto label_2d70b0;
        }
    }
    ctx->pc = 0x2D70A8u;
    // 0x2d70a8: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x2D70A8u;
    {
        const bool branch_taken_0x2d70a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d70a8) {
            ctx->pc = 0x2D73B8u;
            goto label_2d73b8;
        }
    }
    ctx->pc = 0x2D70B0u;
label_2d70b0:
    // 0x2d70b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d70b4: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d70b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d70b8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D70B8u;
    {
        const bool branch_taken_0x2d70b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d70b8) {
            ctx->pc = 0x2D716Cu;
            goto label_2d716c;
        }
    }
    ctx->pc = 0x2D70C0u;
    // 0x2d70c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d70c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d70c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d70c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d70c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d70cc: 0x24063c09  addiu       $a2, $zero, 0x3C09
    ctx->pc = 0x2d70ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15369));
    // 0x2d70d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d70d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d70d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d70d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d70d8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D70D8u;
    SET_GPR_U32(ctx, 31, 0x2D70E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D70D8u, 0x2D70E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D70E0u;
label_2d70e0:
    // 0x2d70e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d70e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d70e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d70e8: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d70ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d70ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d70f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d70f4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d70f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d70f8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2d70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2d70fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d70fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d7100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7104: 0x0  nop
    ctx->pc = 0x2d7104u;
    // NOP
    // 0x2d7108: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2d7108u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d710c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D710Cu;
    SET_GPR_U32(ctx, 31, 0x2D7114u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D710Cu, 0x2D7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7114u;
label_2d7114:
    // 0x2d7114: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7118: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d711c: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2d711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2d7120: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d7120u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d7124: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d7124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d7128: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d7128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d712c: 0xc05cc20  jal         func_173080
    ctx->pc = 0x2D712Cu;
    SET_GPR_U32(ctx, 31, 0x2D7134u);
    ctx->pc = 0x173080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173080u, 0x2D712Cu, 0x2D7134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7134u;
label_2d7134:
    // 0x2d7134: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7138: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d7138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d713c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d713cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7140: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7144: 0x24431348  addiu       $v1, $v0, 0x1348
    ctx->pc = 0x2d7144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d7148: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d7148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d714c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d714cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7150: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d7150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7154: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d7154u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d7158: 0x0  nop
    ctx->pc = 0x2d7158u;
    // NOP
    // 0x2d715c: 0x0  nop
    ctx->pc = 0x2d715cu;
    // NOP
    // 0x2d7160: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d7160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d7164: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2D7164u;
    {
        const bool branch_taken_0x2d7164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7164) {
            ctx->pc = 0x2D7208u;
            goto label_2d7208;
        }
    }
    ctx->pc = 0x2D716Cu;
label_2d716c:
    // 0x2d716c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7170: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7174: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d7174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d7178: 0x24063c09  addiu       $a2, $zero, 0x3C09
    ctx->pc = 0x2d7178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15369));
    // 0x2d717c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d717cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d7180: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d7180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d7184: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D7184u;
    SET_GPR_U32(ctx, 31, 0x2D718Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D7184u, 0x2D718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D718Cu;
label_2d718c:
    // 0x2d718c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d718cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7190: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7194: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7198: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d719c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d71a0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d71a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d71a4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2d71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2d71a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d71a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d71ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d71acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d71b0: 0x0  nop
    ctx->pc = 0x2d71b0u;
    // NOP
    // 0x2d71b4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2d71b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d71b8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D71B8u;
    SET_GPR_U32(ctx, 31, 0x2D71C0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D71B8u, 0x2D71C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71C0u;
label_2d71c0:
    // 0x2d71c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d71c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d71c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d71c8: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2d71c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2d71cc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d71ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d71d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d71d4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d71d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d71d8: 0xc05cc20  jal         func_173080
    ctx->pc = 0x2D71D8u;
    SET_GPR_U32(ctx, 31, 0x2D71E0u);
    ctx->pc = 0x173080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173080u, 0x2D71D8u, 0x2D71E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71E0u;
label_2d71e0:
    // 0x2d71e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d71e4: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d71e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d71e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d71ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d71f0: 0x24431348  addiu       $v1, $v0, 0x1348
    ctx->pc = 0x2d71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d71f4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d71f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d71f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d71fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d71fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7200: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d7200u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d7204: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d7204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2d7208:
    // 0x2d7208: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d720c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d720cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d7210: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d7210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d7214: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d7214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d7218:
    // 0x2d7218: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d721c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d721cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d7220: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d7220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d7224: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d7224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d7228: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D7228u;
    {
        const bool branch_taken_0x2d7228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7228) {
            ctx->pc = 0x2D7258u;
            goto label_2d7258;
        }
    }
    ctx->pc = 0x2D7230u;
    // 0x2d7230: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7234: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d7234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d7238: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d7238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d723c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7240: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7244: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7248: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d7248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d724c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d724cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7250: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7250u;
    {
        const bool branch_taken_0x2d7250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7250) {
            ctx->pc = 0x2D7278u;
            goto label_2d7278;
        }
    }
    ctx->pc = 0x2D7258u;
label_2d7258:
    // 0x2d7258: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d725c: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d7260: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7264: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7268: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d726c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7270: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d7270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d7274: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2d7278:
    // 0x2d7278: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d727c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d7280: 0x245004b0  addiu       $s0, $v0, 0x4B0
    ctx->pc = 0x2d7280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x2d7284: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7288: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d728c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7290: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d7290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d7294: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7298: 0x24431344  addiu       $v1, $v0, 0x1344
    ctx->pc = 0x2d7298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d729c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d72a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d72a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d72a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d72a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d72a8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d72a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d72ac: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d72acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d72b0: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d72b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d72b4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d72b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d72b8: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d72b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d72bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d72bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d72c0: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D72C0u;
    SET_GPR_U32(ctx, 31, 0x2D72C8u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D72C0u, 0x2D72C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72C8u;
label_2d72c8:
    // 0x2d72c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d72cc: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x2d72ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x2d72d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D72D0u;
    {
        const bool branch_taken_0x2d72d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d72d0) {
            ctx->pc = 0x2D7300u;
            goto label_2d7300;
        }
    }
    ctx->pc = 0x2D72D8u;
    // 0x2d72d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d72dc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d72e0: 0x245004b0  addiu       $s0, $v0, 0x4B0
    ctx->pc = 0x2d72e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x2d72e4: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d72e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d72e8: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2d72e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x2d72ec: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d72ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d72f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d72f4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d72f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d72f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d72fc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d72fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d7300:
    // 0x2d7300: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7304: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7308: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d7308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d730c: 0x24063c08  addiu       $a2, $zero, 0x3C08
    ctx->pc = 0x2d730cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15368));
    // 0x2d7310: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d7310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7314: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d7314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d7318: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D7318u;
    SET_GPR_U32(ctx, 31, 0x2D7320u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D7318u, 0x2D7320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7320u;
label_2d7320:
    // 0x2d7320: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7324: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d7324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d7328: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d7328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d732c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d732cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d7330:
    // 0x2d7330: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7334: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d7334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d7338: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d7338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d733c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d733cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d7340: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7340u;
    {
        const bool branch_taken_0x2d7340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7340) {
            ctx->pc = 0x2D7350u;
            goto label_2d7350;
        }
    }
    ctx->pc = 0x2D7348u;
    // 0x2d7348: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d7348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d734c: 0xa020ec68  sb          $zero, -0x1398($at)
    ctx->pc = 0x2d734cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEC68u, _value); } while (0);
label_2d7350:
    // 0x2d7350: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7354: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D7354u;
    SET_GPR_U32(ctx, 31, 0x2D735Cu);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D7354u, 0x2D735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D735Cu;
label_2d735c:
    // 0x2d735c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7360: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d7360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d7364: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D7364u;
    {
        const bool branch_taken_0x2d7364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7364) {
            ctx->pc = 0x2D73B8u;
            goto label_2d73b8;
        }
    }
    ctx->pc = 0x2D736Cu;
    // 0x2d736c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7370: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d7370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d7374: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d7374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7378: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d7378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d737c: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d737cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d7380: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d7380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d7384: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d7384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d7388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d7388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d738c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d738cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7390: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d7390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7394: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d7394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7398: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d739c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d739cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d73a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d73a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d73a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d73a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d73a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d73a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d73ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d73acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d73b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d73b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d73b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d73b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d73b8:
    // 0x2d73b8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d73b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d73bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d73bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d73c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d73c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d73c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D73C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D73C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D73CCu;
}
