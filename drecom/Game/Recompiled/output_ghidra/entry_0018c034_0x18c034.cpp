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

// Function: entry_0018c034
// Address: 0x18c034 - 0x18c0cc
void entry_0018c034_0x18c034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c034_0x18c034");
#endif

    switch (ctx->pc) {
        case 0x18c0a4u: goto label_18c0a4;
        default: break;
    }

    ctx->pc = 0x18c034u;

label_18c034:
    // 0x18c034: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18c034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18c038:
    // 0x18c038: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x18c038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_18c03c:
    // 0x18c03c: 0x24427c50  addiu       $v0, $v0, 0x7C50
    ctx->pc = 0x18c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31824));
label_18c040:
    // 0x18c040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c044:
    // 0x18c044: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c048:
    // 0x18c048: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_18c04c:
    if (ctx->pc == 0x18C04Cu) {
        ctx->pc = 0x18C050u;
        goto label_18c050;
    }
    ctx->pc = 0x18C048u;
    {
        const bool branch_taken_0x18c048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c048) {
            ctx->pc = 0x18C258u;
            return;
        }
    }
    ctx->pc = 0x18C050u;
label_18c050:
    // 0x18c050: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18c050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18c054:
    // 0x18c054: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x18c054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_18c058:
    // 0x18c058: 0x24427c50  addiu       $v0, $v0, 0x7C50
    ctx->pc = 0x18c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31824));
label_18c05c:
    // 0x18c05c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c060:
    // 0x18c060: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x18c060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_18c064:
    // 0x18c064: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c068:
    // 0x18c068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c06c:
    // 0x18c06c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c070:
    // 0x18c070: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
label_18c074:
    if (ctx->pc == 0x18C074u) {
        ctx->pc = 0x18C078u;
        goto label_18c078;
    }
    ctx->pc = 0x18C070u;
    {
        const bool branch_taken_0x18c070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c070) {
            ctx->pc = 0x18C258u;
            return;
        }
    }
    ctx->pc = 0x18C078u;
label_18c078:
    // 0x18c078: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18c078u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18c07c:
    // 0x18c07c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18c080:
    // 0x18c080: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x18c080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_18c084:
    // 0x18c084: 0x24427c50  addiu       $v0, $v0, 0x7C50
    ctx->pc = 0x18c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31824));
label_18c088:
    // 0x18c088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c08c:
    // 0x18c08c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x18c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_18c090:
    // 0x18c090: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c094:
    // 0x18c094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c098:
    // 0x18c098: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c09c:
    // 0x18c09c: 0x40f809  jalr        $v0
label_18c0a0:
    if (ctx->pc == 0x18C0A0u) {
        ctx->pc = 0x18C0A4u;
        goto label_18c0a4;
    }
    ctx->pc = 0x18C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C0A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C09Cu, 0x18C0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C0A4u;
label_18c0a4:
    // 0x18c0a4: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x18c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_18c0a8:
    // 0x18c0a8: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x18c0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_18c0ac:
    // 0x18c0ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c0b0:
    // 0x18c0b0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x18c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c0b4:
    // 0x18c0b4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18c0b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c0b8:
    // 0x18c0b8: 0x0  nop
    ctx->pc = 0x18c0b8u;
    // NOP
label_18c0bc:
    // 0x18c0bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_18c0c0:
    if (ctx->pc == 0x18C0C0u) {
        ctx->pc = 0x18C0C4u;
        goto label_18c0c4;
    }
    ctx->pc = 0x18C0BCu;
    {
        const bool branch_taken_0x18c0bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c0bc) {
            ctx->pc = 0x18C0CCu;
            return;
        }
    }
    ctx->pc = 0x18C0C4u;
label_18c0c4:
    // 0x18c0c4: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x18c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c0c8:
    // 0x18c0c8: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x18c0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    ctx->pc = 0x18c0ccu;
}
