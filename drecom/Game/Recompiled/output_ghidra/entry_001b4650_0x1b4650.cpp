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

// Function: entry_001b4650
// Address: 0x1b4650 - 0x1b46bc
void entry_001b4650_0x1b4650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4650_0x1b4650");
#endif

    switch (ctx->pc) {
        case 0x1b4660u: goto label_1b4660;
        case 0x1b4674u: goto label_1b4674;
        case 0x1b4688u: goto label_1b4688;
        default: break;
    }

    ctx->pc = 0x1b4650u;

    // 0x1b4650: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b4654: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1b4654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b4658: 0xc040c24  jal         func_103090
    ctx->pc = 0x1B4658u;
    SET_GPR_U32(ctx, 31, 0x1B4660u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1B4660u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B4660u) { return; }
    ctx->pc = 0x1B4660u;
label_1b4660:
    // 0x1b4660: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b4664: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1b4664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b4668: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x1b4668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b466c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B466Cu;
    SET_GPR_U32(ctx, 31, 0x1B4674u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B4674u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B4674u) { return; }
    ctx->pc = 0x1B4674u;
label_1b4674:
    // 0x1b4674: 0x26041200  addiu       $a0, $s0, 0x1200
    ctx->pc = 0x1b4674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x1b4678: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1b4678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b467c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1b467cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b4680: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1B4680u;
    SET_GPR_U32(ctx, 31, 0x1B4688u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1B4680u, 0x1B4688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4688u;
label_1b4688:
    // 0x1b4688: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x1b4688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b468c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1b468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4690: 0xe6001204  swc1        $f0, 0x1204($s0)
    ctx->pc = 0x1b4690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4612), bits); }
    // 0x1b4694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4698: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x1b4698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b469c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b469cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b46a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b46a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b46a4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b46a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1b46a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B46A8u;
    {
        const bool branch_taken_0x1b46a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46a8) {
            ctx->pc = 0x1B46BCu;
            return;
        }
    }
    ctx->pc = 0x1B46B0u;
    // 0x1b46b0: 0x36940003  ori         $s4, $s4, 0x3
    ctx->pc = 0x1b46b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)3);
    // 0x1b46b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B46B4u;
    {
        const bool branch_taken_0x1b46b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46b4) {
            ctx->pc = 0x1B4708u;
            return;
        }
    }
    ctx->pc = 0x1B46BCu;
}
