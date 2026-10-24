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

// Function: camera_pan_init
// Address: 0x17f8a0 - 0x17faa0
void camera_pan_init_0x17f8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camera_pan_init_0x17f8a0");
#endif

    switch (ctx->pc) {
        case 0x17f9acu: goto label_17f9ac;
        case 0x17f9e0u: goto label_17f9e0;
        case 0x17fa74u: goto label_17fa74;
        case 0x17fa80u: goto label_17fa80;
        default: break;
    }

    ctx->pc = 0x17f8a0u;

    // 0x17f8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f8a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x17f8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x17f8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f8ac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x17f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x17f8b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17f8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17f8b4: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x17f8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17f8b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f8bc: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x17f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x17f8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f8c4: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x17F8C4u;
    {
        const bool branch_taken_0x17f8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17f8c4) {
            ctx->pc = 0x17F9E8u;
            goto label_17f9e8;
        }
    }
    ctx->pc = 0x17F8CCu;
    // 0x17f8cc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17f8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17f8d0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17f8d0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17f8d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17f8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17f8d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f8d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f8dc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f8e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f8e4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f8e8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f8ec: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f8f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f8f4: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x17f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x17f8f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17f8f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f8fc: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x17f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x17f900: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17f900u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17f904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17f904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17f908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f90c: 0x0  nop
    ctx->pc = 0x17f90cu;
    // NOP
    // 0x17f910: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x17f910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
    // 0x17f914: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17f914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17f918: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17f918u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17f91c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17f91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17f920: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f920u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f924: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f92c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f930: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f934: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f93c: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x17f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x17f940: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17f940u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f944: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f948: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17f948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17f94c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17f94cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17f950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17f950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f954: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17f954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f958: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x17f958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x17f95c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17f960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f964: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f968: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x17f968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x17f96c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17f96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17f970: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17f970u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17f974: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17f974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17f978: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f978u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f97c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f984: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f988: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f98c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f994: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x17f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f998: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f99c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x17f99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x17f9a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f9a4: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x17F9A4u;
    SET_GPR_U32(ctx, 31, 0x17F9ACu);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x17F9A4u, 0x17F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F9ACu;
label_17f9ac:
    // 0x17f9ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17f9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17f9b0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17f9b0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17f9b4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17f9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17f9b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f9b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f9bc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f9c4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f9c8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f9cc: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f9d0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x17f9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f9d4: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x17f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x17f9d8: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x17F9D8u;
    SET_GPR_U32(ctx, 31, 0x17F9E0u);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x17F9D8u, 0x17F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F9E0u;
label_17f9e0:
    // 0x17f9e0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x17F9E0u;
    {
        const bool branch_taken_0x17f9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f9e0) {
            ctx->pc = 0x17FA74u;
            goto label_17fa74;
        }
    }
    ctx->pc = 0x17F9E8u;
label_17f9e8:
    // 0x17f9e8: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x17f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x17f9ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17f9ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f9f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f9f4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x17f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x17f9f8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17f9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17f9fc: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x17f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x17fa00: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17fa00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fa04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa08: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x17fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x17fa0c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17fa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17fa10: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fa14: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17fa14u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fa18: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17fa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17fa1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17fa1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17fa20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fa24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fa28: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17fa2c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17fa30: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17fa34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fa38: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x17fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x17fa3c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17fa3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fa40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa44: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17fa48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17fa48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17fa4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fa4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fa50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa54: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x17fa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x17fa58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17fa5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fa5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fa60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa64: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x17fa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x17fa68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa6c: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x17FA6Cu;
    SET_GPR_U32(ctx, 31, 0x17FA74u);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x17FA6Cu, 0x17FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA74u;
label_17fa74:
    // 0x17fa74: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa78: 0xc05fea8  jal         func_17FAA0
    ctx->pc = 0x17FA78u;
    SET_GPR_U32(ctx, 31, 0x17FA80u);
    ctx->pc = 0x17FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FAA0u, 0x17FA78u, 0x17FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA80u;
label_17fa80:
    // 0x17fa80: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x17fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17fa84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fa88: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x17fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x17fa8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17fa8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fa90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fa90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fa94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17fa94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17fa98: 0x3e00008  jr          $ra
    ctx->pc = 0x17FA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FAA0u;
}
