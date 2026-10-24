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

// Function: entry_001ca238
// Address: 0x1ca238 - 0x1ca2e8
void entry_001ca238_0x1ca238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca238_0x1ca238");
#endif

    switch (ctx->pc) {
        case 0x1ca25cu: goto label_1ca25c;
        case 0x1ca2a8u: goto label_1ca2a8;
        case 0x1ca2c4u: goto label_1ca2c4;
        case 0x1ca2d4u: goto label_1ca2d4;
        default: break;
    }

    ctx->pc = 0x1ca238u;

    // 0x1ca238: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca23c: 0x906309da  lbu         $v1, 0x9DA($v1)
    ctx->pc = 0x1ca23cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x1ca240: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ca240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca244: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1ca244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ca248: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1ca248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ca24c: 0x14640026  bne         $v1, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CA24Cu;
    {
        const bool branch_taken_0x1ca24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ca24c) {
            ctx->pc = 0x1CA2E8u;
            return;
        }
    }
    ctx->pc = 0x1CA254u;
    // 0x1ca254: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1CA254u;
    SET_GPR_U32(ctx, 31, 0x1CA25Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CA254u, 0x1CA25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA25Cu;
label_1ca25c:
    // 0x1ca25c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ca25cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ca260: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ca260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca264: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x1ca264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1ca268: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1ca268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ca26c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ca26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ca270: 0x24639228  addiu       $v1, $v1, -0x6DD8
    ctx->pc = 0x1ca270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939176));
    // 0x1ca274: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ca274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ca278: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1ca278u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca27c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x1ca27cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ca280: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca284: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1ca284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ca288: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1ca288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1ca28c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ca28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ca290: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca294: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1ca294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ca298: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1ca298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1ca29c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ca29cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca2a0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1CA2A0u;
    SET_GPR_U32(ctx, 31, 0x1CA2A8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CA2A0u, 0x1CA2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2A8u;
label_1ca2a8:
    // 0x1ca2a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca2ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca2b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ca2b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca2b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ca2b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca2b8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ca2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca2bc: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CA2BCu;
    SET_GPR_U32(ctx, 31, 0x1CA2C4u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CA2BCu, 0x1CA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2C4u;
label_1ca2c4:
    // 0x1ca2c4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1ca2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1ca2c8: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1ca2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x1ca2cc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CA2CCu;
    SET_GPR_U32(ctx, 31, 0x1CA2D4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CA2CCu, 0x1CA2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2D4u;
label_1ca2d4:
    // 0x1ca2d4: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1ca2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x1ca2d8: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x1ca2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x1ca2dc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1ca2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1ca2e0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CA2E0u;
    SET_GPR_U32(ctx, 31, 0x1CA2E8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CA2E0u, 0x1CA2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2E8u;
}
