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

// Function: entry_001b8bb0
// Address: 0x1b8bb0 - 0x1b8c80
void entry_001b8bb0_0x1b8bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8bb0_0x1b8bb0");
#endif

    switch (ctx->pc) {
        case 0x1b8bd4u: goto label_1b8bd4;
        case 0x1b8c04u: goto label_1b8c04;
        default: break;
    }

    ctx->pc = 0x1b8bb0u;

    // 0x1b8bb0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8bb4: 0xc4a11280  lwc1        $f1, 0x1280($a1)
    ctx->pc = 0x1b8bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8bb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8bbc: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b8bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8bc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b8bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b8bc4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b8bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1b8bc8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b8bc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b8bcc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B8BCCu;
    SET_GPR_U32(ctx, 31, 0x1B8BD4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B8BCCu, 0x1B8BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8BD4u;
label_1b8bd4:
    // 0x1b8bd4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b8bd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8bd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8bdc: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x1b8bdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1b8be0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1b8be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b8be4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1b8be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1b8be8: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B8BE8u;
    {
        const bool branch_taken_0x1b8be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8be8) {
            ctx->pc = 0x1B8C94u;
            return;
        }
    }
    ctx->pc = 0x1B8BF0u;
    // 0x1b8bf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8bf4: 0x8c621b68  lw          $v0, 0x1B68($v1)
    ctx->pc = 0x1b8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
    // 0x1b8bf8: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x1b8bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1b8bfc: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B8BFCu;
    SET_GPR_U32(ctx, 31, 0x1B8C04u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B8BFCu, 0x1B8C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C04u;
label_1b8c04:
    // 0x1b8c04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b8c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8c08: 0x10800050  beqz        $a0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1B8C08u;
    {
        const bool branch_taken_0x1b8c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c08) {
            ctx->pc = 0x1B8D4Cu;
            return;
        }
    }
    ctx->pc = 0x1B8C10u;
    // 0x1b8c10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8c14: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b8c18: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b8c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1b8c1c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1b8c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b8c20: 0x10a002da  beqz        $a1, . + 4 + (0x2DA << 2)
    ctx->pc = 0x1B8C20u;
    {
        const bool branch_taken_0x1b8c20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c20) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B8C28u;
    // 0x1b8c28: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8c2c: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1b8c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b8c30: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b8c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1b8c34: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x1b8c34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b8c38: 0xe82024  and         $a0, $a3, $t0
    ctx->pc = 0x1b8c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1b8c3c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1b8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1b8c40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8c44: 0x906413a6  lbu         $a0, 0x13A6($v1)
    ctx->pc = 0x1b8c44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1b8c48: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1b8c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b8c4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b8c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8c50: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8C50u;
    {
        const bool branch_taken_0x1b8c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b8c50) {
            ctx->pc = 0x1B8C80u;
            return;
        }
    }
    ctx->pc = 0x1B8C58u;
    // 0x1b8c58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b8c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8c5c: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8C5Cu;
    {
        const bool branch_taken_0x1b8c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1b8c5c) {
            ctx->pc = 0x1B8C80u;
            return;
        }
    }
    ctx->pc = 0x1B8C64u;
    // 0x1b8c64: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1b8c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8c68: 0x106702c8  beq         $v1, $a3, . + 4 + (0x2C8 << 2)
    ctx->pc = 0x1B8C68u;
    {
        const bool branch_taken_0x1b8c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1b8c68) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B8C70u;
    // 0x1b8c70: 0x106002c6  beqz        $v1, . + 4 + (0x2C6 << 2)
    ctx->pc = 0x1B8C70u;
    {
        const bool branch_taken_0x1b8c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c70) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B8C78u;
    // 0x1b8c78: 0x100002c4  b           . + 4 + (0x2C4 << 2)
    ctx->pc = 0x1B8C78u;
    {
        const bool branch_taken_0x1b8c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c78) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B8C80u;
}
