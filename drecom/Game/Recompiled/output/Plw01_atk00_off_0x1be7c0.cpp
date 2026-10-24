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

// Function: Plw01_atk00_off
// Address: 0x1be7c0 - 0x1be9d0
void Plw01_atk00_off_0x1be7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk00_off_0x1be7c0");
#endif

    switch (ctx->pc) {
        case 0x1be840u: goto label_1be840;
        case 0x1be868u: goto label_1be868;
        case 0x1be888u: goto label_1be888;
        case 0x1be898u: goto label_1be898;
        case 0x1be8c8u: goto label_1be8c8;
        case 0x1be8d4u: goto label_1be8d4;
        case 0x1be8e8u: goto label_1be8e8;
        case 0x1be8f4u: goto label_1be8f4;
        case 0x1be8fcu: goto label_1be8fc;
        case 0x1be918u: goto label_1be918;
        default: break;
    }

    ctx->pc = 0x1be7c0u;

    // 0x1be7c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1be7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1be7c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1be7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1be7c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be7cc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1be7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1be7d0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1be7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1be7d4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1be7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1be7d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be7dc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1be7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1be7e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1be7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1be7e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be7e8: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1BE7E8u;
    {
        const bool branch_taken_0x1be7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be7e8) {
            ctx->pc = 0x1BE8A8u;
            goto label_1be8a8;
        }
    }
    ctx->pc = 0x1BE7F0u;
    // 0x1be7f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE7F0u;
    {
        const bool branch_taken_0x1be7f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be7f0) {
            ctx->pc = 0x1BE800u;
            goto label_1be800;
        }
    }
    ctx->pc = 0x1BE7F8u;
    // 0x1be7f8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1BE7F8u;
    {
        const bool branch_taken_0x1be7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be7f8) {
            ctx->pc = 0x1BE9BCu;
            goto label_1be9bc;
        }
    }
    ctx->pc = 0x1BE800u;
label_1be800:
    // 0x1be800: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be804: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1be804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be808: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be80c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1be80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1be810: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1be810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1be814: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1be814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1be818: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE818u;
    {
        const bool branch_taken_0x1be818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be818) {
            ctx->pc = 0x1BE848u;
            goto label_1be848;
        }
    }
    ctx->pc = 0x1BE820u;
    // 0x1be820: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1be820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be828: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1be828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1be82c: 0x24061402  addiu       $a2, $zero, 0x1402
    ctx->pc = 0x1be82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5122));
    // 0x1be830: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1be830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be834: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1be834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1be838: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BE838u;
    SET_GPR_U32(ctx, 31, 0x1BE840u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BE838u, 0x1BE840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE840u;
label_1be840:
    // 0x1be840: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BE840u;
    {
        const bool branch_taken_0x1be840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be840) {
            ctx->pc = 0x1BE868u;
            goto label_1be868;
        }
    }
    ctx->pc = 0x1BE848u;
