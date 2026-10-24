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

// Function: entry_002d9f90
// Address: 0x2d9f90 - 0x2da1e0
void entry_002d9f90_0x2d9f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9f90_0x2d9f90");
#endif

    switch (ctx->pc) {
        case 0x2d9facu: goto label_2d9fac;
        case 0x2d9fc4u: goto label_2d9fc4;
        case 0x2d9ffcu: goto label_2d9ffc;
        case 0x2da004u: goto label_2da004;
        case 0x2da034u: goto label_2da034;
        case 0x2da074u: goto label_2da074;
        case 0x2da094u: goto label_2da094;
        case 0x2da0b0u: goto label_2da0b0;
        case 0x2da0c4u: goto label_2da0c4;
        case 0x2da0d8u: goto label_2da0d8;
        case 0x2da0fcu: goto label_2da0fc;
        case 0x2da134u: goto label_2da134;
        case 0x2da14cu: goto label_2da14c;
        case 0x2da170u: goto label_2da170;
        case 0x2da1a8u: goto label_2da1a8;
        case 0x2da1c0u: goto label_2da1c0;
        default: break;
    }

    ctx->pc = 0x2d9f90u;

    // 0x2d9f90: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9f94: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d9f98: 0x24513520  addiu       $s1, $v0, 0x3520
    ctx->pc = 0x2d9f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
    // 0x2d9f9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d9f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d9fa0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d9fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d9fa4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2D9FA4u;
    SET_GPR_U32(ctx, 31, 0x2D9FACu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2D9FACu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D9FACu) { return; }
    ctx->pc = 0x2D9FACu;
label_2d9fac:
    // 0x2d9fac: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d9facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9fb0: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2d9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2d9fb4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d9fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d9fb8: 0x24450220  addiu       $a1, $v0, 0x220
    ctx->pc = 0x2d9fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x2d9fbc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2D9FBCu;
    SET_GPR_U32(ctx, 31, 0x2D9FC4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2D9FC4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D9FC4u) { return; }
    ctx->pc = 0x2D9FC4u;
label_2d9fc4:
    // 0x2d9fc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9fcc: 0x0  nop
    ctx->pc = 0x2d9fccu;
    // NOP
    // 0x2d9fd0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2d9fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2d9fd4: 0x92220143  lbu         $v0, 0x143($s1)
    ctx->pc = 0x2d9fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 323)));
    // 0x2d9fd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9fdc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d9fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d9fe0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9fe4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d9fe8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d9fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9fec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2d9fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d9ff0: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2d9ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d9ff4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2D9FF4u;
    SET_GPR_U32(ctx, 31, 0x2D9FFCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2D9FFCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D9FFCu) { return; }
    ctx->pc = 0x2D9FFCu;
label_2d9ffc:
    // 0x2d9ffc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D9FFCu;
    SET_GPR_U32(ctx, 31, 0x2DA004u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D9FFCu, 0x2DA004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA004u;
label_2da004:
    // 0x2da004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2da004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2da008: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2da008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2da00c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da010: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2da010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2da014: 0x24428b30  addiu       $v0, $v0, -0x74D0
    ctx->pc = 0x2da014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937392));
    // 0x2da018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da01c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2da01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da020: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2da020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da024: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2da024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2da028: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2da028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2da02c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DA02Cu;
    SET_GPR_U32(ctx, 31, 0x2DA034u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DA02Cu, 0x2DA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA034u;
label_2da034:
    // 0x2da034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2da034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2da038: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2da038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2da03c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da040: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2da040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2da044: 0x24428b30  addiu       $v0, $v0, -0x74D0
    ctx->pc = 0x2da044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937392));
    // 0x2da048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da04c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2da04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da050: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2da050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da054: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2da054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2da058: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2da058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2da05c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da060: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2da060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2da064: 0x24443520  addiu       $a0, $v0, 0x3520
    ctx->pc = 0x2da064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
    // 0x2da068: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2da068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da06c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2DA06Cu;
    SET_GPR_U32(ctx, 31, 0x2DA074u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2DA074u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA074u) { return; }
    ctx->pc = 0x2DA074u;
