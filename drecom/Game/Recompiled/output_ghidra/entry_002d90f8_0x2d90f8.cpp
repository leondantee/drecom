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

// Function: entry_002d90f8
// Address: 0x2d90f8 - 0x2d92ec
void entry_002d90f8_0x2d90f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d90f8_0x2d90f8");
#endif

    switch (ctx->pc) {
        case 0x2d9120u: goto label_2d9120;
        case 0x2d912cu: goto label_2d912c;
        case 0x2d9140u: goto label_2d9140;
        case 0x2d9148u: goto label_2d9148;
        case 0x2d916cu: goto label_2d916c;
        case 0x2d9190u: goto label_2d9190;
        case 0x2d91c4u: goto label_2d91c4;
        case 0x2d91d0u: goto label_2d91d0;
        case 0x2d91e4u: goto label_2d91e4;
        case 0x2d92b0u: goto label_2d92b0;
        default: break;
    }

    ctx->pc = 0x2d90f8u;

    // 0x2d90f8: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x2d90f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2d90fc: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x2D90FCu;
    {
        const bool branch_taken_0x2d90fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d90fc) {
            ctx->pc = 0x2D8FE8u;
            return;
        }
    }
    ctx->pc = 0x2D9104u;
    // 0x2d9104: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d9104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9108: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x2d9108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2d910c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d910cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9110: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x2d9110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2d9114: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2d9114u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9118: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2D9118u;
    SET_GPR_U32(ctx, 31, 0x2D9120u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2D9118u, 0x2D9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9120u;
label_2d9120:
    // 0x2d9120: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2d9120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d9124: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2D9124u;
    SET_GPR_U32(ctx, 31, 0x2D912Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2D9124u, 0x2D912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D912Cu;
label_2d912c:
    // 0x2d912c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9130: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d9130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d9134: 0x24451200  addiu       $a1, $v0, 0x1200
    ctx->pc = 0x2d9134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2d9138: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2D9138u;
    SET_GPR_U32(ctx, 31, 0x2D9140u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2D9140u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D9140u) { return; }
    ctx->pc = 0x2D9140u;
label_2d9140:
    // 0x2d9140: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D9140u;
    SET_GPR_U32(ctx, 31, 0x2D9148u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D9140u, 0x2D9148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9148u;
label_2d9148:
    // 0x2d9148: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d9148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d914c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d914cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9150: 0x0  nop
    ctx->pc = 0x2d9150u;
    // NOP
    // 0x2d9154: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d9154u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d9158: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2d9158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d915c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d915cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d9160: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2d9160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d9164: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D9164u;
    SET_GPR_U32(ctx, 31, 0x2D916Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D9164u, 0x2D916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D916Cu;
label_2d916c:
    // 0x2d916c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d916cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d9170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d9170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9174: 0x0  nop
    ctx->pc = 0x2d9174u;
    // NOP
    // 0x2d9178: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d9178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d917c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2d917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9180: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d9180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d9184: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2d9184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2d9188: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D9188u;
    SET_GPR_U32(ctx, 31, 0x2D9190u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D9188u, 0x2D9190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9190u;
label_2d9190:
    // 0x2d9190: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d9190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d9194: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d9194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9198: 0x0  nop
    ctx->pc = 0x2d9198u;
    // NOP
    // 0x2d919c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d919cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d91a0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2d91a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d91a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d91a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d91a8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2d91a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2d91ac: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x2d91acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2d91b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d91b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d91b4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2d91b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d91b8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2d91b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d91bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2D91BCu;
    SET_GPR_U32(ctx, 31, 0x2D91C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2D91BCu, 0x2D91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91C4u;
label_2d91c4:
    // 0x2d91c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2d91c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d91c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2D91C8u;
    SET_GPR_U32(ctx, 31, 0x2D91D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2D91C8u, 0x2D91D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91D0u;
label_2d91d0:
    // 0x2d91d0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2d91d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d91d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d91d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d91d8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2d91d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d91dc: 0xc0c9184  jal         func_324610
    ctx->pc = 0x2D91DCu;
    SET_GPR_U32(ctx, 31, 0x2D91E4u);
    ctx->pc = 0x324610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324610u, 0x2D91DCu, 0x2D91E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91E4u;
label_2d91e4:
    // 0x2d91e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d91e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d91e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d91ec: 0x0  nop
    ctx->pc = 0x2d91ecu;
    // NOP
    // 0x2d91f0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2d91f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2d91f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d91f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d91f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d91fc: 0x0  nop
    ctx->pc = 0x2d91fcu;
    // NOP
    // 0x2d9200: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2d9200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2d9204: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d920c: 0x0  nop
    ctx->pc = 0x2d920cu;
    // NOP
    // 0x2d9210: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2d9210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2d9214: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d921c: 0x0  nop
    ctx->pc = 0x2d921cu;
    // NOP
    // 0x2d9220: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2d9220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2d9224: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2d9224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2d9228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d922c: 0x0  nop
    ctx->pc = 0x2d922cu;
    // NOP
    // 0x2d9230: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2d9230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2d9234: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2d9234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2d9238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d923c: 0x0  nop
    ctx->pc = 0x2d923cu;
    // NOP
    // 0x2d9240: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2d9240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2d9244: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2d9244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2d9248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d924c: 0x0  nop
    ctx->pc = 0x2d924cu;
    // NOP
    // 0x2d9250: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2d9250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2d9254: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2d9254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2d9258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d925c: 0x0  nop
    ctx->pc = 0x2d925cu;
    // NOP
    // 0x2d9260: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2d9260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2d9264: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d926c: 0x0  nop
    ctx->pc = 0x2d926cu;
    // NOP
    // 0x2d9270: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2d9270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2d9274: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d927c: 0x0  nop
    ctx->pc = 0x2d927cu;
    // NOP
    // 0x2d9280: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2d9280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2d9284: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d928c: 0x0  nop
    ctx->pc = 0x2d928cu;
    // NOP
    // 0x2d9290: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2d9290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2d9294: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2d9294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2d9298: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2d9298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2d929c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d929cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d92a0: 0x0  nop
    ctx->pc = 0x2d92a0u;
    // NOP
    // 0x2d92a4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2d92a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2d92a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D92A8u;
    SET_GPR_U32(ctx, 31, 0x2D92B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D92A8u, 0x2D92B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D92B0u;
label_2d92b0:
    // 0x2d92b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d92b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d92b4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2d92b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d92b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d92bc: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D92BCu;
    {
        const bool branch_taken_0x2d92bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d92bc) {
            ctx->pc = 0x2D9334u;
            return;
        }
    }
    ctx->pc = 0x2D92C4u;
    // 0x2d92c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d92c8: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D92C8u;
    {
        const bool branch_taken_0x2d92c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d92c8) {
            ctx->pc = 0x2D931Cu;
            return;
        }
    }
    ctx->pc = 0x2D92D0u;
    // 0x2d92d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d92d4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D92D4u;
    {
        const bool branch_taken_0x2d92d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d92d4) {
            ctx->pc = 0x2D9304u;
            return;
        }
    }
    ctx->pc = 0x2D92DCu;
    // 0x2d92dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D92DCu;
    {
        const bool branch_taken_0x2d92dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d92dc) {
            ctx->pc = 0x2D92ECu;
            return;
        }
    }
    ctx->pc = 0x2D92E4u;
    // 0x2d92e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D92E4u;
    {
        const bool branch_taken_0x2d92e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d92e4) {
            ctx->pc = 0x2D9344u;
            return;
        }
    }
    ctx->pc = 0x2D92ECu;
}
