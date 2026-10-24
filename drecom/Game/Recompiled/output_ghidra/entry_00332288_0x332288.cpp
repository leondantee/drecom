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

// Function: entry_00332288
// Address: 0x332288 - 0x3323c0
void entry_00332288_0x332288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332288_0x332288");
#endif

    switch (ctx->pc) {
        case 0x3322e4u: goto label_3322e4;
        case 0x33231cu: goto label_33231c;
        case 0x332350u: goto label_332350;
        case 0x332384u: goto label_332384;
        default: break;
    }

    ctx->pc = 0x332288u;

    // 0x332288: 0x826465ae  lb          $a0, 0x65AE($s3)
    ctx->pc = 0x332288u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
    // 0x33228c: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x33228cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
    // 0x332290: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x332290u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x332294: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x332294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x332298: 0x24c27b10  addiu       $v0, $a2, 0x7B10
    ctx->pc = 0x332298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 31504));
    // 0x33229c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x33229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3322a0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3322a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3322a4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3322a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3322a8: 0x2e5102a  slt         $v0, $s7, $a1
    ctx->pc = 0x3322a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3322ac: 0x1440fe92  bnez        $v0, . + 4 + (-0x16E << 2)
    ctx->pc = 0x3322ACu;
    {
        const bool branch_taken_0x3322ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3322ac) {
            ctx->pc = 0x331CF8u;
            return;
        }
    }
    ctx->pc = 0x3322B4u;
    // 0x3322b4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3322b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x3322b8: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x3322b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x3322bc: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x3322bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x3322c0: 0x34c31043  ori         $v1, $a2, 0x1043
    ctx->pc = 0x3322c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4163);
    // 0x3322c4: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3322c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x3322c8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3322c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3322cc: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x3322ccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x3322d0: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x3322d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x3322d4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x3322d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x3322d8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x3322d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x3322dc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3322DCu;
    SET_GPR_U32(ctx, 31, 0x3322E4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3322DCu, 0x3322E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3322E4u;
label_3322e4:
    // 0x3322e4: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x3322e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3322e8: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x3322e8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3322ec: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x3322ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x3322f0: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x3322f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x3322f4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3322f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3322f8: 0x34431015  ori         $v1, $v0, 0x1015
    ctx->pc = 0x3322f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x3322fc: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3322fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x332300: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x332300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x332304: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x332304u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x332308: 0x26660018  addiu       $a2, $s3, 0x18
    ctx->pc = 0x332308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x33230c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x33230cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x332310: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x332310u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x332314: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x332314u;
    SET_GPR_U32(ctx, 31, 0x33231Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x332314u, 0x33231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33231Cu;
label_33231c:
    // 0x33231c: 0x26970010  addiu       $s7, $s4, 0x10
    ctx->pc = 0x33231cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x332320: 0x72e0a628  paddub      $s4, $s7, $zero
    ctx->pc = 0x332320u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x332324: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x332324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x332328: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x332328u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x33232c: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x33232cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x332330: 0x34e31009  ori         $v1, $a3, 0x1009
    ctx->pc = 0x332330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4105);
    // 0x332334: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x332334u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x332338: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x332338u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
    // 0x33233c: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x33233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x332340: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x332340u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x332344: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x332344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x332348: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x332348u;
    SET_GPR_U32(ctx, 31, 0x332350u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x332348u, 0x332350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332350u;
label_332350:
    // 0x332350: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x332350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x332354: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x332354u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x332358: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33235c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x33235cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x332360: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x332360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x332364: 0x34c2103f  ori         $v0, $a2, 0x103F
    ctx->pc = 0x332364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4159);
    // 0x332368: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x332368u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x33236c: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x33236cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
    // 0x332370: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x332370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x332374: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x332374u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x332378: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x332378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x33237c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33237Cu;
    SET_GPR_U32(ctx, 31, 0x332384u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33237Cu, 0x332384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332384u;
label_332384:
    // 0x332384: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x332384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x332388: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x332388u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x33238c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x33238cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x332390: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x332390u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x332394: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x332394u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x332398: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x332398u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33239c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33239cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3323a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3323a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3323a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3323a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3323a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3323a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3323ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3323acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3323b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3323b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3323b4: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x3323b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3323b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3323B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3323B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3323C0u;
}
