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

// Function: caseD_5
// Address: 0x12b570 - 0x12b6f4
void caseD_5_0x12b570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x12b570");
#endif

    switch (ctx->pc) {
        case 0x12b58cu: goto label_12b58c;
        case 0x12b5a4u: goto label_12b5a4;
        case 0x12b5d0u: goto label_12b5d0;
        case 0x12b5ecu: goto label_12b5ec;
        case 0x12b604u: goto label_12b604;
        case 0x12b638u: goto label_12b638;
        case 0x12b650u: goto label_12b650;
        case 0x12b65cu: goto label_12b65c;
        case 0x12b670u: goto label_12b670;
        case 0x12b680u: goto label_12b680;
        case 0x12b68cu: goto label_12b68c;
        case 0x12b6a4u: goto label_12b6a4;
        case 0x12b6c8u: goto label_12b6c8;
        default: break;
    }

    ctx->pc = 0x12b570u;

    // 0x12b570: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b574: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x12b574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12b578: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12b57c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12b580: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x12b580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12b584: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12B584u;
    SET_GPR_U32(ctx, 31, 0x12B58Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12B584u, 0x12B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B58Cu;
label_12b58c:
    // 0x12b58c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b590: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x12b590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12b594: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12b598: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x12b598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12b59c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x12B59Cu;
    SET_GPR_U32(ctx, 31, 0x12B5A4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x12B59Cu, 0x12B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5A4u;
label_12b5a4:
    // 0x12b5a4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x12b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x12b5a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12b5ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12b5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12b5b0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b5b4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b5b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b5bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x12b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x12b5c0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x12b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12b5c4: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x12b5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x12b5c8: 0xc05c848  jal         func_172120
    ctx->pc = 0x12B5C8u;
    SET_GPR_U32(ctx, 31, 0x12B5D0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x12B5C8u, 0x12B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5D0u;
label_12b5d0:
    // 0x12b5d0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x12b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x12b5d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b5d8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b5dc: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x12b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b5e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12b5e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12b5e4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12B5E4u;
    SET_GPR_U32(ctx, 31, 0x12B5ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12B5E4u, 0x12B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5ECu;
label_12b5ec:
    // 0x12b5ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b5f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12b5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12b5f4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b5f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b5f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b5fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12B5FCu;
    SET_GPR_U32(ctx, 31, 0x12B604u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12B5FCu, 0x12B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B604u;
label_12b604:
    // 0x12b604: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b608: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b60c: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x12b60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b610: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x12b610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b614: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x12b614u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12b618: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b61c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b620: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x12b620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b624: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x12b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b628: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12b628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12b62c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x12b62cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12b630: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x12B630u;
    SET_GPR_U32(ctx, 31, 0x12B638u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x12B630u, 0x12B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B638u;
label_12b638:
    // 0x12b638: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x12b638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x12b63c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b640: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x12b640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12b644: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12b648: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12B648u;
    SET_GPR_U32(ctx, 31, 0x12B650u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12B650u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12B650u) { return; }
    ctx->pc = 0x12B650u;
label_12b650:
    // 0x12b650: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b654: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12B654u;
    SET_GPR_U32(ctx, 31, 0x12B65Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12B654u, 0x12B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B65Cu;
label_12b65c:
    // 0x12b65c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b660: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12b660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12b664: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12b668: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12B668u;
    SET_GPR_U32(ctx, 31, 0x12B670u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12B670u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12B670u) { return; }
    ctx->pc = 0x12B670u;
label_12b670:
    // 0x12b670: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b674: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b674u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b678: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12B678u;
    SET_GPR_U32(ctx, 31, 0x12B680u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12B678u, 0x12B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B680u;
label_12b680:
    // 0x12b680: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b684: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12B684u;
    SET_GPR_U32(ctx, 31, 0x12B68Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12B684u, 0x12B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B68Cu;
label_12b68c:
    // 0x12b68c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b690: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x12b690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12b694: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12b698: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x12b698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12b69c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12B69Cu;
    SET_GPR_U32(ctx, 31, 0x12B6A4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12B69Cu, 0x12B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6A4u;
label_12b6a4:
    // 0x12b6a4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x12b6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b6a8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x12b6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b6ac: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x12b6acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12b6b0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x12b6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b6b4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x12b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b6b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12b6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12b6bc: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x12b6bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12b6c0: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x12B6C0u;
    SET_GPR_U32(ctx, 31, 0x12B6C8u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x12B6C0u, 0x12B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6C8u;
label_12b6c8:
    // 0x12b6c8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x12b6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x12b6cc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b6d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12b6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12b6d4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x12B6D4u;
    {
        const bool branch_taken_0x12b6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b6d4) {
            ctx->pc = 0x12B768u;
            return;
        }
    }
    ctx->pc = 0x12B6DCu;
    // 0x12b6dc: 0x8603008c  lh          $v1, 0x8C($s0)
    ctx->pc = 0x12b6dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x12b6e0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B6E0u;
    {
        const bool branch_taken_0x12b6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b6e0) {
            ctx->pc = 0x12B6F4u;
            return;
        }
    }
    ctx->pc = 0x12B6E8u;
    // 0x12b6e8: 0x8603008c  lh          $v1, 0x8C($s0)
    ctx->pc = 0x12b6e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x12b6ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12b6f0: 0xa603008c  sh          $v1, 0x8C($s0)
    ctx->pc = 0x12b6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12b6f4u;
}
