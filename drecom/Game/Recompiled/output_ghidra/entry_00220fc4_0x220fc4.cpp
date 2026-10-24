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

// Function: entry_00220fc4
// Address: 0x220fc4 - 0x22105c
void entry_00220fc4_0x220fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220fc4_0x220fc4");
#endif

    switch (ctx->pc) {
        case 0x221034u: goto label_221034;
        default: break;
    }

    ctx->pc = 0x220fc4u;

    // 0x220fc4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220fc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x220fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x220fcc: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x220fccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x220fd0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x220fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x220fd4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x220fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x220fd8: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x220FD8u;
    {
        const bool branch_taken_0x220fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x220fd8) {
            ctx->pc = 0x221168u;
            return;
        }
    }
    ctx->pc = 0x220FE0u;
    // 0x220fe0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220fe4: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x220fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x220fe8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x220fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220fec: 0x8fb201a8  lw          $s2, 0x1A8($sp)
    ctx->pc = 0x220fecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220ff0: 0xa24310a8  sb          $v1, 0x10A8($s2)
    ctx->pc = 0x220ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x220ff4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x220ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x220ff8: 0x8c301a98  lw          $s0, 0x1A98($at)
    ctx->pc = 0x220ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x220ffc: 0x32038000  andi        $v1, $s0, 0x8000
    ctx->pc = 0x220ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
    // 0x221000: 0x14600059  bnez        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x221000u;
    {
        const bool branch_taken_0x221000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x221000) {
            ctx->pc = 0x221168u;
            return;
        }
    }
    ctx->pc = 0x221008u;
    // 0x221008: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x22100c: 0x946411f4  lhu         $a0, 0x11F4($v1)
    ctx->pc = 0x22100cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x221010: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x221010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x221014: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x221014u;
    {
        const bool branch_taken_0x221014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x221014) {
            ctx->pc = 0x22105Cu;
            return;
        }
    }
    ctx->pc = 0x22101Cu;
    // 0x22101c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221020: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221024: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x221024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x221028: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x221028u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x22102c: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x22102Cu;
    SET_GPR_U32(ctx, 31, 0x221034u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x22102Cu, 0x221034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221034u;
label_221034:
    // 0x221034: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221038: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x221038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x22103c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x22103cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x221040: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x221040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221044: 0x2405051f  addiu       $a1, $zero, 0x51F
    ctx->pc = 0x221044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x221048: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x221048u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x22104c: 0x24c50120  addiu       $a1, $a2, 0x120
    ctx->pc = 0x22104cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x221050: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x221050u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221054: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x221054u;
    SET_GPR_U32(ctx, 31, 0x22105Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x221054u, 0x22105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22105Cu;
}
