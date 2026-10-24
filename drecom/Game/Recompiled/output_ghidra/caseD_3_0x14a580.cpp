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

// Function: caseD_3
// Address: 0x14a580 - 0x14a640
void caseD_3_0x14a580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x14a580");
#endif

    switch (ctx->pc) {
        case 0x14a5a4u: goto label_14a5a4;
        case 0x14a5bcu: goto label_14a5bc;
        case 0x14a5ecu: goto label_14a5ec;
        case 0x14a600u: goto label_14a600;
        case 0x14a630u: goto label_14a630;
        default: break;
    }

    ctx->pc = 0x14a580u;

    // 0x14a580: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a584: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a588: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x14a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x14a58c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14a58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14a590: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14a590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14a594: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x14a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a598: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x14a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14a59c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14A59Cu;
    SET_GPR_U32(ctx, 31, 0x14A5A4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14A59Cu, 0x14A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A5A4u;
label_14a5a4:
    // 0x14a5a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a5a8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14a5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14a5ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a5b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a5b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14a5b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14A5B4u;
    SET_GPR_U32(ctx, 31, 0x14A5BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14A5B4u, 0x14A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A5BCu;
label_14a5bc:
    // 0x14a5bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a5c0: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x14a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a5c4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x14a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x14a5c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a5cc: 0x0  nop
    ctx->pc = 0x14a5ccu;
    // NOP
    // 0x14a5d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14a5d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14a5d4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x14a5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x14a5d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a5dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a5e0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a5e4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14A5E4u;
    SET_GPR_U32(ctx, 31, 0x14A5ECu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14A5E4u, 0x14A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A5ECu;
label_14a5ec:
    // 0x14a5ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14a5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14a5f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a5f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14a5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14a5f8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14A5F8u;
    SET_GPR_U32(ctx, 31, 0x14A600u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14A5F8u, 0x14A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A600u;
label_14a600:
    // 0x14a600: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a604: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14a604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x14a608: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14A608u;
    {
        const bool branch_taken_0x14a608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a608) {
            ctx->pc = 0x14A640u;
            return;
        }
    }
    ctx->pc = 0x14A610u;
    // 0x14a610: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a618: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a61c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x14a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x14a620: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x14a620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14a624: 0x24461b40  addiu       $a2, $v0, 0x1B40
    ctx->pc = 0x14a624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x14a628: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x14A628u;
    SET_GPR_U32(ctx, 31, 0x14A630u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x14A628u, 0x14A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A630u;
label_14a630:
    // 0x14a630: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a634: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x14a634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x14a638: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14a63c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x14a63cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14a640u;
}
