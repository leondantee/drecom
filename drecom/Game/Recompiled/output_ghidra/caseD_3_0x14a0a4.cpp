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

// Function: caseD_3
// Address: 0x14a0a4 - 0x14a148
void caseD_3_0x14a0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x14a0a4");
#endif

    switch (ctx->pc) {
        case 0x14a0c8u: goto label_14a0c8;
        case 0x14a0e0u: goto label_14a0e0;
        case 0x14a0f4u: goto label_14a0f4;
        case 0x14a108u: goto label_14a108;
        case 0x14a138u: goto label_14a138;
        default: break;
    }

    ctx->pc = 0x14a0a4u;

    // 0x14a0a4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x14a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x14a0a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14a0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14a0ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14a0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14a0b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a0b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a0b8: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14a0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a0bc: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14a0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14a0c0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14A0C0u;
    SET_GPR_U32(ctx, 31, 0x14A0C8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14A0C0u, 0x14A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A0C8u;
label_14a0c8:
    // 0x14a0c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a0cc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14a0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14a0d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a0d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a0d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14a0d8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14A0D8u;
    SET_GPR_U32(ctx, 31, 0x14A0E0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14A0D8u, 0x14A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A0E0u;
label_14a0e0:
    // 0x14a0e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a0e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a0e8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14a0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a0ec: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14A0ECu;
    SET_GPR_U32(ctx, 31, 0x14A0F4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14A0ECu, 0x14A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A0F4u;
label_14a0f4:
    // 0x14a0f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14a0f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14a0f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a0fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14a100: 0xc057480  jal         func_15D200
    ctx->pc = 0x14A100u;
    SET_GPR_U32(ctx, 31, 0x14A108u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x14A100u, 0x14A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A108u;
label_14a108:
    // 0x14a108: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a10c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14a10cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x14a110: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14A110u;
    {
        const bool branch_taken_0x14a110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a110) {
            ctx->pc = 0x14A148u;
            return;
        }
    }
    ctx->pc = 0x14A118u;
    // 0x14a118: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a11c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a120: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a124: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x14a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x14a128: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x14a128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14a12c: 0x24461b40  addiu       $a2, $v0, 0x1B40
    ctx->pc = 0x14a12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x14a130: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x14A130u;
    SET_GPR_U32(ctx, 31, 0x14A138u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x14A130u, 0x14A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A138u;
label_14a138:
    // 0x14a138: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a13c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x14a13cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x14a140: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14a144: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x14a144u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14a148u;
}
