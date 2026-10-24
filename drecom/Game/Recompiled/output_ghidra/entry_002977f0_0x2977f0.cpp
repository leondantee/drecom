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

// Function: entry_002977f0
// Address: 0x2977f0 - 0x2978d4
void entry_002977f0_0x2977f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002977f0_0x2977f0");
#endif

    switch (ctx->pc) {
        case 0x297838u: goto label_297838;
        case 0x297870u: goto label_297870;
        case 0x2978a4u: goto label_2978a4;
        case 0x2978d0u: goto label_2978d0;
        default: break;
    }

    ctx->pc = 0x2977f0u;

    // 0x2977f0: 0x8e0269c0  lw          $v0, 0x69C0($s0)
    ctx->pc = 0x2977f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27072)));
    // 0x2977f4: 0x1622fecc  bne         $s1, $v0, . + 4 + (-0x134 << 2)
    ctx->pc = 0x2977F4u;
    {
        const bool branch_taken_0x2977f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2977f4) {
            ctx->pc = 0x297328u;
            return;
        }
    }
    ctx->pc = 0x2977FCu;
    // 0x2977fc: 0x26124d48  addiu       $s2, $s0, 0x4D48
    ctx->pc = 0x2977fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 19784));
    // 0x297800: 0x7240be28  paddub      $s7, $s2, $zero
    ctx->pc = 0x297800u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x297804: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x297804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x297808: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x297808u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x29780c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x29780cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x297810: 0x3462103b  ori         $v0, $v1, 0x103B
    ctx->pc = 0x297810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4155);
    // 0x297814: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x297814u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x297818: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x297818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x29781c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29781cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x297820: 0xfee20008  sd          $v0, 0x8($s7)
    ctx->pc = 0x297820u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
    // 0x297824: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x297824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x297828: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x297828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29782c: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x29782cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x297830: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x297830u;
    SET_GPR_U32(ctx, 31, 0x297838u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x297830u, 0x297838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297838u;
label_297838:
    // 0x297838: 0x26f60010  addiu       $s6, $s7, 0x10
    ctx->pc = 0x297838u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x29783c: 0x72c0be28  paddub      $s7, $s6, $zero
    ctx->pc = 0x29783cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x297840: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x297840u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x297844: 0xaef10000  sw          $s1, 0x0($s7)
    ctx->pc = 0x297844u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 17));
    // 0x297848: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x297848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x29784c: 0x34621048  ori         $v0, $v1, 0x1048
    ctx->pc = 0x29784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
    // 0x297850: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x297850u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x297854: 0x2402080b  addiu       $v0, $zero, 0x80B
    ctx->pc = 0x297854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    // 0x297858: 0xfee20008  sd          $v0, 0x8($s7)
    ctx->pc = 0x297858u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
    // 0x29785c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x29785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x297860: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x297860u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x297864: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x297864u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x297868: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x297868u;
    SET_GPR_U32(ctx, 31, 0x297870u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x297868u, 0x297870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297870u;
label_297870:
    // 0x297870: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x297870u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x297874: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x297874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x297878: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x297878u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x29787c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x29787cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x297880: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x297880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x297884: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x297884u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x297888: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x297888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x29788c: 0xfee30008  sd          $v1, 0x8($s7)
    ctx->pc = 0x29788cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 3));
    // 0x297890: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x297890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x297894: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x297894u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x297898: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x297898u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x29789c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x29789Cu;
    SET_GPR_U32(ctx, 31, 0x2978A4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x29789Cu, 0x2978A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978A4u;
label_2978a4:
    // 0x2978a4: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x2978a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x2978a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2978a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2978ac: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x2978acu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x2978b0: 0x3c120400  lui         $s2, 0x400
    ctx->pc = 0x2978b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1024 << 16));
    // 0x2978b4: 0x3642103f  ori         $v0, $s2, 0x103F
    ctx->pc = 0x2978b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4159);
    // 0x2978b8: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x2978b8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x2978bc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2978bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2978c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2978c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2978c4: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x2978c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x2978c8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2978C8u;
    SET_GPR_U32(ctx, 31, 0x2978D0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2978C8u, 0x2978D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978D0u;
label_2978d0:
    // 0x2978d0: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x2978d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    ctx->pc = 0x2978d4u;
}
