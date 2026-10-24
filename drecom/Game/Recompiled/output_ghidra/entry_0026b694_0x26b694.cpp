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

// Function: entry_0026b694
// Address: 0x26b694 - 0x26b72c
void entry_0026b694_0x26b694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026b694_0x26b694");
#endif

    switch (ctx->pc) {
        case 0x26b6bcu: goto label_26b6bc;
        case 0x26b6ccu: goto label_26b6cc;
        case 0x26b6dcu: goto label_26b6dc;
        default: break;
    }

    ctx->pc = 0x26b694u;

    // 0x26b694: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b698: 0x906209da  lbu         $v0, 0x9DA($v1)
    ctx->pc = 0x26b698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x26b69c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26b69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26b6a0: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x26b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x26b6a4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26B6A4u;
    {
        const bool branch_taken_0x26b6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b6a4) {
            ctx->pc = 0x26B748u;
            return;
        }
    }
    ctx->pc = 0x26B6ACu;
    // 0x26b6ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b6b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b6b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b6b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26B6B4u;
    SET_GPR_U32(ctx, 31, 0x26B6BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26B6B4u, 0x26B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6BCu;
label_26b6bc:
    // 0x26b6bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b6c0: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x26b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x26b6c4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26B6C4u;
    SET_GPR_U32(ctx, 31, 0x26B6CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B6C4u, 0x26B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6CCu;
label_26b6cc:
    // 0x26b6cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b6d0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x26b6d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x26b6d4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x26B6D4u;
    SET_GPR_U32(ctx, 31, 0x26B6DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26B6D4u, 0x26B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6DCu;
label_26b6dc:
    // 0x26b6dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b6e0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26b6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b6e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b6e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b6e8: 0x0  nop
    ctx->pc = 0x26b6e8u;
    // NOP
    // 0x26b6ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26b6ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b6f0: 0x0  nop
    ctx->pc = 0x26b6f0u;
    // NOP
    // 0x26b6f4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x26B6F4u;
    {
        const bool branch_taken_0x26b6f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b6f4) {
            ctx->pc = 0x26B72Cu;
            return;
        }
    }
    ctx->pc = 0x26B6FCu;
    // 0x26b6fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b700: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26b700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b704: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b708: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26b708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b70c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26b70cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26b710: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26b710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x26b714: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b718: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x26b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b71c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b720: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x26b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b724: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26b724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26b728: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x26b728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x26b72cu;
}
