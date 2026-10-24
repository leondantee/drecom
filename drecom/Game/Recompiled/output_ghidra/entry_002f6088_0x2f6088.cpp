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

// Function: entry_002f6088
// Address: 0x2f6088 - 0x2f619c
void entry_002f6088_0x2f6088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6088_0x2f6088");
#endif

    switch (ctx->pc) {
        case 0x2f60a0u: goto label_2f60a0;
        case 0x2f60ccu: goto label_2f60cc;
        case 0x2f60f0u: goto label_2f60f0;
        case 0x2f612cu: goto label_2f612c;
        case 0x2f6168u: goto label_2f6168;
        default: break;
    }

    ctx->pc = 0x2f6088u;

    // 0x2f6088: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f6088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f608c: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2f608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f6090: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2f6090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6094: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f6094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6098: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x2F6098u;
    SET_GPR_U32(ctx, 31, 0x2F60A0u);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x2F6098u, 0x2F60A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60A0u;
label_2f60a0:
    // 0x2f60a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f60a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f60a4: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f60a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f60a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f60ac: 0x1483003f  bne         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2F60ACu;
    {
        const bool branch_taken_0x2f60ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f60ac) {
            ctx->pc = 0x2F61ACu;
            return;
        }
    }
    ctx->pc = 0x2F60B4u;
    // 0x2f60b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f60b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f60b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f60bc: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2f60bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f60c0: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x2f60c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f60c4: 0xc0bd69c  jal         func_2F5A70
    ctx->pc = 0x2F60C4u;
    SET_GPR_U32(ctx, 31, 0x2F60CCu);
    ctx->pc = 0x2F5A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5A70u, 0x2F60C4u, 0x2F60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60CCu;
label_2f60cc:
    // 0x2f60cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f60ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f60d0: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x2f60d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    // 0x2f60d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f60d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2f60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f60dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f60e0: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F60E0u;
    {
        const bool branch_taken_0x2f60e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f60e0) {
            ctx->pc = 0x2F619Cu;
            return;
        }
    }
    ctx->pc = 0x2F60E8u;
    // 0x2f60e8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F60E8u;
    SET_GPR_U32(ctx, 31, 0x2F60F0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F60E8u, 0x2F60F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60F0u;
label_2f60f0:
    // 0x2f60f0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f60f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f60f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f60f8: 0x0  nop
    ctx->pc = 0x2f60f8u;
    // NOP
    // 0x2f60fc: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2f60fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6100: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2f6100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6104: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x2f6104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x2f6108: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2f6108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f610c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f610cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6110: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2f6110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6114: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6118: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f6118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f611c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f611cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f6120: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f6120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f6124: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6124u;
    SET_GPR_U32(ctx, 31, 0x2F612Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6124u, 0x2F612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F612Cu;
label_2f612c:
    // 0x2f612c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f6130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6134: 0x0  nop
    ctx->pc = 0x2f6134u;
    // NOP
    // 0x2f6138: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2f6138u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f613c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2f613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6140: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x2f6140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x2f6144: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2f6144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f6148: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f614c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2f614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6150: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6154: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f6154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f6158: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f6158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f615c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f615cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f6160: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6160u;
    SET_GPR_U32(ctx, 31, 0x2F6168u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6160u, 0x2F6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6168u;
label_2f6168:
    // 0x2f6168: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f6168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f616c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6170: 0x0  nop
    ctx->pc = 0x2f6170u;
    // NOP
    // 0x2f6174: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2f6174u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6178: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2f6178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f617c: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x2f617cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x2f6180: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2f6180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f6184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6188: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f6188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f618c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f618cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6190: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f6190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f6194: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f6194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f6198: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f6198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2f619cu;
}
