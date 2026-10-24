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

// Function: entry_001b9fec
// Address: 0x1b9fec - 0x1ba0b8
void entry_001b9fec_0x1b9fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9fec_0x1b9fec");
#endif

    switch (ctx->pc) {
        case 0x1ba010u: goto label_1ba010;
        case 0x1ba040u: goto label_1ba040;
        default: break;
    }

    ctx->pc = 0x1b9fecu;

    // 0x1b9fec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9ff0: 0xc4811280  lwc1        $f1, 0x1280($a0)
    ctx->pc = 0x1b9ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9ff4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9ff8: 0xc4a01284  lwc1        $f0, 0x1284($a1)
    ctx->pc = 0x1b9ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9ffc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b9ffcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba000: 0xe4a01284  swc1        $f0, 0x1284($a1)
    ctx->pc = 0x1ba000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4740), bits); }
    // 0x1ba004: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ba004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ba008: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BA008u;
    SET_GPR_U32(ctx, 31, 0x1BA010u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BA008u, 0x1BA010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA010u;
label_1ba010:
    // 0x1ba010: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba010u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba014: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba018: 0x908509df  lbu         $a1, 0x9DF($a0)
    ctx->pc = 0x1ba018u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x1ba01c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ba01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ba020: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x1ba020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1ba024: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BA024u;
    {
        const bool branch_taken_0x1ba024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba024) {
            ctx->pc = 0x1BA0CCu;
            return;
        }
    }
    ctx->pc = 0x1BA02Cu;
    // 0x1ba02c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba030: 0x8c621b68  lw          $v0, 0x1B68($v1)
    ctx->pc = 0x1ba030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
    // 0x1ba034: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x1ba034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ba038: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BA038u;
    SET_GPR_U32(ctx, 31, 0x1BA040u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BA038u, 0x1BA040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA040u;
label_1ba040:
    // 0x1ba040: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1BA040u;
    {
        const bool branch_taken_0x1ba040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba040) {
            ctx->pc = 0x1BA184u;
            return;
        }
    }
    ctx->pc = 0x1BA048u;
    // 0x1ba048: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba04c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ba04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ba050: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1ba050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1ba054: 0x852824  and         $a1, $a0, $a1
    ctx->pc = 0x1ba054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ba058: 0x10a002fe  beqz        $a1, . + 4 + (0x2FE << 2)
    ctx->pc = 0x1BA058u;
    {
        const bool branch_taken_0x1ba058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba058) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA060u;
    // 0x1ba060: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba064: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1ba064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ba068: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1ba068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1ba06c: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x1ba06cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ba070: 0xe82024  and         $a0, $a3, $t0
    ctx->pc = 0x1ba070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1ba074: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1ba074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1ba078: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba07c: 0x906413a6  lbu         $a0, 0x13A6($v1)
    ctx->pc = 0x1ba07cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1ba080: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ba080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ba084: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ba084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ba088: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BA088u;
    {
        const bool branch_taken_0x1ba088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ba088) {
            ctx->pc = 0x1BA0B8u;
            return;
        }
    }
    ctx->pc = 0x1BA090u;
    // 0x1ba090: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ba090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba094: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA094u;
    {
        const bool branch_taken_0x1ba094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1ba094) {
            ctx->pc = 0x1BA0B8u;
            return;
        }
    }
    ctx->pc = 0x1BA09Cu;
    // 0x1ba09c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ba09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba0a0: 0x106702ec  beq         $v1, $a3, . + 4 + (0x2EC << 2)
    ctx->pc = 0x1BA0A0u;
    {
        const bool branch_taken_0x1ba0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1ba0a0) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA0A8u;
    // 0x1ba0a8: 0x106002ea  beqz        $v1, . + 4 + (0x2EA << 2)
    ctx->pc = 0x1BA0A8u;
    {
        const bool branch_taken_0x1ba0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0a8) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA0B0u;
    // 0x1ba0b0: 0x100002e8  b           . + 4 + (0x2E8 << 2)
    ctx->pc = 0x1BA0B0u;
    {
        const bool branch_taken_0x1ba0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0b0) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA0B8u;
}
