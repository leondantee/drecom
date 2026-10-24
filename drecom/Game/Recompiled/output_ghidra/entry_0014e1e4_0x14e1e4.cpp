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

// Function: entry_0014e1e4
// Address: 0x14e1e4 - 0x14e290
void entry_0014e1e4_0x14e1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e1e4_0x14e1e4");
#endif

    switch (ctx->pc) {
        case 0x14e20cu: goto label_14e20c;
        default: break;
    }

    ctx->pc = 0x14e1e4u;

label_14e1e4:
    // 0x14e1e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14e1e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14e1e8:
    // 0x14e1e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14e1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_14e1ec:
    // 0x14e1ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14e1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14e1f0:
    // 0x14e1f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e1f4:
    // 0x14e1f4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14e1f8:
    // 0x14e1f8: 0x24425310  addiu       $v0, $v0, 0x5310
    ctx->pc = 0x14e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21264));
label_14e1fc:
    // 0x14e1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14e200:
    // 0x14e200: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e204:
    // 0x14e204: 0x40f809  jalr        $v0
label_14e208:
    if (ctx->pc == 0x14E208u) {
        ctx->pc = 0x14E20Cu;
        goto label_14e20c;
    }
    ctx->pc = 0x14E204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E20Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E204u, 0x14E20Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E20Cu;
label_14e20c:
    // 0x14e20c: 0x920309de  lbu         $v1, 0x9DE($s0)
    ctx->pc = 0x14e20cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2526)));
label_14e210:
    // 0x14e210: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14e210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14e214:
    // 0x14e214: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x14e214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_14e218:
    // 0x14e218: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14e218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14e21c:
    // 0x14e21c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x14e21cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14e220:
    // 0x14e220: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e224:
    // 0x14e224: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_14e228:
    if (ctx->pc == 0x14E228u) {
        ctx->pc = 0x14E22Cu;
        goto label_14e22c;
    }
    ctx->pc = 0x14E224u;
    {
        const bool branch_taken_0x14e224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e224) {
            ctx->pc = 0x14E290u;
            return;
        }
    }
    ctx->pc = 0x14E22Cu;
label_14e22c:
    // 0x14e22c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e230:
    // 0x14e230: 0x2841002a  slti        $at, $v0, 0x2A
    ctx->pc = 0x14e230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)42) ? 1 : 0);
label_14e234:
    // 0x14e234: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_14e238:
    if (ctx->pc == 0x14E238u) {
        ctx->pc = 0x14E23Cu;
        goto label_14e23c;
    }
    ctx->pc = 0x14E234u;
    {
        const bool branch_taken_0x14e234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e234) {
            ctx->pc = 0x14E290u;
            return;
        }
    }
    ctx->pc = 0x14E23Cu;
label_14e23c:
    // 0x14e23c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e240:
    // 0x14e240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14e240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14e244:
    // 0x14e244: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14e244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_14e248:
    // 0x14e248: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14e248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14e24c:
    // 0x14e24c: 0x24425220  addiu       $v0, $v0, 0x5220
    ctx->pc = 0x14e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21024));
label_14e250:
    // 0x14e250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14e254:
    // 0x14e254: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x14e254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e258:
    // 0x14e258: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x14e258u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14e25c:
    // 0x14e25c: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x14e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_14e260:
    // 0x14e260: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14e260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_14e264:
    // 0x14e264: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_14e268:
    if (ctx->pc == 0x14E268u) {
        ctx->pc = 0x14E26Cu;
        goto label_14e26c;
    }
    ctx->pc = 0x14E264u;
    {
        const bool branch_taken_0x14e264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e264) {
            ctx->pc = 0x14E290u;
            return;
        }
    }
    ctx->pc = 0x14E26Cu;
label_14e26c:
    // 0x14e26c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x14e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_14e270:
    // 0x14e270: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x14e270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_14e274:
    // 0x14e274: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14e274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_14e278:
    // 0x14e278: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14e278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14e27c:
    // 0x14e27c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x14e27cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_14e280:
    // 0x14e280: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x14e280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_14e284:
    // 0x14e284: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14e284u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14e288:
    // 0x14e288: 0xc067b18  jal         func_19EC60
label_14e28c:
    if (ctx->pc == 0x14E28Cu) {
        ctx->pc = 0x14E290u;
        goto label_fallthrough_0x14e288;
    }
    ctx->pc = 0x14E288u;
    SET_GPR_U32(ctx, 31, 0x14E290u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14E288u, 0x14E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x14e288:
    ctx->pc = 0x14E290u;
}
