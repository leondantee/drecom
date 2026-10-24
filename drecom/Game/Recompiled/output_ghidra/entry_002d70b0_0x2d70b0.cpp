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

// Function: entry_002d70b0
// Address: 0x2d70b0 - 0x2d716c
void entry_002d70b0_0x2d70b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d70b0_0x2d70b0");
#endif

    switch (ctx->pc) {
        case 0x2d70e0u: goto label_2d70e0;
        case 0x2d7114u: goto label_2d7114;
        case 0x2d7134u: goto label_2d7134;
        default: break;
    }

    ctx->pc = 0x2d70b0u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x2D716Cu;
}