label_1be848:
    // 0x1be848: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1be848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be84c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be850: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1be850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1be854: 0x24060502  addiu       $a2, $zero, 0x502
    ctx->pc = 0x1be854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x1be858: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1be858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be85c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1be85cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1be860: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BE860u;
    SET_GPR_U32(ctx, 31, 0x1BE868u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BE860u, 0x1BE868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE868u;
label_1be868:
    // 0x1be868: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1be868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1be86c: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1be86cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1be870: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be874: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be878: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1be878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1be87c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1be87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1be880: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BE880u;
    SET_GPR_U32(ctx, 31, 0x1BE888u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BE880u, 0x1BE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE888u;
label_1be888:
    // 0x1be888: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1be888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1be88c: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1be88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1be890: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1BE890u;
    SET_GPR_U32(ctx, 31, 0x1BE898u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1BE890u, 0x1BE898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE898u;
label_1be898:
    // 0x1be898: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be89c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1be89cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1be8a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1be8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be8a4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1be8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1be8a8:
    // 0x1be8a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be8ac: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1be8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be8b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be8b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1be8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1be8b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1be8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be8bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1be8bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be8c0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BE8C0u;
    SET_GPR_U32(ctx, 31, 0x1BE8C8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BE8C0u, 0x1BE8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8C8u;
label_1be8c8:
    // 0x1be8c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1be8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be8cc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BE8CCu;
    SET_GPR_U32(ctx, 31, 0x1BE8D4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BE8CCu, 0x1BE8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8D4u;
label_1be8d4:
    // 0x1be8d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1be8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be8d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1be8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be8dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1be8dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be8e0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BE8E0u;
    SET_GPR_U32(ctx, 31, 0x1BE8E8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BE8E0u, 0x1BE8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8E8u;
label_1be8e8:
    // 0x1be8e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1be8e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be8ec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BE8ECu;
    SET_GPR_U32(ctx, 31, 0x1BE8F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BE8ECu, 0x1BE8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8F4u;
label_1be8f4:
    // 0x1be8f4: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1BE8F4u;
    SET_GPR_U32(ctx, 31, 0x1BE8FCu);
    ctx->pc = 0x1B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E40u, 0x1BE8F4u, 0x1BE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8FCu;
label_1be8fc:
    // 0x1be8fc: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1BE8FCu;
    {
        const bool branch_taken_0x1be8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be8fc) {
            ctx->pc = 0x1BE9BCu;
            goto label_1be9bc;
        }
    }
    ctx->pc = 0x1BE904u;
    // 0x1be904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be908: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1be908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be90c: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1be90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1be910: 0xc058c14  jal         func_163050
    ctx->pc = 0x1BE910u;
    SET_GPR_U32(ctx, 31, 0x1BE918u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1BE910u, 0x1BE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE918u;
label_1be918:
    // 0x1be918: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BE918u;
    {
        const bool branch_taken_0x1be918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be918) {
            ctx->pc = 0x1BE9A4u;
            goto label_1be9a4;
        }
    }
    ctx->pc = 0x1BE920u;
    // 0x1be920: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1be920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1be924: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1be924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1be928: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE928u;
    {
        const bool branch_taken_0x1be928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be928) {
            ctx->pc = 0x1BE944u;
            goto label_1be944;
        }
    }
    ctx->pc = 0x1BE930u;
    // 0x1be930: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1be930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be934: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1be934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1be938: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1be938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1be93c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1be93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1be940: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1be940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1be944:
    // 0x1be944: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be948: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1be948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1be94c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1be94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1be950: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1be950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1be954: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE954u;
    {
        const bool branch_taken_0x1be954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be954) {
            ctx->pc = 0x1BE978u;
            goto label_1be978;
        }
    }
    ctx->pc = 0x1BE95Cu;
    // 0x1be95c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be960: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be964: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1be964u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be968: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be96c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1be96cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be970: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE970u;
    {
        const bool branch_taken_0x1be970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be970) {
            ctx->pc = 0x1BE9BCu;
            goto label_1be9bc;
        }
    }
    ctx->pc = 0x1BE978u;
label_1be978:
    // 0x1be978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be97c: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1be97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1be980: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BE980u;
    {
        const bool branch_taken_0x1be980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be980) {
            ctx->pc = 0x1BE9BCu;
            goto label_1be9bc;
        }
    }
    ctx->pc = 0x1BE988u;
    // 0x1be988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be98c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be990: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1be990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be994: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1be994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be998: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1be998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be99c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE99Cu;
    {
        const bool branch_taken_0x1be99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be99c) {
            ctx->pc = 0x1BE9BCu;
            goto label_1be9bc;
        }
    }
    ctx->pc = 0x1BE9A4u;
label_1be9a4:
    // 0x1be9a4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1be9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be9a8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1be9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1be9ac: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1be9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1be9b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1be9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1be9b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1be9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1be9b8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1be9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1be9bc:
    // 0x1be9bc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1be9bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be9c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be9c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be9c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1be9c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1be9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE9D0u;
}
