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

// Function: entry_002e40e0
// Address: 0x2e40e0 - 0x2e4340
void entry_002e40e0_0x2e40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e40e0_0x2e40e0");
#endif

    switch (ctx->pc) {
        case 0x2e40fcu: goto label_2e40fc;
        case 0x2e4114u: goto label_2e4114;
        case 0x2e414cu: goto label_2e414c;
        case 0x2e4154u: goto label_2e4154;
        case 0x2e4184u: goto label_2e4184;
        case 0x2e41d4u: goto label_2e41d4;
        case 0x2e41f4u: goto label_2e41f4;
        case 0x2e4210u: goto label_2e4210;
        case 0x2e4224u: goto label_2e4224;
        case 0x2e4238u: goto label_2e4238;
        case 0x2e425cu: goto label_2e425c;
        case 0x2e4294u: goto label_2e4294;
        case 0x2e42acu: goto label_2e42ac;
        case 0x2e42d0u: goto label_2e42d0;
        case 0x2e4308u: goto label_2e4308;
        case 0x2e4320u: goto label_2e4320;
        default: break;
    }

    ctx->pc = 0x2e40e0u;

    // 0x2e40e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e40e4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2e40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2e40e8: 0x245128a0  addiu       $s1, $v0, 0x28A0
    ctx->pc = 0x2e40e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2e40ec: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e40ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e40f0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e40f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e40f4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2E40F4u;
    SET_GPR_U32(ctx, 31, 0x2E40FCu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2E40FCu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E40FCu) { return; }
    ctx->pc = 0x2E40FCu;
label_2e40fc:
    // 0x2e40fc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e4100: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2e4100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2e4104: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e4104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4108: 0x244501a0  addiu       $a1, $v0, 0x1A0
    ctx->pc = 0x2e4108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x2e410c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E410Cu;
    SET_GPR_U32(ctx, 31, 0x2E4114u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E4114u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4114u) { return; }
    ctx->pc = 0x2E4114u;
label_2e4114:
    // 0x2e4114: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e411c: 0x0  nop
    ctx->pc = 0x2e411cu;
    // NOP
    // 0x2e4120: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e4120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e4124: 0x92220143  lbu         $v0, 0x143($s1)
    ctx->pc = 0x2e4124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 323)));
    // 0x2e4128: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e412c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e412cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e4130: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e4130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e4134: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2e4134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e4138: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2e4138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e413c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e413cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e4140: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2e4140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4144: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2E4144u;
    SET_GPR_U32(ctx, 31, 0x2E414Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E414Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E414Cu) { return; }
    ctx->pc = 0x2E414Cu;
label_2e414c:
    // 0x2e414c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E414Cu;
    SET_GPR_U32(ctx, 31, 0x2E4154u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E414Cu, 0x2E4154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4154u;
label_2e4154:
    // 0x2e4154: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4158: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2e4158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e415c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e415cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e4160: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e4160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e4164: 0x24428d40  addiu       $v0, $v0, -0x72C0
    ctx->pc = 0x2e4164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937920));
    // 0x2e4168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e416c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2e416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4170: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2e4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4174: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e4174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e4178: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2e4178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2e417c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E417Cu;
    SET_GPR_U32(ctx, 31, 0x2E4184u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E417Cu, 0x2E4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4184u;
label_2e4184:
    // 0x2e4184: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4188: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2e4188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e418c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e418cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e4190: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e4190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e4194: 0x24428d40  addiu       $v0, $v0, -0x72C0
    ctx->pc = 0x2e4194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937920));
    // 0x2e4198: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e419c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2e419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e41a0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2e41a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e41a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e41a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e41a8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2e41a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2e41ac: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2e41acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e41b0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2e41b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e41b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e41b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e41b8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2e41b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2e41bc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e41c0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2e41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2e41c4: 0x244428a0  addiu       $a0, $v0, 0x28A0
    ctx->pc = 0x2e41c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2e41c8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2e41c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e41cc: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2E41CCu;
    SET_GPR_U32(ctx, 31, 0x2E41D4u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2E41D4u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E41D4u) { return; }
    ctx->pc = 0x2E41D4u;
