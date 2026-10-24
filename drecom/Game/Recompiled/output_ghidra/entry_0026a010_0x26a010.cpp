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

// Function: entry_0026a010
// Address: 0x26a010 - 0x26a090
void entry_0026a010_0x26a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a010_0x26a010");
#endif

    switch (ctx->pc) {
        case 0x26a05cu: goto label_26a05c;
        default: break;
    }

    ctx->pc = 0x26a010u;

    // 0x26a010: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a014: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x26a014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x26a018: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x26a018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x26a01c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a020: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x26a020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a024: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a028: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x26a028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x26a02c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a030: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26a030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a034: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a038: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a03c: 0xc4ac0028  lwc1        $f12, 0x28($a1)
    ctx->pc = 0x26a03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a040: 0xc48d002c  lwc1        $f13, 0x2C($a0)
    ctx->pc = 0x26a040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a044: 0xc46e002c  lwc1        $f14, 0x2C($v1)
    ctx->pc = 0x26a044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26a048: 0xc44f002c  lwc1        $f15, 0x2C($v0)
    ctx->pc = 0x26a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x26a04c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a050: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26a050u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26a054: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x26A054u;
    SET_GPR_U32(ctx, 31, 0x26A05Cu);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x26A054u, 0x26A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A05Cu;
label_26a05c:
    // 0x26a05c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a060: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x26a060u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26a064: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26a064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26a068: 0x28610051  slti        $at, $v1, 0x51
    ctx->pc = 0x26a068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x26a06c: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x26A06Cu;
    {
        const bool branch_taken_0x26a06c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a06c) {
            ctx->pc = 0x26A0A4u;
            return;
        }
    }
    ctx->pc = 0x26A074u;
    // 0x26a074: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26a074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26a078: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a07c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x26a07cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x26a080: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a084: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x26a084u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x26a088: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26A088u;
    {
        const bool branch_taken_0x26a088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a088) {
            ctx->pc = 0x26A0A4u;
            return;
        }
    }
    ctx->pc = 0x26A090u;
}