label_2da074:
    // 0x2da074: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x2da074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da078: 0x3c023d00  lui         $v0, 0x3D00
    ctx->pc = 0x2da078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15616 << 16));
    // 0x2da07c: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x2da07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x2da080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da084: 0x0  nop
    ctx->pc = 0x2da084u;
    // NOP
    // 0x2da088: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2da088u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2da08c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2DA08Cu;
    SET_GPR_U32(ctx, 31, 0x2DA094u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2DA08Cu, 0x2DA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA094u;
label_2da094:
    // 0x2da094: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2da094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2da098: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2da098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2da09c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2da0a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2da0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da0a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2da0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da0a8: 0xc067874  jal         func_19E1D0
    ctx->pc = 0x2DA0A8u;
    SET_GPR_U32(ctx, 31, 0x2DA0B0u);
    ctx->pc = 0x19E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1D0u, 0x2DA0A8u, 0x2DA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0B0u;
label_2da0b0:
    // 0x2da0b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2da0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da0b4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2da0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da0b8: 0xc60c0064  lwc1        $f12, 0x64($s0)
    ctx->pc = 0x2da0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2da0bc: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x2DA0BCu;
    SET_GPR_U32(ctx, 31, 0x2DA0C4u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x2DA0BCu, 0x2DA0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0C4u;
label_2da0c4:
    // 0x2da0c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2da0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da0c8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2da0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da0cc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2da0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da0d0: 0xc040c00  jal         func_103000
    ctx->pc = 0x2DA0D0u;
    SET_GPR_U32(ctx, 31, 0x2DA0D8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2DA0D8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA0D8u) { return; }
    ctx->pc = 0x2DA0D8u;
label_2da0d8:
    // 0x2da0d8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da0dc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2da0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2da0e0: 0x24513390  addiu       $s1, $v0, 0x3390
    ctx->pc = 0x2da0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
    // 0x2da0e4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da0e8: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2da0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2da0ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2da0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2da0f0: 0x24450210  addiu       $a1, $v0, 0x210
    ctx->pc = 0x2da0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2da0f4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DA0F4u;
    SET_GPR_U32(ctx, 31, 0x2DA0FCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DA0FCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA0FCu) { return; }
    ctx->pc = 0x2DA0FCu;
label_2da0fc:
    // 0x2da0fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2da0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2da100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da104: 0x0  nop
    ctx->pc = 0x2da104u;
    // NOP
    // 0x2da108: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2da108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2da10c: 0x92220143  lbu         $v0, 0x143($s1)
    ctx->pc = 0x2da10cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 323)));
    // 0x2da110: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2da110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2da114: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2da114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2da118: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da11c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2da11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2da120: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2da120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da124: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2da124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2da128: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2da128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2da12c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2DA12Cu;
    SET_GPR_U32(ctx, 31, 0x2DA134u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2DA134u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA134u) { return; }
    ctx->pc = 0x2DA134u;
label_2da134:
    // 0x2da134: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da138: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2da138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2da13c: 0x24443390  addiu       $a0, $v0, 0x3390
    ctx->pc = 0x2da13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
    // 0x2da140: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2da140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da144: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2DA144u;
    SET_GPR_U32(ctx, 31, 0x2DA14Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2DA14Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA14Cu) { return; }
    ctx->pc = 0x2DA14Cu;
label_2da14c:
    // 0x2da14c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da150: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2da150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2da154: 0x245136b0  addiu       $s1, $v0, 0x36B0
    ctx->pc = 0x2da154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x2da158: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da15c: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2da15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2da160: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2da160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2da164: 0x24450230  addiu       $a1, $v0, 0x230
    ctx->pc = 0x2da164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x2da168: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DA168u;
    SET_GPR_U32(ctx, 31, 0x2DA170u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DA170u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA170u) { return; }
    ctx->pc = 0x2DA170u;
label_2da170:
    // 0x2da170: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2da170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2da174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da178: 0x0  nop
    ctx->pc = 0x2da178u;
    // NOP
    // 0x2da17c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2da17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2da180: 0x92220143  lbu         $v0, 0x143($s1)
    ctx->pc = 0x2da180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 323)));
    // 0x2da184: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2da184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2da188: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2da188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2da18c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da190: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2da190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2da194: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2da194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da198: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2da198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2da19c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2da19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2da1a0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2DA1A0u;
    SET_GPR_U32(ctx, 31, 0x2DA1A8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2DA1A8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA1A8u) { return; }
    ctx->pc = 0x2DA1A8u;
label_2da1a8:
    // 0x2da1a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da1ac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2da1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2da1b0: 0x244436b0  addiu       $a0, $v0, 0x36B0
    ctx->pc = 0x2da1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x2da1b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2da1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da1b8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2DA1B8u;
    SET_GPR_U32(ctx, 31, 0x2DA1C0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2DA1C0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA1C0u) { return; }
    ctx->pc = 0x2DA1C0u;
label_2da1c0:
    // 0x2da1c0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2da1c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da1c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2da1c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da1c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da1c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da1cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da1ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da1d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da1d4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2da1d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2da1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA1E0u;
}