label_2e41d4:
    // 0x2e41d4: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x2e41d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e41d8: 0x3c023d00  lui         $v0, 0x3D00
    ctx->pc = 0x2e41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15616 << 16));
    // 0x2e41dc: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x2e41dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x2e41e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e41e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e41e4: 0x0  nop
    ctx->pc = 0x2e41e4u;
    // NOP
    // 0x2e41e8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2e41e8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e41ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E41ECu;
    SET_GPR_U32(ctx, 31, 0x2E41F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E41ECu, 0x2E41F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E41F4u;
label_2e41f4:
    // 0x2e41f4: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e41f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e41f8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e41fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e41fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e4200: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e4200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4204: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e4204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e4208: 0xc067874  jal         func_19E1D0
    ctx->pc = 0x2E4208u;
    SET_GPR_U32(ctx, 31, 0x2E4210u);
    ctx->pc = 0x19E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1D0u, 0x2E4208u, 0x2E4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4210u;
label_2e4210:
    // 0x2e4210: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e4210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e4214: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2e4214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e4218: 0xc60c0060  lwc1        $f12, 0x60($s0)
    ctx->pc = 0x2e4218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e421c: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x2E421Cu;
    SET_GPR_U32(ctx, 31, 0x2E4224u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x2E421Cu, 0x2E4224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4224u;
label_2e4224:
    // 0x2e4224: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e4224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e4228: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e4228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e422c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2e422cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e4230: 0xc040c00  jal         func_103000
    ctx->pc = 0x2E4230u;
    SET_GPR_U32(ctx, 31, 0x2E4238u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2E4238u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4238u) { return; }
    ctx->pc = 0x2E4238u;
label_2e4238:
    // 0x2e4238: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e4238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e423c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2e423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2e4240: 0x24512710  addiu       $s1, $v0, 0x2710
    ctx->pc = 0x2e4240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
    // 0x2e4244: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e4244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e4248: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2e4248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2e424c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e424cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4250: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x2e4250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2e4254: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E4254u;
    SET_GPR_U32(ctx, 31, 0x2E425Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E425Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E425Cu) { return; }
    ctx->pc = 0x2E425Cu;
label_2e425c:
    // 0x2e425c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e425cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4264: 0x0  nop
    ctx->pc = 0x2e4264u;
    // NOP
    // 0x2e4268: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e4268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e426c: 0x92220143  lbu         $v0, 0x143($s1)
    ctx->pc = 0x2e426cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 323)));
    // 0x2e4270: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4274: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e4274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e4278: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e4278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e427c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2e427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e4280: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2e4280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4284: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e4284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e4288: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2e4288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e428c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2E428Cu;
    SET_GPR_U32(ctx, 31, 0x2E4294u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E4294u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4294u) { return; }
    ctx->pc = 0x2E4294u;
label_2e4294:
    // 0x2e4294: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e4294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e4298: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2e4298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2e429c: 0x24442710  addiu       $a0, $v0, 0x2710
    ctx->pc = 0x2e429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
    // 0x2e42a0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2e42a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e42a4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2E42A4u;
    SET_GPR_U32(ctx, 31, 0x2E42ACu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2E42ACu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E42ACu) { return; }
    ctx->pc = 0x2E42ACu;
label_2e42ac:
    // 0x2e42ac: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e42acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e42b0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2e42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2e42b4: 0x24512a30  addiu       $s1, $v0, 0x2A30
    ctx->pc = 0x2e42b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
    // 0x2e42b8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e42bc: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2e42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2e42c0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e42c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e42c4: 0x244501b0  addiu       $a1, $v0, 0x1B0
    ctx->pc = 0x2e42c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x2e42c8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E42C8u;
    SET_GPR_U32(ctx, 31, 0x2E42D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E42D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E42D0u) { return; }
    ctx->pc = 0x2E42D0u;
label_2e42d0:
    // 0x2e42d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e42d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e42d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e42d8: 0x0  nop
    ctx->pc = 0x2e42d8u;
    // NOP
    // 0x2e42dc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e42dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e42e0: 0x92220143  lbu         $v0, 0x143($s1)
    ctx->pc = 0x2e42e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 323)));
    // 0x2e42e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e42e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e42e8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e42e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e42ec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e42f0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2e42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e42f4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2e42f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e42f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e42fc: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2e42fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4300: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2E4300u;
    SET_GPR_U32(ctx, 31, 0x2E4308u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E4308u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4308u) { return; }
    ctx->pc = 0x2E4308u;
label_2e4308:
    // 0x2e4308: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e4308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e430c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2e430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2e4310: 0x24442a30  addiu       $a0, $v0, 0x2A30
    ctx->pc = 0x2e4310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
    // 0x2e4314: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e4314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e4318: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2E4318u;
    SET_GPR_U32(ctx, 31, 0x2E4320u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2E4320u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4320u) { return; }
    ctx->pc = 0x2E4320u;
label_2e4320:
    // 0x2e4320: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2e4320u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4324: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e4324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e4328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e432c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e432cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4334: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2e4334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e4338: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4340u;
}
