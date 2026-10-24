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

// Function: entry_00196fdc
// Address: 0x196fdc - 0x197114
void entry_00196fdc_0x196fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196fdc_0x196fdc");
#endif

    switch (ctx->pc) {
        case 0x196fecu: goto label_196fec;
        case 0x197004u: goto label_197004;
        case 0x19701cu: goto label_19701c;
        case 0x197038u: goto label_197038;
        case 0x197048u: goto label_197048;
        case 0x197064u: goto label_197064;
        case 0x19707cu: goto label_19707c;
        case 0x197090u: goto label_197090;
        case 0x1970a8u: goto label_1970a8;
        default: break;
    }

    ctx->pc = 0x196fdcu;

    // 0x196fdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196fe0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x196fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x196fe4: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196FE4u;
    SET_GPR_U32(ctx, 31, 0x196FECu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196FE4u, 0x196FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196FECu;
label_196fec:
    // 0x196fec: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196fecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196ff0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x196ff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196ff4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x196ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x196ff8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x196ff8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x196ffc: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196FFCu;
    SET_GPR_U32(ctx, 31, 0x197004u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196FFCu, 0x197004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197004u;
label_197004:
    // 0x197004: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x197004u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197008: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x197008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19700c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x19700cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197010: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x197010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197014: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x197014u;
    SET_GPR_U32(ctx, 31, 0x19701Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x197014u, 0x19701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19701Cu;
label_19701c:
    // 0x19701c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x19701cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197020: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x197020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197024: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x197024u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x197028: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x197028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19702c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x19702cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197030: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x197030u;
    SET_GPR_U32(ctx, 31, 0x197038u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x197030u, 0x197038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197038u;
label_197038:
    // 0x197038: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19703c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x19703cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x197040: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x197040u;
    SET_GPR_U32(ctx, 31, 0x197048u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x197040u, 0x197048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197048u;
label_197048:
    // 0x197048: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x197048u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19704c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x19704cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197050: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x197050u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x197054: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x197054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x197058: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x197058u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x19705c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x19705Cu;
    SET_GPR_U32(ctx, 31, 0x197064u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x19705Cu, 0x197064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197064u;
label_197064:
    // 0x197064: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x197064u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197068: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x197068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19706c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x19706cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197070: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x197070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x197074: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x197074u;
    SET_GPR_U32(ctx, 31, 0x19707Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x197074u, 0x19707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19707Cu;
label_19707c:
    // 0x19707c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x19707cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197080: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197084: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x197084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x197088: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x197088u;
    SET_GPR_U32(ctx, 31, 0x197090u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x197088u, 0x197090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197090u;
label_197090:
    // 0x197090: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197090u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197094: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197098: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x197098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x19709c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x19709cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1970a0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x1970A0u;
    SET_GPR_U32(ctx, 31, 0x1970A8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x1970A0u, 0x1970A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970A8u;
label_1970a8:
    // 0x1970a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1970a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1970ac: 0x10600272  beqz        $v1, . + 4 + (0x272 << 2)
    ctx->pc = 0x1970ACu;
    {
        const bool branch_taken_0x1970ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1970ac) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x1970B4u;
    // 0x1970b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1970b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1970b8: 0x94640094  lhu         $a0, 0x94($v1)
    ctx->pc = 0x1970b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1970bc: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1970bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1970c0: 0xa4650094  sh          $a1, 0x94($v1)
    ctx->pc = 0x1970c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 5));
    // 0x1970c4: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1970c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1970c8: 0x94c70094  lhu         $a3, 0x94($a2)
    ctx->pc = 0x1970c8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x1970cc: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x1970ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1970d0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1970d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1970d4: 0x10a701a6  beq         $a1, $a3, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x1970D4u;
    {
        const bool branch_taken_0x1970d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x1970d4) {
            ctx->pc = 0x197770u;
            return;
        }
    }
    ctx->pc = 0x1970DCu;
    // 0x1970dc: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1970dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1970e0: 0x10a80143  beq         $a1, $t0, . + 4 + (0x143 << 2)
    ctx->pc = 0x1970E0u;
    {
        const bool branch_taken_0x1970e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x1970e0) {
            ctx->pc = 0x1975F0u;
            return;
        }
    }
    ctx->pc = 0x1970E8u;
    // 0x1970e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1970e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1970ec: 0x10a400cd  beq         $a1, $a0, . + 4 + (0xCD << 2)
    ctx->pc = 0x1970ECu;
    {
        const bool branch_taken_0x1970ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1970ec) {
            ctx->pc = 0x197424u;
            return;
        }
    }
    ctx->pc = 0x1970F4u;
    // 0x1970f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1970f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1970f8: 0x10a3006f  beq         $a1, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1970F8u;
    {
        const bool branch_taken_0x1970f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1970f8) {
            ctx->pc = 0x1972B8u;
            return;
        }
    }
    ctx->pc = 0x197100u;
    // 0x197100: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197104: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x197104u;
    {
        const bool branch_taken_0x197104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x197104) {
            ctx->pc = 0x197114u;
            return;
        }
    }
    ctx->pc = 0x19710Cu;
    // 0x19710c: 0x1000025a  b           . + 4 + (0x25A << 2)
    ctx->pc = 0x19710Cu;
    {
        const bool branch_taken_0x19710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19710c) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x197114u;
}
